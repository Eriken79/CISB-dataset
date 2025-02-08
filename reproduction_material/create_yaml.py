import yaml

def update_yaml_entry(input_file, output_file, key_to_update, new_value):
    # Load YAML file
    with open(input_file, 'r') as file:
        data = yaml.safe_load(file)
    
    # Update the specified key in all entries
    if isinstance(data, list):  # If the YAML root is a list of dictionaries
        for entry in data:
            if key_to_update in entry:
                entry[key_to_update] = new_value
    elif isinstance(data, dict):  # If it's a dictionary, update directly
        if key_to_update in data:
            data[key_to_update] = new_value
    
    # Write updated data to new YAML file
    with open(output_file, 'w') as file:
        yaml.dump(data, file, default_flow_style=False)

if __name__ == "__main__":
    input_yaml = "config.yaml"  
	compiler_versions = [gcc-4.4, gcc-4.9, gcc-7, clang-12
    output_yaml = ".yaml" 
    key_to_modify = "your_key"  # Change this to the key you want to modify
    new_value = "new_value"  # Change this to the new value
    
    update_yaml_entry(input_yaml, output_yaml, key_to_modify, new_value)
    print(f"Updated YAML file saved as {output_yaml}")

