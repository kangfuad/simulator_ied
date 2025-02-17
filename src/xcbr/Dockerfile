FROM libiec61850-base:latest

# Salin file simulator, model, dan static model untuk xcbr
COPY ./model/model_xcbr.icd /app/model_xcbr.icd
COPY ./src/xcbr/xcbr_simulator.c /app/xcbr/xcbr_simulator.c
COPY ./src/xcbr/static_model.c /app/xcbr/static_model.c
COPY ./src/xcbr/static_model.h /app/xcbr/static_model.h

# Kompilasi simulator xcbr
WORKDIR /app/xcbr
RUN gcc xcbr_simulator.c static_model.c \
    -I/usr/local/include/libiec61850 \
    -L/usr/local/lib \
    -liec61850 \
    -o xcbr_simulator -lm \
    -std=gnu99 \
    -DMBEDTLS_HAVE_TIME \
    -D_POSIX_C_SOURCE=200809L

# Menentukan perintah yang akan dijalankan saat container berjalan
CMD ["./xcbr_simulator"]