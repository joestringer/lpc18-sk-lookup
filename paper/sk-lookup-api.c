struct bpf_sock *bpf_sk_lookup_tcp(void *ctx, struct bpf_sock_tuple *tuple,
                                   u32 tuple_size, u32 netns, u64 flags);
struct bpf_sock *bpf_sk_lookup_udp(void *ctx, struct bpf_sock_tuple *tuple,
                                   u32 tuple_size, u32 netns, u64 flags);
void bpf_sk_release(struct bpf_sock *sk);
