.PHONY: create_build_directory

create_build_directory: 
	@echo checking for the output directory - build
	if not exist build mkdir build

.DEFAULT_GOAL := create_build_directory