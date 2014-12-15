#ifndef _CUDA_HEAVY_H
#define _CUDA_HEAVY_H

void blake512_cpu_init(int thr_id, int threads);
void blake512_cpu_setBlock(void *pdata, int len);
void blake512_cpu_hash(int thr_id, int threads, uint32_t startNounce);

void groestl512_cpu_init(int thr_id, int threads);
void groestl512_cpu_copyHeftyHash(int thr_id, int threads, void *heftyHashes, int copy);
void groestl512_cpu_setBlock(void *data, int len);
void groestl512_cpu_hash(int thr_id, int threads, uint32_t startNounce);

void hefty_cpu_hash(int thr_id, int threads, int startNounce);
void hefty_cpu_setBlock(int thr_id, int threads, void *data, int len);
void hefty_cpu_init(int thr_id, int threads);

void keccak512_cpu_init(int thr_id, int threads);
void keccak512_cpu_setBlock(void *data, int len);
void keccak512_cpu_copyHeftyHash(int thr_id, int threads, void *heftyHashes, int copy);
void keccak512_cpu_hash(int thr_id, int threads, uint32_t startNounce);

void sha256_cpu_init(int thr_id, int threads);
void sha256_cpu_setBlock(void *data, int len);
void sha256_cpu_hash(int thr_id, int threads, int startNounce);
void sha256_cpu_copyHeftyHash(int thr_id, int threads, void *heftyHashes, int copy);

void combine_cpu_init(int thr_id, int threads);
void combine_cpu_hash(int thr_id, int threads, uint32_t startNounce, uint32_t *hash);

#endif