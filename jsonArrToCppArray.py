from pathlib import Path
import json

"""
    Este es un script que hice para convertir un archivo json a un array de floats en C++ de 2 dimensiones.

    Los archivos JSON venian de convertir un archivo SVG a un archivo JSON con el siguiente formato:
    [
        [float, float],
        [float, float],
        ...
    ]

    Se realizaba tracing a una imagen usando capa de vectores, se exportaba a SVG y se convertia a JSON
"""


# get the data inside .env file
def getEnvData():
    with open('.env', 'r') as f:
        data = f.read()
        data = data.split('\n')
        data = [x.split('=') for x in data]
        data = {x[0]: x[1] for x in data}
        f.close()
        return data

if __name__ == "__main__":
    # Necesita un archivo .env para hacer funcionar el script
    jsonFolderPath = getEnvData()['JSON_FOLDER_PATH']
    folder = Path(jsonFolderPath)
    # get all json files
    files = list(folder.glob('*.json'))
    includesText = ''
    for file in files:
        print(file.name)
        """
            File Format:
            [
                [100.151,125.246],
                [100.151,125.246],
                [100.151,125.246],
            ]
        """
        # open file
        try:
            
            with open(file, 'r') as f:
                # read file
                data = f.read()
                # add f at the end of each number
                dataAsJson = json.loads(data)
                dataAsJson = [[f"{x}f" for x in arr] for arr in dataAsJson]
                # get the length of the array
                length = len(dataAsJson)
                data = json.dumps(dataAsJson)
                data = data.replace('"', '')
                data = data.replace('[', '{')
                data = data.replace(']', '}')
                data = data.replace(',', ', ')
                # insert float filename = at the beginning of the file
                data = f"float {file.stem}[{length}][2] = {data};\n"
                data += f"int {file.stem}Length = {length};\n"
                includesText += f"#include \"liesa/{file.stem}.cpp\" \n"

                f.close()
        
            with open(file.with_suffix('.cpp'), 'w') as f:
                f.write(data)
            
        except:
            print("Error opening file")
    # write file as filename_converted.json
    with open(folder / 'includes.txt', 'w') as f:
        f.write(includesText)
        f.close()
