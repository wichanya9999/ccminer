# ccminer

Installation instructions:

INSTALL on termux in ubuntu

OPEN TERMUX

./start-ubuntu.sh

apt-get update && apt-upgrade -y

apt update && apt upgrade -y

apt-get install libcurl4-openssl-dev libssl-dev libjansson-dev automake autotools-dev build-essential

git clone --single-branch -b ARM https://github.com/monkins1010/ccminer.git

cd ccminer

chmod +x build.sh

chmod +x configure.sh

chmod +x autogen.sh

./build.sh

./ccminer -a verus -o stratum+tcp://pool.veruscoin.io:9999 -u wallet.nameminer -p x -t 6

For example to run 8 threads on a CPU miner do:

RUN on Termux in ubuntu

./start-ubuntu.sh

cd ccminer

./ccminer -a verus -o stratum+tcp://pool.veruscoin.io:9999 -u REoPcdGXthL5yeTCrJtrQv5xhYTknbFbec.name -p x -t 8
