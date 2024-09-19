# MyProject/src/CMakeLists.txt
# Define the executable target for the main application
add_executable(main main.c)

# Set the output directory for the executable
set_target_properties(main PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${HEX_OUTPUT_DIR})