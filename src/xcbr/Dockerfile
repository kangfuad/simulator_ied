# src/xcbr/Dockerfile
FROM libiec61850-base:latest

WORKDIR /app/src/xcbr

COPY src/xcbr/xcbr_simulator.c .
COPY src/xcbr/static_model.* ./

RUN gcc -o xcbr_simulator \
    xcbr_simulator.c \
    static_model.c \
    -I/usr/local/include/libiec61850 \
    -L/usr/local/lib \
    -liec61850 \
    -lpthread \
    -lm \
    -std=gnu99

CMD ["./xcbr_simulator"]