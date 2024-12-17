set(TARGET_NAME editor)
add_executable(${TARGET_NAME} main.cpp controller.h controller.cpp model.h model.cpp iview.h 
    idrawable.h iserializable.h shapeid.h shapeid.cpp shapebase.h shapebase.cpp square.h square.cpp 
    document.h document.cpp igraphics.h)
target_include_directories(${TARGET_NAME} PRIVATE ${CMAKE_CURRENT_SOURCE_DIR})

include(GNUInstallDirs)
install(
    TARGETS ${TARGET_NAME} COMPONENT app
    PERMISSIONS OWNER_WRITE OWNER_READ OWNER_EXECUTE GROUP_READ GROUP_EXECUTE WORLD_READ WORLD_EXECUTE
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
