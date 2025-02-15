# #!/bin/bash
# # build_and_run_simulators.sh

# # Buat direktori untuk log jika belum ada
# mkdir -p logs
# # Menjalankan setiap simulator dengan port yang berbeda
# echo "Running simulators..."

# # Jalankan cswi_simulator
# cd src/cswi
# ./cswi_simulator > ../../logs/cswi.log 2>&1 &
# echo "CSWI simulator started on port 10102"

# # Jalankan mmxu_simulator
# cd ../mmxu
# ./mmxu_simulator > ../../logs/mmxu.log 2>&1 &
# echo "MMXU simulator started on port 10103"

# # Jalankan xcbr_simulator
# cd ../xcbr
# ./xcbr_simulator > ../../logs/xcbr.log 2>&1 &
# echo "XCBR simulator started on port 10104"

# echo "All simulators are running. Check logs/ directory for outputs."
#!/bin/bash

# Jalankan simulator untuk CSWI
echo "Menjalankan cswi_simulator..."
./src/cswi/cswi_simulator &

# Jalankan simulator untuk MMXU
echo "Menjalankan mmxu_simulator..."
./src/mmxu/mmxu_simulator &

# Jalankan simulator untuk XCBR
echo "Menjalankan xcbr_simulator..."
./src/xcbr/xcbr_simulator &

# Tampilkan daftar proses yang berjalan
echo "Semua simulator sedang berjalan..."
ps aux | grep _simulator | grep -v grep
