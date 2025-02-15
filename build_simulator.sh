#!/bin/bash
# build_simulators.sh

# Kompilasi setiap simulator secara berurutan
echo "Building cswi_simulator..."
cd src/cswi && gcc -o cswi_simulator cswi_simulator.c static_model.c -I/usr/local/include -L/usr/local/lib -liec61850 -pthread && \
echo "cswi_simulator built successfully" || { echo "Failed to build cswi_simulator"; exit 1; }

echo "Building mmxu_simulator..."
cd ../mmxu && gcc -o mmxu_simulator mmxu_simulator.c static_model.c -I/usr/local/include -L/usr/local/lib -liec61850 -pthread && \
echo "mmxu_simulator built successfully" || { echo "Failed to build mmxu_simulator"; exit 1; }

echo "Building xcbr_simulator..."
cd ../xcbr && gcc -o xcbr_simulator xcbr_simulator.c static_model.c -I/usr/local/include -L/usr/local/lib -liec61850 -pthread && \
echo "xcbr_simulator built successfully" || { echo "Failed to build xcbr_simulator"; exit 1; }

echo "All simulators built successfully!"
