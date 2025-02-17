FROM libiec61850-base:latest

# Salin file simulator, model, dan static model untuk cswi
COPY ./model/model_cswi.icd /app/model_cswi.icd
COPY ./src/cswi/cswi_simulator.c /app/cswi/cswi_simulator.c
COPY ./src/cswi/static_model.c /app/cswi/static_model.c
COPY ./src/cswi/static_model.h /app/cswi/static_model.h

# Kompilasi simulator cswi
WORKDIR /app/cswi
RUN gcc cswi_simulator.c static_model.c \
    -I/usr/local/include/libiec61850 \
    -L/usr/local/lib \
    -liec61850 \
    -o cswi_simulator -lm \
    -std=gnu99 \
    -DMBEDTLS_HAVE_TIME \
    -D_POSIX_C_SOURCE=200809L

# Menentukan perintah yang akan dijalankan saat container berjalan
CMD ["./cswi_simulator"]