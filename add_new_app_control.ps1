set +x

mkdir -p code/app/control/$1_controller/src
touch code/app/control/$1_controller/src/$1_controller.cpp

mkdir code/app/control/$1_controller/include
touch code/app/control/$1_controller/include/$1_controller.h

touch code/app/control/$1_controller/CMakeLists.txt