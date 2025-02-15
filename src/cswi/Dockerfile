# Menggunakan image dasar debian:bullseye-slim
FROM debian:bullseye-slim

# Menetapkan direktori kerja di dalam container
WORKDIR /app

# Install dependensi yang diperlukan
RUN apt-get update && apt-get install -y \
    build-essential \
    git \
    cmake \
    wget \
    && rm -rf /var/lib/apt/lists/*

# Clone repo library mz-automation/libiec61850
RUN git clone https://github.com/mz-automation/libiec61850.git

# Salin file dari host ke dalam container (sesuaikan dengan lokasi direktori lokal Anda)
COPY ./src/cswi /app/cswi
COPY ./model/model_cswi.icd /app/model_cswi.icd

# Build dan install library
WORKDIR /app/libiec61850
RUN cmake . && make && make install

# Kompilasi simulator cswi
WORKDIR /app/cswi
RUN gcc cswi_simulator.c static_model.c -o cswi_simulator -lm

# Menentukan perintah yang akan dijalankan saat container berjalan
CMD ["./cswi_simulator"]
