# ccminer

Installation instructions:

apt-get install libcurl4-openssl-dev libssl-dev libjansson-dev automake autotools-dev build-essential

git clone --single-branch -b ARM https://github.com/monkins1010/ccminer.git

cd ccminer

chmod +x build.sh

chmod +x configure.sh

chmod +x autogen.sh

./build.sh

For example to run 8 threads on a CPU miner do:

ccminer.exe -a verus -o stratum+tcp://pool.veruscoin.io:9999 -u REoPcdGXthL5yeTCrJtrQv5xhYTknbFbec.name -p x -t 8
