set +x

DRIVER_PATH=code/drivers

mkdir -p $DRIVER_PATH/hal_$1/src
touch $DRIVER_PATH/hal_$1/src/hal_$1.cpp

mkdir $DRIVER_PATH/hal_$1/include
touch $DRIVER_PATH/hal_$1/include/hal_$1.h

touch $DRIVER_PATH/hal_$1/CMakeLists.txt