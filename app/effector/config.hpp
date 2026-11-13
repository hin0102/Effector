#ifndef _config_hpp
#define _config_hpp

#define SAMPLE_RATE		48000	// Hz
#define BLOCK_SIZE		128	// samples per processing block

#define QUEUE_BLOCKS		4	// size of the TX/RX queues in blocks
#define PREFILL_BLOCKS		2	// silence written before start

#define INPUT_LEFT_CHANNEL	true	// false: use right channel of AG03

#endif