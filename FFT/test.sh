rm -rf .build
mkdir .build
cd .build
cmake .. 
make
./FFT_test
cd ..
