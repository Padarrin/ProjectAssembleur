# CMakeList.txt : projet CMake pour ProjectAssembleur, incluez la source et définissez
# la logique spécifique au projet ici.
#
enable_language(ASM_MASM)
# Ajoutez une source à l'exécutable de ce projet.
add_executable (ProjectAssembleur "ProjectAssembleur.cpp" "ProjectAssembleur.h" "asm_test.asm")

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET ProjectAssembleur PROPERTY CXX_STANDARD 20)
endif()

# TODO: Ajoutez des tests et installez des cibles si nécessaire.
