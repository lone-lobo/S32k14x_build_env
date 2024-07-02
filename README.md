# S32k14x_build_env
Gnu Make build environment for NXP's S32K14x series platform

## pre-requisites
 1. check if gnu make is installed if not please install it
 2. verify gnu make is installed  ![image](https://github.com/lone-lobo/S32k14x_build_env/assets/67917708/0024b635-5b7f-4bf4-aff3-5e2d6bff3a1a)

Alternate method is to use Windows subsystem linux ( WSL ) and trigger the build using make commands directly

## HOW to use it 
  1. make sure the appropriate linker files are updated properly  ( s32k146 in this case )
  2. update the src , include and other folder with all relevant code
  3. Run the windows batch file -> launch_build.bat .

## The above environment will compile and build it under "build" folder which will pick all the subfolder under the current directory and generate all the object and dependency files  and will also generate the final <>.elf and <>.srec files post a successful build 
