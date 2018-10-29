struct bpf_sock_tuple {
	union {
		struct {
			__be32 saddr;
			__be32 daddr;
			__be16 sport;
			__be16 dport;
		} ipv4;
		struct {
			__be32 saddr[4];
			__be32 daddr[4];
			__be16 sport;
			__be16 dport;
		} ipv6;
	};
};

struct bpf_sock {
	__u32 bound_dev_if;
	__u32 family;
	__u32 type;
	__u32 protocol;
	__u32 mark;
	__u32 priority;
	__u32 src_ip4;		/* Allows 1,2,4-byte read.
				 * Stored in network byte order.
				 */
	__u32 src_ip6[4];	/* Allows 1,2,4-byte read.
				 * Stored in network byte order.
				 */
	__u32 src_port;		/* Allows 4-byte read.
				 * Stored in host byte order
				 */
};
