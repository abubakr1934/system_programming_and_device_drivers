def process_macro_file(input_file, output_file):
    mdt = []
    mnt = {}
    
    with open(input_file, 'r') as file:
        lines = file.readlines()
        current_macro_name = None
        current_macro_def = []

        for line in lines:
            tokens = line.strip().split()

            if tokens and tokens[0] == 'MACRO':
                if current_macro_name:
                    mdt.append((current_macro_name, current_macro_def))
                    mnt[current_macro_name] = len(mdt) - 1
                current_macro_def = []
                current_macro_name = tokens[1]
            elif tokens and tokens[0] == 'MEND':
                if current_macro_name:
                    mdt.append((current_macro_name, current_macro_def))
                    mnt[current_macro_name] = len(mdt) - 1
                current_macro_name = None
                current_macro_def = []
            else:
                if current_macro_name:
                    current_macro_def.append(line.strip())

    with open(output_file, 'w') as file:
        file.write("Macro Definition Table (MDT):\n")
        for index, (macro_name, macro_def) in enumerate(mdt):
            file.write(f"#{index + 1}: {macro_name}\n")
            for line in macro_def:
                file.write(line + '\n')
            file.write("MEND\n")

        file.write("\nMacro Name Table (MNT):\n")
        for macro_name, index in mnt.items():
            file.write(f"{macro_name}: #{index + 1}\n")

input_file_path = 'input.txt'
output_file_path = 'output.txt'
process_macro_file(input_file_path, output_file_path)
