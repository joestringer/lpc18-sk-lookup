struct bpf_sock {
        __u32 bound_dev_if;
        __u32 family;
        __u32 type;
        __u32 protocol;
        __u32 mark;
        __u32 priority;
        __u32 src_ip4;           /* NBO */
        __u32 src_ip6[4];        /* NBO */
        __u32 src_port;          /* NBO */
};
