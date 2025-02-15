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
COPY ./src/mmxu /app/mmxu
COPY ./model/model_mmxu.icd /app/model_mmxu.icd

# Build dan install library
WORKDIR /app/libiec61850
RUN cmake . && make && make install

# Kompilasi simulator mmxu
WORKDIR /app/mmxu
RUN gcc mmxu_simulator.c static_model.c -o mmxu_simulator -lm

# Menentukan perintah yang akan dijalankan saat container berjalan
CMD ["./mmxu_simulator"]
