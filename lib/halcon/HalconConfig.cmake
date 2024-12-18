macro(copy_dll_and_license_to_build)
    file(COPY "${CMAKE_CURRENT_SOURCE_DIR}/lib/halcon/bin/license.dat" DESTINATION "${CMAKE_SOURCE_DIR}/build/Debug")
endmacro()

include(FindPackageHandleStandardArgs)

get_filename_component(Halcon_CONFIG_PATH "${CMAKE_CURRENT_LIST_DIR}" REALPATH)
get_filename_component(Halcon_INSTALL_PATH "${Halcon_CONFIG_PATH}" REALPATH)

if(NOT COMMAND find_host_package)
    macro(find_host_package)
        find_package(${ARGN})
    endmacro()
endif()

if(NOT COMMAND find_host_program)
    macro(find_host_program)
        find_program(${ARGN})
    endmacro()
endif()

set(Halcon_SHARED ON)
set(Halcon_LIB_COMPONENTS halcon;halconc;halconcpp;halconcppxl;halconcxl;hdevenginecpp;hdevenginecppxl;libiomp5md)
set(Halcon_INCLUDE_DIRS "${Halcon_INSTALL_PATH}/include")

foreach(__halconcomponent ${Halcon_LIB_COMPONENTS})
    set(Halcon_LIBS ${Halcon_LIBS} "${__halconcomponent}")
    add_library(${__halconcomponent} SHARED IMPORTED)
    set_target_properties(${__halconcomponent} PROPERTIES
        INTERFACE_INCLUDE_DIRECTORIES "${Halcon_INCLUDE_DIRS}"
        IMPORTED_IMPLIB "${Halcon_INSTALL_PATH}/lib/${__halconcomponent}.lib"
        IMPORTED_LOCATION "${Halcon_INSTALL_PATH}/bin/${__halconcomponent}.dll")

    get_target_property(lib_location ${__halconcomponent} IMPORTED_LOCATION)
    if(lib_location)
        message(STATUS "IMPORTED_LOCATION is set to: ${lib_location}")
    else()
        message(WARNING "IMPORTED_LOCATION is not set!")
    endif()
endforeach()

copy_dll_and_license_to_build()

find_package_handle_standard_args(Halcon REQUIRED_VARS Halcon_INSTALL_PATH ${_OpenCV_FPHSA_ARGS})