set +x

MIDDLEWARE_PATH=code/middleware

mkdir -p $MIDDLEWARE_PATH/$1/src
touch $MIDDLEWARE_PATH/$1/src/$1.cpp

mkdir -p $MIDDLEWARE_PATH/$1/cfg
touch $MIDDLEWARE_PATH/$1/cfg/$1_cfg.cpp

mkdir $MIDDLEWARE_PATH/$1/include
touch $MIDDLEWARE_PATH/$1/include/$1.h

touch $MIDDLEWARE_PATH/$1/CMakeLists.txt