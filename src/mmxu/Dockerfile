# src/mmxu/Dockerfile
FROM libiec61850-base:latest

WORKDIR /app/src/mmxu

COPY src/mmxu/mmxu_simulator.c .
COPY src/mmxu/static_model.* ./

RUN gcc -o mmxu_simulator \
    mmxu_simulator.c \
    static_model.c \
    -I/usr/local/include/libiec61850 \
    -L/usr/local/lib \
    -liec61850 \
    -lpthread \
    -lm \
    -std=gnu99

CMD ["./mmxu_simulator"]

