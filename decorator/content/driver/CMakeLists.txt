
#http://www-flc.desy.de/ldcoptimization/documents/talks/CMake_Tutorial.pdf

# Make sure the compiler can find include files from our library decorator.
INCLUDE_DIRECTORIES(${decorator_SOURCE_DIR}/include)

# Add binary called "testdecorator" that is built from the source file
# "starbuzz.cpp".
# The extension is automatically found.
ADD_EXECUTABLE(testdecorator starbuzz)

foreach(flag ${CXX11_FEATURE_LIST})
  set_property(TARGET testdecorator
	APPEND PROPERTY COMPILE_DEFINITIONS ${flag}
	)
endforeach()

# Link the executable to the library decorator.
TARGET_LINK_LIBRARIES(testdecorator decorator)

