####################################################################################################
### A-Integrator
### (c) 2016 - Denis Fatkulin - denis.fatkulin@gmail.com
####################################################################################################

set(REQURSIVE_INCLUDE_ENABLED no)
include(${PROJECT_SOURCE_DIR}/Cmake/PrepareProject.cmake)
add_definitions(-DQML_MATERIAL_BUILD)

add_my_library()

qt5_use_modules(${TARGET_NAME} Core)


