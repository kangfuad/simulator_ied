FROM libiec61850-base:latest

# Salin file simulator, model, dan static model untuk mmxu
COPY ./model/model_mmxu.icd /app/model_mmxu.icd
COPY ./src/mmxu/mmxu_simulator.c /app/mmxu/mmxu_simulator.c
COPY ./src/mmxu/static_model.c /app/mmxu/static_model.c
COPY ./src/mmxu/static_model.h /app/mmxu/static_model.h

# Kompilasi simulator mmxu
WORKDIR /app/mmxu
RUN gcc mmxu_simulator.c static_model.c \
    -I/usr/local/include/libiec61850 \
    -L/usr/local/lib \
    -liec61850 \
    -o mmxu_simulator -lm \
    -std=gnu99 \
    -DMBEDTLS_HAVE_TIME \
    -D_POSIX_C_SOURCE=200809L

# Menentukan perintah yang akan dijalankan saat container berjalan
CMD ["./mmxu_simulator"]