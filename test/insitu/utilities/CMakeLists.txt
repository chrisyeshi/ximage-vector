enable_testing ()

include_directories(
	${PROJECT_SOURCE_DIR}/test/insitu/utilities
	${PROJECT_SOURCE_DIR}/insitu/utilities
)

add_executable(vector3d vector3d.cpp)
add_executable(field field.cpp)
add_executable(vectorField vectorField.cpp)

add_test(vector3d vector3d)
add_test(field field)
add_test(vectorField vectorField)