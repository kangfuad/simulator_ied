#!/bin/bash
# stop_simulators.sh

# Hentikan setiap simulator menggunakan PID yang disimpan
if [ -f logs/cswi.pid ]; then
    kill $(cat logs/cswi.pid)
    rm logs/cswi.pid
    echo "CSWI simulator stopped"
fi

if [ -f logs/mmxu.pid ]; then
    kill $(cat logs/mmxu.pid)
    rm logs/mmxu.pid
    echo "MMXU simulator stopped"
fi

if [ -f logs/xcbr.pid ]; then
    kill $(cat logs/xcbr.pid)
    rm logs/xcbr.pid
    echo "XCBR simulator stopped"
fi

echo "All simulators stopped"
