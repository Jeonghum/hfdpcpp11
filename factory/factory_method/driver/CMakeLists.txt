
#http://www-flc.desy.de/ldcoptimization/documents/talks/CMake_Tutorial.pdf

# Make sure the compiler can find include files from our library pizzafm.
INCLUDE_DIRECTORIES(${pizzafm_SOURCE_DIR}/include)

# Add binary called "testpizzafm" that is built from the source file
# "pizzafm.cpp".
# The extension is automatically found.
ADD_EXECUTABLE(testpizzafm pizzafm)

foreach(flag ${CXX11_FEATURE_LIST})
  set_property(TARGET testpizzafm
	APPEND PROPERTY COMPILE_DEFINITIONS ${flag}
	)
endforeach()

# Link the executable to the library pizzafm.
TARGET_LINK_LIBRARIES(testpizzafm pizzafm)

