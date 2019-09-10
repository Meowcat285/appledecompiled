typedef unsigned char   undefined;

typedef unsigned char    bool;
typedef unsigned char    byte;
typedef unsigned int    dword;
typedef long long    longlong;
typedef unsigned long long    qword;
typedef unsigned char    uchar;
typedef unsigned int    uint;
typedef unsigned long    ulong;
typedef unsigned long long    ulonglong;
typedef unsigned char    undefined1;
typedef unsigned short    undefined2;
typedef unsigned int    undefined4;
typedef unsigned long long    undefined8;
typedef unsigned short    ushort;
typedef longlong __int64_t;

typedef __int64_t __darwin_blkcnt_t;

typedef __darwin_blkcnt_t blkcnt_t;

typedef int __int32_t;

typedef __int32_t __darwin_blksize_t;

typedef __darwin_blksize_t blksize_t;

typedef ulong __darwin_clock_t;

typedef __darwin_clock_t clock_t;

typedef int __darwin_ct_rune_t;

typedef __darwin_ct_rune_t ct_rune_t;

typedef __int32_t __darwin_dev_t;

typedef __darwin_dev_t dev_t;

typedef int errno_t;

#define __DARWIN_FD_SETSIZE 1024

#define __DARWIN_NBBY 8

typedef struct fd_set fd_set, *Pfd_set;

struct fd_set {
    __int32_t[0] fds_bits;
};

#define FD_SETSIZE 1024

typedef struct _filesec _filesec, *P_filesec;

struct _filesec {
};

typedef struct _filesec * filesec_t;

typedef uint __darwin_fsblkcnt_t;

typedef __darwin_fsblkcnt_t fsblkcnt_t;

typedef uint __darwin_fsfilcnt_t;

typedef __darwin_fsfilcnt_t fsfilcnt_t;

typedef uint __uint32_t;

typedef __uint32_t __darwin_gid_t;

typedef __darwin_gid_t gid_t;

#define KAUTH_GUID_SIZE 16

typedef struct guid_t guid_t, *Pguid_t;

struct guid_t {
    uchar g_guid[16];
};

typedef __uint32_t __darwin_id_t;

typedef __darwin_id_t id_t;

typedef __uint32_t in_addr_t;

typedef ushort __uint16_t;

typedef __uint16_t in_port_t;

typedef ulonglong __uint64_t;

typedef __uint64_t __darwin_ino64_t;

typedef __darwin_ino64_t ino64_t;

typedef __darwin_ino64_t __darwin_ino_t;

typedef __darwin_ino_t ino_t;

typedef short int16_t;

typedef int int32_t;

typedef longlong int64_t;

typedef char int8_t;

typedef long intmax_t;

typedef long __darwin_intptr_t;

typedef __darwin_intptr_t intptr_t;

typedef struct iovec iovec, *Piovec;

typedef ulong __darwin_size_t;

typedef __darwin_size_t size_t;

struct iovec {
    void * iov_base;
    size_t iov_len;
};

typedef __int32_t key_t;

#define __DARWIN_CLK_TCK 100

typedef uint __darwin_natural_t;

typedef __darwin_natural_t __darwin_mach_port_name_t;

typedef __darwin_mach_port_name_t __darwin_mach_port_t;

typedef __darwin_mach_port_t mach_port_t;

typedef union __mbstate_t __mbstate_t, *P__mbstate_t;

typedef union __mbstate_t __darwin_mbstate_t;

typedef __darwin_mbstate_t mbstate_t;

union __mbstate_t {
    char __mbstate8[128];
    longlong _mbstateL;
};

typedef struct __darwin_mcontext32 __darwin_mcontext32, *P__darwin_mcontext32;

typedef struct __darwin_i386_exception_state __darwin_i386_exception_state, *P__darwin_i386_exception_state;

typedef struct __darwin_i386_thread_state __darwin_i386_thread_state, *P__darwin_i386_thread_state;

typedef struct __darwin_i386_float_state __darwin_i386_float_state, *P__darwin_i386_float_state;

typedef struct __darwin_fp_control __darwin_fp_control, *P__darwin_fp_control;

typedef struct __darwin_fp_status __darwin_fp_status, *P__darwin_fp_status;

typedef uchar __uint8_t;

typedef struct __darwin_mmst_reg __darwin_mmst_reg, *P__darwin_mmst_reg;

typedef struct __darwin_xmm_reg __darwin_xmm_reg, *P__darwin_xmm_reg;

typedef union anon__struct_56_bitfield_1 anon__struct_56_bitfield_1, *Panon__struct_56_bitfield_1;

typedef union anon__struct_58_bitfield_1 anon__struct_58_bitfield_1, *Panon__struct_58_bitfield_1;

union anon__struct_56_bitfield_1 {
    ushort __invalid:1; /* : bits 0 */
    ushort __denorm:1; /* : bits 1 */
    ushort __zdiv:1; /* : bits 2 */
    ushort __ovrfl:1; /* : bits 3 */
    ushort __undfl:1; /* : bits 4 */
    ushort __precis:1; /* : bits 5 */
    ushort __pc:2; /* : bits 6-7 */
    ushort __rc:2; /* : bits 8-9 */
};

struct __darwin_fp_control {
    union anon__struct_56_bitfield_1 field_0x0;
};

struct __darwin_mmst_reg {
    char __mmst_reg[10];
    char __mmst_rsrv[6];
};

union anon__struct_58_bitfield_1 {
    ushort __invalid:1; /* : bits 0 */
    ushort __denorm:1; /* : bits 1 */
    ushort __zdiv:1; /* : bits 2 */
    ushort __ovrfl:1; /* : bits 3 */
    ushort __undfl:1; /* : bits 4 */
    ushort __precis:1; /* : bits 5 */
    ushort __stkflt:1; /* : bits 6 */
    ushort __errsumm:1; /* : bits 7 */
    ushort __c0:1; /* : bits 8 */
    ushort __c1:1; /* : bits 9 */
    ushort __c2:1; /* : bits 10 */
    ushort __tos:3; /* : bits 11-13 */
    ushort __c3:1; /* : bits 14 */
    ushort __busy:1; /* : bits 15 */
};

struct __darwin_fp_status {
    union anon__struct_58_bitfield_1 field_0x0;
};

struct __darwin_xmm_reg {
    char __xmm_reg[16];
};

struct __darwin_i386_float_state {
    int __fpu_reserved[2];
    struct __darwin_fp_control __fpu_fcw;
    struct __darwin_fp_status __fpu_fsw;
    __uint8_t __fpu_ftw;
    __uint8_t __fpu_rsrv1;
    __uint16_t __fpu_fop;
    __uint32_t __fpu_ip;
    __uint16_t __fpu_cs;
    __uint16_t __fpu_rsrv2;
    __uint32_t __fpu_dp;
    __uint16_t __fpu_ds;
    __uint16_t __fpu_rsrv3;
    __uint32_t __fpu_mxcsr;
    __uint32_t __fpu_mxcsrmask;
    struct __darwin_mmst_reg __fpu_stmm0;
    struct __darwin_mmst_reg __fpu_stmm1;
    struct __darwin_mmst_reg __fpu_stmm2;
    struct __darwin_mmst_reg __fpu_stmm3;
    struct __darwin_mmst_reg __fpu_stmm4;
    struct __darwin_mmst_reg __fpu_stmm5;
    struct __darwin_mmst_reg __fpu_stmm6;
    struct __darwin_mmst_reg __fpu_stmm7;
    struct __darwin_xmm_reg __fpu_xmm0;
    struct __darwin_xmm_reg __fpu_xmm1;
    struct __darwin_xmm_reg __fpu_xmm2;
    struct __darwin_xmm_reg __fpu_xmm3;
    struct __darwin_xmm_reg __fpu_xmm4;
    struct __darwin_xmm_reg __fpu_xmm5;
    struct __darwin_xmm_reg __fpu_xmm6;
    struct __darwin_xmm_reg __fpu_xmm7;
    char __fpu_rsrv4[224];
    int __fpu_reserved1;
};

struct __darwin_i386_exception_state {
    __uint16_t __trapno;
    __uint16_t __cpu;
    __uint32_t __err;
    __uint32_t __faultvaddr;
};

struct __darwin_i386_thread_state {
    uint __eax;
    uint __ebx;
    uint __ecx;
    uint __edx;
    uint __edi;
    uint __esi;
    uint __ebp;
    uint __esp;
    uint __ss;
    uint __eflags;
    uint __eip;
    uint __cs;
    uint __ds;
    uint __es;
    uint __fs;
    uint __gs;
};

struct __darwin_mcontext32 {
    struct __darwin_i386_exception_state __es;
    struct __darwin_i386_thread_state __ss;
    struct __darwin_i386_float_state __fs;
};

typedef struct __darwin_mcontext64 __darwin_mcontext64, *P__darwin_mcontext64;

typedef struct __darwin_x86_exception_state64 __darwin_x86_exception_state64, *P__darwin_x86_exception_state64;

typedef struct __darwin_x86_thread_state64 __darwin_x86_thread_state64, *P__darwin_x86_thread_state64;

typedef struct __darwin_x86_float_state64 __darwin_x86_float_state64, *P__darwin_x86_float_state64;

struct __darwin_x86_float_state64 {
    int __fpu_reserved[2];
    struct __darwin_fp_control __fpu_fcw;
    struct __darwin_fp_status __fpu_fsw;
    __uint8_t __fpu_ftw;
    __uint8_t __fpu_rsrv1;
    __uint16_t __fpu_fop;
    __uint32_t __fpu_ip;
    __uint16_t __fpu_cs;
    __uint16_t __fpu_rsrv2;
    __uint32_t __fpu_dp;
    __uint16_t __fpu_ds;
    __uint16_t __fpu_rsrv3;
    __uint32_t __fpu_mxcsr;
    __uint32_t __fpu_mxcsrmask;
    struct __darwin_mmst_reg __fpu_stmm0;
    struct __darwin_mmst_reg __fpu_stmm1;
    struct __darwin_mmst_reg __fpu_stmm2;
    struct __darwin_mmst_reg __fpu_stmm3;
    struct __darwin_mmst_reg __fpu_stmm4;
    struct __darwin_mmst_reg __fpu_stmm5;
    struct __darwin_mmst_reg __fpu_stmm6;
    struct __darwin_mmst_reg __fpu_stmm7;
    struct __darwin_xmm_reg __fpu_xmm0;
    struct __darwin_xmm_reg __fpu_xmm1;
    struct __darwin_xmm_reg __fpu_xmm2;
    struct __darwin_xmm_reg __fpu_xmm3;
    struct __darwin_xmm_reg __fpu_xmm4;
    struct __darwin_xmm_reg __fpu_xmm5;
    struct __darwin_xmm_reg __fpu_xmm6;
    struct __darwin_xmm_reg __fpu_xmm7;
    struct __darwin_xmm_reg __fpu_xmm8;
    struct __darwin_xmm_reg __fpu_xmm9;
    struct __darwin_xmm_reg __fpu_xmm10;
    struct __darwin_xmm_reg __fpu_xmm11;
    struct __darwin_xmm_reg __fpu_xmm12;
    struct __darwin_xmm_reg __fpu_xmm13;
    struct __darwin_xmm_reg __fpu_xmm14;
    struct __darwin_xmm_reg __fpu_xmm15;
    char __fpu_rsrv4[96];
    int __fpu_reserved1;
};

struct __darwin_x86_exception_state64 {
    __uint16_t __trapno;
    __uint16_t __cpu;
    __uint32_t __err;
    __uint64_t __faultvaddr;
};

struct __darwin_x86_thread_state64 {
    __uint64_t __rax;
    __uint64_t __rbx;
    __uint64_t __rcx;
    __uint64_t __rdx;
    __uint64_t __rdi;
    __uint64_t __rsi;
    __uint64_t __rbp;
    __uint64_t __rsp;
    __uint64_t __r8;
    __uint64_t __r9;
    __uint64_t __r10;
    __uint64_t __r11;
    __uint64_t __r12;
    __uint64_t __r13;
    __uint64_t __r14;
    __uint64_t __r15;
    __uint64_t __rip;
    __uint64_t __rflags;
    __uint64_t __cs;
    __uint64_t __fs;
    __uint64_t __gs;
};

struct __darwin_mcontext64 {
    struct __darwin_x86_exception_state64 __es;
    struct __darwin_x86_thread_state64 __ss;
    struct __darwin_x86_float_state64 __fs;
};

typedef struct __darwin_mcontext_avx32 __darwin_mcontext_avx32, *P__darwin_mcontext_avx32;

typedef struct __darwin_i386_avx_state __darwin_i386_avx_state, *P__darwin_i386_avx_state;

struct __darwin_i386_avx_state {
    int __fpu_reserved[2];
    struct __darwin_fp_control __fpu_fcw;
    struct __darwin_fp_status __fpu_fsw;
    __uint8_t __fpu_ftw;
    __uint8_t __fpu_rsrv1;
    __uint16_t __fpu_fop;
    __uint32_t __fpu_ip;
    __uint16_t __fpu_cs;
    __uint16_t __fpu_rsrv2;
    __uint32_t __fpu_dp;
    __uint16_t __fpu_ds;
    __uint16_t __fpu_rsrv3;
    __uint32_t __fpu_mxcsr;
    __uint32_t __fpu_mxcsrmask;
    struct __darwin_mmst_reg __fpu_stmm0;
    struct __darwin_mmst_reg __fpu_stmm1;
    struct __darwin_mmst_reg __fpu_stmm2;
    struct __darwin_mmst_reg __fpu_stmm3;
    struct __darwin_mmst_reg __fpu_stmm4;
    struct __darwin_mmst_reg __fpu_stmm5;
    struct __darwin_mmst_reg __fpu_stmm6;
    struct __darwin_mmst_reg __fpu_stmm7;
    struct __darwin_xmm_reg __fpu_xmm0;
    struct __darwin_xmm_reg __fpu_xmm1;
    struct __darwin_xmm_reg __fpu_xmm2;
    struct __darwin_xmm_reg __fpu_xmm3;
    struct __darwin_xmm_reg __fpu_xmm4;
    struct __darwin_xmm_reg __fpu_xmm5;
    struct __darwin_xmm_reg __fpu_xmm6;
    struct __darwin_xmm_reg __fpu_xmm7;
    char __fpu_rsrv4[224];
    int __fpu_reserved1;
    char __avx_reserved1[64];
    struct __darwin_xmm_reg __fpu_ymmh0;
    struct __darwin_xmm_reg __fpu_ymmh1;
    struct __darwin_xmm_reg __fpu_ymmh2;
    struct __darwin_xmm_reg __fpu_ymmh3;
    struct __darwin_xmm_reg __fpu_ymmh4;
    struct __darwin_xmm_reg __fpu_ymmh5;
    struct __darwin_xmm_reg __fpu_ymmh6;
    struct __darwin_xmm_reg __fpu_ymmh7;
};

struct __darwin_mcontext_avx32 {
    struct __darwin_i386_exception_state __es;
    struct __darwin_i386_thread_state __ss;
    struct __darwin_i386_avx_state __fs;
};

typedef struct __darwin_mcontext_avx64 __darwin_mcontext_avx64, *P__darwin_mcontext_avx64;

typedef struct __darwin_x86_avx_state64 __darwin_x86_avx_state64, *P__darwin_x86_avx_state64;

struct __darwin_x86_avx_state64 {
    int __fpu_reserved[2];
    struct __darwin_fp_control __fpu_fcw;
    struct __darwin_fp_status __fpu_fsw;
    __uint8_t __fpu_ftw;
    __uint8_t __fpu_rsrv1;
    __uint16_t __fpu_fop;
    __uint32_t __fpu_ip;
    __uint16_t __fpu_cs;
    __uint16_t __fpu_rsrv2;
    __uint32_t __fpu_dp;
    __uint16_t __fpu_ds;
    __uint16_t __fpu_rsrv3;
    __uint32_t __fpu_mxcsr;
    __uint32_t __fpu_mxcsrmask;
    struct __darwin_mmst_reg __fpu_stmm0;
    struct __darwin_mmst_reg __fpu_stmm1;
    struct __darwin_mmst_reg __fpu_stmm2;
    struct __darwin_mmst_reg __fpu_stmm3;
    struct __darwin_mmst_reg __fpu_stmm4;
    struct __darwin_mmst_reg __fpu_stmm5;
    struct __darwin_mmst_reg __fpu_stmm6;
    struct __darwin_mmst_reg __fpu_stmm7;
    struct __darwin_xmm_reg __fpu_xmm0;
    struct __darwin_xmm_reg __fpu_xmm1;
    struct __darwin_xmm_reg __fpu_xmm2;
    struct __darwin_xmm_reg __fpu_xmm3;
    struct __darwin_xmm_reg __fpu_xmm4;
    struct __darwin_xmm_reg __fpu_xmm5;
    struct __darwin_xmm_reg __fpu_xmm6;
    struct __darwin_xmm_reg __fpu_xmm7;
    struct __darwin_xmm_reg __fpu_xmm8;
    struct __darwin_xmm_reg __fpu_xmm9;
    struct __darwin_xmm_reg __fpu_xmm10;
    struct __darwin_xmm_reg __fpu_xmm11;
    struct __darwin_xmm_reg __fpu_xmm12;
    struct __darwin_xmm_reg __fpu_xmm13;
    struct __darwin_xmm_reg __fpu_xmm14;
    struct __darwin_xmm_reg __fpu_xmm15;
    char __fpu_rsrv4[96];
    int __fpu_reserved1;
    char __avx_reserved1[64];
    struct __darwin_xmm_reg __fpu_ymmh0;
    struct __darwin_xmm_reg __fpu_ymmh1;
    struct __darwin_xmm_reg __fpu_ymmh2;
    struct __darwin_xmm_reg __fpu_ymmh3;
    struct __darwin_xmm_reg __fpu_ymmh4;
    struct __darwin_xmm_reg __fpu_ymmh5;
    struct __darwin_xmm_reg __fpu_ymmh6;
    struct __darwin_xmm_reg __fpu_ymmh7;
    struct __darwin_xmm_reg __fpu_ymmh8;
    struct __darwin_xmm_reg __fpu_ymmh9;
    struct __darwin_xmm_reg __fpu_ymmh10;
    struct __darwin_xmm_reg __fpu_ymmh11;
    struct __darwin_xmm_reg __fpu_ymmh12;
    struct __darwin_xmm_reg __fpu_ymmh13;
    struct __darwin_xmm_reg __fpu_ymmh14;
    struct __darwin_xmm_reg __fpu_ymmh15;
};

struct __darwin_mcontext_avx64 {
    struct __darwin_x86_exception_state64 __es;
    struct __darwin_x86_thread_state64 __ss;
    struct __darwin_x86_avx_state64 __fs;
};

typedef struct __darwin_mcontext64 * mcontext_t;

typedef __uint16_t __darwin_mode_t;

typedef __darwin_mode_t mode_t;

typedef int __darwin_nl_item;

typedef __darwin_nl_item nl_item;

typedef __uint16_t nlink_t;

#define NULL 0

#define O_DSYNC 4194304

#define O_SYNC 128

typedef __int64_t __darwin_off_t;

typedef __darwin_off_t off_t;

typedef __int32_t __darwin_pid_t;

typedef __darwin_pid_t pid_t;

typedef struct _opaque_pthread_attr_t _opaque_pthread_attr_t, *P_opaque_pthread_attr_t;

typedef struct _opaque_pthread_attr_t __darwin_pthread_attr_t;

typedef __darwin_pthread_attr_t pthread_attr_t;

struct _opaque_pthread_attr_t {
    long __sig;
    char __opaque[56];
};

typedef struct _opaque_pthread_cond_t _opaque_pthread_cond_t, *P_opaque_pthread_cond_t;

typedef struct _opaque_pthread_cond_t __darwin_pthread_cond_t;

typedef __darwin_pthread_cond_t pthread_cond_t;

struct _opaque_pthread_cond_t {
    long __sig;
    char __opaque[40];
};

typedef struct _opaque_pthread_condattr_t _opaque_pthread_condattr_t, *P_opaque_pthread_condattr_t;

typedef struct _opaque_pthread_condattr_t __darwin_pthread_condattr_t;

typedef __darwin_pthread_condattr_t pthread_condattr_t;

struct _opaque_pthread_condattr_t {
    long __sig;
    char __opaque[8];
};

typedef ulong __darwin_pthread_key_t;

typedef __darwin_pthread_key_t pthread_key_t;

typedef struct _opaque_pthread_mutex_t _opaque_pthread_mutex_t, *P_opaque_pthread_mutex_t;

typedef struct _opaque_pthread_mutex_t __darwin_pthread_mutex_t;

typedef __darwin_pthread_mutex_t pthread_mutex_t;

struct _opaque_pthread_mutex_t {
    long __sig;
    char __opaque[56];
};

typedef struct _opaque_pthread_mutexattr_t _opaque_pthread_mutexattr_t, *P_opaque_pthread_mutexattr_t;

typedef struct _opaque_pthread_mutexattr_t __darwin_pthread_mutexattr_t;

typedef __darwin_pthread_mutexattr_t pthread_mutexattr_t;

struct _opaque_pthread_mutexattr_t {
    long __sig;
    char __opaque[8];
};

typedef struct _opaque_pthread_once_t _opaque_pthread_once_t, *P_opaque_pthread_once_t;

typedef struct _opaque_pthread_once_t __darwin_pthread_once_t;

typedef __darwin_pthread_once_t pthread_once_t;

struct _opaque_pthread_once_t {
    long __sig;
    char __opaque[8];
};

typedef struct _opaque_pthread_rwlock_t _opaque_pthread_rwlock_t, *P_opaque_pthread_rwlock_t;

typedef struct _opaque_pthread_rwlock_t __darwin_pthread_rwlock_t;

typedef __darwin_pthread_rwlock_t pthread_rwlock_t;

struct _opaque_pthread_rwlock_t {
    long __sig;
    char __opaque[192];
};

typedef struct _opaque_pthread_rwlockattr_t _opaque_pthread_rwlockattr_t, *P_opaque_pthread_rwlockattr_t;

typedef struct _opaque_pthread_rwlockattr_t __darwin_pthread_rwlockattr_t;

typedef __darwin_pthread_rwlockattr_t pthread_rwlockattr_t;

struct _opaque_pthread_rwlockattr_t {
    long __sig;
    char __opaque[16];
};

typedef struct _opaque_pthread_t _opaque_pthread_t, *P_opaque_pthread_t;

typedef struct _opaque_pthread_t * __darwin_pthread_t;

typedef __darwin_pthread_t pthread_t;

typedef struct __darwin_pthread_handler_rec __darwin_pthread_handler_rec, *P__darwin_pthread_handler_rec;

struct _opaque_pthread_t {
    long __sig;
    struct __darwin_pthread_handler_rec * __cleanup_stack;
    char __opaque[1168];
};

struct __darwin_pthread_handler_rec {
    void (* __routine)(void *);
    void * __arg;
    struct __darwin_pthread_handler_rec * __next;
};

typedef long __darwin_ptrdiff_t;

typedef __darwin_ptrdiff_t ptrdiff_t;

typedef __darwin_size_t rsize_t;

typedef __darwin_ct_rune_t __darwin_wchar_t;

typedef __darwin_wchar_t __darwin_rune_t;

typedef __darwin_rune_t rune_t;

#define S_IEXEC 64

#define S_IFBLK 24576

#define S_IFCHR 8192

#define S_IFDIR 16384

#define S_IFIFO 4096

#define S_IFLNK 40960

#define S_IFMT 61440

#define S_IFREG 32768

#define S_IFSOCK 49152

#define S_IFWHT 57344

#define S_IREAD 256

#define S_IRGRP 32

#define S_IROTH 4

#define S_IRUSR 256

#define S_IRWXG 56

#define S_IRWXO 7

#define S_IRWXU 448

#define S_ISGID 1024

#define S_ISTXT 512

#define S_ISUID 2048

#define S_ISVTX 512

#define S_IWGRP 16

#define S_IWOTH 2

#define S_IWRITE 128

#define S_IWUSR 128

#define S_IXGRP 8

#define S_IXOTH 1

#define S_IXUSR 64

typedef __uint8_t sa_family_t;

typedef struct __darwin_sigaltstack __darwin_sigaltstack, *P__darwin_sigaltstack;

struct __darwin_sigaltstack {
    void * ss_sp;
    __darwin_size_t ss_size;
    int ss_flags;
};

typedef struct __darwin_sigaltstack stack_t;

typedef __uint32_t __darwin_sigset_t;

typedef __darwin_sigset_t sigset_t;

typedef __uint32_t __darwin_socklen_t;

typedef __darwin_socklen_t socklen_t;

typedef long __darwin_ssize_t;

typedef __darwin_ssize_t ssize_t;

#define FP_CHOP 3

#define FP_PREC_24B 0

#define FP_PREC_53B 2

#define FP_PREC_64B 3

#define FP_RND_DOWN 1

#define FP_RND_NEAR 0

#define FP_RND_UP 2

#define FP_STATE_BYTES 512

typedef struct __darwin_fp_control __darwin_fp_control_t;

typedef struct __darwin_fp_status __darwin_fp_status_t;

typedef struct __darwin_x86_debug_state32 __darwin_x86_debug_state32, *P__darwin_x86_debug_state32;

struct __darwin_x86_debug_state32 {
    uint __dr0;
    uint __dr1;
    uint __dr2;
    uint __dr3;
    uint __dr4;
    uint __dr5;
    uint __dr6;
    uint __dr7;
};

typedef struct __darwin_x86_debug_state64 __darwin_x86_debug_state64, *P__darwin_x86_debug_state64;

struct __darwin_x86_debug_state64 {
    __uint64_t __dr0;
    __uint64_t __dr1;
    __uint64_t __dr2;
    __uint64_t __dr3;
    __uint64_t __dr4;
    __uint64_t __dr5;
    __uint64_t __dr6;
    __uint64_t __dr7;
};

typedef __int32_t __darwin_suseconds_t;

typedef __darwin_suseconds_t suseconds_t;

typedef long __darwin_time_t;

typedef __darwin_time_t time_t;

typedef struct timespec timespec, *Ptimespec;

struct timespec {
    __darwin_time_t tv_sec;
    long tv_nsec;
};

typedef struct timeval timeval, *Ptimeval;

struct timeval {
    __darwin_time_t tv_sec;
    __darwin_suseconds_t tv_usec;
};

typedef struct timeval32 timeval32, *Ptimeval32;

struct timeval32 {
    __int32_t tv_sec;
    __int32_t tv_usec;
};

#define __DARWIN_NULL 0

#define __DARWIN_WCHAR_MAX 2147483647

#define __DARWIN_WCHAR_MIN -2147483648

#define __DARWIN_WEOF -1

#define __PTHREAD_ATTR_SIZE__ 56

#define __PTHREAD_COND_SIZE__ 40

#define __PTHREAD_CONDATTR_SIZE__ 8

#define __PTHREAD_MUTEX_SIZE__ 56

#define __PTHREAD_MUTEXATTR_SIZE__ 8

#define __PTHREAD_ONCE_SIZE__ 8

#define __PTHREAD_RWLOCK_SIZE__ 192

#define __PTHREAD_RWLOCKATTR_SIZE__ 16

#define __PTHREAD_SIZE__ 1168

typedef __uint32_t __darwin_uid_t;

typedef __uint32_t __darwin_useconds_t;

typedef char __darwin_uuid_string_t[37];

typedef uchar __darwin_uuid_t[16];

typedef void * __darwin_va_list;

typedef int __darwin_wctrans_t;

typedef __uint32_t __darwin_wctype_t;

typedef __darwin_ct_rune_t __darwin_wint_t;

typedef short __int16_t;

typedef char __int8_t;

typedef struct __darwin_ucontext __darwin_ucontext, *P__darwin_ucontext;

struct __darwin_ucontext {
    int uc_onstack;
    __darwin_sigset_t uc_sigmask;
    struct __darwin_sigaltstack uc_stack;
    struct __darwin_ucontext * uc_link;
    __darwin_size_t uc_mcsize;
    struct __darwin_mcontext64 * uc_mcontext;
};

typedef struct __darwin_ucontext ucontext_t;

typedef __darwin_uid_t uid_t;

typedef ushort uint16_t;

typedef uint uint32_t;

typedef ulonglong uint64_t;

typedef uchar uint8_t;

typedef ulong uintmax_t;

typedef ulong uintptr_t;

typedef __darwin_useconds_t useconds_t;

typedef __darwin_uuid_t uuid_t;

typedef __darwin_va_list va_list;

typedef __darwin_wctrans_t wctrans_t;

#define WEOF -1

typedef __darwin_wctype_t wctype_t;

typedef __darwin_wint_t wint_t;

#define ACOMPAT 4

#define ACORE 8

#define AFORK 1

#define AHZ 64

#define ASU 2

#define AXSIG 16

typedef struct acct acct, *Pacct;

typedef ushort u_int16_t;

typedef u_int16_t comp_t;

typedef uint u_int32_t;

typedef uchar u_int8_t;

struct acct {
    char ac_comm[10];
    comp_t ac_utime;
    comp_t ac_stime;
    comp_t ac_etime;
    u_int32_t ac_btime;
    uid_t ac_uid;
    gid_t ac_gid;
    u_int16_t ac_mem;
    comp_t ac_io;
    dev_t ac_tty;
    u_int8_t ac_flag;
};

#define __DARWIN_ACL_ADD_FILE 4

#define __DARWIN_ACL_ADD_SUBDIRECTORY 32

#define __DARWIN_ACL_APPEND_DATA 32

#define __DARWIN_ACL_CHANGE_OWNER 8192

#define __DARWIN_ACL_DELETE 16

#define __DARWIN_ACL_DELETE_CHILD 64

#define __DARWIN_ACL_ENTRY_DIRECTORY_INHERIT 64

#define __DARWIN_ACL_ENTRY_FILE_INHERIT 32

#define __DARWIN_ACL_ENTRY_INHERITED 16

#define __DARWIN_ACL_ENTRY_LIMIT_INHERIT 128

#define __DARWIN_ACL_ENTRY_ONLY_INHERIT 256

#define __DARWIN_ACL_EXECUTE 8

#define __DARWIN_ACL_EXTENDED_ALLOW 1

#define __DARWIN_ACL_EXTENDED_DENY 2

#define __DARWIN_ACL_FLAG_NO_INHERIT 131072

#define __DARWIN_ACL_LIST_DIRECTORY 2

#define __DARWIN_ACL_READ_ATTRIBUTES 128

#define __DARWIN_ACL_READ_DATA 2

#define __DARWIN_ACL_READ_EXTATTRIBUTES 512

#define __DARWIN_ACL_READ_SECURITY 2048

#define __DARWIN_ACL_SEARCH 8

#define __DARWIN_ACL_WRITE_ATTRIBUTES 256

#define __DARWIN_ACL_WRITE_DATA 4

#define __DARWIN_ACL_WRITE_EXTATTRIBUTES 1024

#define __DARWIN_ACL_WRITE_SECURITY 4096

#define ACL_MAX_ENTRIES 128

#define ACL_UNDEFINED_ID 0

typedef struct _acl _acl, *P_acl;

struct _acl {
};

typedef struct _acl_entry _acl_entry, *P_acl_entry;

struct _acl_entry {
};

typedef struct _acl_flagset _acl_flagset, *P_acl_flagset;

struct _acl_flagset {
};

typedef struct _acl_permset _acl_permset, *P_acl_permset;

struct _acl_permset {
};

typedef enum enum_4039 {
    ACL_FIRST_ENTRY=0,
    ACL_LAST_ENTRY=2,
    ACL_NEXT_ENTRY=1
} enum_4039;

typedef enum enum_4039 acl_entry_id_t;

typedef struct _acl_entry * acl_entry_t;

typedef enum enum_4040 {
    ACL_ENTRY_DIRECTORY_INHERIT=64,
    ACL_ENTRY_FILE_INHERIT=32,
    ACL_ENTRY_INHERITED=16,
    ACL_ENTRY_LIMIT_INHERIT=128,
    ACL_ENTRY_ONLY_INHERIT=256,
    ACL_FLAG_DEFER_INHERIT=1,
    ACL_FLAG_NO_INHERIT=131072
} enum_4040;

typedef enum enum_4040 acl_flag_t;

typedef struct _acl_flagset * acl_flagset_t;

typedef enum enum_4036 {
    ACL_ADD_FILE=4,
    ACL_ADD_SUBDIRECTORY=32,
    ACL_APPEND_DATA=32,
    ACL_CHANGE_OWNER=8192,
    ACL_DELETE=16,
    ACL_DELETE_CHILD=64,
    ACL_EXECUTE=8,
    ACL_LIST_DIRECTORY=2,
    ACL_READ_ATTRIBUTES=128,
    ACL_READ_DATA=2,
    ACL_READ_EXTATTRIBUTES=512,
    ACL_READ_SECURITY=2048,
    ACL_SEARCH=8,
    ACL_WRITE_ATTRIBUTES=256,
    ACL_WRITE_DATA=4,
    ACL_WRITE_EXTATTRIBUTES=1024,
    ACL_WRITE_SECURITY=4096
} enum_4036;

typedef enum enum_4036 acl_perm_t;

typedef ulonglong u_int64_t;

typedef u_int64_t acl_permset_mask_t;

typedef struct _acl_permset * acl_permset_t;

typedef struct _acl * acl_t;

typedef enum enum_4037 {
    ACL_EXTENDED_ALLOW=1,
    ACL_EXTENDED_DENY=2,
    ACL_UNDEFINED_TAG=0
} enum_4037;

typedef enum enum_4037 acl_tag_t;

typedef enum enum_4038 {
    ACL_TYPE_ACCESS=0,
    ACL_TYPE_AFS=2,
    ACL_TYPE_CODA=3,
    ACL_TYPE_DEFAULT=1,
    ACL_TYPE_EXTENDED=256,
    ACL_TYPE_NTFS=4,
    ACL_TYPE_NWFS=5
} enum_4038;

typedef enum enum_4038 acl_type_t;

#define AES_BLOCK_SIZE 16

#define AES_DECRYPT 0

#define AES_ENCRYPT 1

#define AES_MAXNR 14

typedef struct aes_key_st aes_key_st, *Paes_key_st;

typedef struct aes_key_st AES_KEY;

struct aes_key_st {
    uint rd_key[60];
    int rounds;
};

typedef struct ah ah, *Pah;

struct ah {
    u_int8_t ah_nxt;
    u_int8_t ah_len;
    u_int16_t ah_reserve;
    u_int32_t ah_spi;
};

typedef struct newah newah, *Pnewah;

struct newah {
    u_int8_t ah_nxt;
    u_int8_t ah_len;
    u_int16_t ah_reserve;
    u_int32_t ah_spi;
    u_int32_t ah_seq;
};

#define AIO_ALLDONE 1

#define AIO_CANCELED 2

#define AIO_LISTIO_MAX 16

#define AIO_NOTCANCELED 4

#define LIO_NOP 0

#define LIO_NOWAIT 1

#define LIO_READ 1

#define LIO_WAIT 2

#define LIO_WRITE 2

typedef struct aiocb aiocb, *Paiocb;

typedef struct sigevent sigevent, *Psigevent;

typedef union sigval sigval, *Psigval;

union sigval {
    int sival_int;
    void * sival_ptr;
};

struct sigevent {
    int sigev_notify;
    int sigev_signo;
    union sigval sigev_value;
    void (* sigev_notify_function)(union sigval);
    pthread_attr_t * sigev_notify_attributes;
};

struct aiocb {
    int aio_fildes;
    off_t aio_offset;
    void * aio_buf;
    size_t aio_nbytes;
    int aio_reqprio;
    struct sigevent aio_sigevent;
    int aio_lio_opcode;
};

typedef struct aliasent aliasent, *Paliasent;

struct aliasent {
    char * alias_name;
    uint alias_members_len;
    char * * alias_members;
    int alias_local;
};

typedef struct fat_arch fat_arch, *Pfat_arch;

typedef int integer_t;

typedef integer_t cpu_type_t;

typedef integer_t cpu_subtype_t;

struct fat_arch {
    cpu_type_t cputype;
    cpu_subtype_t cpusubtype;
    uint32_t offset;
    uint32_t size;
    uint32_t align;
};

typedef struct NXArchInfo NXArchInfo, *PNXArchInfo;

typedef enum NXByteOrder {
    NX_BigEndian=2,
    NX_LittleEndian=1,
    NX_UnknownByteOrder=0
} NXByteOrder;

struct NXArchInfo {
    char * name;
    cpu_type_t cputype;
    cpu_subtype_t cpusubtype;
    enum NXByteOrder byteorder;
    char * description;
};

#define Gstack 0

#define ASN1_F_A2D_ASN1_OBJECT 100

#define ASN1_F_A2I_ASN1_ENUMERATED 101

#define ASN1_F_A2I_ASN1_INTEGER 102

#define ASN1_F_A2I_ASN1_STRING 103

#define ASN1_F_APPEND_EXP 176

#define ASN1_F_ASN1_BIT_STRING_SET_BIT 183

#define ASN1_F_ASN1_CB 177

#define ASN1_F_ASN1_CHECK_TLEN 104

#define ASN1_F_ASN1_COLLATE_PRIMITIVE 105

#define ASN1_F_ASN1_COLLECT 106

#define ASN1_F_ASN1_D2I_EX_PRIMITIVE 108

#define ASN1_F_ASN1_D2I_FP 109

#define ASN1_F_ASN1_D2I_READ_BIO 107

#define ASN1_F_ASN1_DIGEST 184

#define ASN1_F_ASN1_DO_ADB 110

#define ASN1_F_ASN1_DUP 111

#define ASN1_F_ASN1_ENUMERATED_SET 112

#define ASN1_F_ASN1_ENUMERATED_TO_BN 113

#define ASN1_F_ASN1_EX_C2I 204

#define ASN1_F_ASN1_FIND_END 190

#define ASN1_F_ASN1_GENERALIZEDTIME_SET 185

#define ASN1_F_ASN1_GENERATE_V3 178

#define ASN1_F_ASN1_GET_OBJECT 114

#define ASN1_F_ASN1_HEADER_NEW 115

#define ASN1_F_ASN1_I2D_BIO 116

#define ASN1_F_ASN1_I2D_FP 117

#define ASN1_F_ASN1_INTEGER_SET 118

#define ASN1_F_ASN1_INTEGER_TO_BN 119

#define ASN1_F_ASN1_ITEM_D2I_FP 206

#define ASN1_F_ASN1_ITEM_DUP 191

#define ASN1_F_ASN1_ITEM_EX_COMBINE_NEW 121

#define ASN1_F_ASN1_ITEM_EX_D2I 120

#define ASN1_F_ASN1_ITEM_I2D_BIO 192

#define ASN1_F_ASN1_ITEM_I2D_FP 193

#define ASN1_F_ASN1_ITEM_PACK 198

#define ASN1_F_ASN1_ITEM_SIGN 195

#define ASN1_F_ASN1_ITEM_UNPACK 199

#define ASN1_F_ASN1_ITEM_VERIFY 197

#define ASN1_F_ASN1_MBSTRING_NCOPY 122

#define ASN1_F_ASN1_OBJECT_NEW 123

#define ASN1_F_ASN1_OUTPUT_DATA 207

#define ASN1_F_ASN1_PACK_STRING 124

#define ASN1_F_ASN1_PCTX_NEW 205

#define ASN1_F_ASN1_PKCS5_PBE_SET 125

#define ASN1_F_ASN1_SEQ_PACK 126

#define ASN1_F_ASN1_SEQ_UNPACK 127

#define ASN1_F_ASN1_SIGN 128

#define ASN1_F_ASN1_STR2TYPE 179

#define ASN1_F_ASN1_STRING_SET 186

#define ASN1_F_ASN1_STRING_TABLE_ADD 129

#define ASN1_F_ASN1_STRING_TYPE_NEW 130

#define ASN1_F_ASN1_TEMPLATE_EX_D2I 132

#define ASN1_F_ASN1_TEMPLATE_NEW 133

#define ASN1_F_ASN1_TEMPLATE_NOEXP_D2I 131

#define ASN1_F_ASN1_TIME_SET 175

#define ASN1_F_ASN1_TYPE_GET_INT_OCTETSTRING 134

#define ASN1_F_ASN1_TYPE_GET_OCTETSTRING 135

#define ASN1_F_ASN1_UNPACK_STRING 136

#define ASN1_F_ASN1_UTCTIME_SET 187

#define ASN1_F_ASN1_VERIFY 137

#define ASN1_F_B64_READ_ASN1 208

#define ASN1_F_B64_WRITE_ASN1 209

#define ASN1_F_BITSTR_CB 180

#define ASN1_F_BN_TO_ASN1_ENUMERATED 138

#define ASN1_F_BN_TO_ASN1_INTEGER 139

#define ASN1_F_C2I_ASN1_BIT_STRING 189

#define ASN1_F_C2I_ASN1_INTEGER 194

#define ASN1_F_C2I_ASN1_OBJECT 196

#define ASN1_F_COLLECT_DATA 140

#define ASN1_F_D2I_ASN1_BIT_STRING 141

#define ASN1_F_D2I_ASN1_BOOLEAN 142

#define ASN1_F_D2I_ASN1_BYTES 143

#define ASN1_F_D2I_ASN1_GENERALIZEDTIME 144

#define ASN1_F_D2I_ASN1_HEADER 145

#define ASN1_F_D2I_ASN1_INTEGER 146

#define ASN1_F_D2I_ASN1_OBJECT 147

#define ASN1_F_D2I_ASN1_SET 148

#define ASN1_F_D2I_ASN1_TYPE_BYTES 149

#define ASN1_F_D2I_ASN1_UINTEGER 150

#define ASN1_F_D2I_ASN1_UTCTIME 151

#define ASN1_F_D2I_NETSCAPE_RSA 152

#define ASN1_F_D2I_NETSCAPE_RSA_2 153

#define ASN1_F_D2I_PRIVATEKEY 154

#define ASN1_F_D2I_PUBLICKEY 155

#define ASN1_F_D2I_RSA_NET 200

#define ASN1_F_D2I_RSA_NET_2 201

#define ASN1_F_D2I_X509 156

#define ASN1_F_D2I_X509_CINF 157

#define ASN1_F_D2I_X509_PKEY 159

#define ASN1_F_I2D_ASN1_SET 188

#define ASN1_F_I2D_ASN1_TIME 160

#define ASN1_F_I2D_DSA_PUBKEY 161

#define ASN1_F_I2D_EC_PUBKEY 181

#define ASN1_F_I2D_PRIVATEKEY 163

#define ASN1_F_I2D_PUBLICKEY 164

#define ASN1_F_I2D_RSA_NET 162

#define ASN1_F_I2D_RSA_PUBKEY 165

#define ASN1_F_LONG_C2I 166

#define ASN1_F_OID_MODULE_INIT 174

#define ASN1_F_PARSE_TAGGING 182

#define ASN1_F_PKCS5_PBE2_SET 167

#define ASN1_F_PKCS5_PBE_SET 202

#define ASN1_F_SMIME_READ_ASN1 210

#define ASN1_F_SMIME_TEXT 211

#define ASN1_F_X509_CINF_NEW 168

#define ASN1_F_X509_CRL_ADD0_REVOKED 169

#define ASN1_F_X509_INFO_NEW 170

#define ASN1_F_X509_NAME_ENCODE 203

#define ASN1_F_X509_NAME_EX_D2I 158

#define ASN1_F_X509_NAME_EX_NEW 171

#define ASN1_F_X509_NEW 172

#define ASN1_F_X509_PKEY_NEW 173

#define ASN1_LONG_UNDEF 2147483647

#define ASN1_OBJECT_FLAG_CRITICAL 2

#define ASN1_OBJECT_FLAG_DYNAMIC 1

#define ASN1_OBJECT_FLAG_DYNAMIC_DATA 8

#define ASN1_OBJECT_FLAG_DYNAMIC_STRINGS 4

#define ASN1_R_ADDING_OBJECT 171

#define ASN1_R_ASN1_PARSE_ERROR 198

#define ASN1_R_ASN1_SIG_PARSE_ERROR 199

#define ASN1_R_AUX_ERROR 100

#define ASN1_R_BAD_CLASS 101

#define ASN1_R_BAD_OBJECT_HEADER 102

#define ASN1_R_BAD_PASSWORD_READ 103

#define ASN1_R_BAD_TAG 104

#define ASN1_R_BMPSTRING_IS_WRONG_LENGTH 210

#define ASN1_R_BN_LIB 105

#define ASN1_R_BOOLEAN_IS_WRONG_LENGTH 106

#define ASN1_R_BUFFER_TOO_SMALL 107

#define ASN1_R_CIPHER_HAS_NO_OBJECT_IDENTIFIER 108

#define ASN1_R_DATA_IS_WRONG 109

#define ASN1_R_DECODE_ERROR 110

#define ASN1_R_DECODING_ERROR 111

#define ASN1_R_DEPTH_EXCEEDED 174

#define ASN1_R_ENCODE_ERROR 112

#define ASN1_R_ERROR_GETTING_TIME 173

#define ASN1_R_ERROR_LOADING_SECTION 172

#define ASN1_R_ERROR_PARSING_SET_ELEMENT 113

#define ASN1_R_ERROR_SETTING_CIPHER_PARAMS 114

#define ASN1_R_EXPECTING_A_BOOLEAN 117

#define ASN1_R_EXPECTING_A_TIME 118

#define ASN1_R_EXPECTING_AN_INTEGER 115

#define ASN1_R_EXPECTING_AN_OBJECT 116

#define ASN1_R_EXPLICIT_LENGTH_MISMATCH 119

#define ASN1_R_EXPLICIT_TAG_NOT_CONSTRUCTED 120

#define ASN1_R_FIELD_MISSING 121

#define ASN1_R_FIRST_NUM_TOO_LARGE 122

#define ASN1_R_HEADER_TOO_LONG 123

#define ASN1_R_ILLEGAL_BITSTRING_FORMAT 175

#define ASN1_R_ILLEGAL_BOOLEAN 176

#define ASN1_R_ILLEGAL_CHARACTERS 124

#define ASN1_R_ILLEGAL_FORMAT 177

#define ASN1_R_ILLEGAL_HEX 178

#define ASN1_R_ILLEGAL_IMPLICIT_TAG 179

#define ASN1_R_ILLEGAL_INTEGER 180

#define ASN1_R_ILLEGAL_NESTED_TAGGING 181

#define ASN1_R_ILLEGAL_NULL 125

#define ASN1_R_ILLEGAL_NULL_VALUE 182

#define ASN1_R_ILLEGAL_OBJECT 183

#define ASN1_R_ILLEGAL_OPTIONAL_ANY 126

#define ASN1_R_ILLEGAL_OPTIONS_ON_ITEM_TEMPLATE 170

#define ASN1_R_ILLEGAL_TAGGED_ANY 127

#define ASN1_R_ILLEGAL_TIME_VALUE 184

#define ASN1_R_INTEGER_NOT_ASCII_FORMAT 185

#define ASN1_R_INTEGER_TOO_LARGE_FOR_LONG 128

#define ASN1_R_INVALID_BMPSTRING_LENGTH 129

#define ASN1_R_INVALID_DIGIT 130

#define ASN1_R_INVALID_MIME_TYPE 200

#define ASN1_R_INVALID_MODIFIER 186

#define ASN1_R_INVALID_NUMBER 187

#define ASN1_R_INVALID_OBJECT_ENCODING 212

#define ASN1_R_INVALID_SEPARATOR 131

#define ASN1_R_INVALID_TIME_FORMAT 132

#define ASN1_R_INVALID_UNIVERSALSTRING_LENGTH 133

#define ASN1_R_INVALID_UTF8STRING 134

#define ASN1_R_IV_TOO_LARGE 135

#define ASN1_R_LENGTH_ERROR 136

#define ASN1_R_LIST_ERROR 188

#define ASN1_R_MIME_NO_CONTENT_TYPE 201

#define ASN1_R_MIME_PARSE_ERROR 202

#define ASN1_R_MIME_SIG_PARSE_ERROR 203

#define ASN1_R_MISSING_EOC 137

#define ASN1_R_MISSING_SECOND_NUMBER 138

#define ASN1_R_MISSING_VALUE 189

#define ASN1_R_MSTRING_NOT_UNIVERSAL 139

#define ASN1_R_MSTRING_WRONG_TAG 140

#define ASN1_R_NESTED_ASN1_STRING 197

#define ASN1_R_NO_CONTENT_TYPE 204

#define ASN1_R_NO_MATCHING_CHOICE_TYPE 143

#define ASN1_R_NO_MULTIPART_BODY_FAILURE 205

#define ASN1_R_NO_MULTIPART_BOUNDARY 206

#define ASN1_R_NO_SIG_CONTENT_TYPE 207

#define ASN1_R_NON_HEX_CHARACTERS 141

#define ASN1_R_NOT_ASCII_FORMAT 190

#define ASN1_R_NOT_ENOUGH_DATA 142

#define ASN1_R_NULL_IS_WRONG_LENGTH 144

#define ASN1_R_OBJECT_NOT_ASCII_FORMAT 191

#define ASN1_R_ODD_NUMBER_OF_CHARS 145

#define ASN1_R_PRIVATE_KEY_HEADER_MISSING 146

#define ASN1_R_SECOND_NUMBER_TOO_LARGE 147

#define ASN1_R_SEQUENCE_LENGTH_MISMATCH 148

#define ASN1_R_SEQUENCE_NOT_CONSTRUCTED 149

#define ASN1_R_SEQUENCE_OR_SET_NEEDS_CONFIG 192

#define ASN1_R_SHORT_LINE 150

#define ASN1_R_SIG_INVALID_MIME_TYPE 208

#define ASN1_R_STREAMING_NOT_SUPPORTED 209

#define ASN1_R_STRING_TOO_LONG 151

#define ASN1_R_STRING_TOO_SHORT 152

#define ASN1_R_TAG_VALUE_TOO_HIGH 153

#define ASN1_R_THE_ASN1_OBJECT_IDENTIFIER_IS_NOT_KNOWN_FOR_THIS_MD 154

#define ASN1_R_TIME_NOT_ASCII_FORMAT 193

#define ASN1_R_TOO_LONG 155

#define ASN1_R_TYPE_NOT_CONSTRUCTED 156

#define ASN1_R_UNABLE_TO_DECODE_RSA_KEY 157

#define ASN1_R_UNABLE_TO_DECODE_RSA_PRIVATE_KEY 158

#define ASN1_R_UNEXPECTED_EOC 159

#define ASN1_R_UNIVERSALSTRING_IS_WRONG_LENGTH 211

#define ASN1_R_UNKNOWN_FORMAT 160

#define ASN1_R_UNKNOWN_MESSAGE_DIGEST_ALGORITHM 161

#define ASN1_R_UNKNOWN_OBJECT_TYPE 162

#define ASN1_R_UNKNOWN_PUBLIC_KEY_TYPE 163

#define ASN1_R_UNKNOWN_TAG 194

#define ASN1_R_UNKOWN_FORMAT 195

#define ASN1_R_UNSUPPORTED_ANY_DEFINED_BY_TYPE 164

#define ASN1_R_UNSUPPORTED_CIPHER 165

#define ASN1_R_UNSUPPORTED_ENCRYPTION_ALGORITHM 166

#define ASN1_R_UNSUPPORTED_PUBLIC_KEY_TYPE 167

#define ASN1_R_UNSUPPORTED_TYPE 196

#define ASN1_R_WRONG_TAG 168

#define ASN1_R_WRONG_TYPE 169

#define ASN1_STRFLGS_DUMP_ALL 128

#define ASN1_STRFLGS_DUMP_DER 512

#define ASN1_STRFLGS_DUMP_UNKNOWN 256

#define ASN1_STRFLGS_ESC_2253 1

#define ASN1_STRFLGS_ESC_CTRL 2

#define ASN1_STRFLGS_ESC_MSB 4

#define ASN1_STRFLGS_ESC_QUOTE 8

#define ASN1_STRFLGS_IGNORE_TYPE 32

#define ASN1_STRFLGS_SHOW_TYPE 64

#define ASN1_STRFLGS_UTF8_CONVERT 16

#define ASN1_STRING_FLAG_BITS_LEFT 8

#define ASN1_STRING_FLAG_CONT 32

#define ASN1_STRING_FLAG_NDEF 16

#define B_ASN1_BIT_STRING 1024

#define B_ASN1_BMPSTRING 2048

#define B_ASN1_GENERALIZEDTIME 32768

#define B_ASN1_GENERALSTRING 128

#define B_ASN1_GRAPHICSTRING 32

#define B_ASN1_IA5STRING 16

#define B_ASN1_ISO64STRING 64

#define B_ASN1_NUMERICSTRING 1

#define B_ASN1_OCTET_STRING 512

#define B_ASN1_PRINTABLESTRING 2

#define B_ASN1_SEQUENCE 65536

#define B_ASN1_T61STRING 4

#define B_ASN1_TELETEXSTRING 4

#define B_ASN1_UNIVERSALSTRING 256

#define B_ASN1_UNKNOWN 4096

#define B_ASN1_UTCTIME 16384

#define B_ASN1_UTF8STRING 8192

#define B_ASN1_VIDEOTEXSTRING 8

#define B_ASN1_VISIBLESTRING 64

#define CHARTYPE_FIRST_ESC_2253 32

#define CHARTYPE_LAST_ESC_2253 64

#define CHARTYPE_PRINTABLESTRING 16

#define DIRSTRING_TYPE 10246

#define IS_SEQUENCE 0

#define IS_SET 1

#define MBSTRING_ASC 4097

#define MBSTRING_BMP 4098

#define MBSTRING_FLAG 4096

#define MBSTRING_UNIV 4100

#define MBSTRING_UTF8 4096

#define PKCS9STRING_TYPE 10262

#define SMIME_CRLFEOL 2048

#define SMIME_OLDMIME 1024

#define SMIME_STREAM 4096

#define STABLE_FLAGS_MALLOC 1

#define STABLE_NO_MASK 2

#define ub_common_name 64

#define ub_email_address 128

#define ub_locality_name 128

#define ub_name 32768

#define ub_organization_name 64

#define ub_organization_unit_name 64

#define ub_state_name 128

#define ub_title 64

#define V_ASN1_ANY -4

#define V_ASN1_APP_CHOOSE -2

#define V_ASN1_APPLICATION 64

#define V_ASN1_BIT_STRING 3

#define V_ASN1_BMPSTRING 30

#define V_ASN1_BOOLEAN 1

#define V_ASN1_CONSTRUCTED 32

#define V_ASN1_CONTEXT_SPECIFIC 128

#define V_ASN1_ENUMERATED 10

#define V_ASN1_EOC 0

#define V_ASN1_EXTERNAL 8

#define V_ASN1_GENERALIZEDTIME 24

#define V_ASN1_GENERALSTRING 27

#define V_ASN1_GRAPHICSTRING 25

#define V_ASN1_IA5STRING 22

#define V_ASN1_INTEGER 2

#define V_ASN1_ISO64STRING 26

#define V_ASN1_NEG 256

#define V_ASN1_NEG_ENUMERATED 266

#define V_ASN1_NEG_INTEGER 258

#define V_ASN1_NULL 5

#define V_ASN1_NUMERICSTRING 18

#define V_ASN1_OBJECT 6

#define V_ASN1_OBJECT_DESCRIPTOR 7

#define V_ASN1_OCTET_STRING 4

#define V_ASN1_OTHER -3

#define V_ASN1_PRIMATIVE_TAG 31

#define V_ASN1_PRIMITIVE_TAG 31

#define V_ASN1_PRINTABLESTRING 19

#define V_ASN1_PRIVATE 192

#define V_ASN1_REAL 9

#define V_ASN1_SEQUENCE 16

#define V_ASN1_SET 17

#define V_ASN1_T61STRING 20

#define V_ASN1_TELETEXSTRING 20

#define V_ASN1_UNDEF -1

#define V_ASN1_UNIVERSAL 0

#define V_ASN1_UNIVERSALSTRING 28

#define V_ASN1_UTCTIME 23

#define V_ASN1_UTF8STRING 12

#define V_ASN1_VIDEOTEXSTRING 21

#define V_ASN1_VISIBLESTRING 26

typedef union _union_3061 _union_3061, *P_union_3061;

typedef int ASN1_BOOLEAN;

typedef struct asn1_string_st asn1_string_st, *Pasn1_string_st;

typedef struct asn1_string_st ASN1_STRING;

typedef struct asn1_object_st asn1_object_st, *Pasn1_object_st;

typedef struct asn1_object_st ASN1_OBJECT;

typedef struct asn1_string_st ASN1_INTEGER;

typedef struct asn1_string_st ASN1_ENUMERATED;

typedef struct asn1_string_st ASN1_BIT_STRING;

typedef struct asn1_string_st ASN1_OCTET_STRING;

typedef struct asn1_string_st ASN1_PRINTABLESTRING;

typedef struct asn1_string_st ASN1_T61STRING;

typedef struct asn1_string_st ASN1_IA5STRING;

typedef struct asn1_string_st ASN1_GENERALSTRING;

typedef struct asn1_string_st ASN1_BMPSTRING;

typedef struct asn1_string_st ASN1_UNIVERSALSTRING;

typedef struct asn1_string_st ASN1_UTCTIME;

typedef struct asn1_string_st ASN1_GENERALIZEDTIME;

typedef struct asn1_string_st ASN1_VISIBLESTRING;

typedef struct asn1_string_st ASN1_UTF8STRING;

typedef struct ASN1_VALUE_st ASN1_VALUE_st, *PASN1_VALUE_st;

typedef struct ASN1_VALUE_st ASN1_VALUE;

struct ASN1_VALUE_st {
};

union _union_3061 {
    char * ptr;
    ASN1_BOOLEAN boolean;
    ASN1_STRING * asn1_string;
    ASN1_OBJECT * object;
    ASN1_INTEGER * integer;
    ASN1_ENUMERATED * enumerated;
    ASN1_BIT_STRING * bit_string;
    ASN1_OCTET_STRING * octet_string;
    ASN1_PRINTABLESTRING * printablestring;
    ASN1_T61STRING * t61string;
    ASN1_IA5STRING * ia5string;
    ASN1_GENERALSTRING * generalstring;
    ASN1_BMPSTRING * bmpstring;
    ASN1_UNIVERSALSTRING * universalstring;
    ASN1_UTCTIME * utctime;
    ASN1_GENERALIZEDTIME * generalizedtime;
    ASN1_VISIBLESTRING * visiblestring;
    ASN1_UTF8STRING * utf8string;
    ASN1_STRING * set;
    ASN1_STRING * sequence;
    ASN1_VALUE * asn1_value;
};

struct asn1_string_st {
    int length;
    int type;
    uchar * data;
    long flags;
};

struct asn1_object_st {
    char * sn;
    char * * ln;
    int nid;
    int length;
    uchar * data;
    int flags;
};

typedef struct asn1_const_ctx_st asn1_const_ctx_st, *Pasn1_const_ctx_st;

typedef struct asn1_const_ctx_st ASN1_const_CTX;

struct asn1_const_ctx_st {
    uchar * p;
    int eos;
    int error;
    int inf;
    int tag;
    int xclass;
    long slen;
    uchar * max;
    uchar * q;
    uchar * * pp;
    int line;
};

typedef struct asn1_ctx_st asn1_ctx_st, *Pasn1_ctx_st;

typedef struct asn1_ctx_st ASN1_CTX;

struct asn1_ctx_st {
    uchar * p;
    int eos;
    int error;
    int inf;
    int tag;
    int xclass;
    long slen;
    uchar * max;
    uchar * q;
    uchar * * pp;
    int line;
};

typedef struct ASN1_ENCODING_st ASN1_ENCODING_st, *PASN1_ENCODING_st;

typedef struct ASN1_ENCODING_st ASN1_ENCODING;

struct ASN1_ENCODING_st {
    uchar * enc;
    long len;
    int modified;
};

typedef struct asn1_header_st asn1_header_st, *Pasn1_header_st;

typedef struct asn1_header_st ASN1_HEADER;

typedef struct asn1_method_st asn1_method_st, *Pasn1_method_st;

typedef struct asn1_method_st ASN1_METHOD;

typedef int (i2d_of_void)(void *, uchar * *);

typedef void * (d2i_of_void)(void * *, uchar * *, long);

struct asn1_header_st {
    ASN1_OCTET_STRING * header;
    void * data;
    ASN1_METHOD * meth;
};

struct asn1_method_st {
    i2d_of_void * i2d;
    d2i_of_void * d2i;
    void * (* create)(void);
    void (* destroy)(void *);
};

typedef struct ASN1_ITEM_st ASN1_ITEM_st, *PASN1_ITEM_st;

typedef struct ASN1_ITEM_st ASN1_ITEM;

typedef struct ASN1_TEMPLATE_st ASN1_TEMPLATE_st, *PASN1_TEMPLATE_st;

typedef struct ASN1_TEMPLATE_st ASN1_TEMPLATE;

typedef ASN1_ITEM ASN1_ITEM_EXP;

struct ASN1_TEMPLATE_st {
    ulong flags;
    long tag;
    ulong offset;
    char * field_name;
    ASN1_ITEM_EXP * item;
};

struct ASN1_ITEM_st {
    char itype;
    long utype;
    ASN1_TEMPLATE * templates;
    long tcount;
    void * funcs;
    long size;
    char * sname;
};

typedef struct bio_st bio_st, *Pbio_st;

typedef struct bio_st BIO;

typedef int (asn1_output_data_fn)(BIO *, BIO *, ASN1_VALUE *, int, ASN1_ITEM *);

typedef struct bio_method_st bio_method_st, *Pbio_method_st;

typedef void (bio_info_cb)(struct bio_st *, int, char *, int, long, long);

typedef struct bio_method_st BIO_METHOD;

typedef struct crypto_ex_data_st crypto_ex_data_st, *Pcrypto_ex_data_st;

typedef struct crypto_ex_data_st CRYPTO_EX_DATA;

typedef struct stack_st stack_st, *Pstack_st;

typedef struct stack_st STACK;

struct crypto_ex_data_st {
    STACK * sk;
    int dummy;
};

struct bio_method_st {
    int type;
    char * name;
    int (* bwrite)(BIO *, char *, int);
    int (* bread)(BIO *, char *, int);
    int (* bputs)(BIO *, char *);
    int (* bgets)(BIO *, char *, int);
    long (* ctrl)(BIO *, int, long, void *);
    int (* create)(BIO *);
    int (* destroy)(BIO *);
    long (* callback_ctrl)(BIO *, int, bio_info_cb *);
};

struct stack_st {
    int num;
    char * * data;
    int sorted;
    int num_alloc;
    int (* comp)(char * *, char * *);
};

struct bio_st {
    BIO_METHOD * method;
    long (* callback)(struct bio_st *, int, char *, int, long, long);
    char * cb_arg;
    int init;
    int shutdown;
    int flags;
    int retry_reason;
    int num;
    void * ptr;
    struct bio_st * next_bio;
    struct bio_st * prev_bio;
    int references;
    ulong num_read;
    ulong num_write;
    CRYPTO_EX_DATA ex_data;
};

typedef struct asn1_string_table_st asn1_string_table_st, *Pasn1_string_table_st;

typedef struct asn1_string_table_st ASN1_STRING_TABLE;

struct asn1_string_table_st {
    int nid;
    long minsize;
    long maxsize;
    ulong mask;
    ulong flags;
};

typedef struct ASN1_TLC_st ASN1_TLC_st, *PASN1_TLC_st;

typedef struct ASN1_TLC_st ASN1_TLC;

struct ASN1_TLC_st {
    char valid;
    int ret;
    long plen;
    int ptag;
    int pclass;
    int hdrlen;
};

typedef struct asn1_type_st asn1_type_st, *Pasn1_type_st;

typedef struct asn1_type_st ASN1_TYPE;

struct asn1_type_st {
    int type;
    union _union_3061 value;
};

typedef struct BIT_STRING_BITNAME_st BIT_STRING_BITNAME_st, *PBIT_STRING_BITNAME_st;

typedef struct BIT_STRING_BITNAME_st BIT_STRING_BITNAME;

struct BIT_STRING_BITNAME_st {
    int bitnum;
    char * lname;
    char * sname;
};

#define ASN1_MAC_ERR_LIB 13

#define ASN1_AFLG_BROKEN 4

#define ASN1_AFLG_ENCODING 2

#define ASN1_AFLG_REFCOUNT 1

#define ASN1_ITYPE_CHOICE 2

#define ASN1_ITYPE_COMPAT 3

#define ASN1_ITYPE_EXTERN 4

#define ASN1_ITYPE_MSTRING 5

#define ASN1_ITYPE_NDEF_SEQUENCE 6

#define ASN1_ITYPE_PRIMITIVE 0

#define ASN1_ITYPE_SEQUENCE 1

#define ASN1_OP_D2I_POST 5

#define ASN1_OP_D2I_PRE 4

#define ASN1_OP_FREE_POST 3

#define ASN1_OP_FREE_PRE 2

#define ASN1_OP_I2D_POST 7

#define ASN1_OP_I2D_PRE 6

#define ASN1_OP_NEW_POST 1

#define ASN1_OP_NEW_PRE 0

#define ASN1_TFLG_ADB_INT 512

#define ASN1_TFLG_ADB_MASK 768

#define ASN1_TFLG_ADB_OID 256

#define ASN1_TFLG_APPLICATION 64

#define ASN1_TFLG_COMBINE 1024

#define ASN1_TFLG_CONTEXT 128

#define ASN1_TFLG_EXPLICIT 144

#define ASN1_TFLG_EXPTAG 16

#define ASN1_TFLG_IMPLICIT 136

#define ASN1_TFLG_IMPTAG 8

#define ASN1_TFLG_NDEF 2048

#define ASN1_TFLG_OPTIONAL 1

#define ASN1_TFLG_PRIVATE 192

#define ASN1_TFLG_SEQUENCE_OF 4

#define ASN1_TFLG_SET_OF 2

#define ASN1_TFLG_SET_ORDER 6

#define ASN1_TFLG_SK_MASK 6

#define ASN1_TFLG_TAG_CLASS 192

#define ASN1_TFLG_TAG_MASK 24

#define ASN1_TFLG_UNIVERSAL 0

typedef struct ASN1_ADB_st ASN1_ADB_st, *PASN1_ADB_st;

typedef struct ASN1_ADB_st ASN1_ADB;

typedef struct ASN1_ADB_TABLE_st ASN1_ADB_TABLE_st, *PASN1_ADB_TABLE_st;

typedef struct ASN1_ADB_TABLE_st ASN1_ADB_TABLE;

struct ASN1_ADB_TABLE_st {
    long value;
    ASN1_TEMPLATE tt;
};

struct ASN1_ADB_st {
    ulong flags;
    ulong offset;
    STACK * * app_items;
    ASN1_ADB_TABLE * tbl;
    long tblcount;
    ASN1_TEMPLATE * default_tt;
    ASN1_TEMPLATE * null_tt;
};

typedef struct ASN1_AUX_st ASN1_AUX_st, *PASN1_AUX_st;

typedef struct ASN1_AUX_st ASN1_AUX;

typedef int (ASN1_aux_cb)(int, ASN1_VALUE * *, ASN1_ITEM *);

struct ASN1_AUX_st {
    void * app_data;
    int flags;
    int ref_offset;
    int ref_lock;
    ASN1_aux_cb * asn1_cb;
    int enc_offset;
};

typedef struct ASN1_COMPAT_FUNCS_st ASN1_COMPAT_FUNCS_st, *PASN1_COMPAT_FUNCS_st;

typedef struct ASN1_COMPAT_FUNCS_st ASN1_COMPAT_FUNCS;

typedef ASN1_VALUE * (ASN1_new_func)(void);

typedef void (ASN1_free_func)(ASN1_VALUE *);

typedef ASN1_VALUE * (ASN1_d2i_func)(ASN1_VALUE * *, uchar * *, long);

typedef int (ASN1_i2d_func)(ASN1_VALUE *, uchar * *);

struct ASN1_COMPAT_FUNCS_st {
    ASN1_new_func * asn1_new;
    ASN1_free_func * asn1_free;
    ASN1_d2i_func * asn1_d2i;
    ASN1_i2d_func * asn1_i2d;
};

typedef int (ASN1_ex_d2i)(ASN1_VALUE * *, uchar * *, long, ASN1_ITEM *, int, int, char, ASN1_TLC *);

typedef void (ASN1_ex_free_func)(ASN1_VALUE * *, ASN1_ITEM *);

typedef int (ASN1_ex_i2d)(ASN1_VALUE * *, uchar * *, ASN1_ITEM *, int, int);

typedef int (ASN1_ex_new_func)(ASN1_VALUE * *, ASN1_ITEM *);

typedef struct ASN1_EXTERN_FUNCS_st ASN1_EXTERN_FUNCS_st, *PASN1_EXTERN_FUNCS_st;

typedef struct ASN1_EXTERN_FUNCS_st ASN1_EXTERN_FUNCS;

struct ASN1_EXTERN_FUNCS_st {
    void * app_data;
    ASN1_ex_new_func * asn1_ex_new;
    ASN1_ex_free_func * asn1_ex_free;
    ASN1_ex_free_func * asn1_ex_clear;
    ASN1_ex_d2i * asn1_ex_d2i;
    ASN1_ex_i2d * asn1_ex_i2d;
};

typedef int (ASN1_primitive_c2i)(ASN1_VALUE * *, uchar *, int, int, char *, ASN1_ITEM *);

typedef struct ASN1_PRIMITIVE_FUNCS_st ASN1_PRIMITIVE_FUNCS_st, *PASN1_PRIMITIVE_FUNCS_st;

typedef struct ASN1_PRIMITIVE_FUNCS_st ASN1_PRIMITIVE_FUNCS;

typedef int (ASN1_primitive_i2c)(ASN1_VALUE * *, uchar *, int *, ASN1_ITEM *);

struct ASN1_PRIMITIVE_FUNCS_st {
    void * app_data;
    ulong flags;
    ASN1_ex_new_func * prim_new;
    ASN1_ex_free_func * prim_free;
    ASN1_ex_free_func * prim_clear;
    ASN1_primitive_c2i * prim_c2i;
    ASN1_primitive_i2c * prim_i2c;
};

#define __ASSERT_MACROS_DEFINE_VERSIONS_WITHOUT_UNDERSCORES 1

#define ATTR_BIT_MAP_COUNT 5

#define ATTR_CMN_ACCESSMASK 131072

#define ATTR_CMN_ACCTIME 4096

#define ATTR_CMN_ADDEDTIME 268435456

#define ATTR_CMN_BKUPTIME 8192

#define ATTR_CMN_CHGTIME 2048

#define ATTR_CMN_CRTIME 512

#define ATTR_CMN_DEVID 2

#define ATTR_CMN_EXTENDED_SECURITY 4194304

#define ATTR_CMN_FILEID 33554432

#define ATTR_CMN_FLAGS 262144

#define ATTR_CMN_FNDRINFO 16384

#define ATTR_CMN_FSID 4

#define ATTR_CMN_FULLPATH 134217728

#define ATTR_CMN_GRPID 65536

#define ATTR_CMN_GRPUUID 16777216

#define ATTR_CMN_MODTIME 1024

#define ATTR_CMN_NAME 1

#define ATTR_CMN_NAMEDATTRCOUNT 524288

#define ATTR_CMN_NAMEDATTRLIST 1048576

#define ATTR_CMN_OBJID 32

#define ATTR_CMN_OBJPERMANENTID 64

#define ATTR_CMN_OBJTAG 16

#define ATTR_CMN_OBJTYPE 8

#define ATTR_CMN_OWNERID 32768

#define ATTR_CMN_PARENTID 67108864

#define ATTR_CMN_PAROBJID 128

#define ATTR_CMN_RETURNED_ATTRS 2147483648

#define ATTR_CMN_SCRIPT 256

#define ATTR_CMN_SETMASK 29884160

#define ATTR_CMN_USERACCESS 2097152

#define ATTR_CMN_UUID 8388608

#define ATTR_CMN_VALIDMASK 3221225471

#define ATTR_CMN_VOLSETMASK 26368

#define ATTR_DIR_ENTRYCOUNT 2

#define ATTR_DIR_LINKCOUNT 1

#define ATTR_DIR_MOUNTSTATUS 4

#define ATTR_DIR_SETMASK 0

#define ATTR_DIR_VALIDMASK 7

#define ATTR_FILE_ALLOCSIZE 4

#define ATTR_FILE_CLUMPSIZE 16

#define ATTR_FILE_DATAALLOCSIZE 1024

#define ATTR_FILE_DATAEXTENTS 2048

#define ATTR_FILE_DATALENGTH 512

#define ATTR_FILE_DEVTYPE 32

#define ATTR_FILE_FILETYPE 64

#define ATTR_FILE_FORKCOUNT 128

#define ATTR_FILE_FORKLIST 256

#define ATTR_FILE_IOBLOCKSIZE 8

#define ATTR_FILE_LINKCOUNT 1

#define ATTR_FILE_RSRCALLOCSIZE 8192

#define ATTR_FILE_RSRCEXTENTS 16384

#define ATTR_FILE_RSRCLENGTH 4096

#define ATTR_FILE_SETMASK 32

#define ATTR_FILE_TOTALSIZE 2

#define ATTR_FILE_VALIDMASK 14335

#define ATTR_FORK_ALLOCSIZE 2

#define ATTR_FORK_SETMASK 0

#define ATTR_FORK_TOTALSIZE 1

#define ATTR_FORK_VALIDMASK 3

#define ATTR_MAX_BUFFER 8192

#define ATTR_VOL_ALLOCATIONCLUMP 64

#define ATTR_VOL_ATTRIBUTES 1073741824

#define ATTR_VOL_CAPABILITIES 131072

#define ATTR_VOL_DIRCOUNT 1024

#define ATTR_VOL_ENCODINGSUSED 65536

#define ATTR_VOL_FILECOUNT 512

#define ATTR_VOL_FSTYPE 1

#define ATTR_VOL_INFO 2147483648

#define ATTR_VOL_IOBLOCKSIZE 128

#define ATTR_VOL_MAXOBJCOUNT 2048

#define ATTR_VOL_MINALLOCATION 32

#define ATTR_VOL_MOUNTEDDEVICE 32768

#define ATTR_VOL_MOUNTFLAGS 16384

#define ATTR_VOL_MOUNTPOINT 4096

#define ATTR_VOL_NAME 8192

#define ATTR_VOL_OBJCOUNT 256

#define ATTR_VOL_SETMASK 2147491840

#define ATTR_VOL_SIGNATURE 2

#define ATTR_VOL_SIZE 4

#define ATTR_VOL_SPACEAVAIL 16

#define ATTR_VOL_SPACEFREE 8

#define ATTR_VOL_UUID 262144

#define ATTR_VOL_VALIDMASK 3221749759

#define DIR_MNTSTATUS_MNTPOINT 1

#define DIR_MNTSTATUS_TRIGGER 2

#define FSOPT_NOFOLLOW 1

#define FSOPT_NOINMEMUPDATE 2

#define FSOPT_PACK_INVAL_ATTRS 8

#define FSOPT_REPORT_FULLSIZE 4

#define FST_EOF -1

#define SEARCHFS_MAX_SEARCHPARMS 4096

#define SRCHFS_MATCHDIRS 4

#define SRCHFS_MATCHFILES 8

#define SRCHFS_MATCHPARTIALNAMES 2

#define SRCHFS_NEGATEPARAMS 2147483648

#define SRCHFS_SKIPINAPPROPRIATE 128

#define SRCHFS_SKIPINVISIBLE 32

#define SRCHFS_SKIPLINKS 16

#define SRCHFS_SKIPPACKAGES 64

#define SRCHFS_START 1

#define SRCHFS_VALIDOPTIONSMASK 2147483903

#define VOL_CAP_FMT_2TB_FILESIZE 2048

#define VOL_CAP_FMT_64BIT_OBJECT_IDS 131072

#define VOL_CAP_FMT_CASE_PRESERVING 512

#define VOL_CAP_FMT_CASE_SENSITIVE 256

#define VOL_CAP_FMT_DECMPFS_COMPRESSION 65536

#define VOL_CAP_FMT_FAST_STATFS 1024

#define VOL_CAP_FMT_HARDLINKS 4

#define VOL_CAP_FMT_HIDDEN_FILES 8192

#define VOL_CAP_FMT_JOURNAL 8

#define VOL_CAP_FMT_JOURNAL_ACTIVE 16

#define VOL_CAP_FMT_NO_ROOT_TIMES 32

#define VOL_CAP_FMT_NO_VOLUME_SIZES 32768

#define VOL_CAP_FMT_OPENDENYMODES 4096

#define VOL_CAP_FMT_PATH_FROM_ID 16384

#define VOL_CAP_FMT_PERSISTENTOBJECTIDS 1

#define VOL_CAP_FMT_SPARSE_FILES 64

#define VOL_CAP_FMT_SYMBOLICLINKS 2

#define VOL_CAP_FMT_ZERO_RUNS 128

#define VOL_CAP_INT_ADVLOCK 256

#define VOL_CAP_INT_ALLOCATE 64

#define VOL_CAP_INT_ATTRLIST 2

#define VOL_CAP_INT_COPYFILE 32

#define VOL_CAP_INT_EXCHANGEDATA 16

#define VOL_CAP_INT_EXTENDED_ATTR 16384

#define VOL_CAP_INT_EXTENDED_SECURITY 1024

#define VOL_CAP_INT_FLOCK 512

#define VOL_CAP_INT_MANLOCK 4096

#define VOL_CAP_INT_NAMEDSTREAMS 8192

#define VOL_CAP_INT_NFSEXPORT 4

#define VOL_CAP_INT_READDIRATTR 8

#define VOL_CAP_INT_SEARCHFS 1

#define VOL_CAP_INT_USERACCESS 2048

#define VOL_CAP_INT_VOL_RENAME 128

#define VOL_CAPABILITIES_FORMAT 0

#define VOL_CAPABILITIES_INTERFACES 1

#define VOL_CAPABILITIES_RESERVED1 2

#define VOL_CAPABILITIES_RESERVED2 3

typedef u_int32_t attrgroup_t;

typedef struct attribute_set attribute_set, *Pattribute_set;

struct attribute_set {
    attrgroup_t commonattr;
    attrgroup_t volattr;
    attrgroup_t dirattr;
    attrgroup_t fileattr;
    attrgroup_t forkattr;
};

typedef struct attribute_set attribute_set_t;

typedef struct attrlist attrlist, *Pattrlist;

typedef ushort u_short;

struct attrlist {
    u_short bitmapcount;
    u_int16_t reserved;
    attrgroup_t commonattr;
    attrgroup_t volattr;
    attrgroup_t dirattr;
    attrgroup_t fileattr;
    attrgroup_t forkattr;
};

typedef struct attrreference attrreference, *Pattrreference;

struct attrreference {
    int32_t attr_dataoffset;
    u_int32_t attr_length;
};

typedef struct attrreference attrreference_t;

typedef struct diskextent diskextent, *Pdiskextent;

struct diskextent {
    u_int32_t startblock;
    u_int32_t blockcount;
};

typedef struct diskextent extentrecord[8];

typedef u_int32_t fsfile_type_t;

typedef struct fsobj_id fsobj_id, *Pfsobj_id;

struct fsobj_id {
    u_int32_t fid_objno;
    u_int32_t fid_generation;
};

typedef struct fsobj_id fsobj_id_t;

typedef u_int32_t fsobj_tag_t;

typedef u_int32_t fsobj_type_t;

typedef u_int32_t fsvolid_t;

typedef u_int32_t text_encoding_t;

typedef struct vol_attributes_attr vol_attributes_attr, *Pvol_attributes_attr;

struct vol_attributes_attr {
    attribute_set_t validattr;
    attribute_set_t nativeattr;
};

typedef struct vol_attributes_attr vol_attributes_attr_t;

typedef struct vol_capabilities_attr vol_capabilities_attr, *Pvol_capabilities_attr;

typedef u_int32_t vol_capabilities_set_t[4];

struct vol_capabilities_attr {
    vol_capabilities_set_t capabilities;
    vol_capabilities_set_t valid;
};

typedef struct vol_capabilities_attr vol_capabilities_attr_t;

#define A_GETCAR 9

#define A_GETCLASS 22

#define A_GETCOND 37

#define A_GETCWD 8

#define A_GETFSIZE 27

#define A_GETKAUDIT 29

#define A_GETKMASK 4

#define A_GETPINFO 24

#define A_GETPINFO_ADDR 28

#define A_GETPOLICY 33

#define A_GETQCTRL 35

#define A_GETSFLAGS 39

#define A_GETSINFO_ADDR 32

#define A_GETSTAT 12

#define A_OLDGETCOND 20

#define A_OLDGETPOLICY 2

#define A_OLDGETQCTRL 6

#define A_OLDSETCOND 21

#define A_OLDSETPOLICY 3

#define A_OLDSETQCTRL 7

#define A_SENDTRIGGER 31

#define A_SETCLASS 23

#define A_SETCOND 38

#define A_SETFSIZE 26

#define A_SETKAUDIT 30

#define A_SETKMASK 5

#define A_SETPMASK 25

#define A_SETPOLICY 34

#define A_SETQCTRL 36

#define A_SETSFLAGS 40

#define A_SETSMASK 15

#define A_SETSTAT 13

#define A_SETUMASK 14

#define AQ_BUFSZ 32767

#define AQ_HIWATER 100

#define AQ_LOWATER 10

#define AQ_MAXBUFSZ 1048576

#define AQ_MAXHIGH 10000

#define AT_IPC_MSG 1

#define AT_IPC_SEM 2

#define AT_IPC_SHM 3

#define AU_ASSIGN_ASID -1

#define AU_DEFAUDITID -1

#define AU_DEFAUDITSID 0

#define AU_FS_MINFREE 20

#define AU_IPv4 4

#define AU_IPv6 16

#define AUC_AUDITING 1

#define AUC_DISABLED -1

#define AUC_NOAUDIT 2

#define AUC_UNSET 0

#define AUDIT_AHLT 2

#define AUDIT_ARGE 8

#define AUDIT_ARGV 4

#define AUDIT_CNT 1

#define AUDIT_GROUP 128

#define AUDIT_HARD_LIMIT_FREE_BLOCKS 4

#define AUDIT_PATH 512

#define AUDIT_PERZONE 8192

#define AUDIT_PUBLIC 2048

#define AUDIT_RECORD_MAGIC 2190085915

#define AUDIT_SCNT 1024

#define AUDIT_SEQ 16

#define AUDIT_TRAIL 256

#define AUDIT_TRIGGER_CLOSE_AND_DIE 4

#define AUDIT_TRIGGER_EXPIRE_TRAILS 8

#define AUDIT_TRIGGER_INITIALIZE 7

#define AUDIT_TRIGGER_LOW_SPACE 1

#define AUDIT_TRIGGER_MAX 8

#define AUDIT_TRIGGER_MIN 1

#define AUDIT_TRIGGER_NO_SPACE 5

#define AUDIT_TRIGGER_READ_FILE 3

#define AUDIT_TRIGGER_ROTATE_KERNEL 2

#define AUDIT_TRIGGER_ROTATE_USER 6

#define AUDIT_USER 64

#define AUDIT_WINDATA 32

#define AUDIT_ZONENAME 4096

#define MAX_AUDIT_RECORD_SIZE 32767

#define MAX_AUDIT_RECORDS 20

#define MAXAUDITDATA 32767

#define MIN_AUDIT_FILE_SIZE 524288

typedef u_int64_t au_asflgs_t;

typedef pid_t au_asid_t;

typedef u_int32_t au_class_t;

typedef u_int16_t au_emod_t;

typedef struct au_evclass_map au_evclass_map, *Pau_evclass_map;

typedef u_int16_t au_event_t;

struct au_evclass_map {
    au_event_t ec_number;
    au_class_t ec_class;
};

typedef struct au_evclass_map au_evclass_map_t;

typedef struct audit_fstat audit_fstat, *Paudit_fstat;

typedef struct audit_fstat au_fstat_t;

struct audit_fstat {
    u_int64_t af_filesz;
    u_int64_t af_currsz;
};

typedef uid_t au_id_t;

typedef struct au_mask au_mask, *Pau_mask;

struct au_mask {
    uint am_success;
    uint am_failure;
};

typedef struct au_mask au_mask_t;

typedef struct au_qctrl au_qctrl, *Pau_qctrl;

struct au_qctrl {
    int aq_hiwater;
    int aq_lowater;
    int aq_bufsz;
    int aq_delay;
    int aq_minfree;
};

typedef struct au_qctrl au_qctrl_t;

typedef struct au_session au_session, *Pau_session;

typedef struct auditinfo_addr auditinfo_addr, *Pauditinfo_addr;

typedef struct auditinfo_addr auditinfo_addr_t;

typedef struct au_tid_addr au_tid_addr, *Pau_tid_addr;

typedef struct au_tid_addr au_tid_addr_t;

struct au_session {
    auditinfo_addr_t * as_aia_p;
    au_mask_t as_mask;
};

struct au_tid_addr {
    dev_t at_port;
    u_int32_t at_type;
    u_int32_t at_addr[4];
};

struct auditinfo_addr {
    au_id_t ai_auid;
    au_mask_t ai_mask;
    au_tid_addr_t ai_termid;
    au_asid_t ai_asid;
    au_asflgs_t ai_flags;
};

typedef struct au_session au_session_t;

typedef struct audit_stat audit_stat, *Paudit_stat;

typedef struct audit_stat au_stat_t;

struct audit_stat {
    uint as_version;
    uint as_numevent;
    int as_generated;
    int as_nonattrib;
    int as_kernel;
    int as_audit;
    int as_auditctl;
    int as_enqueue;
    int as_written;
    int as_wblocked;
    int as_rblocked;
    int as_dropped;
    int as_totalsize;
    uint as_memused;
};

typedef struct au_tid au_tid, *Pau_tid;

struct au_tid {
    dev_t port;
    u_int32_t machine;
};

typedef struct au_tid au_tid_t;

typedef struct au_token au_token, *Pau_token;

struct au_token {
};

typedef struct auditinfo auditinfo, *Pauditinfo;

struct auditinfo {
    au_id_t ai_auid;
    au_mask_t ai_mask;
    au_tid_t ai_termid;
    au_asid_t ai_asid;
};

typedef struct auditinfo auditinfo_t;

typedef struct auditpinfo auditpinfo, *Pauditpinfo;

struct auditpinfo {
    pid_t ap_pid;
    au_id_t ap_auid;
    au_mask_t ap_mask;
    au_tid_t ap_termid;
    au_asid_t ap_asid;
};

typedef struct auditpinfo_addr auditpinfo_addr, *Pauditpinfo_addr;

struct auditpinfo_addr {
    pid_t ap_pid;
    au_id_t ap_auid;
    au_mask_t ap_mask;
    au_tid_addr_t ap_termid;
    au_asid_t ap_asid;
    au_asflgs_t ap_flags;
};

typedef struct auditpinfo_addr auditpinfo_addr_t;

typedef struct auditpinfo auditpinfo_t;

typedef struct au_token token_t;

#define AUE_ACCEPT 33

#define AUE_ACCESS 14

#define AUE_ACCESS_EXTENDED 43162

#define AUE_ACCT 18

#define AUE_ACL_CHECK_FD 43095

#define AUE_ACL_CHECK_FILE 43094

#define AUE_ACL_CHECK_LINK 43099

#define AUE_ACL_DELETE_FD 43093

#define AUE_ACL_DELETE_FILE 43092

#define AUE_ACL_DELETE_LINK 43098

#define AUE_ACL_GET_FD 43090

#define AUE_ACL_GET_FILE 43088

#define AUE_ACL_GET_LINK 43096

#define AUE_ACL_SET_FD 43091

#define AUE_ACL_SET_FILE 43089

#define AUE_ACL_SET_LINK 43097

#define AUE_ACLSET 251

#define AUE_ADDPROFILE 43016

#define AUE_ADJTIME 50

#define AUE_ASYNC_DAEMON 57

#define AUE_ASYNC_DAEMON_EXIT 114

#define AUE_ATGETMSG 0

#define AUE_ATPGETREQ 0

#define AUE_ATPGETRSP 0

#define AUE_ATPSNDREQ 0

#define AUE_ATPSNDRSP 0

#define AUE_ATPUTMSG 0

#define AUE_ATSOCKET 0

#define AUE_AUDIT 211

#define AUE_AUDITCTL 43042

#define AUE_AUDITON 138

#define AUE_AUDITON_GETCAR 224

#define AUE_AUDITON_GETCLASS 231

#define AUE_AUDITON_GETCOND 229

#define AUE_AUDITON_GETCWD 223

#define AUE_AUDITON_GETKMASK 221

#define AUE_AUDITON_GETSTAT 225

#define AUE_AUDITON_GPOLICY 141

#define AUE_AUDITON_GQCTRL 145

#define AUE_AUDITON_GTERMID 139

#define AUE_AUDITON_SETCLASS 232

#define AUE_AUDITON_SETCOND 230

#define AUE_AUDITON_SETKMASK 222

#define AUE_AUDITON_SETSMASK 228

#define AUE_AUDITON_SETSTAT 226

#define AUE_AUDITON_SETUMASK 227

#define AUE_AUDITON_SPOLICY 142

#define AUE_AUDITON_SQCTRL 146

#define AUE_AUDITON_STERMID 140

#define AUE_AUDITSTAT 150

#define AUE_AUDITSVC 136

#define AUE_AUDITSYS 220

#define AUE_AUDITUSER 137

#define AUE_BDFLUSH 43071

#define AUE_BIND 34

#define AUE_BRANDSYS 294

#define AUE_BSDTHREADCREATE 0

#define AUE_BSDTHREADREGISTER 0

#define AUE_BSDTHREADTERMINATE 0

#define AUE_BSMSYS 66

#define AUE_CAP_ENTER 43188

#define AUE_CAP_GETMODE 43189

#define AUE_CAP_GETRIGHTS 43187

#define AUE_CAP_NEW 43186

#define AUE_CAPGET 43079

#define AUE_CAPSET 43080

#define AUE_CHDIR 8

#define AUE_CHFLAGS 43003

#define AUE_CHMOD 10

#define AUE_CHMOD_EXTENDED 43163

#define AUE_CHOWN 11

#define AUE_CHROOT 24

#define AUE_CHUD 0

#define AUE_CLOCK_SETTIME 287

#define AUE_CLOSE 112

#define AUE_CLOSEFROM 43143

#define AUE_CONFIGKSSL 293

#define AUE_CONNECT 32

#define AUE_COPYFILE 43051

#define AUE_CORE 111

#define AUE_CREAT 4

#define AUE_CRYPTOADM 292

#define AUE_CSOPS 0

#define AUE_DARWIN_ADDPROFILE 324

#define AUE_DARWIN_AUDITCTL 352

#define AUE_DARWIN_CHFLAGS 303

#define AUE_DARWIN_COPYFILE 361

#define AUE_DARWIN_EXCHANGEDATA 338

#define AUE_DARWIN_FCHFLAGS 304

#define AUE_DARWIN_FLOCK 314

#define AUE_DARWIN_FPATHCONF 327

#define AUE_DARWIN_FSTAT 326

#define AUE_DARWIN_FTRUNCATE 330

#define AUE_DARWIN_FUTIMES 318

#define AUE_DARWIN_GETATTRLIST 335

#define AUE_DARWIN_GETDIRENTRIES 328

#define AUE_DARWIN_GETDIRENTRIESATTR 337

#define AUE_DARWIN_GETFH 322

#define AUE_DARWIN_GETFSSTAT 301

#define AUE_DARWIN_INITPROCESS 356

#define AUE_DARWIN_KDBUGTRACE 43017

#define AUE_DARWIN_KDEBUGTRACE 325

#define AUE_DARWIN_KTRACE 306

#define AUE_DARWIN_LCHMOD 354

#define AUE_DARWIN_LOADSHFILE 347

#define AUE_DARWIN_MAPFD 357

#define AUE_DARWIN_MINHERIT 340

#define AUE_DARWIN_MKFIFO 315

#define AUE_DARWIN_MLOCK 332

#define AUE_DARWIN_MPROTECT 311

#define AUE_DARWIN_MUNLOCK 333

#define AUE_DARWIN_NEWSYSTEMSHREG 349

#define AUE_DARWIN_NFSSVC 321

#define AUE_DARWIN_PIDFORTASK 359

#define AUE_DARWIN_POLL 316

#define AUE_DARWIN_PROFILE 305

#define AUE_DARWIN_PTHREADKILL 350

#define AUE_DARWIN_PTHREADSIGMASK 351

#define AUE_DARWIN_PTRACE 302

#define AUE_DARWIN_QUOTACTL 323

#define AUE_DARWIN_REBOOT 308

#define AUE_DARWIN_RESETSHFILE 348

#define AUE_DARWIN_REVOKE 309

#define AUE_DARWIN_RFORK 353

#define AUE_DARWIN_SEARCHFS 339

#define AUE_DARWIN_SEMCLOSE 343

#define AUE_DARWIN_SEMCONFIG 341

#define AUE_DARWIN_SEMOPEN 342

#define AUE_DARWIN_SEMUNLINK 344

#define AUE_DARWIN_SETATTRLIST 336

#define AUE_DARWIN_SETLOGIN 307

#define AUE_DARWIN_SETPRIORITY 312

#define AUE_DARWIN_SETPRIVEXEC 320

#define AUE_DARWIN_SETSID 319

#define AUE_DARWIN_SETTIMEOFDAY 313

#define AUE_DARWIN_SHMOPEN 345

#define AUE_DARWIN_SHMUNLINK 346

#define AUE_DARWIN_SOCKETPAIR 317

#define AUE_DARWIN_SWAPOFF 355

#define AUE_DARWIN_SYSCTL 331

#define AUE_DARWIN_SYSCTL_NONADMIN 360

#define AUE_DARWIN_TASKFORPID 358

#define AUE_DARWIN_TRUNCATE 329

#define AUE_DARWIN_UMASK 310

#define AUE_DARWIN_UNDELETE 334

#define AUE_DELETE 6

#define AUE_DOORFS 253

#define AUE_DOORFS_DOOR_BIND 260

#define AUE_DOORFS_DOOR_CALL 254

#define AUE_DOORFS_DOOR_CREATE 256

#define AUE_DOORFS_DOOR_CRED 259

#define AUE_DOORFS_DOOR_INFO 258

#define AUE_DOORFS_DOOR_RETURN 255

#define AUE_DOORFS_DOOR_REVOKE 257

#define AUE_DOORFS_DOOR_UNBIND 261

#define AUE_DUP 0

#define AUE_DUP2 209

#define AUE_EACCESS 43066

#define AUE_ENTERPROM 153

#define AUE_EXCHANGEDATA 43028

#define AUE_EXEC 7

#define AUE_EXECVE 23

#define AUE_EXIT 1

#define AUE_EXITPROM 154

#define AUE_EXPORTFS 61

#define AUE_EXTATTR_DELETE_FD 43109

#define AUE_EXTATTR_DELETE_FILE 43105

#define AUE_EXTATTR_DELETE_LINK 43113

#define AUE_EXTATTR_GET_FD 43106

#define AUE_EXTATTR_GET_FILE 43102

#define AUE_EXTATTR_GET_LINK 43110

#define AUE_EXTATTR_LIST_FD 43108

#define AUE_EXTATTR_LIST_FILE 43104

#define AUE_EXTATTR_LIST_LINK 43112

#define AUE_EXTATTR_SET_FD 43107

#define AUE_EXTATTR_SET_FILE 43103

#define AUE_EXTATTR_SET_LINK 43111

#define AUE_EXTATTRCTL 43101

#define AUE_FACCESSAT 43145

#define AUE_FACLSET 252

#define AUE_FCHDIR 68

#define AUE_FCHFLAGS 43004

#define AUE_FCHMOD 39

#define AUE_FCHMOD_EXTENDED 43164

#define AUE_FCHMODAT 43146

#define AUE_FCHOWN 38

#define AUE_FCHOWNAT 284

#define AUE_FCHROOT 69

#define AUE_FCNTL 30

#define AUE_FDATASYNC 0

#define AUE_FEXECVE 43144

#define AUE_FFSCTL 43195

#define AUE_FGETATTRLIST 0

#define AUE_FGETXATTR 0

#define AUE_FHOPEN 43063

#define AUE_FHSTAT 43064

#define AUE_FHSTATFS 43062

#define AUE_FLISTXATTR 0

#define AUE_FLOCK 45

#define AUE_FORK 2

#define AUE_FORK1 241

#define AUE_FORKALL 2

#define AUE_FPATHCONF 43019

#define AUE_FREMOVEXATTR 0

#define AUE_FSAT 269

#define AUE_FSCTL 43194

#define AUE_FSETATTRLIST 0

#define AUE_FSETXATTR 0

#define AUE_FSGETPATH 43191

#define AUE_FSTAT 208

#define AUE_FSTAT64 0

#define AUE_FSTAT64_EXTENDED 0

#define AUE_FSTAT_EXTENDED 43165

#define AUE_FSTATAT 283

#define AUE_FSTATFS 55

#define AUE_FSTATFS64 0

#define AUE_FSTATV 0

#define AUE_FSYNC 43069

#define AUE_FTRUNCATE 44

#define AUE_FUSERS 233

#define AUE_FUTIMES 43013

#define AUE_FUTIMESAT 285

#define AUE_GCCONTROL 0

#define AUE_GETATTRLIST 43025

#define AUE_GETAUDIT 132

#define AUE_GETAUDIT_ADDR 267

#define AUE_GETAUID 130

#define AUE_GETCWD 43078

#define AUE_GETDENTS 193

#define AUE_GETDIRENTRIES 43020

#define AUE_GETDIRENTRIES64 0

#define AUE_GETDIRENTRIESATTR 43027

#define AUE_GETDTABLESIZE 0

#define AUE_GETEGID 0

#define AUE_GETEUID 0

#define AUE_GETFSSTAT 43001

#define AUE_GETFSSTAT64 0

#define AUE_GETGID 0

#define AUE_GETGROUPS 0

#define AUE_GETITIMER 0

#define AUE_GETKERNSTATE 147

#define AUE_GETLCID 43159

#define AUE_GETLOGIN 0

#define AUE_GETMSG 217

#define AUE_GETPATH_FROMADDR 43133

#define AUE_GETPATH_FROMFD 43132

#define AUE_GETPEERNAME 0

#define AUE_GETPGID 0

#define AUE_GETPGRP 0

#define AUE_GETPID 0

#define AUE_GETPMSG 219

#define AUE_GETPORTAUDIT 149

#define AUE_GETPPID 0

#define AUE_GETPRIORITY 0

#define AUE_GETRESGID 43058

#define AUE_GETRESUID 43056

#define AUE_GETRLIMIT 0

#define AUE_GETRUSAGE 0

#define AUE_GETSGROUPS 0

#define AUE_GETSID 0

#define AUE_GETSOCKNAME 0

#define AUE_GETSOCKOPT 0

#define AUE_GETTID 0

#define AUE_GETTIMEOFDAY 0

#define AUE_GETUID 0

#define AUE_GETUSERAUDIT 134

#define AUE_GETWGROUPS 0

#define AUE_GETXATTR 0

#define AUE_IDENTITYSVC 0

#define AUE_IFLOAT 155

#define AUE_INITGROUPS 0

#define AUE_INITPROCESS 43046

#define AUE_INST_SYNC 264

#define AUE_IOCTL 158

#define AUE_IOPERM 43117

#define AUE_IOPL 43119

#define AUE_IOPOLICYSYS 0

#define AUE_ISSETUGID 0

#define AUE_JAIL 43065

#define AUE_JAIL_ATTACH 43115

#define AUE_JUNK 13

#define AUE_KDBUGTRACE 43017

#define AUE_KDEBUGTRACE 43017

#define AUE_KENV 43114

#define AUE_KEVENT 43068

#define AUE_KILL 15

#define AUE_KILLPG 52

#define AUE_KQUEUE 43067

#define AUE_KTRACE 43006

#define AUE_LCHFLAGS 43053

#define AUE_LCHMOD 43044

#define AUE_LCHOWN 237

#define AUE_LEDGER 0

#define AUE_LGETFH 43061

#define AUE_LINK 5

#define AUE_LINKAT 43147

#define AUE_LIOLISTIO 0

#define AUE_LISTEN 43140

#define AUE_LISTXATTR 0

#define AUE_LOADSHFILE 43037

#define AUE_LPATHCONF 43196

#define AUE_LSEEK 194

#define AUE_LSTAT 17

#define AUE_LSTAT64 0

#define AUE_LSTAT64_EXTENDED 0

#define AUE_LSTAT_EXTENDED 43166

#define AUE_LSTATV 0

#define AUE_LUTIMES 43052

#define AUE_LXSTAT 236

#define AUE_MAC 152

#define AUE_MAC_EXECVE 43131

#define AUE_MAC_GET_FD 43123

#define AUE_MAC_GET_FILE 43124

#define AUE_MAC_GET_LCID 43155

#define AUE_MAC_GET_LCTX 43156

#define AUE_MAC_GET_LINK 43129

#define AUE_MAC_GET_MOUNT 43154

#define AUE_MAC_GET_PID 43128

#define AUE_MAC_GET_PROC 43121

#define AUE_MAC_GETFSSTAT 43153

#define AUE_MAC_MOUNT 43158

#define AUE_MAC_SET_FD 43125

#define AUE_MAC_SET_FILE 43126

#define AUE_MAC_SET_LCTX 43157

#define AUE_MAC_SET_LINK 43130

#define AUE_MAC_SET_PROC 43122

#define AUE_MAC_SYSCALL 43127

#define AUE_MADVISE 0

#define AUE_MAPFD 43047

#define AUE_MCTL 19

#define AUE_MEMCNTL 238

#define AUE_MINCORE 0

#define AUE_MINHERIT 43030

#define AUE_MKCOMPLEX 0

#define AUE_MKDIR 47

#define AUE_MKDIR_EXTENDED 43167

#define AUE_MKDIRAT 43148

#define AUE_MKFIFO 43011

#define AUE_MKFIFO_EXTENDED 43168

#define AUE_MKFIFOAT 43149

#define AUE_MKNOD 9

#define AUE_MKNODAT 43150

#define AUE_MLOCK 43022

#define AUE_MLOCKALL 43141

#define AUE_MMAP 210

#define AUE_MODADDMAJ 246

#define AUE_MODADDPRIV 291

#define AUE_MODCONFIG 245

#define AUE_MODCTL 242

#define AUE_MODDEVPLCY 290

#define AUE_MODLOAD 243

#define AUE_MODUNLOAD 244

#define AUE_MODWATCH 0

#define AUE_MOUNT 62

#define AUE_MPROTECT 43010

#define AUE_MQ_NOTIFY 43138

#define AUE_MQ_OPEN 43134

#define AUE_MQ_SETATTR 43135

#define AUE_MQ_TIMEDRECEIVE 43136

#define AUE_MQ_TIMEDSEND 43137

#define AUE_MQ_UNLINK 43139

#define AUE_MSGCL 0

#define AUE_MSGCTL 84

#define AUE_MSGCTL_RMID 85

#define AUE_MSGCTL_SET 86

#define AUE_MSGCTL_STAT 87

#define AUE_MSGGET 88

#define AUE_MSGRCV 89

#define AUE_MSGSND 90

#define AUE_MSGSYS 64

#define AUE_MSYNC 0

#define AUE_MUNLOCK 43023

#define AUE_MUNLOCKALL 43142

#define AUE_MUNMAP 213

#define AUE_NEWSYSTEMSHREG 43039

#define AUE_NFS 197

#define AUE_NFS_GETFH 58

#define AUE_NFS_SVC 53

#define AUE_NFSSVC_EXIT 115

#define AUE_NICE 203

#define AUE_NMOUNT 43070

#define AUE_NTP_ADJTIME 288

#define AUE_NULL 0

#define AUE_O_ACCEPT 0

#define AUE_O_ASYNCDAEMON 0

#define AUE_O_CREAT 83

#define AUE_O_EXECVE 0

#define AUE_O_EXPORTFS 0

#define AUE_O_FSTAT 208

#define AUE_O_FTRUNCATE 44

#define AUE_O_GETDENTS 0

#define AUE_O_GETDIRENTRIES 43020

#define AUE_O_GETDOMAINNAME 0

#define AUE_O_GETDOPT 0

#define AUE_O_GETHOSTID 0

#define AUE_O_GETHOSTNAME 0

#define AUE_O_GETPAGESIZE 0

#define AUE_O_GETPEERNAME 0

#define AUE_O_GETRLIMIT 0

#define AUE_O_GETSOCKNAME 0

#define AUE_O_KILLPG 15

#define AUE_O_LSEEK 0

#define AUE_O_LSTAT 17

#define AUE_O_MMAP 210

#define AUE_O_MOUNT 0

#define AUE_O_PCFS_MOUNT 0

#define AUE_O_QUOTA 0

#define AUE_O_RECV 190

#define AUE_O_RECVFROM 191

#define AUE_O_RECVMSG 190

#define AUE_O_RESUBA 0

#define AUE_O_RPAUSE 0

#define AUE_O_SBREAK 0

#define AUE_O_SEND 188

#define AUE_O_SENDMSG 188

#define AUE_O_SETDOMAINNAME 43021

#define AUE_O_SETDOPT 0

#define AUE_O_SETHOSTID 0

#define AUE_O_SETHOSTNAME 43021

#define AUE_O_SETQUOTA 0

#define AUE_O_SETREGID 41

#define AUE_O_SETREUID 40

#define AUE_O_SETRLIMIT 51

#define AUE_O_SIGBLOCK 0

#define AUE_O_SIGSETMASK 0

#define AUE_O_SIGSTACK 0

#define AUE_O_SIGVEC 0

#define AUE_O_STAT 16

#define AUE_O_TRUNCATE 43

#define AUE_O_UMOUNT 0

#define AUE_O_USTATE 0

#define AUE_O_VADVISE 0

#define AUE_O_VHANGUP 0

#define AUE_O_VLIMIT 0

#define AUE_O_VREAD 0

#define AUE_O_VTIMES 0

#define AUE_O_VTRACE 0

#define AUE_O_VWRITE 0

#define AUE_O_WAIT 0

#define AUE_O_WAIT3 0

#define AUE_OPEN 3

#define AUE_OPEN_EXTENDED 43169

#define AUE_OPEN_EXTENDED_R 43170

#define AUE_OPEN_EXTENDED_RC 43171

#define AUE_OPEN_EXTENDED_RT 43172

#define AUE_OPEN_EXTENDED_RTC 43173

#define AUE_OPEN_EXTENDED_RW 43178

#define AUE_OPEN_EXTENDED_RWC 43179

#define AUE_OPEN_EXTENDED_RWT 43180

#define AUE_OPEN_EXTENDED_RWTC 43181

#define AUE_OPEN_EXTENDED_W 43174

#define AUE_OPEN_EXTENDED_WC 43175

#define AUE_OPEN_EXTENDED_WT 43176

#define AUE_OPEN_EXTENDED_WTC 43177

#define AUE_OPEN_R 72

#define AUE_OPEN_RC 73

#define AUE_OPEN_RT 74

#define AUE_OPEN_RTC 75

#define AUE_OPEN_RW 80

#define AUE_OPEN_RWC 81

#define AUE_OPEN_RWT 82

#define AUE_OPEN_RWTC 83

#define AUE_OPEN_W 76

#define AUE_OPEN_WC 77

#define AUE_OPEN_WT 78

#define AUE_OPEN_WTC 79

#define AUE_OPENAT 43184

#define AUE_OPENAT_R 270

#define AUE_OPENAT_RC 271

#define AUE_OPENAT_RT 272

#define AUE_OPENAT_RTC 273

#define AUE_OPENAT_RW 278

#define AUE_OPENAT_RWC 279

#define AUE_OPENAT_RWT 280

#define AUE_OPENAT_RWTC 281

#define AUE_OPENAT_W 274

#define AUE_OPENAT_WC 275

#define AUE_OPENAT_WT 276

#define AUE_OPENAT_WTC 277

#define AUE_OPENBSM_FSTAT 43018

#define AUE_OPENBSM_REVOKE 43008

#define AUE_OSETPGRP 204

#define AUE_OSTAT 199

#define AUE_P_ONLINE 262

#define AUE_PATHCONF 71

#define AUE_PDFORK 43197

#define AUE_PDGETPID 43199

#define AUE_PDKILL 43198

#define AUE_PDWAIT 43200

#define AUE_PERSONALITY 43074

#define AUE_PF_POLICY_ADDRULE 295

#define AUE_PF_POLICY_ALGS 300

#define AUE_PF_POLICY_CLONE 297

#define AUE_PF_POLICY_DELRULE 296

#define AUE_PF_POLICY_FLIP 298

#define AUE_PF_POLICY_FLUSH 299

#define AUE_PFLOAT 156

#define AUE_PIDFORTASK 43049

#define AUE_PIPE 185

#define AUE_PIVOT_ROOT 43081

#define AUE_POLL 43012

#define AUE_PORTFS 301

#define AUE_POSIX_OPENPT 43185

#define AUE_POSIX_SPAWN 43190

#define AUE_PRCTL 43077

#define AUE_PREAD 43192

#define AUE_PREADV 0

#define AUE_PRIOCNTLSYS 212

#define AUE_PROCESSOR_BIND 263

#define AUE_PROCINFO 0

#define AUE_PROFILE 43005

#define AUE_PTHREADCANCELED 0

#define AUE_PTHREADCHDIR 0

#define AUE_PTHREADCONDBROADCAST 0

#define AUE_PTHREADCONDDESTORY 0

#define AUE_PTHREADCONDINIT 0

#define AUE_PTHREADCONDSIGNAL 0

#define AUE_PTHREADCONDWAIT 0

#define AUE_PTHREADFCHDIR 0

#define AUE_PTHREADKILL 43040

#define AUE_PTHREADMARK 0

#define AUE_PTHREADMUTEXDESTROY 0

#define AUE_PTHREADMUTEXINIT 0

#define AUE_PTHREADMUTEXTRYLOCK 0

#define AUE_PTHREADMUTEXUNLOCK 0

#define AUE_PTHREADSIGMASK 43041

#define AUE_PTRACE 43002

#define AUE_PUTMSG 216

#define AUE_PUTPMSG 218

#define AUE_PWRITE 43193

#define AUE_PWRITEV 0

#define AUE_QUOTACTL 60

#define AUE_READ 192

#define AUE_READDIR 43118

#define AUE_READL 206

#define AUE_READLINK 22

#define AUE_READLINKAT 43151

#define AUE_READV 198

#define AUE_READVL 207

#define AUE_REBOOT 20

#define AUE_RECV 189

#define AUE_RECVFROM 191

#define AUE_RECVMSG 190

#define AUE_REMOVEXATTR 0

#define AUE_RENAME 42

#define AUE_RENAMEAT 282

#define AUE_RESETSHFILE 43038

#define AUE_REVOKE 151

#define AUE_RFORK 43043

#define AUE_RFSSYS 67

#define AUE_RMDIR 48

#define AUE_RTPRIO 43082

#define AUE_SBRK 0

#define AUE_SCHED_GET_PRIORITY_MAX 43085

#define AUE_SCHED_GET_PRIORITY_MIN 43086

#define AUE_SCHED_GETPARAM 43083

#define AUE_SCHED_GETSCHEDULER 43075

#define AUE_SCHED_RR_GET_INTERVAL 43087

#define AUE_SCHED_SETPARAM 43084

#define AUE_SCHED_SETSCHEDULER 43076

#define AUE_SEARCHFS 43029

#define AUE_SELECT 0

#define AUE_SEMCLOSE 43033

#define AUE_SEMCONFIG 43031

#define AUE_SEMCTL 98

#define AUE_SEMCTL_GETALL 105

#define AUE_SEMCTL_GETNCNT 102

#define AUE_SEMCTL_GETPID 103

#define AUE_SEMCTL_GETVAL 104

#define AUE_SEMCTL_GETZCNT 106

#define AUE_SEMCTL_RMID 99

#define AUE_SEMCTL_SET 100

#define AUE_SEMCTL_SETALL 108

#define AUE_SEMCTL_SETVAL 107

#define AUE_SEMCTL_STAT 101

#define AUE_SEMDESTROY 0

#define AUE_SEMGET 109

#define AUE_SEMGETVALUE 0

#define AUE_SEMINIT 0

#define AUE_SEMOP 110

#define AUE_SEMOPEN 43032

#define AUE_SEMPOST 0

#define AUE_SEMSYS 63

#define AUE_SEMTRYWAIT 0

#define AUE_SEMUNLINK 43034

#define AUE_SEMWAIT 0

#define AUE_SEMWAITSIGNAL 0

#define AUE_SEND 187

#define AUE_SENDFILE 43054

#define AUE_SENDMSG 188

#define AUE_SENDTO 184

#define AUE_SESSION_CLOSE 44904

#define AUE_SESSION_END 44903

#define AUE_SESSION_START 44901

#define AUE_SESSION_UPDATE 44902

#define AUE_SETATTRLIST 43026

#define AUE_SETAUDIT 133

#define AUE_SETAUDIT_ADDR 266

#define AUE_SETAUID 131

#define AUE_SETDOMAINNAME 59

#define AUE_SETEGID 214

#define AUE_SETEUID 215

#define AUE_SETFSGID 43073

#define AUE_SETFSUID 43072

#define AUE_SETGID 205

#define AUE_SETGROUPS 26

#define AUE_SETHOSTNAME 29

#define AUE_SETITIMER 0

#define AUE_SETKERNSTATE 148

#define AUE_SETLCID 43160

#define AUE_SETLOGIN 43007

#define AUE_SETPGRP 27

#define AUE_SETPPRIV 289

#define AUE_SETPRIORITY 31

#define AUE_SETPRIVEXEC 43015

#define AUE_SETREGID 41

#define AUE_SETRESGID 43059

#define AUE_SETRESUID 43057

#define AUE_SETREUID 40

#define AUE_SETRLIMIT 51

#define AUE_SETSGROUPS 0

#define AUE_SETSID 43014

#define AUE_SETSOCKOPT 35

#define AUE_SETTID 0

#define AUE_SETTIDWITHPID 0

#define AUE_SETTIMEOFDAY 37

#define AUE_SETUID 200

#define AUE_SETUSERAUDIT 135

#define AUE_SETWGROUPS 0

#define AUE_SETXATTR 0

#define AUE_SHAREDREGIONCHECK 0

#define AUE_SHAREDREGIONMAP 0

#define AUE_SHMAT 96

#define AUE_SHMCTL 91

#define AUE_SHMCTL_RMID 92

#define AUE_SHMCTL_SET 93

#define AUE_SHMCTL_STAT 94

#define AUE_SHMDT 97

#define AUE_SHMGET 95

#define AUE_SHMOPEN 43035

#define AUE_SHMSYS 65

#define AUE_SHMUNLINK 43036

#define AUE_SHUTDOWN 46

#define AUE_SIGACTION 0

#define AUE_SIGALTSTACK 0

#define AUE_SIGPENDING 0

#define AUE_SIGPROCMASK 0

#define AUE_SIGRETURN 0

#define AUE_SIGSUSPEND 0

#define AUE_SIGWAIT 0

#define AUE_SOCKACCEPT 247

#define AUE_SOCKCONFIG 265

#define AUE_SOCKCONNECT 248

#define AUE_SOCKET 183

#define AUE_SOCKETPAIR 186

#define AUE_SOCKRECEIVE 250

#define AUE_SOCKSEND 249

#define AUE_SSTK 0

#define AUE_STACKSNAPSHOT 0

#define AUE_STAT 16

#define AUE_STAT64 0

#define AUE_STAT64_EXTENDED 0

#define AUE_STAT_EXTENDED 43182

#define AUE_STATFS 54

#define AUE_STATFS64 0

#define AUE_STATV 0

#define AUE_STATVFS 234

#define AUE_STIME 201

#define AUE_SWAPOFF 43045

#define AUE_SWAPON 28

#define AUE_SYMLINK 21

#define AUE_SYMLINKAT 43152

#define AUE_SYNC 0

#define AUE_SYSARCH 43100

#define AUE_SYSCALL 0

#define AUE_SYSCTL 43021

#define AUE_SYSCTL_NONADMIN 43050

#define AUE_SYSCTL_WRITE 43116

#define AUE_SYSINFO 239

#define AUE_SYSTEMBOOT 113

#define AUE_TABLE 0

#define AUE_TASKFORPID 43048

#define AUE_TASKNAMEFORPID 43161

#define AUE_TRUNCATE 43

#define AUE_UMASK 43009

#define AUE_UMASK_EXTENDED 43183

#define AUE_UMOUNT 12

#define AUE_UMOUNT2 268

#define AUE_UNDELETE 43024

#define AUE_UNLINK 6

#define AUE_UNLINKAT 286

#define AUE_UNMOUNT 56

#define AUE_UPRIV 157

#define AUE_USELIB 43055

#define AUE_UTIME 202

#define AUE_UTIMES 49

#define AUE_VFORK 25

#define AUE_VM86 43120

#define AUE_VMPRESSUREMONITOR 0

#define AUE_VPIXSYS 70

#define AUE_VTRACE 36

#define AUE_WAIT4 43060

#define AUE_WAITEVENT 0

#define AUE_WAITID 0

#define AUE_WATCHEVENT 0

#define AUE_WORKQOPEN 0

#define AUE_WORKQOPS 0

#define AUE_WRITE 195

#define AUE_WRITEL 128

#define AUE_WRITEV 196

#define AUE_WRITEVL 129

#define AUE_XMKNOD 240

#define AUE_XSTAT 235

#define AUDIT_HEADER_VERSION_OLDDARWIN 1

#define AUDIT_HEADER_VERSION_OPENBSM 11

#define AUDIT_HEADER_VERSION_OPENBSM10 10

#define AUDIT_HEADER_VERSION_OPENBSM11 11

#define AUDIT_HEADER_VERSION_SOLARIS 2

#define AUDIT_HEADER_VERSION_TSOL 4

#define AUDIT_HEADER_VERSION_TSOL25 3

#define AUDIT_MAX_GROUPS 16

#define AUP_BINARY 0

#define AUP_DECIMAL 2

#define AUP_HEX 3

#define AUP_OCTAL 1

#define AUP_STRING 4

#define AUR_BYTE 0

#define AUR_CHAR 0

#define AUR_INT 2

#define AUR_INT32 2

#define AUR_INT64 3

#define AUR_SHORT 1

#define AUT_ACE 53

#define AUT_ACL 48

#define AUT_ARG 45

#define AUT_ARG32 45

#define AUT_ARG64 113

#define AUT_ATTR 49

#define AUT_ATTR32 62

#define AUT_ATTR64 115

#define AUT_CMD 81

#define AUT_DATA 33

#define AUT_EXEC_ARGS 60

#define AUT_EXEC_ENV 61

#define AUT_EXIT 82

#define AUT_GROUPS 52

#define AUT_HEADER 20

#define AUT_HEADER32 20

#define AUT_HEADER32_EX 21

#define AUT_HEADER64 116

#define AUT_HEADER64_EX 121

#define AUT_HOST 112

#define AUT_IN_ADDR 42

#define AUT_IN_ADDR_EX 126

#define AUT_INVALID 0

#define AUT_IP 43

#define AUT_IPC 34

#define AUT_IPC_PERM 50

#define AUT_IPORT 44

#define AUT_LABEL 51

#define AUT_LIAISON 58

#define AUT_NEWGROUPS 59

#define AUT_OHEADER 18

#define AUT_OPAQUE 41

#define AUT_OTHER_FILE 17

#define AUT_OTHER_FILE32 17

#define AUT_OTHER_FILE64 120

#define AUT_PATH 35

#define AUT_PRIV 56

#define AUT_PROCESS 38

#define AUT_PROCESS32 38

#define AUT_PROCESS32_EX 123

#define AUT_PROCESS64 119

#define AUT_PROCESS64_EX 125

#define AUT_RETURN 39

#define AUT_RETURN32 39

#define AUT_RETURN64 114

#define AUT_SEQ 47

#define AUT_SOCKET 46

#define AUT_SOCKET_EX 127

#define AUT_SOCKINET128 129

#define AUT_SOCKINET32 128

#define AUT_SOCKUNIX 130

#define AUT_SUBJECT 36

#define AUT_SUBJECT32 36

#define AUT_SUBJECT32_EX 122

#define AUT_SUBJECT64 117

#define AUT_SUBJECT64_EX 124

#define AUT_TEXT 40

#define AUT_TRAILER 19

#define AUT_TRAILER_MAGIC 45317

#define AUT_UNAUTH 63

#define AUT_UPRIV 57

#define AUT_XATOM 64

#define AUT_XATPATH 37

#define AUT_XCLIENT 75

#define AUT_XCOLORMAP 68

#define AUT_XCURSOR 69

#define AUT_XFONT 70

#define AUT_XGC 71

#define AUT_XOBJ 65

#define AUT_XPIXMAP 72

#define AUT_XPROPERTY 73

#define AUT_XPROTO 66

#define AUT_XSELECT 67

#define AUT_XWINDOW 74

#define AUT_ZONENAME 96

#define PAD_FAILURE 32768

#define PAD_NOTATTR 16384

typedef struct ip ip, *Pip;

struct ip {
};

typedef struct ipc_perm ipc_perm, *Pipc_perm;

struct ipc_perm {
    uid_t uid;
    gid_t gid;
    uid_t cuid;
    gid_t cgid;
    mode_t mode;
    ushort _seq;
    key_t _key;
};

typedef struct kevent kevent, *Pkevent;

struct kevent {
    uintptr_t ident;
    int16_t filter;
    uint16_t flags;
    uint32_t fflags;
    intptr_t data;
    void * udata;
};

typedef struct sockaddr_un sockaddr_un, *Psockaddr_un;

struct sockaddr_un {
    uchar sun_len;
    sa_family_t sun_family;
    char sun_path[104];
};

typedef struct au_sdev_handle au_sdev_handle, *Pau_sdev_handle;

typedef struct __sFILE __sFILE, *P__sFILE;

typedef __darwin_off_t fpos_t;

typedef struct __sFILE FILE;

typedef uchar u_char;

typedef struct __sbuf __sbuf, *P__sbuf;

typedef struct __sFILEX __sFILEX, *P__sFILEX;

struct __sFILEX {
};

struct au_sdev_handle {
    FILE * ash_fp;
    u_char * ash_buf;
    int ash_reclen;
    int ash_bytesread;
};

struct __sbuf {
    uchar * _base;
    int _size;
};

struct __sFILE {
    uchar * _p;
    int _r;
    int _w;
    short _flags;
    short _file;
    struct __sbuf _bf;
    int _lbfsize;
    void * _cookie;
    int (* _close)(void *);
    int (* _read)(void *, char *, int);
    fpos_t (* _seek)(void *, fpos_t, int);
    int (* _write)(void *, char *, int);
    struct __sbuf _ub;
    struct __sFILEX * _extra;
    int _ur;
    uchar _ubuf[3];
    uchar _nbuf[1];
    struct __sbuf _lb;
    int _blksize;
    fpos_t _offset;
};

typedef struct au_sdev_handle au_sdev_handle_t;

typedef enum au_sdev_open_flags {
    AU_SDEVF_ALLSESSIONS=65536,
    AU_SDEVF_NONBLOCK=1
} au_sdev_open_flags;

typedef enum audit_session_flags {
    AU_SESSION_FLAG_HAS_AUTHENTICATED=16384,
    AU_SESSION_FLAG_HAS_CONSOLE_ACCESS=8192,
    AU_SESSION_FLAG_HAS_GRAPHIC_ACCESS=16,
    AU_SESSION_FLAG_HAS_TTY=32,
    AU_SESSION_FLAG_IS_INITIAL=1,
    AU_SESSION_FLAG_IS_REMOTE=4096
} audit_session_flags;

#define AUTH_DES 3

#define AUTH_NONE 0

#define AUTH_NULL 0

#define AUTH_SHORT 2

#define AUTH_UNIX 1

#define MAX_AUTH_BYTES 400

#define MAXNETNAMELEN 255

typedef struct _struct_3404 _struct_3404, *P_struct_3404;

typedef uint u_int32;

struct _struct_3404 {
    u_int32 high;
    u_int32 low;
};

typedef struct AUTH AUTH, *PAUTH;

typedef struct opaque_auth opaque_auth, *Popaque_auth;

typedef union des_block des_block, *Pdes_block;

typedef struct auth_ops auth_ops, *Pauth_ops;

typedef char * caddr_t;

union des_block {
    struct _struct_3404 key;
    char c[8];
};

struct opaque_auth {
    int oa_flavor;
    caddr_t oa_base;
    uint oa_length;
};

struct AUTH {
    struct opaque_auth ah_cred;
    struct opaque_auth ah_verf;
    union des_block ah_key;
    struct auth_ops * ah_ops;
    caddr_t ah_private;
};

struct auth_ops {
    void (* ah_nextverf)(void);
    int (* ah_marshal)(void);
    int (* ah_validate)(void);
    int (* ah_refresh)(void);
    void (* ah_destroy)(void);
};

typedef enum auth_stat {
    AUTH_OK=0,
    AUTH_REJECTEDCRED=2,
    AUTH_REJECTEDVERF=4
} auth_stat;

#define MAX_MACHINE_NAME 255

typedef struct authunix_parms authunix_parms, *Pauthunix_parms;

struct authunix_parms {
    uint aup_time;
    char * aup_machname;
    int aup_uid;
    int aup_gid;
    uint aup_len;
    int * aup_gids;
};

typedef struct short_hand_verf short_hand_verf, *Pshort_hand_verf;

struct short_hand_verf {
    struct opaque_auth new_cred;
};

#define __IPHONE_2_0 20000

#define __IPHONE_2_1 20100

#define __IPHONE_2_2 20200

#define __IPHONE_3_0 30000

#define __IPHONE_3_1 30100

#define __IPHONE_3_2 30200

#define __IPHONE_4_0 40000

#define __IPHONE_4_1 40100

#define __IPHONE_4_2 40200

#define __IPHONE_4_3 40300

#define __IPHONE_5_0 50000

#define __IPHONE_5_1 50100

#define __IPHONE_6_0 60000

#define __IPHONE_6_1 60100

#define __IPHONE_7_0 70000

#define __MAC_10_0 1000

#define __MAC_10_1 1010

#define __MAC_10_2 1020

#define __MAC_10_3 1030

#define __MAC_10_4 1040

#define __MAC_10_5 1050

#define __MAC_10_6 1060

#define __MAC_10_7 1070

#define __MAC_10_8 1080

#define __MAC_10_9 1090

#define MAC_OS_X_VERSION_10_0 1000

#define MAC_OS_X_VERSION_10_1 1010

#define MAC_OS_X_VERSION_10_2 1020

#define MAC_OS_X_VERSION_10_3 1030

#define MAC_OS_X_VERSION_10_4 1040

#define MAC_OS_X_VERSION_10_5 1050

#define MAC_OS_X_VERSION_10_6 1060

#define MAC_OS_X_VERSION_10_7 1070

#define MAC_OS_X_VERSION_10_8 1080

#define MAC_OS_X_VERSION_10_9 1090

#define MAC_OS_X_VERSION_MAX_ALLOWED 1090

#define MAC_OS_X_VERSION_MIN_REQUIRED 1040

typedef void (* dispatch_function_t)(void *);

#define BIO_BIND_NORMAL 0

#define BIO_BIND_REUSEADDR 2

#define BIO_BIND_REUSEADDR_IF_UNUSED 1

#define BIO_C_DESTROY_BIO_PAIR 139

#define BIO_C_DO_STATE_MACHINE 101

#define BIO_C_FILE_SEEK 128

#define BIO_C_FILE_TELL 133

#define BIO_C_GET_ACCEPT 124

#define BIO_C_GET_BIND_MODE 132

#define BIO_C_GET_BUF_MEM_PTR 115

#define BIO_C_GET_BUFF_NUM_LINES 116

#define BIO_C_GET_CIPHER_CTX 129

#define BIO_C_GET_CIPHER_STATUS 113

#define BIO_C_GET_CONNECT 123

#define BIO_C_GET_FD 105

#define BIO_C_GET_FILE_PTR 107

#define BIO_C_GET_MD 112

#define BIO_C_GET_MD_CTX 120

#define BIO_C_GET_PROXY_PARAM 121

#define BIO_C_GET_READ_REQUEST 141

#define BIO_C_GET_SOCKS 134

#define BIO_C_GET_SSL 110

#define BIO_C_GET_SSL_NUM_RENEGOTIATES 126

#define BIO_C_GET_WRITE_BUF_SIZE 137

#define BIO_C_GET_WRITE_GUARANTEE 140

#define BIO_C_MAKE_BIO_PAIR 138

#define BIO_C_NREAD 144

#define BIO_C_NREAD0 143

#define BIO_C_NWRITE 146

#define BIO_C_NWRITE0 145

#define BIO_C_RESET_READ_REQUEST 147

#define BIO_C_SET_ACCEPT 118

#define BIO_C_SET_BIND_MODE 131

#define BIO_C_SET_BUF_MEM 114

#define BIO_C_SET_BUF_MEM_EOF_RETURN 130

#define BIO_C_SET_BUFF_READ_DATA 122

#define BIO_C_SET_BUFF_SIZE 117

#define BIO_C_SET_CONNECT 100

#define BIO_C_SET_FD 104

#define BIO_C_SET_FILE_PTR 106

#define BIO_C_SET_FILENAME 108

#define BIO_C_SET_MD 111

#define BIO_C_SET_MD_CTX 148

#define BIO_C_SET_NBIO 102

#define BIO_C_SET_PROXY_PARAM 103

#define BIO_C_SET_SOCKS 135

#define BIO_C_SET_SSL 109

#define BIO_C_SET_SSL_RENEGOTIATE_BYTES 125

#define BIO_C_SET_SSL_RENEGOTIATE_TIMEOUT 127

#define BIO_C_SET_WRITE_BUF_SIZE 136

#define BIO_C_SHUTDOWN_WR 142

#define BIO_C_SSL_MODE 119

#define BIO_CB_CTRL 6

#define BIO_CB_FREE 1

#define BIO_CB_GETS 5

#define BIO_CB_PUTS 4

#define BIO_CB_READ 2

#define BIO_CB_RETURN 128

#define BIO_CB_WRITE 3

#define BIO_CLOSE 1

#define BIO_CONN_S_BEFORE 1

#define BIO_CONN_S_BLOCKED_CONNECT 7

#define BIO_CONN_S_CONNECT 5

#define BIO_CONN_S_CREATE_SOCKET 4

#define BIO_CONN_S_GET_IP 2

#define BIO_CONN_S_GET_PORT 3

#define BIO_CONN_S_NBIO 8

#define BIO_CONN_S_OK 6

#define BIO_CTRL_DGRAM_CONNECT 31

#define BIO_CTRL_DGRAM_GET_FALLBACK_MTU 47

#define BIO_CTRL_DGRAM_GET_MTU 41

#define BIO_CTRL_DGRAM_GET_PEER 46

#define BIO_CTRL_DGRAM_GET_RECV_TIMEOUT 34

#define BIO_CTRL_DGRAM_GET_RECV_TIMER_EXP 37

#define BIO_CTRL_DGRAM_GET_SEND_TIMEOUT 36

#define BIO_CTRL_DGRAM_GET_SEND_TIMER_EXP 38

#define BIO_CTRL_DGRAM_MTU_DISCOVER 39

#define BIO_CTRL_DGRAM_MTU_EXCEEDED 43

#define BIO_CTRL_DGRAM_QUERY_MTU 40

#define BIO_CTRL_DGRAM_SET_CONNECTED 32

#define BIO_CTRL_DGRAM_SET_MTU 42

#define BIO_CTRL_DGRAM_SET_NEXT_TIMEOUT 45

#define BIO_CTRL_DGRAM_SET_PEER 44

#define BIO_CTRL_DGRAM_SET_RECV_TIMEOUT 33

#define BIO_CTRL_DGRAM_SET_SEND_TIMEOUT 35

#define BIO_CTRL_DUP 12

#define BIO_CTRL_EOF 2

#define BIO_CTRL_FLUSH 11

#define BIO_CTRL_GET 5

#define BIO_CTRL_GET_CALLBACK 15

#define BIO_CTRL_GET_CLOSE 8

#define BIO_CTRL_INFO 3

#define BIO_CTRL_PENDING 10

#define BIO_CTRL_POP 7

#define BIO_CTRL_PUSH 6

#define BIO_CTRL_RESET 1

#define BIO_CTRL_SET 4

#define BIO_CTRL_SET_CALLBACK 14

#define BIO_CTRL_SET_CLOSE 9

#define BIO_CTRL_SET_FILENAME 30

#define BIO_CTRL_WPENDING 13

#define BIO_F_ACPT_STATE 100

#define BIO_F_BIO_ACCEPT 101

#define BIO_F_BIO_BER_GET_HEADER 102

#define BIO_F_BIO_CALLBACK_CTRL 131

#define BIO_F_BIO_CTRL 103

#define BIO_F_BIO_GET_ACCEPT_SOCKET 105

#define BIO_F_BIO_GET_HOST_IP 106

#define BIO_F_BIO_GET_PORT 107

#define BIO_F_BIO_GETHOSTBYNAME 120

#define BIO_F_BIO_GETS 104

#define BIO_F_BIO_MAKE_PAIR 121

#define BIO_F_BIO_NEW 108

#define BIO_F_BIO_NEW_FILE 109

#define BIO_F_BIO_NEW_MEM_BUF 126

#define BIO_F_BIO_NREAD 123

#define BIO_F_BIO_NREAD0 124

#define BIO_F_BIO_NWRITE 125

#define BIO_F_BIO_NWRITE0 122

#define BIO_F_BIO_PUTS 110

#define BIO_F_BIO_READ 111

#define BIO_F_BIO_SOCK_INIT 112

#define BIO_F_BIO_WRITE 113

#define BIO_F_BUFFER_CTRL 114

#define BIO_F_CONN_CTRL 127

#define BIO_F_CONN_STATE 115

#define BIO_F_FILE_CTRL 116

#define BIO_F_FILE_READ 130

#define BIO_F_LINEBUFFER_CTRL 129

#define BIO_F_MEM_READ 128

#define BIO_F_MEM_WRITE 117

#define BIO_F_SSL_NEW 118

#define BIO_F_WSASTARTUP 119

#define BIO_FLAGS_BASE64_NO_NL 256

#define BIO_FLAGS_IO_SPECIAL 4

#define BIO_FLAGS_MEM_RDONLY 512

#define BIO_FLAGS_READ 1

#define BIO_FLAGS_RWS 7

#define BIO_FLAGS_SHOULD_RETRY 8

#define BIO_FLAGS_UPLINK 0

#define BIO_FLAGS_WRITE 2

#define BIO_FP_APPEND 8

#define BIO_FP_READ 2

#define BIO_FP_TEXT 16

#define BIO_FP_WRITE 4

#define BIO_GHBN_CTRL_CACHE_SIZE 3

#define BIO_GHBN_CTRL_FLUSH 5

#define BIO_GHBN_CTRL_GET_ENTRY 4

#define BIO_GHBN_CTRL_HITS 1

#define BIO_GHBN_CTRL_MISSES 2

#define BIO_NOCLOSE 0

#define BIO_R_ACCEPT_ERROR 100

#define BIO_R_BAD_FOPEN_MODE 101

#define BIO_R_BAD_HOSTNAME_LOOKUP 102

#define BIO_R_BROKEN_PIPE 124

#define BIO_R_CONNECT_ERROR 103

#define BIO_R_EOF_ON_MEMORY_BIO 127

#define BIO_R_ERROR_SETTING_NBIO 104

#define BIO_R_ERROR_SETTING_NBIO_ON_ACCEPT_SOCKET 106

#define BIO_R_ERROR_SETTING_NBIO_ON_ACCEPTED_SOCKET 105

#define BIO_R_GETHOSTBYNAME_ADDR_IS_NOT_AF_INET 107

#define BIO_R_IN_USE 123

#define BIO_R_INVALID_ARGUMENT 125

#define BIO_R_INVALID_IP_ADDRESS 108

#define BIO_R_KEEPALIVE 109

#define BIO_R_NBIO_CONNECT_ERROR 110

#define BIO_R_NO_ACCEPT_PORT_SPECIFIED 111

#define BIO_R_NO_HOSTNAME_SPECIFIED 112

#define BIO_R_NO_PORT_DEFINED 113

#define BIO_R_NO_PORT_SPECIFIED 114

#define BIO_R_NO_SUCH_FILE 128

#define BIO_R_NULL_PARAMETER 115

#define BIO_R_TAG_MISMATCH 116

#define BIO_R_UNABLE_TO_BIND_SOCKET 117

#define BIO_R_UNABLE_TO_CREATE_SOCKET 118

#define BIO_R_UNABLE_TO_LISTEN_SOCKET 119

#define BIO_R_UNINITIALIZED 120

#define BIO_R_UNSUPPORTED_METHOD 121

#define BIO_R_WRITE_TO_READ_ONLY_BIO 126

#define BIO_R_WSASTARTUP 122

#define BIO_RR_ACCEPT 3

#define BIO_RR_CONNECT 2

#define BIO_RR_SSL_X509_LOOKUP 1

#define BIO_TYPE_ACCEPT 1293

#define BIO_TYPE_BASE64 523

#define BIO_TYPE_BER 530

#define BIO_TYPE_BIO 1043

#define BIO_TYPE_BUFFER 521

#define BIO_TYPE_CIPHER 522

#define BIO_TYPE_COMP 535

#define BIO_TYPE_CONNECT 1292

#define BIO_TYPE_DESCRIPTOR 256

#define BIO_TYPE_DGRAM 1301

#define BIO_TYPE_FD 1284

#define BIO_TYPE_FILE 1026

#define BIO_TYPE_FILTER 512

#define BIO_TYPE_LINEBUFFER 532

#define BIO_TYPE_MD 520

#define BIO_TYPE_MEM 1025

#define BIO_TYPE_NBIO_TEST 528

#define BIO_TYPE_NONE 0

#define BIO_TYPE_NULL 1030

#define BIO_TYPE_NULL_FILTER 529

#define BIO_TYPE_PROXY_CLIENT 526

#define BIO_TYPE_PROXY_SERVER 527

#define BIO_TYPE_SOCKET 1285

#define BIO_TYPE_SOURCE_SINK 1024

#define BIO_TYPE_SSL 519

typedef struct bio_f_buffer_ctx_struct bio_f_buffer_ctx_struct, *Pbio_f_buffer_ctx_struct;

typedef struct bio_f_buffer_ctx_struct BIO_F_BUFFER_CTX;

struct bio_f_buffer_ctx_struct {
    int ibuf_size;
    int obuf_size;
    char * ibuf;
    int ibuf_len;
    int ibuf_off;
    char * obuf;
    int obuf_len;
    int obuf_off;
};

typedef struct hostent hostent, *Phostent;

struct hostent {
    char * h_name;
    char * * h_aliases;
    int h_addrtype;
    int h_length;
    char * * h_addr_list;
};

#define BF_BLOCK 8

#define BF_DECRYPT 0

#define BF_ENCRYPT 1

#define BF_ROUNDS 16

typedef struct bf_key_st bf_key_st, *Pbf_key_st;

typedef struct bf_key_st BF_KEY;

struct bf_key_st {
    uint P[18];
    uint S[1024];
};

#define BN_BLINDING_NO_RECREATE 2

#define BN_BLINDING_NO_UPDATE 1

#define BN_DEFAULT_BITS 1280

#define BN_F_BN_BLINDING_CONVERT_EX 100

#define BN_F_BN_BLINDING_CREATE_PARAM 128

#define BN_F_BN_BLINDING_INVERT_EX 101

#define BN_F_BN_BLINDING_NEW 102

#define BN_F_BN_BLINDING_UPDATE 103

#define BN_F_BN_BN2DEC 104

#define BN_F_BN_BN2HEX 105

#define BN_F_BN_CTX_GET 116

#define BN_F_BN_CTX_NEW 106

#define BN_F_BN_CTX_START 129

#define BN_F_BN_DIV 107

#define BN_F_BN_DIV_NO_BRANCH 138

#define BN_F_BN_DIV_RECP 130

#define BN_F_BN_EXP 123

#define BN_F_BN_EXPAND2 108

#define BN_F_BN_EXPAND_INTERNAL 120

#define BN_F_BN_GF2M_MOD 131

#define BN_F_BN_GF2M_MOD_EXP 132

#define BN_F_BN_GF2M_MOD_MUL 133

#define BN_F_BN_GF2M_MOD_SOLVE_QUAD 134

#define BN_F_BN_GF2M_MOD_SOLVE_QUAD_ARR 135

#define BN_F_BN_GF2M_MOD_SQR 136

#define BN_F_BN_GF2M_MOD_SQRT 137

#define BN_F_BN_MOD_EXP2_MONT 118

#define BN_F_BN_MOD_EXP_MONT 109

#define BN_F_BN_MOD_EXP_MONT_CONSTTIME 124

#define BN_F_BN_MOD_EXP_MONT_WORD 117

#define BN_F_BN_MOD_EXP_RECP 125

#define BN_F_BN_MOD_EXP_SIMPLE 126

#define BN_F_BN_MOD_INVERSE 110

#define BN_F_BN_MOD_INVERSE_NO_BRANCH 139

#define BN_F_BN_MOD_LSHIFT_QUICK 119

#define BN_F_BN_MOD_MUL_RECIPROCAL 111

#define BN_F_BN_MOD_SQRT 121

#define BN_F_BN_MPI2BN 112

#define BN_F_BN_NEW 113

#define BN_F_BN_RAND 114

#define BN_F_BN_RAND_RANGE 122

#define BN_F_BN_USUB 115

#define BN_F_BNRAND 127

#define BN_FLG_CONSTTIME 4

#define BN_FLG_EXP_CONSTTIME 4

#define BN_FLG_FREE 32768

#define BN_FLG_MALLOCED 1

#define BN_FLG_STATIC_DATA 2

#define BN_prime_checks 0

#define BN_R_ARG2_LT_ARG3 100

#define BN_R_BAD_RECIPROCAL 101

#define BN_R_BIGNUM_TOO_LONG 114

#define BN_R_CALLED_WITH_EVEN_MODULUS 102

#define BN_R_DIV_BY_ZERO 103

#define BN_R_ENCODING_ERROR 104

#define BN_R_EXPAND_ON_STATIC_BIGNUM_DATA 105

#define BN_R_INPUT_NOT_REDUCED 110

#define BN_R_INVALID_LENGTH 106

#define BN_R_INVALID_RANGE 115

#define BN_R_NO_INVERSE 108

#define BN_R_NO_SOLUTION 116

#define BN_R_NOT_A_SQUARE 111

#define BN_R_NOT_INITIALIZED 107

#define BN_R_P_IS_NOT_PRIME 112

#define BN_R_TOO_MANY_ITERATIONS 113

#define BN_R_TOO_MANY_TEMPORARY_VARIABLES 109

typedef union _union_3048 _union_3048, *P_union_3048;

typedef struct bn_gencb_st bn_gencb_st, *Pbn_gencb_st;

typedef struct bn_gencb_st BN_GENCB;

union _union_3048 {
    void (* cb_1)(int, int, void *);
    int (* cb_2)(int, int, BN_GENCB *);
};

struct bn_gencb_st {
    uint ver;
    void * arg;
    union _union_3048 cb;
};

typedef uint boolean_t;

#define BOOT_LINE_LENGTH 1024

#define BOOT_STRING_LEN 1024

#define FB_TEXT_MODE 2

#define GRAPHICS_MODE 1

#define kBootArgsEfiMode32 32

#define kBootArgsEfiMode64 64

#define kBootArgsFlagBlack 4

#define kBootArgsFlagHiDPI 2

#define kBootArgsFlagRebootOnPanic 1

#define kBootArgsRevision 0

#define kBootArgsRevision2_0 0

#define kBootArgsVersion 2

#define kBootArgsVersion1 1

#define kBootArgsVersion2 2

typedef struct boot_args boot_args, *Pboot_args;

typedef struct Boot_Video Boot_Video, *PBoot_Video;

struct Boot_Video {
    uint32_t v_baseAddr;
    uint32_t v_display;
    uint32_t v_rowBytes;
    uint32_t v_width;
    uint32_t v_height;
    uint32_t v_depth;
};

struct boot_args {
    uint16_t Revision;
    uint16_t Version;
    uint8_t efiMode;
    uint8_t debugMode;
    uint16_t flags;
    char CommandLine[1024];
    uint32_t MemoryMap;
    uint32_t MemoryMapSize;
    uint32_t MemoryMapDescriptorSize;
    uint32_t MemoryMapDescriptorVersion;
    struct Boot_Video Video;
    uint32_t deviceTreeP;
    uint32_t deviceTreeLength;
    uint32_t kaddr;
    uint32_t ksize;
    uint32_t efiRuntimeServicesPageStart;
    uint32_t efiRuntimeServicesPageCount;
    uint64_t efiRuntimeServicesVirtualPageStart;
    uint32_t efiSystemTable;
    uint32_t kslide;
    uint32_t performanceDataStart;
    uint32_t performanceDataSize;
    uint32_t keyStoreDataStart;
    uint32_t keyStoreDataSize;
    uint64_t bootMemStart;
    uint64_t bootMemSize;
    uint64_t PhysicalMemorySize;
    uint64_t FSBFrequency;
    uint64_t pciConfigSpaceBaseAddress;
    uint32_t pciConfigSpaceStartBusNumber;
    uint32_t pciConfigSpaceEndBusNumber;
    uint32_t __reserved4[730];
};

typedef struct boot_icon_element boot_icon_element, *Pboot_icon_element;

struct boot_icon_element {
    uint width;
    uint height;
    int y_offset_from_center;
    uint data_size;
    uint __reserved1[4];
    uchar[0] data;
};

typedef struct EfiMemoryRange EfiMemoryRange, *PEfiMemoryRange;

struct EfiMemoryRange {
    uint32_t Type;
    uint32_t Pad;
    uint64_t PhysicalStart;
    uint64_t VirtualStart;
    uint64_t NumberOfPages;
    uint64_t Attribute;
};

typedef enum enum_3316 {
    kBootDriverTypeInvalid=0,
    kBootDriverTypeKEXT=1,
    kBootDriverTypeMKEXT=2
} enum_3316;

typedef enum enum_3317 {
    kEfiACPIMemoryNVS=10,
    kEfiACPIReclaimMemory=9,
    kEfiBootServicesCode=3,
    kEfiBootServicesData=4,
    kEfiConventionalMemory=7,
    kEfiLoaderCode=1,
    kEfiLoaderData=2,
    kEfiMaxMemoryType=14,
    kEfiMemoryMappedIO=11,
    kEfiMemoryMappedIOPortSpace=12,
    kEfiPalCode=13,
    kEfiReservedMemoryType=0,
    kEfiRuntimeServicesCode=5,
    kEfiRuntimeServicesData=6,
    kEfiUnusableMemory=8
} enum_3317;

#define BOOTP_MAX_BACKOFF 65535

#define BOOTP_MIN_BACKOFF 2047

#define BOOTP_RETRY 6

#define BOOTREPLY 2

#define BOOTREQUEST 1

#define BPOP_ERROR 3

#define BPOP_OK 0

#define BPOP_QUERY 1

#define BPOP_QUERY_NE 2

#define IPPORT_BOOTPC 68

#define IPPORT_BOOTPS 67

#define NVMAXTEXT 55

#define VF_HELP 2

#define VF_PCBOOT 1

typedef struct _struct_2602 _struct_2602, *P_struct_2602;

struct _struct_2602 {
    u_char NV1_opcode;
    u_char NV1_xid;
    u_char NV1_text[55];
    u_char NV1_null;
};

typedef union _union_2601 _union_2601, *P_union_2601;

union _union_2601 {
    u_char NV0[58];
    struct _struct_2602 NV1;
};

typedef struct bootp bootp, *Pbootp;

typedef struct in_addr in_addr, *Pin_addr;

struct in_addr {
    in_addr_t s_addr;
};

struct bootp {
    u_char bp_op;
    u_char bp_htype;
    u_char bp_hlen;
    u_char bp_hops;
    u_int32_t bp_xid;
    u_short bp_secs;
    u_short bp_unused;
    struct in_addr bp_ciaddr;
    struct in_addr bp_yiaddr;
    struct in_addr bp_siaddr;
    struct in_addr bp_giaddr;
    u_char bp_chaddr[16];
    u_char bp_sname[64];
    u_char bp_file[128];
    u_char bp_vend[64];
};

typedef struct bootp_packet bootp_packet, *Pbootp_packet;

typedef struct udphdr udphdr, *Pudphdr;

struct udphdr {
    u_short uh_sport;
    u_short uh_dport;
    u_short uh_ulen;
    u_short uh_sum;
};

struct bootp_packet {
    struct ip bp_ip;
    struct udphdr bp_udp;
    struct bootp bp_bootp;
};

typedef struct nextvend nextvend, *Pnextvend;

struct nextvend {
    u_char nv_magic[4];
    u_char nv_version;
    union _union_2601 nv_U;
};

typedef struct vend vend, *Pvend;

struct vend {
    u_char v_magic[4];
    u_int32_t v_flags;
    u_char v_unused[56];
};

#define BOOTPARAMPROC_GETFILE 2

#define BOOTPARAMPROC_WHOAMI 1

#define BOOTPARAMPROG 100026

#define BOOTPARAMVERS 1

#define IP_ADDR_TYPE 1

#define MAX_FILEID 32

#define MAX_PATH_LEN 1024

#define RPCGEN_VERSION 199506

typedef union _union_3487 _union_3487, *P_union_3487;

typedef struct ip_addr_t ip_addr_t, *Pip_addr_t;

struct ip_addr_t {
    char net;
    char host;
    char lh;
    char impno;
};

union _union_3487 {
    struct ip_addr_t ip_addr;
};

typedef struct bp_address bp_address, *Pbp_address;

struct bp_address {
    int address_type;
    union _union_3487 bp_address_u;
};

typedef char * bp_fileid_t;

typedef struct bp_getfile_arg bp_getfile_arg, *Pbp_getfile_arg;

typedef char * bp_machine_name_t;

struct bp_getfile_arg {
    bp_machine_name_t client_name;
    bp_fileid_t file_id;
};

typedef struct bp_getfile_res bp_getfile_res, *Pbp_getfile_res;

typedef char * bp_path_t;

struct bp_getfile_res {
    bp_machine_name_t server_name;
    struct bp_address server_address;
    bp_path_t server_path;
};

typedef struct bp_whoami_arg bp_whoami_arg, *Pbp_whoami_arg;

struct bp_whoami_arg {
    struct bp_address client_address;
};

typedef struct bp_whoami_res bp_whoami_res, *Pbp_whoami_res;

struct bp_whoami_res {
    bp_machine_name_t client_name;
    bp_machine_name_t domain_name;
    struct bp_address router_address;
};

typedef struct bootparamsent bootparamsent, *Pbootparamsent;

struct bootparamsent {
    char * bp_name;
    char * * bp_bootparams;
};

#define BOOTSTRAP_BAD_COUNT 1104

#define BOOTSTRAP_MAX_CMD_LEN 512

#define BOOTSTRAP_MAX_LOOKUP_COUNT 20

#define BOOTSTRAP_MAX_NAME_LEN 128

#define BOOTSTRAP_NAME_IN_USE 1101

#define BOOTSTRAP_NO_CHILDREN 1106

#define BOOTSTRAP_NO_MEMORY 1105

#define BOOTSTRAP_NOT_PRIVILEGED 1100

#define BOOTSTRAP_SERVICE_ACTIVE 1103

#define BOOTSTRAP_STATUS_ACTIVE 1

#define BOOTSTRAP_STATUS_INACTIVE 0

#define BOOTSTRAP_STATUS_ON_DEMAND 2

#define BOOTSTRAP_SUCCESS 0

#define BOOTSTRAP_UNKNOWN_SERVICE 1102

typedef boolean_t * bool_array_t;

typedef uint bootstrap_property_t;

typedef bootstrap_property_t * bootstrap_property_array_t;

typedef int bootstrap_status_t;

typedef bootstrap_status_t * bootstrap_status_array_t;

typedef char cmd_t[512];

typedef char name_t[128];

typedef name_t * name_array_t;

#define BPF_A 16

#define BPF_ABS 32

#define BPF_ADD 0

#define BPF_ALU 4

#define BPF_AND 80

#define BPF_B 16

#define BPF_DIV 48

#define BPF_H 8

#define BPF_IMM 0

#define BPF_IND 64

#define BPF_JA 0

#define BPF_JEQ 16

#define BPF_JGE 48

#define BPF_JGT 32

#define BPF_JMP 5

#define BPF_JSET 64

#define BPF_K 0

#define BPF_LD 0

#define BPF_LDX 1

#define BPF_LEN 128

#define BPF_LSH 96

#define BPF_MEM 96

#define BPF_MEMWORDS 16

#define BPF_MISC 7

#define BPF_MSH 160

#define BPF_MUL 32

#define BPF_NEG 128

#define BPF_OR 64

#define BPF_RELEASE 199606

#define BPF_RET 6

#define BPF_RSH 112

#define BPF_ST 2

#define BPF_STX 3

#define BPF_SUB 16

#define BPF_TAX 0

#define BPF_TXA 128

#define BPF_W 0

#define BPF_X 8

#define DLT_A429 184

#define DLT_A653_ICM 185

#define DLT_AIRONET_HEADER 120

#define DLT_AOS 222

#define DLT_APPLE_IP_OVER_IEEE1394 138

#define DLT_ARCNET 7

#define DLT_ARCNET_LINUX 129

#define DLT_ATM_CLIP 19

#define DLT_ATM_RFC1483 11

#define DLT_AURORA 126

#define DLT_AX25 3

#define DLT_AX25_KISS 202

#define DLT_BACNET_MS_TP 165

#define DLT_BLUETOOTH_HCI_H4 187

#define DLT_BLUETOOTH_HCI_H4_WITH_PHDR 201

#define DLT_C_HDLC 104

#define DLT_C_HDLC_WITH_DIR 205

#define DLT_CAN20B 190

#define DLT_CAN_SOCKETCAN 227

#define DLT_CHAOS 5

#define DLT_CHDLC 104

#define DLT_CISCO_IOS 118

#define DLT_CLASS_NETBSD_RAWAF 35913728

#define DLT_DBUS 231

#define DLT_DECT 221

#define DLT_DOCSIS 143

#define DLT_DVB_CI 235

#define DLT_ECONET 115

#define DLT_EN10MB 1

#define DLT_EN3MB 2

#define DLT_ENC 109

#define DLT_ERF 197

#define DLT_ERF_ETH 175

#define DLT_ERF_POS 176

#define DLT_FC_2 224

#define DLT_FC_2_WITH_FRAME_DELIMS 225

#define DLT_FDDI 10

#define DLT_FLEXRAY 210

#define DLT_FRELAY 107

#define DLT_FRELAY_WITH_DIR 206

#define DLT_GCOM_SERIAL 173

#define DLT_GCOM_T1E1 172

#define DLT_GPF_F 171

#define DLT_GPF_T 170

#define DLT_GPRS_LLC 169

#define DLT_GSMTAP_ABIS 218

#define DLT_GSMTAP_UM 217

#define DLT_HHDLC 121

#define DLT_IBM_SN 146

#define DLT_IBM_SP 145

#define DLT_IEEE802 6

#define DLT_IEEE802_11 105

#define DLT_IEEE802_11_RADIO 127

#define DLT_IEEE802_11_RADIO_AVS 163

#define DLT_IEEE802_15_4 195

#define DLT_IEEE802_15_4_LINUX 191

#define DLT_IEEE802_15_4_NOFCS 230

#define DLT_IEEE802_15_4_NONASK_PHY 215

#define DLT_IEEE802_16_MAC_CPS 188

#define DLT_IEEE802_16_MAC_CPS_RADIO 193

#define DLT_IP_OVER_FC 122

#define DLT_IPFILTER 116

#define DLT_IPMB 199

#define DLT_IPMB_LINUX 209

#define DLT_IPNET 226

#define DLT_IPOIB 242

#define DLT_IPV4 228

#define DLT_IPV6 229

#define DLT_JUNIPER_ATM1 137

#define DLT_JUNIPER_ATM2 135

#define DLT_JUNIPER_ATM_CEMIC 238

#define DLT_JUNIPER_CHDLC 181

#define DLT_JUNIPER_ES 132

#define DLT_JUNIPER_ETHER 178

#define DLT_JUNIPER_FIBRECHANNEL 234

#define DLT_JUNIPER_FRELAY 180

#define DLT_JUNIPER_GGSN 133

#define DLT_JUNIPER_ISM 194

#define DLT_JUNIPER_MFR 134

#define DLT_JUNIPER_MLFR 131

#define DLT_JUNIPER_MLPPP 130

#define DLT_JUNIPER_MONITOR 164

#define DLT_JUNIPER_PIC_PEER 174

#define DLT_JUNIPER_PPP 179

#define DLT_JUNIPER_PPPOE 167

#define DLT_JUNIPER_PPPOE_ATM 168

#define DLT_JUNIPER_SERVICES 136

#define DLT_JUNIPER_SRX_E2E 233

#define DLT_JUNIPER_ST 200

#define DLT_JUNIPER_VP 183

#define DLT_JUNIPER_VS 232

#define DLT_LAPB_WITH_DIR 207

#define DLT_LAPD 203

#define DLT_LIN 212

#define DLT_LINUX_EVDEV 216

#define DLT_LINUX_IRDA 144

#define DLT_LINUX_LAPD 177

#define DLT_LINUX_PPP_WITHDIRECTION 166

#define DLT_LINUX_SLL 113

#define DLT_LOOP 108

#define DLT_LTALK 114

#define DLT_MATCHING_MAX 246

#define DLT_MATCHING_MIN 104

#define DLT_MFR 182

#define DLT_MOST 211

#define DLT_MPEG_2_TS 243

#define DLT_MPLS 219

#define DLT_MTP2 140

#define DLT_MTP2_WITH_PHDR 139

#define DLT_MTP3 141

#define DLT_MUX27010 236

#define DLT_NETANALYZER 240

#define DLT_NETANALYZER_TRANSPARENT 241

#define DLT_NFC_LLCP 245

#define DLT_NFLOG 239

#define DLT_NG40 244

#define DLT_NULL 0

#define DLT_PCAPNG 150

#define DLT_PCI_EXP 125

#define DLT_PFLOG 117

#define DLT_PFSYNC 18

#define DLT_PKTAP 149

#define DLT_PPI 192

#define DLT_PPP 9

#define DLT_PPP_BSDOS 16

#define DLT_PPP_ETHER 51

#define DLT_PPP_PPPD 166

#define DLT_PPP_SERIAL 50

#define DLT_PPP_WITH_DIR 204

#define DLT_PPP_WITH_DIRECTION 166

#define DLT_PRISM_HEADER 119

#define DLT_PRONET 4

#define DLT_RAIF1 198

#define DLT_RAW 12

#define DLT_REDBACK_SMARTEDGE 32

#define DLT_RIO 124

#define DLT_SCCP 142

#define DLT_SITA 196

#define DLT_SLIP 8

#define DLT_SLIP_BSDOS 15

#define DLT_STANAG_5066_D_PDU 237

#define DLT_SUNATM 123

#define DLT_SYMANTEC_FIREWALL 99

#define DLT_TZSP 128

#define DLT_USB 186

#define DLT_USB_LINUX 189

#define DLT_USB_LINUX_MMAPPED 220

#define DLT_USER0 147

#define DLT_USER1 148

#define DLT_USER10 157

#define DLT_USER11 158

#define DLT_USER12 159

#define DLT_USER13 160

#define DLT_USER14 161

#define DLT_USER15 162

#define DLT_USER2 149

#define DLT_USER3 150

#define DLT_USER4 151

#define DLT_USER5 152

#define DLT_USER6 153

#define DLT_USER7 154

#define DLT_USER8 155

#define DLT_USER9 156

#define DLT_WIHART 223

#define DLT_X2E_SERIAL 213

#define DLT_X2E_XORAYA 214

typedef struct bpf_insn bpf_insn, *Pbpf_insn;

typedef uint u_int;

typedef u_int bpf_u_int32;

struct bpf_insn {
    u_short code;
    u_char jt;
    u_char jf;
    bpf_u_int32 k;
};

typedef int bpf_int32;

typedef struct bpf_program bpf_program, *Pbpf_program;

struct bpf_program {
    u_int bf_len;
    struct bpf_insn * bf_insns;
};

#define B_ASYNC 2

#define B_CLUSTER 64

#define B_DELWRI 8

#define B_ENCRYPTED_IO 16384

#define B_FUA 1024

#define B_IOSTREAMING 4096

#define B_LOCKED 16

#define B_META 256

#define B_NOCACHE 4

#define B_PAGEIO 128

#define B_PASSIVE 2048

#define B_PHYS 32

#define B_RAW 512

#define B_READ 1

#define B_STATICCONTENT 32768

#define B_THROTTLED_IO 8192

#define B_WRITE 0

#define BLK_META 16

#define BLK_ONLYVALID 2147483648

#define BLK_READ 1

#define BLK_WRITE 2

#define BUF_CLAIMED 2

#define BUF_CLAIMED_DONE 3

#define BUF_INVALIDATE_LOCKED 4

#define BUF_NOTIFY_BUSY 16

#define BUF_RETURNED 0

#define BUF_RETURNED_DONE 1

#define BUF_SCAN_CLEAN 4

#define BUF_SCAN_DIRTY 8

#define BUF_SKIP_LOCKED 2

#define BUF_SKIP_META 2

#define BUF_SKIP_NONLOCKED 1

#define BUF_WAIT 1

#define BUF_WRITE_DATA 1

#define BUF_F_BUF_MEM_GROW 100

#define BUF_F_BUF_MEM_GROW_CLEAN 105

#define BUF_F_BUF_MEM_NEW 101

#define BUF_F_BUF_MEMDUP 103

#define BUF_F_BUF_STRDUP 102

#define BUF_F_BUF_STRNDUP 104

typedef union dconv dconv, *Pdconv;

typedef ulonglong NXSwappedDouble;

union dconv {
    double number;
    NXSwappedDouble sd;
};

typedef union fconv fconv, *Pfconv;

typedef ulong NXSwappedFloat;

union fconv {
    float number;
    NXSwappedFloat sf;
};

#define BZ_CONFIG_ERROR -9

#define BZ_DATA_ERROR -4

#define BZ_DATA_ERROR_MAGIC -5

#define BZ_FINISH 2

#define BZ_FINISH_OK 3

#define BZ_FLUSH 1

#define BZ_FLUSH_OK 2

#define BZ_IO_ERROR -6

#define BZ_MAX_UNUSED 5000

#define BZ_MEM_ERROR -3

#define BZ_OK 0

#define BZ_OUTBUFF_FULL -8

#define BZ_PARAM_ERROR -2

#define BZ_RUN 0

#define BZ_RUN_OK 1

#define BZ_SEQUENCE_ERROR -1

#define BZ_STREAM_END 4

#define BZ_UNEXPECTED_EOF -7

typedef struct bz_stream bz_stream, *Pbz_stream;

struct bz_stream {
    char * next_in;
    uint avail_in;
    uint total_in_lo32;
    uint total_in_hi32;
    char * next_out;
    uint avail_out;
    uint total_out_lo32;
    uint total_out_hi32;
    void * state;
    void * (* bzalloc)(void *, int, int);
    void (* bzfree)(void *, void *);
    void * opaque;
};

typedef void BZFILE;

#define CACHE_ATTRIBUTES_VERSION_1 1

#define CACHE_ATTRIBUTES_VERSION_2 2

typedef struct cache_attributes_s cache_attributes_s, *Pcache_attributes_s;

typedef uintptr_t (* cache_key_hash_cb_t)(void *, void *);

typedef int BOOL;

typedef BOOL (* cache_key_is_equal_cb_t)(void *, void *, void *);

typedef void (* cache_key_retain_cb_t)(void *, void * *, void *);

typedef void (* cache_release_cb_t)(void *, void *);

typedef BOOL (* cache_value_make_nonpurgeable_cb_t)(void *, void *);

typedef void (* cache_value_make_purgeable_cb_t)(void *, void *);

typedef void (* cache_value_retain_cb_t)(void *, void *);

struct cache_attributes_s {
    uint32_t version;
    cache_key_hash_cb_t key_hash_cb;
    cache_key_is_equal_cb_t key_is_equal_cb;
    cache_key_retain_cb_t key_retain_cb;
    cache_release_cb_t key_release_cb;
    cache_release_cb_t value_release_cb;
    cache_value_make_nonpurgeable_cb_t value_make_nonpurgeable_cb;
    cache_value_make_purgeable_cb_t value_make_purgeable_cb;
    void * user_data;
    cache_value_retain_cb_t value_retain_cb;
};

typedef struct cache_attributes_s cache_attributes_t;

typedef size_t cache_cost_t;

typedef struct cache_s cache_s, *Pcache_s;

struct cache_s {
};

typedef struct cache_s cache_t;

#define CAST_BLOCK 8

#define CAST_DECRYPT 0

#define CAST_ENCRYPT 1

#define CAST_KEY_LENGTH 16

typedef struct cast_key_st cast_key_st, *Pcast_key_st;

typedef struct cast_key_st CAST_KEY;

struct cast_key_st {
    ulong data[32];
    int short_key;
};

typedef struct _xmlCatalog _xmlCatalog, *P_xmlCatalog;

struct _xmlCatalog {
};

typedef enum enum_2061 {
    XML_CATA_PREFER_NONE=0,
    XML_CATA_PREFER_PUBLIC=1,
    XML_CATA_PREFER_SYSTEM=2
} enum_2061;

typedef enum enum_2062 {
    XML_CATA_ALLOW_ALL=3,
    XML_CATA_ALLOW_DOCUMENT=2,
    XML_CATA_ALLOW_GLOBAL=1,
    XML_CATA_ALLOW_NONE=0
} enum_2062;

typedef struct _xmlCatalog xmlCatalog;

typedef enum enum_2062 xmlCatalogAllow;

typedef enum enum_2061 xmlCatalogPrefer;

typedef xmlCatalog * xmlCatalogPtr;

#define __DARWIN_64_BIT_INO_T 1

#define __DARWIN_C_ANSI 4096

#define __DARWIN_C_FULL 900000

#define __DARWIN_C_LEVEL 900000

#define __DARWIN_NON_CANCELABLE 0

#define __DARWIN_ONLY_64_BIT_INO_T 0

#define __DARWIN_ONLY_UNIX_CONFORMANCE 1

#define __DARWIN_ONLY_VERS_1050 0

#define __DARWIN_UNIX03 1

#define __DARWIN_VERS_1050 1

#define _DARWIN_FEATURE_64_BIT_INODE 1

#define _DARWIN_FEATURE_ONLY_UNIX_CONFORMANCE 1

#define _DARWIN_FEATURE_UNIX_CONFORMANCE 3

typedef enum enum_1401 {
    CHECKINT_NO_ERROR=0,
    CHECKINT_OVERFLOW_ERROR=1,
    CHECKINT_TYPE_ERROR=2
} enum_1401;

typedef struct _xmlChLRange _xmlChLRange, *P_xmlChLRange;

struct _xmlChLRange {
    uint low;
    uint high;
};

typedef struct _xmlChRangeGroup _xmlChRangeGroup, *P_xmlChRangeGroup;

typedef struct _xmlChSRange _xmlChSRange, *P_xmlChSRange;

typedef struct _xmlChSRange xmlChSRange;

typedef struct _xmlChLRange xmlChLRange;

struct _xmlChRangeGroup {
    int nbShortRange;
    int nbLongRange;
    xmlChSRange * shortRange;
    xmlChLRange * longRange;
};

struct _xmlChSRange {
    ushort low;
    ushort high;
};

typedef xmlChLRange * xmlChLRangePtr;

typedef struct _xmlChRangeGroup xmlChRangeGroup;

typedef xmlChRangeGroup * xmlChRangeGroupPtr;

typedef xmlChSRange * xmlChSRangePtr;

#define CLGET_RETRY_TIMEOUT 5

#define CLGET_SERVER_ADDR 3

#define CLGET_TIMEOUT 2

#define CLSET_RETRY_TIMEOUT 4

#define CLSET_TIMEOUT 1

#define NULLPROC 0

#define RPCSMALLMSGSIZE 400

#define RPCTEST_NULL_BATCH_PROC 3

#define RPCTEST_NULL_PROC 2

#define RPCTEST_PROGRAM 1

#define RPCTEST_VERSION 1

#define UDPMSGSIZE 8800

typedef struct _struct_3415 _struct_3415, *P_struct_3415;

struct _struct_3415 {
    uint low;
    uint high;
};

typedef struct _struct_3416 _struct_3416, *P_struct_3416;

struct _struct_3416 {
    int s1;
    int s2;
};

typedef union _union_3414 _union_3414, *P_union_3414;

union _union_3414 {
    int RE_errno;
    enum auth_stat RE_why;
    struct _struct_3415 RE_vers;
    struct _struct_3416 RE_lb;
};

typedef struct CLIENT CLIENT, *PCLIENT;

typedef struct clnt_ops clnt_ops, *Pclnt_ops;

typedef enum clnt_stat {
    RPC_AUTHERROR=7,
    RPC_CANTDECODEARGS=11,
    RPC_CANTDECODERES=2,
    RPC_CANTENCODEARGS=1,
    RPC_CANTRECV=4,
    RPC_CANTSEND=3,
    RPC_FAILED=16,
    RPC_PMAPFAILURE=14,
    RPC_PROGNOTREGISTERED=15,
    RPC_PROGVERSMISMATCH=9,
    RPC_SUCCESS=0,
    RPC_SYSTEMERROR=12,
    RPC_TIMEDOUT=5,
    RPC_UNKNOWNHOST=13,
    RPC_UNKNOWNPROTO=17,
    RPC_VERSMISMATCH=6
} clnt_stat;

typedef struct __rpc_xdr __rpc_xdr, *P__rpc_xdr;

typedef struct __rpc_xdr XDR;

typedef boolean_t (* xdrproc_t)(XDR *, void *, uint);

typedef struct rpc_err rpc_err, *Prpc_err;

typedef enum xdr_op {
    XDR_DECODE=1,
    XDR_ENCODE=0,
    XDR_FREE=2
} xdr_op;

typedef struct xdr_ops xdr_ops, *Pxdr_ops;

struct __rpc_xdr {
    enum xdr_op x_op;
    struct xdr_ops * x_ops;
    char * x_public;
    void * x_private;
    char * x_base;
    uint x_handy;
};

struct xdr_ops {
    boolean_t (* x_getlong)(struct __rpc_xdr *, int *);
    boolean_t (* x_putlong)(struct __rpc_xdr *, int *);
    boolean_t (* x_getbytes)(struct __rpc_xdr *, char *, uint);
    boolean_t (* x_putbytes)(struct __rpc_xdr *, char *, uint);
    uint (* x_getpostn)(struct __rpc_xdr *);
    boolean_t (* x_setpostn)(struct __rpc_xdr *, uint);
    int32_t * (* x_inline)(struct __rpc_xdr *, uint);
    void (* x_destroy)(struct __rpc_xdr *);
    boolean_t (* x_control)(struct __rpc_xdr *, int, void *);
};

struct clnt_ops {
    clnt_stat (* cl_call)(struct CLIENT *, uint, xdrproc_t, void *, xdrproc_t, void *, struct timeval);
    void (* cl_abort)(void);
    void (* cl_geterr)(struct CLIENT *, struct rpc_err *);
    boolean_t (* cl_freeres)(struct CLIENT *, xdrproc_t, void *);
    void (* cl_destroy)(struct CLIENT *);
    boolean_t (* cl_control)(struct CLIENT *, int, char *);
};

struct CLIENT {
    struct AUTH * cl_auth;
    struct clnt_ops * cl_ops;
    caddr_t cl_private;
};

struct rpc_err {
    enum clnt_stat re_status;
    union _union_3414 ru;
};

typedef struct rpc_createerr rpc_createerr, *Prpc_createerr;

struct rpc_createerr {
    enum clnt_stat cf_stat;
    struct rpc_err cf_error;
};

#define clock_MSG_COUNT 3

typedef struct __Reply__clock_alarm_t __Reply__clock_alarm_t, *P__Reply__clock_alarm_t;

typedef struct mach_msg_header_t mach_msg_header_t, *Pmach_msg_header_t;

typedef struct NDR_record_t NDR_record_t, *PNDR_record_t;

typedef int kern_return_t;

typedef uint mach_msg_bits_t;

typedef __darwin_natural_t natural_t;

typedef natural_t mach_msg_size_t;

typedef integer_t mach_msg_id_t;

struct mach_msg_header_t {
    mach_msg_bits_t msgh_bits;
    mach_msg_size_t msgh_size;
    mach_port_t msgh_remote_port;
    mach_port_t msgh_local_port;
    mach_msg_size_t msgh_reserved;
    mach_msg_id_t msgh_id;
};

struct NDR_record_t {
    uchar mig_vers;
    uchar if_vers;
    uchar reserved1;
    uchar mig_encoding;
    uchar int_rep;
    uchar char_rep;
    uchar float_rep;
    uchar reserved2;
};

struct __Reply__clock_alarm_t {
    struct mach_msg_header_t Head;
    struct NDR_record_t NDR;
    kern_return_t RetCode;
};

typedef struct __Reply__clock_get_attributes_t __Reply__clock_get_attributes_t, *P__Reply__clock_get_attributes_t;

typedef natural_t mach_msg_type_number_t;

struct __Reply__clock_get_attributes_t {
    struct mach_msg_header_t Head;
    struct NDR_record_t NDR;
    kern_return_t RetCode;
    mach_msg_type_number_t clock_attrCnt;
    int clock_attr[1];
};

typedef struct __Reply__clock_get_time_t __Reply__clock_get_time_t, *P__Reply__clock_get_time_t;

typedef struct mach_timespec mach_timespec, *Pmach_timespec;

typedef struct mach_timespec mach_timespec_t;

typedef int clock_res_t;

struct mach_timespec {
    uint tv_sec;
    clock_res_t tv_nsec;
};

struct __Reply__clock_get_time_t {
    struct mach_msg_header_t Head;
    struct NDR_record_t NDR;
    kern_return_t RetCode;
    mach_timespec_t cur_time;
};

typedef union __ReplyUnion__clock_subsystem __ReplyUnion__clock_subsystem, *P__ReplyUnion__clock_subsystem;

union __ReplyUnion__clock_subsystem {
    struct __Reply__clock_get_time_t Reply_clock_get_time;
    struct __Reply__clock_get_attributes_t Reply_clock_get_attributes;
    struct __Reply__clock_alarm_t Reply_clock_alarm;
};

typedef struct __Request__clock_alarm_t __Request__clock_alarm_t, *P__Request__clock_alarm_t;

typedef struct mach_msg_body_t mach_msg_body_t, *Pmach_msg_body_t;

typedef struct mach_msg_port_descriptor_t mach_msg_port_descriptor_t, *Pmach_msg_port_descriptor_t;

typedef int alarm_type_t;

typedef union anon__struct_619_bitfield_1 anon__struct_619_bitfield_1, *Panon__struct_619_bitfield_1;

typedef union anon__struct_619_bitfield_2 anon__struct_619_bitfield_2, *Panon__struct_619_bitfield_2;

typedef union anon__struct_619_bitfield_3 anon__struct_619_bitfield_3, *Panon__struct_619_bitfield_3;

typedef uint mach_msg_type_name_t;

typedef uint mach_msg_descriptor_type_t;

struct mach_msg_body_t {
    mach_msg_size_t msgh_descriptor_count;
};

union anon__struct_619_bitfield_2 {
    mach_msg_type_name_t disposition:8; /* : bits 0-7 */
};

union anon__struct_619_bitfield_1 {
    uint pad2:16; /* : bits 0-15 */
};

union anon__struct_619_bitfield_3 {
    mach_msg_descriptor_type_t type:8; /* : bits 0-7 */
};

struct mach_msg_port_descriptor_t {
    mach_port_t name;
    mach_msg_size_t pad1;
    union anon__struct_619_bitfield_1 field_0x8;
    union anon__struct_619_bitfield_2 field_0xc;
    union anon__struct_619_bitfield_3 field_0x10;
};

struct __Request__clock_alarm_t {
    struct mach_msg_header_t Head;
    struct mach_msg_body_t msgh_body;
    struct mach_msg_port_descriptor_t alarm_port;
    struct NDR_record_t NDR;
    alarm_type_t alarm_type;
    mach_timespec_t alarm_time;
};

typedef struct __Request__clock_get_attributes_t __Request__clock_get_attributes_t, *P__Request__clock_get_attributes_t;

typedef int clock_flavor_t;

struct __Request__clock_get_attributes_t {
    struct mach_msg_header_t Head;
    struct NDR_record_t NDR;
    clock_flavor_t flavor;
    mach_msg_type_number_t clock_attrCnt;
};

typedef struct __Request__clock_get_time_t __Request__clock_get_time_t, *P__Request__clock_get_time_t;

struct __Request__clock_get_time_t {
    struct mach_msg_header_t Head;
};

typedef union __RequestUnion__clock_subsystem __RequestUnion__clock_subsystem, *P__RequestUnion__clock_subsystem;

union __RequestUnion__clock_subsystem {
    struct __Request__clock_get_time_t Request_clock_get_time;
    struct __Request__clock_get_attributes_t Request_clock_get_attributes;
    struct __Request__clock_alarm_t Request_clock_alarm;
};

#define clock_priv_MSG_COUNT 2

typedef struct __Reply__clock_set_attributes_t __Reply__clock_set_attributes_t, *P__Reply__clock_set_attributes_t;

struct __Reply__clock_set_attributes_t {
    struct mach_msg_header_t Head;
    struct NDR_record_t NDR;
    kern_return_t RetCode;
};

typedef struct __Reply__clock_set_time_t __Reply__clock_set_time_t, *P__Reply__clock_set_time_t;

struct __Reply__clock_set_time_t {
    struct mach_msg_header_t Head;
    struct NDR_record_t NDR;
    kern_return_t RetCode;
};

typedef union __ReplyUnion__clock_priv_subsystem __ReplyUnion__clock_priv_subsystem, *P__ReplyUnion__clock_priv_subsystem;

union __ReplyUnion__clock_priv_subsystem {
    struct __Reply__clock_set_time_t Reply_clock_set_time;
    struct __Reply__clock_set_attributes_t Reply_clock_set_attributes;
};

typedef struct __Request__clock_set_attributes_t __Request__clock_set_attributes_t, *P__Request__clock_set_attributes_t;

struct __Request__clock_set_attributes_t {
    struct mach_msg_header_t Head;
    struct NDR_record_t NDR;
    clock_flavor_t flavor;
    mach_msg_type_number_t clock_attrCnt;
    int clock_attr[1];
};

typedef struct __Request__clock_set_time_t __Request__clock_set_time_t, *P__Request__clock_set_time_t;

struct __Request__clock_set_time_t {
    struct mach_msg_header_t Head;
    struct NDR_record_t NDR;
    mach_timespec_t new_time;
};

typedef union __RequestUnion__clock_priv_subsystem __RequestUnion__clock_priv_subsystem, *P__RequestUnion__clock_priv_subsystem;

union __RequestUnion__clock_priv_subsystem {
    struct __Request__clock_set_time_t Request_clock_set_time;
    struct __Request__clock_set_attributes_t Request_clock_set_attributes;
};

#define clock_reply_MSG_COUNT 1

typedef struct __Reply__clock_alarm_reply_t __Reply__clock_alarm_reply_t, *P__Reply__clock_alarm_reply_t;

struct __Reply__clock_alarm_reply_t {
    struct mach_msg_header_t Head;
    struct NDR_record_t NDR;
    kern_return_t RetCode;
};

typedef union __ReplyUnion__clock_reply_subsystem __ReplyUnion__clock_reply_subsystem, *P__ReplyUnion__clock_reply_subsystem;

union __ReplyUnion__clock_reply_subsystem {
    struct __Reply__clock_alarm_reply_t Reply_clock_alarm_reply;
};

typedef struct __Request__clock_alarm_reply_t __Request__clock_alarm_reply_t, *P__Request__clock_alarm_reply_t;

struct __Request__clock_alarm_reply_t {
    struct mach_msg_header_t Head;
    struct NDR_record_t NDR;
    kern_return_t alarm_code;
    alarm_type_t alarm_type;
    mach_timespec_t alarm_time;
};

typedef union __RequestUnion__clock_reply_subsystem __RequestUnion__clock_reply_subsystem, *P__RequestUnion__clock_reply_subsystem;

union __RequestUnion__clock_reply_subsystem {
    struct __Request__clock_alarm_reply_t Request_clock_alarm_reply;
};

#define ALRMTYPE 255

#define CALENDAR_CLOCK 1

#define CLOCK_ALARM_CURRES 3

#define CLOCK_ALARM_MAXRES 5

#define CLOCK_ALARM_MINRES 4

#define CLOCK_GET_TIME_RES 1

#define REALTIME_CLOCK 0

#define SYSTEM_CLOCK 0

#define TIME_ABSOLUTE 0

#define TIME_RELATIVE 1

typedef int * clock_attr_t;

typedef int clock_id_t;

typedef int sleep_type_t;

typedef long errcode_t;

typedef void (* com_err_handler_t)(char *, errcode_t, char *, va_list);

typedef struct error_table error_table, *Perror_table;

struct error_table {
    char * * messages;
    int32_t base;
    int32_t count;
};

typedef struct _CCCryptor _CCCryptor, *P_CCCryptor;

struct _CCCryptor {
};

typedef uint32_t CCAlgorithm;

typedef struct _CCCryptor * CCCryptorRef;

typedef int32_t CCCryptorStatus;

typedef uint32_t CCMode;

typedef uint32_t CCModeOptions;

typedef uint32_t CCOperation;

typedef uint32_t CCOptions;

typedef uint32_t CCPadding;

typedef enum enum_501 {
    kCCAlignmentError=4,
    kCCBufferTooSmall=2,
    kCCDecodeError=5,
    kCCMemoryFailure=3,
    kCCOverflow=7,
    kCCParamError=1,
    kCCSuccess=0,
    kCCUnimplemented=6
} enum_501;

typedef enum enum_502 {
    kCCDecrypt=1,
    kCCEncrypt=0
} enum_502;

typedef enum enum_503 {
    kCCAlgorithm3DES=2,
    kCCAlgorithmAES=0,
    kCCAlgorithmAES128=0,
    kCCAlgorithmBlowfish=6,
    kCCAlgorithmCAST=3,
    kCCAlgorithmDES=1,
    kCCAlgorithmRC2=5,
    kCCAlgorithmRC4=4
} enum_503;

typedef enum enum_504 {
    kCCOptionECBMode=2,
    kCCOptionPKCS7Padding=1
} enum_504;

typedef enum enum_505 {
    kCCKeySize3DES=24,
    kCCKeySizeAES128=16,
    kCCKeySizeAES192=24,
    kCCKeySizeAES256=32,
    kCCKeySizeDES=8,
    kCCKeySizeMaxBlowfish=56,
    kCCKeySizeMaxCAST=16,
    kCCKeySizeMaxRC2=128,
    kCCKeySizeMaxRC4=512,
    kCCKeySizeMinBlowfish=8,
    kCCKeySizeMinCAST=5,
    kCCKeySizeMinRC2=1,
    kCCKeySizeMinRC4=1
} enum_505;

typedef enum enum_506 {
    kCCBlockSize3DES=8,
    kCCBlockSizeAES128=16,
    kCCBlockSizeBlowfish=8,
    kCCBlockSizeCAST=8,
    kCCBlockSizeDES=8,
    kCCBlockSizeRC2=8
} enum_506;

typedef enum enum_507 {
    kCCContextSize3DES=496,
    kCCContextSizeAES128=404,
    kCCContextSizeCAST=240,
    kCCContextSizeDES=240,
    kCCContextSizeRC4=1072
} enum_507;

typedef enum enum_508 {
    kCCModeCBC=2,
    kCCModeCFB=3,
    kCCModeCFB8=10,
    kCCModeCTR=4,
    kCCModeECB=1,
    kCCModeF8=5,
    kCCModeLRW=6,
    kCCModeOFB=7,
    kCCModeRC4=9,
    kCCModeXTS=8
} enum_508;

typedef enum enum_509 {
    ccNoPadding=0,
    ccPKCS7Padding=1
} enum_509;

typedef enum enum_510 {
    kCCModeOptionCTR_BE=2,
    kCCModeOptionCTR_LE=1
} enum_510;

#define CC_MD2_BLOCK_BYTES 64

#define CC_MD2_DIGEST_LENGTH 16

#define CC_MD4_BLOCK_BYTES 64

#define CC_MD4_DIGEST_LENGTH 16

#define CC_MD5_BLOCK_BYTES 64

#define CC_MD5_DIGEST_LENGTH 16

#define CC_SHA1_BLOCK_BYTES 64

#define CC_SHA1_DIGEST_LENGTH 20

#define CC_SHA224_BLOCK_BYTES 64

#define CC_SHA224_DIGEST_LENGTH 28

#define CC_SHA256_BLOCK_BYTES 64

#define CC_SHA256_DIGEST_LENGTH 32

#define CC_SHA384_BLOCK_BYTES 128

#define CC_SHA384_DIGEST_LENGTH 48

#define CC_SHA512_BLOCK_BYTES 128

#define CC_SHA512_DIGEST_LENGTH 64

typedef uint32_t CC_LONG;

typedef uint64_t CC_LONG64;

typedef struct CC_MD2state_st CC_MD2state_st, *PCC_MD2state_st;

typedef struct CC_MD2state_st CC_MD2_CTX;

struct CC_MD2state_st {
    int num;
    uchar data[16];
    CC_LONG cksm[64];
    CC_LONG state[64];
};

typedef struct CC_MD4state_st CC_MD4state_st, *PCC_MD4state_st;

typedef struct CC_MD4state_st CC_MD4_CTX;

struct CC_MD4state_st {
    CC_LONG A;
    CC_LONG B;
    CC_LONG C;
    CC_LONG D;
    CC_LONG Nl;
    CC_LONG Nh;
    CC_LONG data[64];
    uint32_t num;
};

typedef struct CC_MD5state_st CC_MD5state_st, *PCC_MD5state_st;

typedef struct CC_MD5state_st CC_MD5_CTX;

struct CC_MD5state_st {
    CC_LONG A;
    CC_LONG B;
    CC_LONG C;
    CC_LONG D;
    CC_LONG Nl;
    CC_LONG Nh;
    CC_LONG data[64];
    int num;
};

typedef struct CC_SHA1state_st CC_SHA1state_st, *PCC_SHA1state_st;

typedef struct CC_SHA1state_st CC_SHA1_CTX;

struct CC_SHA1state_st {
    CC_LONG h0;
    CC_LONG h1;
    CC_LONG h2;
    CC_LONG h3;
    CC_LONG h4;
    CC_LONG Nl;
    CC_LONG Nh;
    CC_LONG data[64];
    int num;
};

typedef struct CC_SHA256state_st CC_SHA256state_st, *PCC_SHA256state_st;

typedef struct CC_SHA256state_st CC_SHA256_CTX;

struct CC_SHA256state_st {
    CC_LONG count[2];
    CC_LONG hash[8];
    CC_LONG wbuf[16];
};

typedef struct CC_SHA512state_st CC_SHA512state_st, *PCC_SHA512state_st;

typedef struct CC_SHA512state_st CC_SHA512_CTX;

struct CC_SHA512state_st {
    CC_LONG64 count[2];
    CC_LONG64 hash[8];
    CC_LONG64 wbuf[16];
};

#define CC_HMAC_CONTEXT_SIZE 96

typedef uint32_t CCHmacAlgorithm;

typedef struct CCHmacContext CCHmacContext, *PCCHmacContext;

struct CCHmacContext {
    uint32_t ctx[96];
};

typedef enum enum_517 {
    kCCHmacAlgMD5=1,
    kCCHmacAlgSHA1=0,
    kCCHmacAlgSHA224=5,
    kCCHmacAlgSHA256=2,
    kCCHmacAlgSHA384=3,
    kCCHmacAlgSHA512=4
} enum_517;

typedef uint32_t CCPBKDFAlgorithm;

typedef uint32_t CCPseudoRandomAlgorithm;

typedef enum enum_519 {
    kCCPBKDF2=2
} enum_519;

typedef enum enum_520 {
    kCCPRFHmacAlgSHA1=1,
    kCCPRFHmacAlgSHA224=2,
    kCCPRFHmacAlgSHA256=3,
    kCCPRFHmacAlgSHA384=4,
    kCCPRFHmacAlgSHA512=5
} enum_520;

typedef uint32_t CCWrappingAlgorithm;

typedef enum enum_521 {
    kCCWRAPAES=1
} enum_521;

#define UNWIND_SECOND_LEVEL_COMPRESSED 3

#define UNWIND_SECOND_LEVEL_REGULAR 2

#define UNWIND_SECTION_VERSION 1

typedef uint32_t compact_unwind_encoding_t;

typedef enum enum_2148 {
    UNWIND_HAS_LSDA=1073741824,
    UNWIND_IS_NOT_FUNCTION_START=-2147483648,
    UNWIND_PERSONALITY_MASK=805306368
} enum_2148;

typedef enum enum_2149 {
    UNWIND_X86_DWARF_SECTION_OFFSET=16777215,
    UNWIND_X86_EBP_FRAME_OFFSET=16711680,
    UNWIND_X86_EBP_FRAME_REGISTERS=32767,
    UNWIND_X86_FRAMELESS_STACK_ADJUST=57344,
    UNWIND_X86_FRAMELESS_STACK_REG_COUNT=7168,
    UNWIND_X86_FRAMELESS_STACK_REG_PERMUTATION=1023,
    UNWIND_X86_FRAMELESS_STACK_SIZE=16711680,
    UNWIND_X86_MODE_DWARF=67108864,
    UNWIND_X86_MODE_EBP_FRAME=16777216,
    UNWIND_X86_MODE_MASK=251658240,
    UNWIND_X86_MODE_STACK_IMMD=33554432,
    UNWIND_X86_MODE_STACK_IND=50331648
} enum_2149;

typedef enum enum_2150 {
    UNWIND_X86_REG_EBP=6,
    UNWIND_X86_REG_EBX=1,
    UNWIND_X86_REG_ECX=2,
    UNWIND_X86_REG_EDI=4,
    UNWIND_X86_REG_EDX=3,
    UNWIND_X86_REG_ESI=5,
    UNWIND_X86_REG_NONE=0
} enum_2150;

typedef enum enum_2151 {
    UNWIND_X86_64_DWARF_SECTION_OFFSET=16777215,
    UNWIND_X86_64_FRAMELESS_STACK_ADJUST=57344,
    UNWIND_X86_64_FRAMELESS_STACK_REG_COUNT=7168,
    UNWIND_X86_64_FRAMELESS_STACK_REG_PERMUTATION=1023,
    UNWIND_X86_64_FRAMELESS_STACK_SIZE=16711680,
    UNWIND_X86_64_MODE_DWARF=67108864,
    UNWIND_X86_64_MODE_MASK=251658240,
    UNWIND_X86_64_MODE_RBP_FRAME=16777216,
    UNWIND_X86_64_MODE_STACK_IMMD=33554432,
    UNWIND_X86_64_MODE_STACK_IND=50331648,
    UNWIND_X86_64_RBP_FRAME_OFFSET=16711680,
    UNWIND_X86_64_RBP_FRAME_REGISTERS=32767
} enum_2151;

typedef enum enum_2152 {
    UNWIND_X86_64_REG_NONE=0,
    UNWIND_X86_64_REG_R12=2,
    UNWIND_X86_64_REG_R13=3,
    UNWIND_X86_64_REG_R14=4,
    UNWIND_X86_64_REG_R15=5,
    UNWIND_X86_64_REG_RBP=6,
    UNWIND_X86_64_REG_RBX=1
} enum_2152;

typedef struct unwind_info_compressed_second_level_page_header unwind_info_compressed_second_level_page_header, *Punwind_info_compressed_second_level_page_header;

struct unwind_info_compressed_second_level_page_header {
    uint32_t kind;
    uint16_t entryPageOffset;
    uint16_t entryCount;
    uint16_t encodingsPageOffset;
    uint16_t encodingsCount;
};

typedef struct unwind_info_regular_second_level_entry unwind_info_regular_second_level_entry, *Punwind_info_regular_second_level_entry;

struct unwind_info_regular_second_level_entry {
    uint32_t functionOffset;
    compact_unwind_encoding_t encoding;
};

typedef struct unwind_info_regular_second_level_page_header unwind_info_regular_second_level_page_header, *Punwind_info_regular_second_level_page_header;

struct unwind_info_regular_second_level_page_header {
    uint32_t kind;
    uint16_t entryPageOffset;
    uint16_t entryCount;
};

typedef struct unwind_info_section_header unwind_info_section_header, *Punwind_info_section_header;

struct unwind_info_section_header {
    uint32_t version;
    uint32_t commonEncodingsArraySectionOffset;
    uint32_t commonEncodingsArrayCount;
    uint32_t personalityArraySectionOffset;
    uint32_t personalityArrayCount;
    uint32_t indexSectionOffset;
    uint32_t indexCount;
};

typedef struct unwind_info_section_header_index_entry unwind_info_section_header_index_entry, *Punwind_info_section_header_index_entry;

struct unwind_info_section_header_index_entry {
    uint32_t functionOffset;
    uint32_t secondLevelPagesSectionOffset;
    uint32_t lsdaIndexArraySectionOffset;
};

typedef struct unwind_info_section_header_lsda_index_entry unwind_info_section_header_lsda_index_entry, *Punwind_info_section_header_lsda_index_entry;

struct unwind_info_section_header_lsda_index_entry {
    uint32_t functionOffset;
    uint32_t lsdaOffset;
};

#define ACCESSOR_CALLS_ARE_FUNCTIONS 0

#define CALL_NOT_IN_CARBON 1

#define CFMSYSTEMCALLS 0

#define CGLUESUPPORTED 0

#define FUNCTION_DECLSPEC 0

#define FUNCTION_PASCAL 0

#define FUNCTION_WIN32CC 0

#define GENERATING68K 0

#define GENERATINGCFM 0

#define GENERATINGPOWERPC 0

#define MIXEDMODE_CALLS_ARE_FUNCTIONS 0

#define OLDROUTINELOCATIONS 0

#define OLDROUTINENAMES 0

#define OPAQUE_TOOLBOX_STRUCTS 0

#define PRAGMA_ALIGN_SUPPORTED 1

#define PRAGMA_ENUM_ALWAYSINT 0

#define PRAGMA_ENUM_OPTIONS 0

#define PRAGMA_ENUM_PACK 0

#define PRAGMA_IMPORT 0

#define PRAGMA_IMPORT_SUPPORTED 0

#define PRAGMA_ONCE 0

#define PRAGMA_STRUCT_ALIGN 1

#define PRAGMA_STRUCT_PACK 0

#define PRAGMA_STRUCT_PACKPUSH 0

#define TARGET_API_MAC_OS8 0

#define TARGET_CARBON 0

#define TYPE_BOOL 0

#define TYPE_EXTENDED 0

#define TYPE_LONGDOUBLE_IS_DOUBLE 0

#define TYPE_LONGLONG 1

#define UNIVERSAL_INTERFACES_VERSION 1024

#define _SYS_CONF_H_ 1

#define CONF_F_CONF_DUMP_FP 104

#define CONF_F_CONF_LOAD 100

#define CONF_F_CONF_LOAD_BIO 102

#define CONF_F_CONF_LOAD_FP 103

#define CONF_F_CONF_MODULES_LOAD 116

#define CONF_F_DEF_LOAD 120

#define CONF_F_DEF_LOAD_BIO 121

#define CONF_F_MODULE_INIT 115

#define CONF_F_MODULE_LOAD_DSO 117

#define CONF_F_MODULE_RUN 118

#define CONF_F_NCONF_DUMP_BIO 105

#define CONF_F_NCONF_DUMP_FP 106

#define CONF_F_NCONF_GET_NUMBER 107

#define CONF_F_NCONF_GET_NUMBER_E 112

#define CONF_F_NCONF_GET_SECTION 108

#define CONF_F_NCONF_GET_STRING 109

#define CONF_F_NCONF_LOAD 113

#define CONF_F_NCONF_LOAD_BIO 110

#define CONF_F_NCONF_LOAD_FP 114

#define CONF_F_NCONF_NEW 111

#define CONF_F_STR_COPY 101

#define CONF_MFLAGS_DEFAULT_SECTION 32

#define CONF_MFLAGS_IGNORE_ERRORS 1

#define CONF_MFLAGS_IGNORE_MISSING_FILE 16

#define CONF_MFLAGS_IGNORE_RETURN_CODES 2

#define CONF_MFLAGS_NO_DSO 8

#define CONF_MFLAGS_SILENT 4

#define CONF_R_ERROR_LOADING_DSO 110

#define CONF_R_MISSING_CLOSE_SQUARE_BRACKET 100

#define CONF_R_MISSING_EQUAL_SIGN 101

#define CONF_R_MISSING_FINISH_FUNCTION 111

#define CONF_R_MISSING_INIT_FUNCTION 112

#define CONF_R_MODULE_INITIALIZATION_ERROR 109

#define CONF_R_NO_CLOSE_BRACE 102

#define CONF_R_NO_CONF 105

#define CONF_R_NO_CONF_OR_ENVIRONMENT_VARIABLE 106

#define CONF_R_NO_SECTION 107

#define CONF_R_NO_SUCH_FILE 114

#define CONF_R_NO_VALUE 108

#define CONF_R_UNABLE_TO_CREATE_NEW_SECTION 103

#define CONF_R_UNKNOWN_MODULE_NAME 113

#define CONF_R_VARIABLE_HAS_NO_VALUE 104

#define D_DISK 2

#define D_TAPE 1

#define D_TTY 3

typedef struct buf buf, *Pbuf;

struct buf {
};

typedef struct conf_imodule_st conf_imodule_st, *Pconf_imodule_st;

typedef struct conf_imodule_st CONF_IMODULE;

typedef void (conf_finish_func)(CONF_IMODULE *);

struct conf_imodule_st {
};

typedef struct conf_st conf_st, *Pconf_st;

typedef struct conf_st CONF;

typedef int (conf_init_func)(CONF_IMODULE *, CONF *);

typedef struct conf_method_st conf_method_st, *Pconf_method_st;

typedef struct conf_method_st CONF_METHOD;

typedef struct lhash_st lhash_st, *Plhash_st;

typedef struct lhash_st LHASH;

typedef struct lhash_node_st lhash_node_st, *Plhash_node_st;

typedef struct lhash_node_st LHASH_NODE;

typedef int (* LHASH_COMP_FN_TYPE)(void *, void *);

typedef ulong (* LHASH_HASH_FN_TYPE)(void *);

struct lhash_st {
    LHASH_NODE * * b;
    LHASH_COMP_FN_TYPE comp;
    LHASH_HASH_FN_TYPE hash;
    uint num_nodes;
    uint num_alloc_nodes;
    uint p;
    uint pmax;
    ulong up_load;
    ulong down_load;
    ulong num_items;
    ulong num_expands;
    ulong num_expand_reallocs;
    ulong num_contracts;
    ulong num_contract_reallocs;
    ulong num_hash_calls;
    ulong num_comp_calls;
    ulong num_insert;
    ulong num_replace;
    ulong num_delete;
    ulong num_no_delete;
    ulong num_retrieve;
    ulong num_retrieve_miss;
    ulong num_hash_comps;
    int error;
};

struct lhash_node_st {
    void * data;
    struct lhash_node_st * next;
    ulong hash;
};

struct conf_st {
    CONF_METHOD * meth;
    void * meth_data;
    LHASH * data;
};

struct conf_method_st {
    char * name;
    CONF * (* create)(CONF_METHOD *);
    int (* init)(CONF *);
    int (* destroy)(CONF *);
    int (* destroy_data)(CONF *);
    int (* load_bio)(CONF *, BIO *, long *);
    int (* dump)(CONF *, BIO *);
    int (* is_number)(CONF *, char);
    int (* to_int)(CONF *, char);
    int (* load)(CONF *, char *, long *);
};

typedef struct conf_module_st conf_module_st, *Pconf_module_st;

typedef struct conf_module_st CONF_MODULE;

struct conf_module_st {
};

typedef struct CONF_VALUE CONF_VALUE, *PCONF_VALUE;

struct CONF_VALUE {
    char * section;
    char * name;
    char * value;
};

typedef struct tty tty, *Ptty;

struct tty {
};

typedef struct uio uio, *Puio;

struct uio {
};

#define COPYFILE_ACL 1

#define COPYFILE_ALL 15

#define COPYFILE_CHECK 65536

#define COPYFILE_CONTINUE 0

#define COPYFILE_COPY_DATA 4

#define COPYFILE_COPY_XATTR 5

#define COPYFILE_DATA 8

#define COPYFILE_ERR 3

#define COPYFILE_EXCL 131072

#define COPYFILE_FINISH 2

#define COPYFILE_METADATA 7

#define COPYFILE_MOVE 1048576

#define COPYFILE_NOFOLLOW 786432

#define COPYFILE_NOFOLLOW_DST 524288

#define COPYFILE_NOFOLLOW_SRC 262144

#define COPYFILE_PACK 4194304

#define COPYFILE_PROGRESS 4

#define COPYFILE_QUIT 2

#define COPYFILE_RECURSE_DIR 2

#define COPYFILE_RECURSE_DIR_CLEANUP 3

#define COPYFILE_RECURSE_ERROR 0

#define COPYFILE_RECURSE_FILE 1

#define COPYFILE_RECURSIVE 32768

#define COPYFILE_SECURITY 3

#define COPYFILE_SKIP 1

#define COPYFILE_START 1

#define COPYFILE_STAT 2

#define COPYFILE_STATE_COPIED 8

#define COPYFILE_STATE_DST_FD 3

#define COPYFILE_STATE_DST_FILENAME 4

#define COPYFILE_STATE_QUARANTINE 5

#define COPYFILE_STATE_SRC_FD 1

#define COPYFILE_STATE_SRC_FILENAME 2

#define COPYFILE_STATE_STATUS_CB 6

#define COPYFILE_STATE_STATUS_CTX 7

#define COPYFILE_STATE_XATTRNAME 9

#define COPYFILE_UNLINK 2097152

#define COPYFILE_UNPACK 8388608

#define COPYFILE_VERBOSE 1073741824

#define COPYFILE_XATTR 4

typedef struct _copyfile_state _copyfile_state, *P_copyfile_state;

struct _copyfile_state {
};

typedef struct _copyfile_state * copyfile_state_t;

typedef int (* copyfile_callback_t)(int, int, copyfile_state_t, char *, char *, void *);

typedef uint32_t copyfile_flags_t;

#define C_IRGRP 32

#define C_IROTH 4

#define C_IRUSR 256

#define C_ISBLK 24576

#define C_ISCHR 8192

#define C_ISCTG 36864

#define C_ISDIR 16384

#define C_ISFIFO 4096

#define C_ISGID 1024

#define C_ISLNK 40960

#define C_ISREG 32768

#define C_ISSOCK 49152

#define C_ISUID 2048

#define C_ISVTX 512

#define C_IWGRP 16

#define C_IWOTH 2

#define C_IWUSR 128

#define C_IXGRP 8

#define C_IXOTH 1

#define C_IXUSR 64

#define CRYPTO_EX_INDEX_BIO 0

#define CRYPTO_EX_INDEX_COMP 14

#define CRYPTO_EX_INDEX_DH 8

#define CRYPTO_EX_INDEX_DSA 7

#define CRYPTO_EX_INDEX_ECDH 13

#define CRYPTO_EX_INDEX_ECDSA 12

#define CRYPTO_EX_INDEX_ENGINE 9

#define CRYPTO_EX_INDEX_RSA 6

#define CRYPTO_EX_INDEX_SSL 1

#define CRYPTO_EX_INDEX_SSL_CTX 2

#define CRYPTO_EX_INDEX_SSL_SESSION 3

#define CRYPTO_EX_INDEX_STORE 15

#define CRYPTO_EX_INDEX_UI 11

#define CRYPTO_EX_INDEX_USER 100

#define CRYPTO_EX_INDEX_X509 10

#define CRYPTO_EX_INDEX_X509_STORE 4

#define CRYPTO_EX_INDEX_X509_STORE_CTX 5

#define CRYPTO_F_CRYPTO_GET_EX_NEW_INDEX 100

#define CRYPTO_F_CRYPTO_GET_NEW_DYNLOCKID 103

#define CRYPTO_F_CRYPTO_GET_NEW_LOCKID 101

#define CRYPTO_F_CRYPTO_SET_EX_DATA 102

#define CRYPTO_F_DEF_ADD_INDEX 104

#define CRYPTO_F_DEF_GET_CLASS 105

#define CRYPTO_F_INT_DUP_EX_DATA 106

#define CRYPTO_F_INT_FREE_EX_DATA 107

#define CRYPTO_F_INT_NEW_EX_DATA 108

#define CRYPTO_LOCK 1

#define CRYPTO_LOCK_BIO 21

#define CRYPTO_LOCK_BN 35

#define CRYPTO_LOCK_COMP 38

#define CRYPTO_LOCK_DH 26

#define CRYPTO_LOCK_DSA 8

#define CRYPTO_LOCK_DSO 28

#define CRYPTO_LOCK_DYNLOCK 29

#define CRYPTO_LOCK_EC 33

#define CRYPTO_LOCK_EC_PRE_COMP 36

#define CRYPTO_LOCK_ECDH 34

#define CRYPTO_LOCK_ECDSA 32

#define CRYPTO_LOCK_ENGINE 30

#define CRYPTO_LOCK_ERR 1

#define CRYPTO_LOCK_EVP_PKEY 10

#define CRYPTO_LOCK_EX_DATA 2

#define CRYPTO_LOCK_GETHOSTBYNAME 22

#define CRYPTO_LOCK_GETSERVBYNAME 23

#define CRYPTO_LOCK_MALLOC 20

#define CRYPTO_LOCK_MALLOC2 27

#define CRYPTO_LOCK_RAND 18

#define CRYPTO_LOCK_RAND2 19

#define CRYPTO_LOCK_READDIR 24

#define CRYPTO_LOCK_RSA 9

#define CRYPTO_LOCK_RSA_BLINDING 25

#define CRYPTO_LOCK_SSL 16

#define CRYPTO_LOCK_SSL_CERT 13

#define CRYPTO_LOCK_SSL_CTX 12

#define CRYPTO_LOCK_SSL_METHOD 17

#define CRYPTO_LOCK_SSL_SESS_CERT 15

#define CRYPTO_LOCK_SSL_SESSION 14

#define CRYPTO_LOCK_STORE 37

#define CRYPTO_LOCK_UI 31

#define CRYPTO_LOCK_X509 3

#define CRYPTO_LOCK_X509_CRL 6

#define CRYPTO_LOCK_X509_INFO 4

#define CRYPTO_LOCK_X509_PKEY 5

#define CRYPTO_LOCK_X509_REQ 7

#define CRYPTO_LOCK_X509_STORE 11

#define CRYPTO_MEM_CHECK_DISABLE 3

#define CRYPTO_MEM_CHECK_ENABLE 2

#define CRYPTO_MEM_CHECK_OFF 0

#define CRYPTO_MEM_CHECK_ON 1

#define CRYPTO_NUM_LOCKS 39

#define CRYPTO_R_NO_DYNLOCK_CREATE_CALLBACK 100

#define CRYPTO_READ 4

#define CRYPTO_UNLOCK 2

#define CRYPTO_WRITE 8

#define OPENSSL_HAVE_INIT 1

#define SSLEAY_BUILT_ON 3

#define SSLEAY_CFLAGS 2

#define SSLEAY_DIR 5

#define SSLEAY_PLATFORM 4

#define SSLEAY_VERSION 0

#define SSLEAY_VERSION_NUMBER 9470383

#define V_CRYPTO_MDEBUG_ALL 3

#define V_CRYPTO_MDEBUG_THREAD 2

#define V_CRYPTO_MDEBUG_TIME 1

typedef struct bio_st BIO_dummy;

typedef struct CRYPTO_dynlock CRYPTO_dynlock, *PCRYPTO_dynlock;

typedef struct CRYPTO_dynlock_value CRYPTO_dynlock_value, *PCRYPTO_dynlock_value;

struct CRYPTO_dynlock {
    int references;
    struct CRYPTO_dynlock_value * data;
};

struct CRYPTO_dynlock_value {
};

typedef struct crypto_ex_data_func_st crypto_ex_data_func_st, *Pcrypto_ex_data_func_st;

typedef int (CRYPTO_EX_new)(void *, void *, CRYPTO_EX_DATA *, int, long, void *);

typedef void (CRYPTO_EX_free)(void *, void *, CRYPTO_EX_DATA *, int, long, void *);

typedef int (CRYPTO_EX_dup)(CRYPTO_EX_DATA *, CRYPTO_EX_DATA *, void *, int, long, void *);

struct crypto_ex_data_func_st {
    long argl;
    void * argp;
    CRYPTO_EX_new * new_func;
    CRYPTO_EX_free * free_func;
    CRYPTO_EX_dup * dup_func;
};

typedef struct crypto_ex_data_func_st CRYPTO_EX_DATA_FUNCS;

typedef struct st_CRYPTO_EX_DATA_IMPL st_CRYPTO_EX_DATA_IMPL, *Pst_CRYPTO_EX_DATA_IMPL;

typedef struct st_CRYPTO_EX_DATA_IMPL CRYPTO_EX_DATA_IMPL;

struct st_CRYPTO_EX_DATA_IMPL {
};

typedef void * (CRYPTO_MEM_LEAK_CB)(ulong, char *, int, int, void *);

typedef struct openssl_item_st openssl_item_st, *Popenssl_item_st;

typedef struct openssl_item_st OPENSSL_ITEM;

struct openssl_item_st {
    int code;
    void * value;
    size_t value_size;
    size_t * value_length;
};

#define _CTYPE_A 256

#define _CTYPE_B 131072

#define _CTYPE_C 512

#define _CTYPE_D 1024

#define _CTYPE_G 2048

#define _CTYPE_I 524288

#define _CTYPE_L 4096

#define _CTYPE_P 8192

#define _CTYPE_Q 2097152

#define _CTYPE_R 262144

#define _CTYPE_S 16384

#define _CTYPE_SW0 536870912

#define _CTYPE_SW1 1073741824

#define _CTYPE_SW2 2147483648

#define _CTYPE_SW3 3221225472

#define _CTYPE_SWM 3758096384

#define _CTYPE_SWS 30

#define _CTYPE_T 1048576

#define _CTYPE_U 32768

#define _CTYPE_X 65536

#define _ENDLINE 2

#define _FULLWIN 4

#define _HASMOVED 32

#define _ISPAD 16

#define _NEWINDEX -1

#define _NOCHANGE -1

#define _SCROLLWIN 8

#define _SUBWIN 1

#define _WRAPPED 64

#define A_ALTCHARSET 4194304

#define A_ATTRIBUTES -256

#define A_BLINK 524288

#define A_BOLD 2097152

#define A_CHARTEXT 255

#define A_COLOR 65280

#define A_DIM 1048576

#define A_HORIZONTAL 33554432

#define A_INVIS 8388608

#define A_LEFT 67108864

#define A_LOW 134217728

#define A_NORMAL 0

#define A_PROTECT 16777216

#define A_REVERSE 262144

#define A_RIGHT 268435456

#define A_STANDOUT 65536

#define A_TOP 536870912

#define A_UNDERLINE 131072

#define A_VERTICAL 1073741824

#define ALL_MOUSE_EVENTS 167772159

#define BUTTON1_CLICKED 4

#define BUTTON1_DOUBLE_CLICKED 10

#define BUTTON1_PRESSED 2

#define BUTTON1_RELEASED 1

#define BUTTON1_RESERVED_EVENT 40

#define BUTTON1_TRIPLE_CLICKED 20

#define BUTTON2_CLICKED 256

#define BUTTON2_DOUBLE_CLICKED 640

#define BUTTON2_PRESSED 128

#define BUTTON2_RELEASED 64

#define BUTTON2_RESERVED_EVENT 2560

#define BUTTON2_TRIPLE_CLICKED 1280

#define BUTTON3_CLICKED 16384

#define BUTTON3_DOUBLE_CLICKED 40960

#define BUTTON3_PRESSED 8192

#define BUTTON3_RELEASED 4096

#define BUTTON3_RESERVED_EVENT 163840

#define BUTTON3_TRIPLE_CLICKED 81920

#define BUTTON4_CLICKED 1048576

#define BUTTON4_DOUBLE_CLICKED 2621440

#define BUTTON4_PRESSED 524288

#define BUTTON4_RELEASED 262144

#define BUTTON4_RESERVED_EVENT 10485760

#define BUTTON4_TRIPLE_CLICKED 5242880

#define BUTTON_ALT 67108864

#define BUTTON_CTRL 16777216

#define BUTTON_SHIFT 33554432

#define COLOR_BLACK 0

#define COLOR_BLUE 4

#define COLOR_CYAN 6

#define COLOR_GREEN 2

#define COLOR_MAGENTA 5

#define COLOR_RED 1

#define COLOR_WHITE 7

#define COLOR_YELLOW 3

#define CURSES 1

#define CURSES_H 1

#define ERR -1

#define FALSE 0

#define KEY_A1 348

#define KEY_A3 349

#define KEY_B2 350

#define KEY_BACKSPACE 263

#define KEY_BEG 354

#define KEY_BREAK 257

#define KEY_BTAB 353

#define KEY_C1 351

#define KEY_C3 352

#define KEY_CANCEL 355

#define KEY_CATAB 342

#define KEY_CLEAR 333

#define KEY_CLOSE 356

#define KEY_CODE_YES 256

#define KEY_COMMAND 357

#define KEY_COPY 358

#define KEY_CREATE 359

#define KEY_CTAB 341

#define KEY_DC 330

#define KEY_DL 328

#define KEY_DOWN 258

#define KEY_EIC 332

#define KEY_END 360

#define KEY_ENTER 343

#define KEY_EOL 335

#define KEY_EOS 334

#define KEY_EVENT 411

#define KEY_EXIT 361

#define KEY_F0 264

#define KEY_FIND 362

#define KEY_HELP 363

#define KEY_HOME 262

#define KEY_IC 331

#define KEY_IL 329

#define KEY_LEFT 260

#define KEY_LL 347

#define KEY_MARK 364

#define KEY_MAX 511

#define KEY_MESSAGE 365

#define KEY_MIN 257

#define KEY_MOUSE 409

#define KEY_MOVE 366

#define KEY_NEXT 367

#define KEY_NPAGE 338

#define KEY_OPEN 368

#define KEY_OPTIONS 369

#define KEY_PPAGE 339

#define KEY_PREVIOUS 370

#define KEY_PRINT 346

#define KEY_REDO 371

#define KEY_REFERENCE 372

#define KEY_REFRESH 373

#define KEY_REPLACE 374

#define KEY_RESET 345

#define KEY_RESIZE 410

#define KEY_RESTART 375

#define KEY_RESUME 376

#define KEY_RIGHT 261

#define KEY_SAVE 377

#define KEY_SBEG 378

#define KEY_SCANCEL 379

#define KEY_SCOMMAND 380

#define KEY_SCOPY 381

#define KEY_SCREATE 382

#define KEY_SDC 383

#define KEY_SDL 384

#define KEY_SELECT 385

#define KEY_SEND 386

#define KEY_SEOL 387

#define KEY_SEXIT 388

#define KEY_SF 336

#define KEY_SFIND 389

#define KEY_SHELP 390

#define KEY_SHOME 391

#define KEY_SIC 392

#define KEY_SLEFT 393

#define KEY_SMESSAGE 394

#define KEY_SMOVE 395

#define KEY_SNEXT 396

#define KEY_SOPTIONS 397

#define KEY_SPREVIOUS 398

#define KEY_SPRINT 399

#define KEY_SR 337

#define KEY_SREDO 400

#define KEY_SREPLACE 401

#define KEY_SRESET 344

#define KEY_SRIGHT 402

#define KEY_SRSUME 403

#define KEY_SSAVE 404

#define KEY_SSUSPEND 405

#define KEY_STAB 340

#define KEY_SUNDO 406

#define KEY_SUSPEND 407

#define KEY_UNDO 408

#define KEY_UP 259

#define NCURSES_ATTR_SHIFT 8

#define NCURSES_BUTTON_CLICKED 4

#define NCURSES_BUTTON_PRESSED 2

#define NCURSES_BUTTON_RELEASED 1

#define NCURSES_DOUBLE_CLICKED 8

#define NCURSES_ENABLE_STDBOOL_H 1

#define NCURSES_EXT_FUNCS 20081102

#define NCURSES_MOUSE_VERSION 1

#define NCURSES_OPAQUE 1

#define NCURSES_RESERVED_EVENT 32

#define NCURSES_TPARM_VARARGS 1

#define NCURSES_TRIPLE_CLICKED 16

#define NCURSES_VERSION_MAJOR 5

#define NCURSES_VERSION_MINOR 7

#define NCURSES_VERSION_PATCH 20081102

#define OK 0

#define REPORT_MOUSE_POSITION 167772160

#define TRACE_ATTRS 4096

#define TRACE_BITS 256

#define TRACE_CALLS 32

#define TRACE_CCALLS 1024

#define TRACE_CHARPUT 16

#define TRACE_DATABASE 2048

#define TRACE_DISABLE 0

#define TRACE_ICALLS 512

#define TRACE_IEVENT 128

#define TRACE_MAXIMUM 8191

#define TRACE_MOVE 8

#define TRACE_ORDINARY 31

#define TRACE_SHIFT 13

#define TRACE_TIMES 1

#define TRACE_TPUTS 2

#define TRACE_UPDATE 4

#define TRACE_VIRTPUT 64

#define TRUE 1

#define WA_ALTCHARSET 4194304

#define WA_ATTRIBUTES -256

#define WA_BLINK 524288

#define WA_BOLD 2097152

#define WA_DIM 1048576

#define WA_HORIZONTAL 33554432

#define WA_INVIS 8388608

#define WA_LEFT 67108864

#define WA_LOW 134217728

#define WA_NORMAL 0

#define WA_PROTECT 16777216

#define WA_REVERSE 262144

#define WA_RIGHT 268435456

#define WA_STANDOUT 65536

#define WA_TOP 536870912

#define WA_UNDERLINE 131072

#define WA_VERTICAL 1073741824

typedef struct _win_st _win_st, *P_win_st;

struct _win_st {
};

typedef uint chtype;

typedef chtype attr_t;

typedef struct MEVENT MEVENT, *PMEVENT;

typedef ulong mmask_t;

struct MEVENT {
    short id;
    int x;
    int y;
    int z;
    mmask_t bstate;
};

typedef uchar NCURSES_BOOL;

typedef struct screen screen, *Pscreen;

typedef struct screen SCREEN;

typedef int (* NCURSES_SCREEN_CB)(SCREEN *, void *);

struct screen {
};

typedef struct _win_st WINDOW;

typedef int (* NCURSES_WINDOW_CB)(WINDOW *, void *);

#define DISPATCH_DATA_DESTRUCTOR_DEFAULT 0

typedef struct dispatch_data_s dispatch_data_s, *Pdispatch_data_s;

typedef struct dispatch_data_s * dispatch_data_t;

struct dispatch_data_s {
};

typedef struct _xmlShellCtxt _xmlShellCtxt, *P_xmlShellCtxt;

typedef struct _xmlDoc _xmlDoc, *P_xmlDoc;

typedef struct _xmlDoc xmlDoc;

typedef xmlDoc * xmlDocPtr;

typedef struct _xmlNode _xmlNode, *P_xmlNode;

typedef struct _xmlNode xmlNode;

typedef xmlNode * xmlNodePtr;

typedef struct _xmlXPathContext _xmlXPathContext, *P_xmlXPathContext;

typedef struct _xmlXPathContext xmlXPathContext;

typedef xmlXPathContext * xmlXPathContextPtr;

typedef char * (* xmlShellReadlineFunc)(char *);

typedef enum enum_1903 {
    XML_ATTRIBUTE_DECL=16,
    XML_ATTRIBUTE_NODE=2,
    XML_CDATA_SECTION_NODE=4,
    XML_COMMENT_NODE=8,
    XML_DOCB_DOCUMENT_NODE=21,
    XML_DOCUMENT_FRAG_NODE=11,
    XML_DOCUMENT_NODE=9,
    XML_DOCUMENT_TYPE_NODE=10,
    XML_DTD_NODE=14,
    XML_ELEMENT_DECL=15,
    XML_ELEMENT_NODE=1,
    XML_ENTITY_DECL=17,
    XML_ENTITY_NODE=6,
    XML_ENTITY_REF_NODE=5,
    XML_HTML_DOCUMENT_NODE=13,
    XML_NAMESPACE_DECL=18,
    XML_NOTATION_NODE=12,
    XML_PI_NODE=7,
    XML_TEXT_NODE=3,
    XML_XINCLUDE_END=20,
    XML_XINCLUDE_START=19
} enum_1903;

typedef enum enum_1903 xmlElementType;

typedef struct _xmlDtd _xmlDtd, *P_xmlDtd;

typedef struct _xmlNs _xmlNs, *P_xmlNs;

typedef uchar xmlChar;

typedef struct _xmlDict _xmlDict, *P_xmlDict;

typedef struct _xmlNs xmlNs;

typedef struct _xmlAttr _xmlAttr, *P_xmlAttr;

typedef struct _xmlHashTable _xmlHashTable, *P_xmlHashTable;

typedef struct _xmlHashTable xmlHashTable;

typedef xmlHashTable * xmlHashTablePtr;

typedef struct _xmlXPathType _xmlXPathType, *P_xmlXPathType;

typedef struct _xmlXPathType xmlXPathType;

typedef xmlXPathType * xmlXPathTypePtr;

typedef struct _xmlXPathAxis _xmlXPathAxis, *P_xmlXPathAxis;

typedef struct _xmlXPathAxis xmlXPathAxis;

typedef xmlXPathAxis * xmlXPathAxisPtr;

typedef xmlNs * xmlNsPtr;

typedef struct _xmlXPathObject _xmlXPathObject, *P_xmlXPathObject;

typedef struct _xmlXPathObject xmlXPathObject;

typedef xmlXPathObject * xmlXPathObjectPtr;

typedef xmlXPathObjectPtr (* xmlXPathVariableLookupFunc)(void *, xmlChar *, xmlChar *);

typedef struct _xmlXPathParserContext _xmlXPathParserContext, *P_xmlXPathParserContext;

typedef struct _xmlXPathParserContext xmlXPathParserContext;

typedef xmlXPathParserContext * xmlXPathParserContextPtr;

typedef void (* xmlXPathFunction)(xmlXPathParserContextPtr, int);

typedef xmlXPathFunction (* xmlXPathFuncLookupFunc)(void *, xmlChar *, xmlChar *);

typedef struct _xmlError _xmlError, *P_xmlError;

typedef struct _xmlError xmlError;

typedef xmlError * xmlErrorPtr;

typedef void (* xmlStructuredErrorFunc)(void *, xmlErrorPtr);

typedef struct _xmlDict xmlDict;

typedef xmlDict * xmlDictPtr;

typedef xmlElementType xmlNsType;

typedef enum enum_1906 {
    XML_ATTRIBUTE_CDATA=1,
    XML_ATTRIBUTE_ENTITIES=6,
    XML_ATTRIBUTE_ENTITY=5,
    XML_ATTRIBUTE_ENUMERATION=9,
    XML_ATTRIBUTE_ID=2,
    XML_ATTRIBUTE_IDREF=3,
    XML_ATTRIBUTE_IDREFS=4,
    XML_ATTRIBUTE_NMTOKEN=7,
    XML_ATTRIBUTE_NMTOKENS=8,
    XML_ATTRIBUTE_NOTATION=10
} enum_1906;

typedef enum enum_1906 xmlAttributeType;

typedef int (* xmlXPathConvertFunc)(xmlXPathObjectPtr, int);

typedef xmlXPathObjectPtr (* xmlXPathAxisFunc)(xmlXPathParserContextPtr, xmlXPathObjectPtr);

typedef enum enum_2075 {
    XPATH_BOOLEAN=2,
    XPATH_LOCATIONSET=7,
    XPATH_NODESET=1,
    XPATH_NUMBER=3,
    XPATH_POINT=5,
    XPATH_RANGE=6,
    XPATH_STRING=4,
    XPATH_UNDEFINED=0,
    XPATH_USERS=8,
    XPATH_XSLT_TREE=9
} enum_2075;

typedef enum enum_2075 xmlXPathObjectType;

typedef struct _xmlNodeSet _xmlNodeSet, *P_xmlNodeSet;

typedef struct _xmlNodeSet xmlNodeSet;

typedef xmlNodeSet * xmlNodeSetPtr;

typedef struct _xmlXPathCompExpr _xmlXPathCompExpr, *P_xmlXPathCompExpr;

typedef struct _xmlXPathCompExpr xmlXPathCompExpr;

typedef xmlXPathCompExpr * xmlXPathCompExprPtr;

typedef enum enum_1996 {
    XML_ERR_ERROR=2,
    XML_ERR_FATAL=3,
    XML_ERR_NONE=0,
    XML_ERR_WARNING=1
} enum_1996;

typedef enum enum_1996 xmlErrorLevel;

struct _xmlDict {
};

struct _xmlXPathParserContext {
    xmlChar * cur;
    xmlChar * base;
    int error;
    xmlXPathContextPtr context;
    xmlXPathObjectPtr value;
    int valueNr;
    int valueMax;
    xmlXPathObjectPtr * valueTab;
    xmlXPathCompExprPtr comp;
    int xptr;
    xmlNodePtr ancestor;
    int valueFrame;
};

struct _xmlAttr {
    void * _private;
    xmlElementType type;
    xmlChar * name;
    struct _xmlNode * children;
    struct _xmlNode * last;
    struct _xmlNode * parent;
    struct _xmlAttr * next;
    struct _xmlAttr * prev;
    struct _xmlDoc * doc;
    xmlNs * ns;
    xmlAttributeType atype;
    void * psvi;
};

struct _xmlNodeSet {
    int nodeNr;
    int nodeMax;
    xmlNodePtr * nodeTab;
};

struct _xmlDoc {
    void * _private;
    xmlElementType type;
    char * name;
    struct _xmlNode * children;
    struct _xmlNode * last;
    struct _xmlNode * parent;
    struct _xmlNode * next;
    struct _xmlNode * prev;
    struct _xmlDoc * doc;
    int compression;
    int standalone;
    struct _xmlDtd * intSubset;
    struct _xmlDtd * extSubset;
    struct _xmlNs * oldNs;
    xmlChar * version;
    xmlChar * encoding;
    void * ids;
    void * refs;
    xmlChar * URL;
    int charset;
    struct _xmlDict * dict;
    void * psvi;
    int parseFlags;
    int properties;
};

struct _xmlNode {
    void * _private;
    xmlElementType type;
    xmlChar * name;
    struct _xmlNode * children;
    struct _xmlNode * last;
    struct _xmlNode * parent;
    struct _xmlNode * next;
    struct _xmlNode * prev;
    struct _xmlDoc * doc;
    xmlNs * ns;
    xmlChar * content;
    struct _xmlAttr * properties;
    xmlNs * nsDef;
    void * psvi;
    ushort line;
    ushort extra;
};

struct _xmlXPathType {
    xmlChar * name;
    xmlXPathConvertFunc func;
};

struct _xmlXPathAxis {
    xmlChar * name;
    xmlXPathAxisFunc func;
};

struct _xmlHashTable {
};

struct _xmlError {
    int domain;
    int code;
    char * message;
    xmlErrorLevel level;
    char * file;
    int line;
    char * str1;
    char * str2;
    char * str3;
    int int1;
    int int2;
    void * ctxt;
    void * node;
};

struct _xmlXPathContext {
    xmlDocPtr doc;
    xmlNodePtr node;
    int nb_variables_unused;
    int max_variables_unused;
    xmlHashTablePtr varHash;
    int nb_types;
    int max_types;
    xmlXPathTypePtr types;
    int nb_funcs_unused;
    int max_funcs_unused;
    xmlHashTablePtr funcHash;
    int nb_axis;
    int max_axis;
    xmlXPathAxisPtr axis;
    xmlNsPtr * namespaces;
    int nsNr;
    void * user;
    int contextSize;
    int proximityPosition;
    int xptr;
    xmlNodePtr here;
    xmlNodePtr origin;
    xmlHashTablePtr nsHash;
    xmlXPathVariableLookupFunc varLookupFunc;
    void * varLookupData;
    void * extra;
    xmlChar * function;
    xmlChar * functionURI;
    xmlXPathFuncLookupFunc funcLookupFunc;
    void * funcLookupData;
    xmlNsPtr * tmpNsList;
    int tmpNsNr;
    void * userData;
    xmlStructuredErrorFunc error;
    xmlError lastError;
    xmlNodePtr debugNode;
    xmlDictPtr dict;
    int flags;
    void * cache;
};

struct _xmlNs {
    struct _xmlNs * next;
    xmlNsType type;
    xmlChar * href;
    xmlChar * prefix;
    void * _private;
    struct _xmlDoc * context;
};

struct _xmlXPathObject {
    xmlXPathObjectType type;
    xmlNodeSetPtr nodesetval;
    int boolval;
    double floatval;
    xmlChar * stringval;
    void * user;
    int index;
    void * user2;
    int index2;
};

struct _xmlXPathCompExpr {
};

struct _xmlShellCtxt {
    char * filename;
    xmlDocPtr doc;
    xmlNodePtr node;
    xmlXPathContextPtr pctxt;
    int loaded;
    FILE * output;
    xmlShellReadlineFunc input;
};

struct _xmlDtd {
    void * _private;
    xmlElementType type;
    xmlChar * name;
    struct _xmlNode * children;
    struct _xmlNode * last;
    struct _xmlDoc * parent;
    struct _xmlNode * next;
    struct _xmlNode * prev;
    struct _xmlDoc * doc;
    void * notations;
    void * elements;
    void * attributes;
    void * entities;
    xmlChar * ExternalID;
    xmlChar * SystemID;
    void * pentities;
};

typedef struct _xmlShellCtxt xmlShellCtxt;

typedef xmlShellCtxt * xmlShellCtxtPtr;

typedef int (* xmlShellCmd)(xmlShellCtxtPtr, char *, xmlNodePtr, xmlNodePtr);

#define default_pager_object_MSG_COUNT 11

typedef struct __Reply__default_pager_add_file_t __Reply__default_pager_add_file_t, *P__Reply__default_pager_add_file_t;

struct __Reply__default_pager_add_file_t {
    struct mach_msg_header_t Head;
    struct NDR_record_t NDR;
    kern_return_t RetCode;
};

typedef struct __Reply__default_pager_backing_store_create_t __Reply__default_pager_backing_store_create_t, *P__Reply__default_pager_backing_store_create_t;

struct __Reply__default_pager_backing_store_create_t {
    struct mach_msg_header_t Head;
    struct mach_msg_body_t msgh_body;
    struct mach_msg_port_descriptor_t backing_store;
};

typedef struct __Reply__default_pager_backing_store_delete_t __Reply__default_pager_backing_store_delete_t, *P__Reply__default_pager_backing_store_delete_t;

struct __Reply__default_pager_backing_store_delete_t {
    struct mach_msg_header_t Head;
    struct NDR_record_t NDR;
    kern_return_t RetCode;
};

typedef struct __Reply__default_pager_backing_store_info_t __Reply__default_pager_backing_store_info_t, *P__Reply__default_pager_backing_store_info_t;

struct __Reply__default_pager_backing_store_info_t {
    struct mach_msg_header_t Head;
    struct NDR_record_t NDR;
    kern_return_t RetCode;
    mach_msg_type_number_t infoCnt;
    integer_t info[20];
};

typedef struct __Reply__default_pager_info_64_t __Reply__default_pager_info_64_t, *P__Reply__default_pager_info_64_t;

typedef struct default_pager_info_64 default_pager_info_64, *Pdefault_pager_info_64;

typedef struct default_pager_info_64 default_pager_info_64_t;

typedef ulonglong memory_object_size_t;

typedef uintptr_t vm_size_t;

struct default_pager_info_64 {
    memory_object_size_t dpi_total_space;
    memory_object_size_t dpi_free_space;
    vm_size_t dpi_page_size;
    int dpi_flags;
};

struct __Reply__default_pager_info_64_t {
    struct mach_msg_header_t Head;
    struct NDR_record_t NDR;
    kern_return_t RetCode;
    default_pager_info_64_t info;
};

typedef struct __Reply__default_pager_info_t __Reply__default_pager_info_t, *P__Reply__default_pager_info_t;

typedef struct default_pager_info default_pager_info, *Pdefault_pager_info;

typedef struct default_pager_info default_pager_info_t;

struct default_pager_info {
    vm_size_t dpi_total_space;
    vm_size_t dpi_free_space;
    vm_size_t dpi_page_size;
};

struct __Reply__default_pager_info_t {
    struct mach_msg_header_t Head;
    struct NDR_record_t NDR;
    kern_return_t RetCode;
    default_pager_info_t info;
};

typedef struct __Reply__default_pager_object_create_t __Reply__default_pager_object_create_t, *P__Reply__default_pager_object_create_t;

struct __Reply__default_pager_object_create_t {
    struct mach_msg_header_t Head;
    struct mach_msg_body_t msgh_body;
    struct mach_msg_port_descriptor_t memory_object;
};

typedef struct __Reply__default_pager_object_pages_t __Reply__default_pager_object_pages_t, *P__Reply__default_pager_object_pages_t;

typedef struct mach_msg_ool_descriptor_t mach_msg_ool_descriptor_t, *Pmach_msg_ool_descriptor_t;

typedef union anon__struct_622_bitfield_1 anon__struct_622_bitfield_1, *Panon__struct_622_bitfield_1;

typedef union anon__struct_622_bitfield_2 anon__struct_622_bitfield_2, *Panon__struct_622_bitfield_2;

typedef union anon__struct_622_bitfield_3 anon__struct_622_bitfield_3, *Panon__struct_622_bitfield_3;

typedef union anon__struct_622_bitfield_4 anon__struct_622_bitfield_4, *Panon__struct_622_bitfield_4;

typedef uint mach_msg_copy_options_t;

union anon__struct_622_bitfield_1 {
    boolean_t deallocate:8; /* : bits 0-7 */
};

union anon__struct_622_bitfield_2 {
    mach_msg_copy_options_t copy:8; /* : bits 0-7 */
};

union anon__struct_622_bitfield_3 {
    uint pad1:8; /* : bits 0-7 */
};

union anon__struct_622_bitfield_4 {
    mach_msg_descriptor_type_t type:8; /* : bits 0-7 */
};

struct mach_msg_ool_descriptor_t {
    void * address;
    union anon__struct_622_bitfield_1 field_0x8;
    union anon__struct_622_bitfield_2 field_0xc;
    union anon__struct_622_bitfield_3 field_0x10;
    union anon__struct_622_bitfield_4 field_0x14;
    mach_msg_size_t size;
};

struct __Reply__default_pager_object_pages_t {
    struct mach_msg_header_t Head;
    struct mach_msg_body_t msgh_body;
    struct mach_msg_ool_descriptor_t pages;
    struct NDR_record_t NDR;
    mach_msg_type_number_t pagesCnt;
};

typedef struct __Reply__default_pager_objects_t __Reply__default_pager_objects_t, *P__Reply__default_pager_objects_t;

typedef struct mach_msg_ool_ports_descriptor_t mach_msg_ool_ports_descriptor_t, *Pmach_msg_ool_ports_descriptor_t;

typedef union anon__struct_625_bitfield_1 anon__struct_625_bitfield_1, *Panon__struct_625_bitfield_1;

typedef union anon__struct_625_bitfield_2 anon__struct_625_bitfield_2, *Panon__struct_625_bitfield_2;

typedef union anon__struct_625_bitfield_3 anon__struct_625_bitfield_3, *Panon__struct_625_bitfield_3;

typedef union anon__struct_625_bitfield_4 anon__struct_625_bitfield_4, *Panon__struct_625_bitfield_4;

union anon__struct_625_bitfield_3 {
    mach_msg_type_name_t disposition:8; /* : bits 0-7 */
};

union anon__struct_625_bitfield_1 {
    boolean_t deallocate:8; /* : bits 0-7 */
};

union anon__struct_625_bitfield_2 {
    mach_msg_copy_options_t copy:8; /* : bits 0-7 */
};

union anon__struct_625_bitfield_4 {
    mach_msg_descriptor_type_t type:8; /* : bits 0-7 */
};

struct mach_msg_ool_ports_descriptor_t {
    void * address;
    union anon__struct_625_bitfield_1 field_0x8;
    union anon__struct_625_bitfield_2 field_0xc;
    union anon__struct_625_bitfield_3 field_0x10;
    union anon__struct_625_bitfield_4 field_0x14;
    mach_msg_size_t count;
};

struct __Reply__default_pager_objects_t {
    struct mach_msg_header_t Head;
    struct mach_msg_body_t msgh_body;
    struct mach_msg_ool_descriptor_t objects;
    struct mach_msg_ool_ports_descriptor_t ports;
    struct NDR_record_t NDR;
    mach_msg_type_number_t objectsCnt;
    mach_msg_type_number_t portsCnt;
};

typedef struct __Reply__default_pager_triggers_t __Reply__default_pager_triggers_t, *P__Reply__default_pager_triggers_t;

struct __Reply__default_pager_triggers_t {
    struct mach_msg_header_t Head;
    struct NDR_record_t NDR;
    kern_return_t RetCode;
};

typedef union __ReplyUnion__default_pager_object_subsystem __ReplyUnion__default_pager_object_subsystem, *P__ReplyUnion__default_pager_object_subsystem;

union __ReplyUnion__default_pager_object_subsystem {
    struct __Reply__default_pager_object_create_t Reply_default_pager_object_create;
    struct __Reply__default_pager_info_t Reply_default_pager_info;
    struct __Reply__default_pager_objects_t Reply_default_pager_objects;
    struct __Reply__default_pager_object_pages_t Reply_default_pager_object_pages;
    struct __Reply__default_pager_backing_store_create_t Reply_default_pager_backing_store_create;
    struct __Reply__default_pager_backing_store_delete_t Reply_default_pager_backing_store_delete;
    struct __Reply__default_pager_backing_store_info_t Reply_default_pager_backing_store_info;
    struct __Reply__default_pager_add_file_t Reply_default_pager_add_file;
    struct __Reply__default_pager_triggers_t Reply_default_pager_triggers;
    struct __Reply__default_pager_info_64_t Reply_default_pager_info_64;
};

typedef struct __Request__default_pager_add_file_t __Request__default_pager_add_file_t, *P__Request__default_pager_add_file_t;

typedef int * vnode_ptr_t;

struct __Request__default_pager_add_file_t {
    struct mach_msg_header_t Head;
    struct NDR_record_t NDR;
    vnode_ptr_t vnode;
    int record_size;
    vm_size_t size;
};

typedef struct __Request__default_pager_backing_store_create_t __Request__default_pager_backing_store_create_t, *P__Request__default_pager_backing_store_create_t;

struct __Request__default_pager_backing_store_create_t {
    struct mach_msg_header_t Head;
    struct NDR_record_t NDR;
    int priority;
    int clsize;
};

typedef struct __Request__default_pager_backing_store_delete_t __Request__default_pager_backing_store_delete_t, *P__Request__default_pager_backing_store_delete_t;

struct __Request__default_pager_backing_store_delete_t {
    struct mach_msg_header_t Head;
};

typedef struct __Request__default_pager_backing_store_info_t __Request__default_pager_backing_store_info_t, *P__Request__default_pager_backing_store_info_t;

typedef int backing_store_flavor_t;

struct __Request__default_pager_backing_store_info_t {
    struct mach_msg_header_t Head;
    struct NDR_record_t NDR;
    backing_store_flavor_t flavor;
    mach_msg_type_number_t infoCnt;
};

typedef struct __Request__default_pager_info_64_t __Request__default_pager_info_64_t, *P__Request__default_pager_info_64_t;

struct __Request__default_pager_info_64_t {
    struct mach_msg_header_t Head;
};

typedef struct __Request__default_pager_info_t __Request__default_pager_info_t, *P__Request__default_pager_info_t;

struct __Request__default_pager_info_t {
    struct mach_msg_header_t Head;
};

typedef struct __Request__default_pager_object_create_t __Request__default_pager_object_create_t, *P__Request__default_pager_object_create_t;

struct __Request__default_pager_object_create_t {
    struct mach_msg_header_t Head;
    struct NDR_record_t NDR;
    vm_size_t object_size;
};

typedef struct __Request__default_pager_object_pages_t __Request__default_pager_object_pages_t, *P__Request__default_pager_object_pages_t;

struct __Request__default_pager_object_pages_t {
    struct mach_msg_header_t Head;
    struct mach_msg_body_t msgh_body;
    struct mach_msg_port_descriptor_t memory_object;
};

typedef struct __Request__default_pager_objects_t __Request__default_pager_objects_t, *P__Request__default_pager_objects_t;

struct __Request__default_pager_objects_t {
    struct mach_msg_header_t Head;
};

typedef struct __Request__default_pager_triggers_t __Request__default_pager_triggers_t, *P__Request__default_pager_triggers_t;

struct __Request__default_pager_triggers_t {
    struct mach_msg_header_t Head;
    struct mach_msg_body_t msgh_body;
    struct mach_msg_port_descriptor_t trigger_port;
    struct NDR_record_t NDR;
    int hi_wat;
    int lo_wat;
    int flags;
};

typedef union __RequestUnion__default_pager_object_subsystem __RequestUnion__default_pager_object_subsystem, *P__RequestUnion__default_pager_object_subsystem;

union __RequestUnion__default_pager_object_subsystem {
    struct __Request__default_pager_object_create_t Request_default_pager_object_create;
    struct __Request__default_pager_info_t Request_default_pager_info;
    struct __Request__default_pager_objects_t Request_default_pager_objects;
    struct __Request__default_pager_object_pages_t Request_default_pager_object_pages;
    struct __Request__default_pager_backing_store_create_t Request_default_pager_backing_store_create;
    struct __Request__default_pager_backing_store_delete_t Request_default_pager_backing_store_delete;
    struct __Request__default_pager_backing_store_info_t Request_default_pager_backing_store_info;
    struct __Request__default_pager_add_file_t Request_default_pager_add_file;
    struct __Request__default_pager_triggers_t Request_default_pager_triggers;
    struct __Request__default_pager_info_64_t Request_default_pager_info_64;
};

#define BACKING_STORE_BASIC_INFO 1

#define DEFAULT_PAGER_BACKING_STORE_MAXPRI 4

#define DPI_ENCRYPTED 1

#define HI_WAT_ALERT 1

#define LO_WAT_ALERT 2

#define PROC_RESUME 64

#define SWAP_COMPACT_DISABLE 16

#define SWAP_COMPACT_ENABLE 32

#define SWAP_ENCRYPT_OFF 8

#define SWAP_ENCRYPT_ON 4

#define SWAP_FILE_CREATION_ERROR 128

#define USE_EMERGENCY_SWAP_FILE_FIRST 256

typedef struct backing_store_basic_info backing_store_basic_info, *Pbacking_store_basic_info;

struct backing_store_basic_info {
    natural_t pageout_calls;
    natural_t pagein_calls;
    natural_t pages_in;
    natural_t pages_out;
    natural_t pages_unavail;
    natural_t pages_init;
    natural_t pages_init_writes;
    natural_t bs_pages_total;
    natural_t bs_pages_free;
    natural_t bs_pages_in;
    natural_t bs_pages_in_fail;
    natural_t bs_pages_out;
    natural_t bs_pages_out_fail;
    integer_t bs_priority;
    integer_t bs_clsize;
};

typedef struct backing_store_basic_info * backing_store_basic_info_t;

typedef integer_t * backing_store_info_t;

typedef struct default_pager_object default_pager_object, *Pdefault_pager_object;

typedef uintptr_t vm_offset_t;

struct default_pager_object {
    vm_offset_t dpo_object;
    vm_size_t dpo_size;
};

typedef struct default_pager_object default_pager_object_t;

typedef default_pager_object_t * default_pager_object_array_t;

typedef struct default_pager_page default_pager_page, *Pdefault_pager_page;

struct default_pager_page {
    vm_offset_t dpp_offset;
};

typedef struct default_pager_page default_pager_page_t;

typedef default_pager_page_t * default_pager_page_array_t;

typedef mach_port_t memory_object_default_t;

typedef memory_object_default_t default_pager_t;

#define __x86_64__ 1

#define _FORTIFY_SOURCE 0

#define _INTEGRAL_MAX_BITS 32

#define _POSIX_C_SOURCE 1900

#define BSD 199103

#define BYTE_ORDER 1234

#define MDC2_BLOCK 8

#define MDC2_DIGEST_LENGTH 16

typedef union _union_3219 _union_3219, *P_union_3219;

typedef uchar DES_cblock[8];

union _union_3219 {
    DES_cblock cblock;
    uint deslong[2];
};

typedef uchar const_DES_cblock[8];

typedef struct DES_ks DES_ks, *PDES_ks;

typedef struct DES_ks DES_key_schedule;

struct DES_ks {
    union _union_3219 ks[16];
};

typedef struct mdc2_ctx_st mdc2_ctx_st, *Pmdc2_ctx_st;

typedef struct mdc2_ctx_st MDC2_CTX;

struct mdc2_ctx_st {
    uint num;
    uchar data[8];
    DES_cblock h;
    DES_cblock hh;
    int pad_type;
};

#define DES_CBC_MODE 0

#define DES_DECRYPT 0

#define DES_ENCRYPT 1

#define DES_PCBC_MODE 1

#define DESC_CALL_GATE 12

#define DESC_CODE_16B 0

#define DESC_CODE_32B 1

#define DESC_CODE_EXEC 24

#define DESC_CODE_READ 26

#define DESC_DATA_16B 0

#define DESC_DATA_32B 1

#define DESC_DATA_RONLY 16

#define DESC_DATA_WRITE 18

#define DESC_GRAN_BYTE 0

#define DESC_GRAN_PAGE 1

#define DESC_INTR_GATE 14

#define DESC_LDT 2

#define DESC_TRAP_GATE 15

typedef union anon__struct_566_bitfield_1 anon__struct_566_bitfield_1, *Panon__struct_566_bitfield_1;

union anon__struct_566_bitfield_1 {
    uchar type:5; /* : bits 0-4 */
    uchar dpl:2; /* : bits 5-6 */
    uchar present:1; /* : bits 7 */
};

typedef union anon__struct_566_bitfield_2 anon__struct_566_bitfield_2, *Panon__struct_566_bitfield_2;

union anon__struct_566_bitfield_2 {
    uchar limit16:4; /* : bits 0-3 */
    uchar opsz:1; /* : bits 4 */
    uchar granular:1; /* : bits 5 */
};

typedef union anon__struct_567_bitfield_1 anon__struct_567_bitfield_1, *Panon__struct_567_bitfield_1;

union anon__struct_567_bitfield_1 {
    uchar type:5; /* : bits 0-4 */
    uchar dpl:2; /* : bits 5-6 */
    uchar present:1; /* : bits 7 */
};

typedef union anon__struct_567_bitfield_2 anon__struct_567_bitfield_2, *Panon__struct_567_bitfield_2;

union anon__struct_567_bitfield_2 {
    uchar limit16:4; /* : bits 0-3 */
    uchar stksz:1; /* : bits 4 */
    uchar granular:1; /* : bits 5 */
};

typedef union anon__struct_568_bitfield_1 anon__struct_568_bitfield_1, *Panon__struct_568_bitfield_1;

union anon__struct_568_bitfield_1 {
    uchar type:5; /* : bits 0-4 */
    uchar present:1; /* : bits 5 */
};

typedef union anon__struct_568_bitfield_2 anon__struct_568_bitfield_2, *Panon__struct_568_bitfield_2;

union anon__struct_568_bitfield_2 {
    uchar limit16:4; /* : bits 0-3 */
    uchar granular:1; /* : bits 4 */
};

typedef union anon__struct_569_bitfield_1 anon__struct_569_bitfield_1, *Panon__struct_569_bitfield_1;

union anon__struct_569_bitfield_1 {
    uint argcnt:5; /* : bits 0-4 */
    uint type:5; /* : bits 5-9 */
    uint dpl:2; /* : bits 10-11 */
    uint present:1; /* : bits 12 */
    uint offset16:16; /* : bits 13-28 */
};

typedef union anon__struct_570_bitfield_1 anon__struct_570_bitfield_1, *Panon__struct_570_bitfield_1;

union anon__struct_570_bitfield_1 {
    uint type:5; /* : bits 0-4 */
    uint dpl:2; /* : bits 5-6 */
    uint present:1; /* : bits 7 */
    uint offset16:16; /* : bits 8-23 */
};

typedef union anon__struct_571_bitfield_1 anon__struct_571_bitfield_1, *Panon__struct_571_bitfield_1;

union anon__struct_571_bitfield_1 {
    uint type:5; /* : bits 0-4 */
    uint dpl:2; /* : bits 5-6 */
    uint present:1; /* : bits 7 */
    uint offset16:16; /* : bits 8-23 */
};

typedef struct call_gate call_gate, *Pcall_gate;

typedef struct sel sel, *Psel;

typedef struct sel sel_t;

typedef union anon__struct_559_bitfield_1 anon__struct_559_bitfield_1, *Panon__struct_559_bitfield_1;

union anon__struct_559_bitfield_1 {
    ushort rpl:2; /* : bits 0-1 */
    ushort ti:1; /* : bits 2 */
    ushort index:13; /* : bits 3-15 */
};

struct sel {
    union anon__struct_559_bitfield_1 field_0x0;
};

struct call_gate {
    ushort offset00;
    sel_t seg;
    union anon__struct_569_bitfield_1 field_0x4;
};

typedef struct call_gate call_gate_t;

typedef struct code_desc code_desc, *Pcode_desc;

struct code_desc {
    ushort limit00;
    ushort base00;
    uchar base16;
    union anon__struct_566_bitfield_1 field_0x5;
    union anon__struct_566_bitfield_2 field_0x6;
    uchar base24;
};

typedef struct code_desc code_desc_t;

typedef struct data_desc data_desc, *Pdata_desc;

struct data_desc {
    ushort limit00;
    ushort base00;
    uchar base16;
    union anon__struct_567_bitfield_1 field_0x5;
    union anon__struct_567_bitfield_2 field_0x6;
    uchar base24;
};

typedef struct data_desc data_desc_t;

typedef struct intr_gate intr_gate, *Pintr_gate;

struct intr_gate {
    ushort offset00;
    sel_t seg;
    union anon__struct_571_bitfield_1 field_0x4;
};

typedef struct intr_gate intr_gate_t;

typedef struct ldt_desc ldt_desc, *Pldt_desc;

struct ldt_desc {
    ushort limit00;
    ushort base00;
    uchar base16;
    union anon__struct_568_bitfield_1 field_0x5;
    union anon__struct_568_bitfield_2 field_0x6;
    uchar base24;
};

typedef struct ldt_desc ldt_desc_t;

typedef struct trap_gate trap_gate, *Ptrap_gate;

struct trap_gate {
    ushort offset00;
    sel_t seg;
    union anon__struct_570_bitfield_1 field_0x4;
};

typedef struct trap_gate trap_gate_t;

#define DEVFS_BLOCK 1

#define DEVFS_CHAR 0

#define DEVFS_CLONE_ALLOC 1

#define DEVFS_CLONE_FREE 0

#define GID_BIN 7

#define GID_DIALER 68

#define GID_GAMES 13

#define GID_KMEM 2

#define GID_OPERATOR 5

#define GID_TTY 4

#define GID_WHEEL 0

#define UID_BIN 3

#define UID_ROOT 0

#define UID_UUCP 66

#define DEVICE_PAGER_CACHE_INHIB 4

#define DEVICE_PAGER_COHERENT 2

#define DEVICE_PAGER_CONTIGUOUS 256

#define DEVICE_PAGER_GUARDED 1

#define DEVICE_PAGER_NOPHYSCACHE 512

#define DEVICE_PAGER_WRITE_THROUGH 8

typedef char * io_buf_ptr_t;

#define DH_CHECK_P_NOT_PRIME 1

#define DH_CHECK_P_NOT_SAFE_PRIME 2

#define DH_CHECK_P_NOT_STRONG_PRIME 2

#define DH_CHECK_PUBKEY_TOO_LARGE 2

#define DH_CHECK_PUBKEY_TOO_SMALL 1

#define DH_F_COMPUTE_KEY 102

#define DH_F_DH_BUILTIN_GENPARAMS 106

#define DH_F_DH_COMPUTE_KEY 107

#define DH_F_DH_GENERATE_KEY 108

#define DH_F_DH_GENERATE_PARAMETERS 109

#define DH_F_DH_NEW_METHOD 105

#define DH_F_DHPARAMS_PRINT 100

#define DH_F_DHPARAMS_PRINT_FP 101

#define DH_F_GENERATE_KEY 103

#define DH_F_GENERATE_PARAMETERS 104

#define DH_FLAG_CACHE_MONT_P 1

#define DH_FLAG_NO_EXP_CONSTTIME 2

#define DH_GENERATOR_2 2

#define DH_GENERATOR_5 5

#define DH_NOT_SUITABLE_GENERATOR 8

#define DH_R_BAD_GENERATOR 101

#define DH_R_INVALID_PUBKEY 102

#define DH_R_KEY_SIZE_TOO_SMALL 104

#define DH_R_MODULUS_TOO_LARGE 103

#define DH_R_NO_PRIVATE_VALUE 100

#define DH_UNABLE_TO_CHECK_GENERATOR 4

#define OPENSSL_DH_FIPS_MIN_MODULUS_BITS 1024

#define OPENSSL_DH_MAX_MODULUS_BITS 10000

#define __DARWIN_MAXNAMLEN 255

#define __DARWIN_MAXPATHLEN 1024

#define DT_BLK 6

#define DT_CHR 2

#define DT_DIR 4

#define DT_FIFO 1

#define DT_LNK 10

#define DT_REG 8

#define DT_SOCK 12

#define DT_UNKNOWN 0

#define DT_WHT 14

#define MAXNAMLEN 255

#define DK_FEATURE_UNMAP 16

typedef struct dk_extent_t dk_extent_t, *Pdk_extent_t;

struct dk_extent_t {
    uint64_t offset;
    uint64_t length;
};

typedef struct dk_firmware_path_t dk_firmware_path_t, *Pdk_firmware_path_t;

struct dk_firmware_path_t {
    char path[128];
};

typedef struct dk_format_capacities_t dk_format_capacities_t, *Pdk_format_capacities_t;

typedef struct dk_format_capacity_t dk_format_capacity_t, *Pdk_format_capacity_t;

struct dk_format_capacities_t {
    struct dk_format_capacity_t * capacities;
    uint32_t capacitiesCount;
    uint8_t reserved0096[4];
};

struct dk_format_capacity_t {
    uint64_t blockCount;
    uint32_t blockSize;
    uint8_t reserved0096[4];
};

typedef struct dk_unmap_t dk_unmap_t, *Pdk_unmap_t;

struct dk_unmap_t {
    struct dk_extent_t * extents;
    uint32_t extentsCount;
    uint8_t reserved0096[4];
};

#define DISPATCH_API_VERSION 20130520

typedef struct __dns_handle_private_struct __dns_handle_private_struct, *P__dns_handle_private_struct;

struct __dns_handle_private_struct {
};

typedef struct __dns_handle_private_struct * dns_handle_t;

#define _DNS_SD_H 5229201

#define _DNS_SD_LIBDISPATCH 1

#define kDNSServiceInterfaceIndexAny 0

#define kDNSServiceInterfaceIndexLocalOnly -1

#define kDNSServiceInterfaceIndexP2P -3

#define kDNSServiceInterfaceIndexUnicast -2

#define kDNSServiceMaxDomainName 1009

#define kDNSServiceMaxServiceName 64

typedef struct _DNSRecordRef_t _DNSRecordRef_t, *P_DNSRecordRef_t;

struct _DNSRecordRef_t {
};

typedef struct _DNSServiceRef_t _DNSServiceRef_t, *P_DNSServiceRef_t;

struct _DNSServiceRef_t {
};

typedef union _TXTRecordRef_t _TXTRecordRef_t, *P_TXTRecordRef_t;

union _TXTRecordRef_t {
    char PrivateData[16];
    char * ForceNaturalAlignment;
};

typedef struct CompileTimeAssertionChecks_DNS_SD CompileTimeAssertionChecks_DNS_SD, *PCompileTimeAssertionChecks_DNS_SD;

struct CompileTimeAssertionChecks_DNS_SD {
    char[0] assert0;
};

typedef struct _DNSRecordRef_t * DNSRecordRef;

typedef struct _DNSServiceRef_t * DNSServiceRef;

typedef uint32_t DNSServiceFlags;

typedef int32_t DNSServiceErrorType;

typedef void (* DNSServiceBrowseReply)(DNSServiceRef, DNSServiceFlags, uint32_t, DNSServiceErrorType, char *, char *, char *, void *);

typedef void (* DNSServiceDomainEnumReply)(DNSServiceRef, DNSServiceFlags, uint32_t, DNSServiceErrorType, char *, void *);

typedef struct sockaddr sockaddr, *Psockaddr;

typedef void (* DNSServiceGetAddrInfoReply)(DNSServiceRef, DNSServiceFlags, uint32_t, DNSServiceErrorType, char *, struct sockaddr *, uint32_t, void *);

struct sockaddr {
    __uint8_t sa_len;
    sa_family_t sa_family;
    char sa_data[14];
};

typedef uint32_t DNSServiceProtocol;

typedef void (* DNSServiceNATPortMappingReply)(DNSServiceRef, DNSServiceFlags, uint32_t, DNSServiceErrorType, uint32_t, DNSServiceProtocol, uint16_t, uint16_t, uint32_t, void *);

typedef void (* DNSServiceQueryRecordReply)(DNSServiceRef, DNSServiceFlags, uint32_t, DNSServiceErrorType, char *, uint16_t, uint16_t, uint16_t, void *, uint32_t, void *);

typedef void (* DNSServiceRegisterRecordReply)(DNSServiceRef, DNSRecordRef, DNSServiceFlags, DNSServiceErrorType, void *);

typedef void (* DNSServiceRegisterReply)(DNSServiceRef, DNSServiceFlags, DNSServiceErrorType, char *, char *, char *, void *);

typedef void (* DNSServiceResolveReply)(DNSServiceRef, DNSServiceFlags, uint32_t, DNSServiceErrorType, char *, char *, uint16_t, uint16_t, uchar *, void *);

typedef void (* DNSServiceSleepKeepaliveReply)(DNSServiceRef, DNSServiceErrorType, void *);

typedef enum enum_1476 {
    kDNSServiceFlagsAdd=2,
    kDNSServiceFlagsAllowRemoteQuery=512,
    kDNSServiceFlagsBackgroundTrafficClass=524288,
    kDNSServiceFlagsBogus=2097216,
    kDNSServiceFlagsBrowseDomains=64,
    kDNSServiceFlagsDefault=4,
    kDNSServiceFlagsForce=2048,
    kDNSServiceFlagsForceMulticast=1024,
    kDNSServiceFlagsIncludeAWDL=1048576,
    kDNSServiceFlagsIncludeP2P=131072,
    kDNSServiceFlagsIndeterminate=2097280,
    kDNSServiceFlagsInsecure=2097184,
    kDNSServiceFlagsKnownUnique=2048,
    kDNSServiceFlagsLongLivedQuery=256,
    kDNSServiceFlagsMoreComing=1,
    kDNSServiceFlagsNoAutoRename=8,
    kDNSServiceFlagsNonBrowsable=8192,
    kDNSServiceFlagsRegistrationDomains=128,
    kDNSServiceFlagsReturnIntermediates=4096,
    kDNSServiceFlagsSecure=2097168,
    kDNSServiceFlagsShareConnection=16384,
    kDNSServiceFlagsShared=16,
    kDNSServiceFlagsSuppressUnusable=32768,
    kDNSServiceFlagsThresholdFinder=67108864,
    kDNSServiceFlagsThresholdOne=33554432,
    kDNSServiceFlagsThresholdReached=67108865,
    kDNSServiceFlagsTimeout=65536,
    kDNSServiceFlagsUnicastResponse=4194304,
    kDNSServiceFlagsUnique=32,
    kDNSServiceFlagsValidate=2097152,
    kDNSServiceFlagsValidateOptional=8388608,
    kDNSServiceFlagsWakeOnResolve=262144,
    kDNSServiceFlagsWakeOnlyService=16777216
} enum_1476;

typedef enum enum_1477 {
    kDNSServiceProtocol_IPv4=1,
    kDNSServiceProtocol_IPv6=2,
    kDNSServiceProtocol_TCP=32,
    kDNSServiceProtocol_UDP=16
} enum_1477;

typedef enum enum_1478 {
    kDNSServiceClass_IN=1
} enum_1478;

typedef enum enum_1479 {
    kDNSServiceType_A=1,
    kDNSServiceType_A6=38,
    kDNSServiceType_AAAA=28,
    kDNSServiceType_AFSDB=18,
    kDNSServiceType_ANY=255,
    kDNSServiceType_APL=42,
    kDNSServiceType_ATMA=34,
    kDNSServiceType_AXFR=252,
    kDNSServiceType_CERT=37,
    kDNSServiceType_CNAME=5,
    kDNSServiceType_DHCID=49,
    kDNSServiceType_DNAME=39,
    kDNSServiceType_DNSKEY=48,
    kDNSServiceType_DS=43,
    kDNSServiceType_EID=31,
    kDNSServiceType_GID=102,
    kDNSServiceType_GPOS=27,
    kDNSServiceType_HINFO=13,
    kDNSServiceType_HIP=55,
    kDNSServiceType_IPSECKEY=45,
    kDNSServiceType_ISDN=20,
    kDNSServiceType_IXFR=251,
    kDNSServiceType_KEY=25,
    kDNSServiceType_KX=36,
    kDNSServiceType_LOC=29,
    kDNSServiceType_MAILA=254,
    kDNSServiceType_MAILB=253,
    kDNSServiceType_MB=7,
    kDNSServiceType_MD=3,
    kDNSServiceType_MF=4,
    kDNSServiceType_MG=8,
    kDNSServiceType_MINFO=14,
    kDNSServiceType_MR=9,
    kDNSServiceType_MX=15,
    kDNSServiceType_NAPTR=35,
    kDNSServiceType_NIMLOC=32,
    kDNSServiceType_NS=2,
    kDNSServiceType_NSAP=22,
    kDNSServiceType_NSAP_PTR=23,
    kDNSServiceType_NSEC=47,
    kDNSServiceType_NSEC3=50,
    kDNSServiceType_NSEC3PARAM=51,
    kDNSServiceType_NULL=10,
    kDNSServiceType_NXT=30,
    kDNSServiceType_OPT=41,
    kDNSServiceType_PTR=12,
    kDNSServiceType_PX=26,
    kDNSServiceType_RP=17,
    kDNSServiceType_RRSIG=46,
    kDNSServiceType_RT=21,
    kDNSServiceType_SIG=24,
    kDNSServiceType_SINK=40,
    kDNSServiceType_SOA=6,
    kDNSServiceType_SPF=99,
    kDNSServiceType_SRV=33,
    kDNSServiceType_SSHFP=44,
    kDNSServiceType_TKEY=249,
    kDNSServiceType_TSIG=250,
    kDNSServiceType_TXT=16,
    kDNSServiceType_UID=101,
    kDNSServiceType_UINFO=100,
    kDNSServiceType_UNSPEC=103,
    kDNSServiceType_WKS=11,
    kDNSServiceType_X25=19
} enum_1479;

typedef enum enum_1480 {
    kDNSServiceErr_AlreadyRegistered=10,
    kDNSServiceErr_BadFlags=7,
    kDNSServiceErr_BadInterfaceIndex=15,
    kDNSServiceErr_BadKey=24,
    kDNSServiceErr_BadParam=4,
    kDNSServiceErr_BadReference=5,
    kDNSServiceErr_BadSig=23,
    kDNSServiceErr_BadState=6,
    kDNSServiceErr_BadTime=22,
    kDNSServiceErr_DoubleNAT=21,
    kDNSServiceErr_Firewall=13,
    kDNSServiceErr_Incompatible=14,
    kDNSServiceErr_Invalid=12,
    kDNSServiceErr_NATPortMappingDisabled=28,
    kDNSServiceErr_NATPortMappingUnsupported=27,
    kDNSServiceErr_NATTraversal=20,
    kDNSServiceErr_NameConflict=11,
    kDNSServiceErr_NoAuth=18,
    kDNSServiceErr_NoError=0,
    kDNSServiceErr_NoMemory=3,
    kDNSServiceErr_NoRouter=29,
    kDNSServiceErr_NoSuchKey=19,
    kDNSServiceErr_NoSuchName=2,
    kDNSServiceErr_NoSuchRecord=17,
    kDNSServiceErr_NotInitialized=9,
    kDNSServiceErr_PollingMode=30,
    kDNSServiceErr_Refused=16,
    kDNSServiceErr_ServiceNotRunning=26,
    kDNSServiceErr_Timeout=31,
    kDNSServiceErr_Transient=25,
    kDNSServiceErr_Unknown=1,
    kDNSServiceErr_Unsupported=8
} enum_1480;

typedef union _TXTRecordRef_t TXTRecordRef;

#define DNS_PRINT_AA 8

#define DNS_PRINT_ADDITIONAL 4096

#define DNS_PRINT_ANSWER 1024

#define DNS_PRINT_AUTHORITY 2048

#define DNS_PRINT_OPCODE 4

#define DNS_PRINT_PR 128

#define DNS_PRINT_QR 2

#define DNS_PRINT_QUESTION 512

#define DNS_PRINT_RA 64

#define DNS_PRINT_RCODE 256

#define DNS_PRINT_RD 32

#define DNS_PRINT_SERVER 8192

#define DNS_PRINT_TC 16

#define DNS_PRINT_XID 1

#define DNS_STATUS_BAD_HANDLE 1

#define DNS_STATUS_CONNECTION_FAILED 6

#define DNS_STATUS_MALFORMED_QUERY 2

#define DNS_STATUS_OK 0

#define DNS_STATUS_RECEIVE_FAILED 5

#define DNS_STATUS_SEND_FAILED 4

#define DNS_STATUS_TIMEOUT 3

#define DNS_STATUS_WRONG_QUESTION 9

#define DNS_STATUS_WRONG_SERVER 7

#define DNS_STATUS_WRONG_XID 8

typedef union _union_1511 _union_1511, *P_union_1511;

typedef struct dns_address_record_t dns_address_record_t, *Pdns_address_record_t;

typedef struct dns_domain_name_record_t dns_domain_name_record_t, *Pdns_domain_name_record_t;

typedef struct dns_SOA_record_t dns_SOA_record_t, *Pdns_SOA_record_t;

typedef struct dns_raw_resource_record_t dns_raw_resource_record_t, *Pdns_raw_resource_record_t;

typedef struct dns_WKS_record_t dns_WKS_record_t, *Pdns_WKS_record_t;

typedef struct dns_HINFO_record_t dns_HINFO_record_t, *Pdns_HINFO_record_t;

typedef struct dns_MINFO_record_t dns_MINFO_record_t, *Pdns_MINFO_record_t;

typedef struct dns_MX_record_t dns_MX_record_t, *Pdns_MX_record_t;

typedef struct dns_TXT_record_t dns_TXT_record_t, *Pdns_TXT_record_t;

typedef struct dns_RP_record_t dns_RP_record_t, *Pdns_RP_record_t;

typedef struct dns_AFSDB_record_t dns_AFSDB_record_t, *Pdns_AFSDB_record_t;

typedef struct dns_X25_record_t dns_X25_record_t, *Pdns_X25_record_t;

typedef struct dns_ISDN_record_t dns_ISDN_record_t, *Pdns_ISDN_record_t;

typedef struct dns_RT_record_t dns_RT_record_t, *Pdns_RT_record_t;

typedef struct dns_in6_address_record_t dns_in6_address_record_t, *Pdns_in6_address_record_t;

typedef struct dns_LOC_record_t dns_LOC_record_t, *Pdns_LOC_record_t;

typedef struct dns_SRV_record_t dns_SRV_record_t, *Pdns_SRV_record_t;

typedef struct in6_addr in6_addr, *Pin6_addr;

typedef union _union_458 _union_458, *P_union_458;

struct dns_domain_name_record_t {
    char * name;
};

struct dns_SOA_record_t {
    char * mname;
    char * rname;
    uint32_t serial;
    uint32_t refresh;
    uint32_t retry;
    uint32_t expire;
    uint32_t minimum;
};

struct dns_raw_resource_record_t {
    uint16_t length;
    char * data;
};

union _union_458 {
    __uint8_t __u6_addr8[16];
    __uint16_t __u6_addr16[8];
    __uint32_t __u6_addr32[4];
};

struct in6_addr {
    union _union_458 __u6_addr;
};

struct dns_in6_address_record_t {
    struct in6_addr addr;
};

struct dns_ISDN_record_t {
    char * isdn_address;
    char * subaddress;
};

struct dns_WKS_record_t {
    struct in_addr addr;
    uint8_t protocol;
    uint32_t maplength;
    uint8_t * map;
};

struct dns_RT_record_t {
    uint16_t preference;
    char * intermediate;
};

struct dns_TXT_record_t {
    uint32_t string_count;
    char * * strings;
};

struct dns_address_record_t {
    struct in_addr addr;
};

struct dns_SRV_record_t {
    uint16_t priority;
    uint16_t weight;
    uint16_t port;
    char * target;
};

struct dns_MX_record_t {
    uint16_t preference;
    char * name;
};

struct dns_RP_record_t {
    char * mailbox;
    char * txtdname;
};

struct dns_MINFO_record_t {
    char * rmailbx;
    char * emailbx;
};

struct dns_X25_record_t {
    char * psdn_address;
};

struct dns_LOC_record_t {
    uint8_t version;
    uint8_t size;
    uint8_t horizontal_precision;
    uint8_t vertical_precision;
    uint32_t latitude;
    uint32_t longitude;
    uint32_t altitude;
};

struct dns_AFSDB_record_t {
    uint32_t subtype;
    char * hostname;
};

struct dns_HINFO_record_t {
    char * cpu;
    char * os;
};

union _union_1511 {
    struct dns_address_record_t * A;
    struct dns_domain_name_record_t * NS;
    struct dns_domain_name_record_t * MD;
    struct dns_domain_name_record_t * MF;
    struct dns_domain_name_record_t * CNAME;
    struct dns_SOA_record_t * SOA;
    struct dns_domain_name_record_t * MB;
    struct dns_domain_name_record_t * MG;
    struct dns_domain_name_record_t * MR;
    struct dns_raw_resource_record_t * DNSNULL;
    struct dns_WKS_record_t * WKS;
    struct dns_domain_name_record_t * PTR;
    struct dns_HINFO_record_t * HINFO;
    struct dns_MINFO_record_t * MINFO;
    struct dns_MX_record_t * MX;
    struct dns_TXT_record_t * TXT;
    struct dns_RP_record_t * RP;
    struct dns_AFSDB_record_t * AFSDB;
    struct dns_X25_record_t * X25;
    struct dns_ISDN_record_t * ISDN;
    struct dns_RT_record_t * RT;
    struct dns_in6_address_record_t * AAAA;
    struct dns_LOC_record_t * LOC;
    struct dns_SRV_record_t * SRV;
};

typedef struct dns_header_t dns_header_t, *Pdns_header_t;

struct dns_header_t {
    uint16_t xid;
    uint16_t flags;
    uint16_t qdcount;
    uint16_t ancount;
    uint16_t nscount;
    uint16_t arcount;
};

typedef struct dns_question_t dns_question_t, *Pdns_question_t;

struct dns_question_t {
    char * name;
    uint16_t dnstype;
    uint16_t dnsclass;
};

typedef struct dns_reply_t dns_reply_t, *Pdns_reply_t;

typedef struct dns_resource_record_t dns_resource_record_t, *Pdns_resource_record_t;

struct dns_reply_t {
    uint32_t status;
    struct sockaddr * server;
    struct dns_header_t * header;
    struct dns_question_t * * question;
    struct dns_resource_record_t * * answer;
    struct dns_resource_record_t * * authority;
    struct dns_resource_record_t * * additional;
};

struct dns_resource_record_t {
    char * name;
    uint16_t dnstype;
    uint16_t dnsclass;
    uint32_t ttl;
    union _union_1511 data;
};

#define DSA_F_D2I_DSA_SIG 110

#define DSA_F_DSA_BUILTIN_KEYGEN 119

#define DSA_F_DSA_BUILTIN_PARAMGEN 118

#define DSA_F_DSA_DO_SIGN 112

#define DSA_F_DSA_DO_VERIFY 113

#define DSA_F_DSA_GENERATE_PARAMETERS 117

#define DSA_F_DSA_NEW_METHOD 103

#define DSA_F_DSA_PRINT 104

#define DSA_F_DSA_PRINT_FP 105

#define DSA_F_DSA_SET_DEFAULT_METHOD 115

#define DSA_F_DSA_SET_METHOD 116

#define DSA_F_DSA_SIG_NEW 109

#define DSA_F_DSA_SIGN 106

#define DSA_F_DSA_SIGN_SETUP 107

#define DSA_F_DSA_VERIFY 108

#define DSA_F_DSAPARAMS_PRINT 100

#define DSA_F_DSAPARAMS_PRINT_FP 101

#define DSA_F_I2D_DSA_SIG 111

#define DSA_F_SIG_CB 114

#define DSA_FLAG_CACHE_MONT_P 1

#define DSA_FLAG_FIPS_METHOD 1024

#define DSA_FLAG_NO_EXP_CONSTTIME 2

#define DSA_FLAG_NON_FIPS_ALLOW 1024

#define DSA_R_BAD_Q_VALUE 102

#define DSA_R_DATA_TOO_LARGE_FOR_KEY_SIZE 100

#define DSA_R_KEY_SIZE_TOO_SMALL 106

#define DSA_R_MISSING_PARAMETERS 101

#define DSA_R_MODULUS_TOO_LARGE 103

#define DSA_R_NON_FIPS_METHOD 104

#define DSA_R_OPERATION_NOT_ALLOWED_IN_FIPS_MODE 105

#define DSS_prime_checks 50

#define OPENSSL_DSA_FIPS_MIN_MODULUS_BITS 1024

#define OPENSSL_DSA_MAX_MODULUS_BITS 10000

typedef struct DSA_SIG_st DSA_SIG_st, *PDSA_SIG_st;

typedef struct DSA_SIG_st DSA_SIG;

typedef struct bignum_st bignum_st, *Pbignum_st;

typedef struct bignum_st BIGNUM;

struct DSA_SIG_st {
    BIGNUM * r;
    BIGNUM * s;
};

struct bignum_st {
    ulong * d;
    int top;
    int dmax;
    int neg;
    int flags;
};

#define DSO_CTRL_GET_FLAGS 1

#define DSO_CTRL_OR_FLAGS 3

#define DSO_CTRL_SET_FLAGS 2

#define DSO_F_DL_BIND_FUNC 104

#define DSO_F_DL_BIND_VAR 105

#define DSO_F_DL_LOAD 106

#define DSO_F_DL_MERGER 131

#define DSO_F_DL_NAME_CONVERTER 124

#define DSO_F_DL_UNLOAD 107

#define DSO_F_DLFCN_BIND_FUNC 100

#define DSO_F_DLFCN_BIND_VAR 101

#define DSO_F_DLFCN_LOAD 102

#define DSO_F_DLFCN_MERGER 130

#define DSO_F_DLFCN_NAME_CONVERTER 123

#define DSO_F_DLFCN_UNLOAD 103

#define DSO_F_DSO_BIND_FUNC 108

#define DSO_F_DSO_BIND_VAR 109

#define DSO_F_DSO_CONVERT_FILENAME 126

#define DSO_F_DSO_CTRL 110

#define DSO_F_DSO_FREE 111

#define DSO_F_DSO_GET_FILENAME 127

#define DSO_F_DSO_GET_LOADED_FILENAME 128

#define DSO_F_DSO_LOAD 112

#define DSO_F_DSO_MERGE 132

#define DSO_F_DSO_NEW_METHOD 113

#define DSO_F_DSO_SET_FILENAME 129

#define DSO_F_DSO_SET_NAME_CONVERTER 122

#define DSO_F_DSO_UP_REF 114

#define DSO_F_VMS_BIND_SYM 115

#define DSO_F_VMS_LOAD 116

#define DSO_F_VMS_MERGER 133

#define DSO_F_VMS_UNLOAD 117

#define DSO_F_WIN32_BIND_FUNC 118

#define DSO_F_WIN32_BIND_VAR 119

#define DSO_F_WIN32_JOINER 135

#define DSO_F_WIN32_LOAD 120

#define DSO_F_WIN32_MERGER 134

#define DSO_F_WIN32_NAME_CONVERTER 125

#define DSO_F_WIN32_SPLITTER 136

#define DSO_F_WIN32_UNLOAD 121

#define DSO_FLAG_GLOBAL_SYMBOLS 32

#define DSO_FLAG_NAME_TRANSLATION_EXT_ONLY 2

#define DSO_FLAG_NO_NAME_TRANSLATION 1

#define DSO_FLAG_UPCASE_SYMBOL 16

#define DSO_R_CTRL_FAILED 100

#define DSO_R_DSO_ALREADY_LOADED 110

#define DSO_R_EMPTY_FILE_STRUCTURE 113

#define DSO_R_FAILURE 114

#define DSO_R_FILENAME_TOO_BIG 101

#define DSO_R_FINISH_FAILED 102

#define DSO_R_INCORRECT_FILE_SYNTAX 115

#define DSO_R_LOAD_FAILED 103

#define DSO_R_NAME_TRANSLATION_FAILED 109

#define DSO_R_NO_FILE_SPECIFICATION 116

#define DSO_R_NO_FILENAME 111

#define DSO_R_NULL_HANDLE 104

#define DSO_R_SET_FILENAME_FAILED 112

#define DSO_R_STACK_ERROR 105

#define DSO_R_SYM_FAILURE 106

#define DSO_R_UNLOAD_FAILED 107

#define DSO_R_UNSUPPORTED 108

typedef struct dso_st dso_st, *Pdso_st;

typedef struct dso_st DSO;

typedef struct dso_meth_st dso_meth_st, *Pdso_meth_st;

typedef void (* DSO_FUNC_TYPE)(void);

typedef struct dso_meth_st DSO_METHOD;

typedef char * (* DSO_NAME_CONVERTER_FUNC)(DSO *, char *);

typedef char * (* DSO_MERGER_FUNC)(DSO *, char *, char *);

struct dso_st {
    DSO_METHOD * meth;
    STACK * meth_data;
    int references;
    int flags;
    CRYPTO_EX_DATA ex_data;
    DSO_NAME_CONVERTER_FUNC name_converter;
    DSO_MERGER_FUNC merger;
    char * filename;
    char * loaded_filename;
};

struct dso_meth_st {
    char * name;
    int (* dso_load)(DSO *);
    int (* dso_unload)(DSO *);
    void * (* dso_bind_var)(DSO *, char *);
    DSO_FUNC_TYPE (* dso_bind_func)(DSO *, char *);
    long (* dso_ctrl)(DSO *, int, long, void *);
    DSO_NAME_CONVERTER_FUNC dso_name_converter;
    DSO_MERGER_FUNC dso_merger;
    int (* init)(DSO *);
    int (* finish)(DSO *);
};

#define CTF_MODEL_ILP32 1

#define CTF_MODEL_LP64 2

#define CTF_MODEL_NATIVE 2

#define DIF_DIR_NREGS 8

#define DIF_DTR_NREGS 8

#define DIF_INSTR_FLUSHTS 855638016

#define DIF_INSTR_NOP 603979776

#define DIF_INSTR_POPTS 838860800

#define DIF_INTOFF_MAX 65535

#define DIF_OP_ADD 7

#define DIF_OP_ALLOCS 58

#define DIF_OP_AND 3

#define DIF_OP_BA 17

#define DIF_OP_BE 18

#define DIF_OP_BG 20

#define DIF_OP_BGE 22

#define DIF_OP_BGEU 23

#define DIF_OP_BGU 21

#define DIF_OP_BL 24

#define DIF_OP_BLE 26

#define DIF_OP_BLEU 27

#define DIF_OP_BLU 25

#define DIF_OP_BNE 19

#define DIF_OP_CALL 47

#define DIF_OP_CMP 15

#define DIF_OP_COPYS 59

#define DIF_OP_FLUSHTS 51

#define DIF_OP_LDGA 40

#define DIF_OP_LDGAA 52

#define DIF_OP_LDGS 41

#define DIF_OP_LDLS 56

#define DIF_OP_LDSB 28

#define DIF_OP_LDSH 29

#define DIF_OP_LDSW 30

#define DIF_OP_LDTA 43

#define DIF_OP_LDTAA 53

#define DIF_OP_LDTS 44

#define DIF_OP_LDUB 31

#define DIF_OP_LDUH 32

#define DIF_OP_LDUW 33

#define DIF_OP_LDX 34

#define DIF_OP_MOV 14

#define DIF_OP_MUL 8

#define DIF_OP_NOP 36

#define DIF_OP_NOT 13

#define DIF_OP_OR 1

#define DIF_OP_POPTS 50

#define DIF_OP_PUSHTR 48

#define DIF_OP_PUSHTV 49

#define DIF_OP_RET 35

#define DIF_OP_RLDSB 71

#define DIF_OP_RLDSH 72

#define DIF_OP_RLDSW 73

#define DIF_OP_RLDUB 74

#define DIF_OP_RLDUH 75

#define DIF_OP_RLDUW 76

#define DIF_OP_RLDX 77

#define DIF_OP_SCMP 39

#define DIF_OP_SDIV 9

#define DIF_OP_SETS 38

#define DIF_OP_SETX 37

#define DIF_OP_SLL 4

#define DIF_OP_SRA 46

#define DIF_OP_SREM 11

#define DIF_OP_SRL 5

#define DIF_OP_STB 60

#define DIF_OP_STGAA 54

#define DIF_OP_STGS 42

#define DIF_OP_STH 61

#define DIF_OP_STLS 57

#define DIF_OP_STTAA 55

#define DIF_OP_STTS 45

#define DIF_OP_STW 62

#define DIF_OP_STX 63

#define DIF_OP_SUB 6

#define DIF_OP_TST 16

#define DIF_OP_UDIV 10

#define DIF_OP_ULDSB 64

#define DIF_OP_ULDSH 65

#define DIF_OP_ULDSW 66

#define DIF_OP_ULDUB 67

#define DIF_OP_ULDUH 68

#define DIF_OP_ULDUW 69

#define DIF_OP_ULDX 70

#define DIF_OP_UREM 12

#define DIF_OP_XLARG 79

#define DIF_OP_XLATE 78

#define DIF_OP_XOR 2

#define DIF_REG_R0 0

#define DIF_REGISTER_MAX 255

#define DIF_STROFF_MAX 65535

#define DIF_SUBR_ALLOCA 15

#define DIF_SUBR_BASENAME 25

#define DIF_SUBR_BCOPY 16

#define DIF_SUBR_CLEANPATH 27

#define DIF_SUBR_COPYIN 8

#define DIF_SUBR_COPYINSTR 9

#define DIF_SUBR_COPYINTO 17

#define DIF_SUBR_COPYOUT 13

#define DIF_SUBR_COPYOUTSTR 14

#define DIF_SUBR_COREPROFILE 44

#define DIF_SUBR_DDI_PATHNAME 22

#define DIF_SUBR_DIRNAME 26

#define DIF_SUBR_GETMAJOR 20

#define DIF_SUBR_GETMINOR 21

#define DIF_SUBR_HTONL 36

#define DIF_SUBR_HTONLL 37

#define DIF_SUBR_HTONS 35

#define DIF_SUBR_INDEX 33

#define DIF_SUBR_INET_NTOA 42

#define DIF_SUBR_INET_NTOA6 43

#define DIF_SUBR_INET_NTOP 41

#define DIF_SUBR_LLTOSTR 24

#define DIF_SUBR_MAX 44

#define DIF_SUBR_MSGDSIZE 18

#define DIF_SUBR_MSGSIZE 19

#define DIF_SUBR_MUTEX_OWNED 1

#define DIF_SUBR_MUTEX_OWNER 2

#define DIF_SUBR_MUTEX_TYPE_ADAPTIVE 3

#define DIF_SUBR_MUTEX_TYPE_SPIN 4

#define DIF_SUBR_NTOHL 39

#define DIF_SUBR_NTOHLL 40

#define DIF_SUBR_NTOHS 38

#define DIF_SUBR_PROGENYOF 11

#define DIF_SUBR_RAND 0

#define DIF_SUBR_RINDEX 34

#define DIF_SUBR_RW_ISWRITER 7

#define DIF_SUBR_RW_READ_HELD 5

#define DIF_SUBR_RW_WRITE_HELD 6

#define DIF_SUBR_SPECULATION 10

#define DIF_SUBR_STRCHR 28

#define DIF_SUBR_STRJOIN 23

#define DIF_SUBR_STRLEN 12

#define DIF_SUBR_STRRCHR 29

#define DIF_SUBR_STRSTR 30

#define DIF_SUBR_STRTOK 31

#define DIF_SUBR_SUBSTR 32

#define DIF_SUBROUTINE_MAX 65535

#define DIF_TF_BYREF 1

#define DIF_TYPE_CTF 0

#define DIF_TYPE_STRING 1

#define DIF_VAR_ARG0 262

#define DIF_VAR_ARG1 263

#define DIF_VAR_ARG2 264

#define DIF_VAR_ARG3 265

#define DIF_VAR_ARG4 266

#define DIF_VAR_ARG5 267

#define DIF_VAR_ARG6 268

#define DIF_VAR_ARG7 269

#define DIF_VAR_ARG8 270

#define DIF_VAR_ARG9 271

#define DIF_VAR_ARGS 0

#define DIF_VAR_ARRAY_MAX 255

#define DIF_VAR_ARRAY_MIN 0

#define DIF_VAR_ARRAY_UBASE 128

#define DIF_VAR_CALLER 273

#define DIF_VAR_CURTHREAD 256

#define DIF_VAR_DISPATCHQADDR 513

#define DIF_VAR_EPID 260

#define DIF_VAR_ERRNO 288

#define DIF_VAR_EXECNAME 280

#define DIF_VAR_GID 287

#define DIF_VAR_ID 261

#define DIF_VAR_IPL 259

#define DIF_VAR_OTHER_MAX 65535

#define DIF_VAR_OTHER_MIN 256

#define DIF_VAR_OTHER_UBASE 1280

#define DIF_VAR_PID 278

#define DIF_VAR_PPID 285

#define DIF_VAR_PROBEFUNC 276

#define DIF_VAR_PROBEMOD 275

#define DIF_VAR_PROBENAME 277

#define DIF_VAR_PROBEPROV 274

#define DIF_VAR_PTHREAD_SELF 512

#define DIF_VAR_REGS 1

#define DIF_VAR_STACKDEPTH 272

#define DIF_VAR_TID 279

#define DIF_VAR_TIMESTAMP 257

#define DIF_VAR_UCALLER 284

#define DIF_VAR_UID 286

#define DIF_VAR_UREGS 2

#define DIF_VAR_USTACKDEPTH 283

#define DIF_VAR_VTIMESTAMP 258

#define DIF_VAR_WALLTIMESTAMP 282

#define DIF_VAR_ZONENAME 281

#define DIF_VARIABLE_MAX 65535

#define DIF_VERSION 2

#define DIF_VERSION_1 1

#define DIF_VERSION_2 2

#define DIFV_F_MOD 2

#define DIFV_F_REF 1

#define DIFV_KIND_ARRAY 0

#define DIFV_KIND_SCALAR 1

#define DIFV_SCOPE_GLOBAL 0

#define DIFV_SCOPE_LOCAL 2

#define DIFV_SCOPE_THREAD 1

#define DOF_ENCODE_LSB 1

#define DOF_ENCODE_MSB 2

#define DOF_ENCODE_NATIVE 1

#define DOF_ENCODE_NONE 0

#define DOF_FL_VALID 0

#define DOF_ID_DIFIREG 8

#define DOF_ID_DIFTREG 9

#define DOF_ID_DIFVERS 7

#define DOF_ID_ENCODING 5

#define DOF_ID_MAG0 0

#define DOF_ID_MAG1 1

#define DOF_ID_MAG2 2

#define DOF_ID_MAG3 3

#define DOF_ID_MODEL 4

#define DOF_ID_PAD 10

#define DOF_ID_SIZE 16

#define DOF_ID_VERSION 6

#define DOF_MAG_MAG0 127

#define DOF_MAG_STRLEN 4

#define DOF_MODEL_ILP32 1

#define DOF_MODEL_LP64 2

#define DOF_MODEL_NATIVE 2

#define DOF_MODEL_NONE 0

#define DOF_RELO_NONE 0

#define DOF_RELO_SETX 1

#define DOF_SECF_LOAD 1

#define DOF_SECIDX_NONE -1

#define DOF_SECT_ACTDESC 5

#define DOF_SECT_COMMENTS 1

#define DOF_SECT_DIF 7

#define DOF_SECT_DIFOHDR 6

#define DOF_SECT_ECBDESC 3

#define DOF_SECT_INTTAB 19

#define DOF_SECT_KRELHDR 13

#define DOF_SECT_NONE 0

#define DOF_SECT_OPTDESC 14

#define DOF_SECT_PRARGS 17

#define DOF_SECT_PRENOFFS 26

#define DOF_SECT_PREXPORT 25

#define DOF_SECT_PROBEDESC 4

#define DOF_SECT_PROBES 16

#define DOF_SECT_PROFFS 18

#define DOF_SECT_PROVIDER 15

#define DOF_SECT_RELTAB 10

#define DOF_SECT_SOURCE 2

#define DOF_SECT_STRTAB 8

#define DOF_SECT_TYPTAB 11

#define DOF_SECT_URELHDR 12

#define DOF_SECT_UTSNAME 20

#define DOF_SECT_VARTAB 9

#define DOF_SECT_XLEXPORT 24

#define DOF_SECT_XLIMPORT 23

#define DOF_SECT_XLMEMBERS 22

#define DOF_SECT_XLTAB 21

#define DOF_STRIDX_NONE -1

#define DOF_VERSION 3

#define DOF_VERSION_1 1

#define DOF_VERSION_2 2

#define DOF_VERSION_3 3

#define DTRACE_AGGIDNONE 0

#define DTRACE_AGGVARIDNONE 0

#define DTRACE_ARGNONE -1

#define DTRACE_ARGTYPELEN 128

#define DTRACE_CACHEIDNONE 0

#define DTRACE_CLASS_COMMON 5

#define DTRACE_CLASS_CPU 1

#define DTRACE_CLASS_GROUP 3

#define DTRACE_CLASS_ISA 4

#define DTRACE_CLASS_MAX 5

#define DTRACE_CLASS_PLATFORM 2

#define DTRACE_CLASS_UNKNOWN 0

#define DTRACE_CPUALL -1

#define DTRACE_EPIDNONE 0

#define DTRACE_FUNCNAMELEN 128

#define DTRACE_IDNONE 0

#define DTRACE_INVOP_LEAVE 3

#define DTRACE_INVOP_NOP 4

#define DTRACE_INVOP_POPL_EBP 2

#define DTRACE_INVOP_PUSHL_EBP 1

#define DTRACE_INVOP_RET 5

#define DTRACE_LLQUANTIZE_FACTORMASK -281474976710656

#define DTRACE_LLQUANTIZE_FACTORSHIFT 48

#define DTRACE_LLQUANTIZE_HIGHMASK 4294901760

#define DTRACE_LLQUANTIZE_HIGHSHIFT 16

#define DTRACE_LLQUANTIZE_LOWMASK 281470681743360

#define DTRACE_LLQUANTIZE_LOWSHIFT 32

#define DTRACE_LLQUANTIZE_NSTEPMASK 65535

#define DTRACE_LLQUANTIZE_NSTEPSHIFT 0

#define DTRACE_LQUANTIZE_BASEMASK 4294967295

#define DTRACE_LQUANTIZE_BASESHIFT 0

#define DTRACE_LQUANTIZE_LEVELMASK 281470681743360

#define DTRACE_LQUANTIZE_LEVELSHIFT 32

#define DTRACE_LQUANTIZE_STEPMASK -281474976710656

#define DTRACE_LQUANTIZE_STEPSHIFT 48

#define DTRACE_METAPROVNONE 0

#define DTRACE_MODNAMELEN 64

#define DTRACE_NAMELEN 64

#define DTRACE_PRIV_KERNEL 1

#define DTRACE_PRIV_NONE 0

#define DTRACE_PRIV_OWNER 8

#define DTRACE_PRIV_PROC 4

#define DTRACE_PRIV_USER 2

#define DTRACE_PRIV_ZONEOWNER 16

#define DTRACE_PROVNAMELEN 64

#define DTRACE_PROVNONE 0

#define DTRACE_STABILITY_EVOLVING 5

#define DTRACE_STABILITY_EXTERNAL 3

#define DTRACE_STABILITY_INTERNAL 0

#define DTRACE_STABILITY_MAX 7

#define DTRACE_STABILITY_OBSOLETE 2

#define DTRACE_STABILITY_PRIVATE 1

#define DTRACE_STABILITY_STABLE 6

#define DTRACE_STABILITY_STANDARD 7

#define DTRACE_STABILITY_UNSTABLE 4

#define DTRACEACT_AGGREGATION 1792

#define DTRACEACT_APPLEBINARY 50

#define DTRACEACT_BREAKPOINT 1281

#define DTRACEACT_CHILL 1283

#define DTRACEACT_COMMIT 1538

#define DTRACEACT_DIFEXPR 1

#define DTRACEACT_DISCARD 1539

#define DTRACEACT_EXIT 2

#define DTRACEACT_FREOPEN 516

#define DTRACEACT_JSTACK 258

#define DTRACEACT_KERNEL 1024

#define DTRACEACT_KERNEL_DESTRUCTIVE 1280

#define DTRACEACT_LIBACT 5

#define DTRACEACT_MOD 1027

#define DTRACEACT_NONE 0

#define DTRACEACT_PANIC 1282

#define DTRACEACT_PIDRESUME 562

#define DTRACEACT_PRINTA 4

#define DTRACEACT_PRINTF 3

#define DTRACEACT_PROC 256

#define DTRACEACT_PROC_CONTROL 768

#define DTRACEACT_PROC_DESTRUCTIVE 512

#define DTRACEACT_RAISE 514

#define DTRACEACT_SPECULATE 1537

#define DTRACEACT_SPECULATIVE 1536

#define DTRACEACT_STACK 1025

#define DTRACEACT_STOP 513

#define DTRACEACT_SYM 1026

#define DTRACEACT_SYSTEM 515

#define DTRACEACT_UADDR 261

#define DTRACEACT_UMOD 260

#define DTRACEACT_USTACK 257

#define DTRACEACT_USYM 259

#define DTRACEAGG_AVG 1796

#define DTRACEAGG_COUNT 1793

#define DTRACEAGG_LLQUANTIZE 1801

#define DTRACEAGG_LQUANTIZE 1800

#define DTRACEAGG_MAX 1795

#define DTRACEAGG_MIN 1794

#define DTRACEAGG_QUANTIZE 1799

#define DTRACEAGG_STDDEV 1798

#define DTRACEAGG_SUM 1797

#define DTRACEFLT_BADADDR 1

#define DTRACEFLT_BADALIGN 2

#define DTRACEFLT_BADSTACK 9

#define DTRACEFLT_DIVZERO 4

#define DTRACEFLT_ILLOP 3

#define DTRACEFLT_KPRIV 6

#define DTRACEFLT_LIBRARY 1000

#define DTRACEFLT_NOSCRATCH 5

#define DTRACEFLT_TUPOFLOW 8

#define DTRACEFLT_UNKNOWN 0

#define DTRACEFLT_UPRIV 7

#define DTRACEMNRN_CLONE 2

#define DTRACEMNRN_DTRACE 0

#define DTRACEMNRN_HELPER 1

#define DTRACEOPT_AGGRATE 15

#define DTRACEOPT_AGGSIZE 3

#define DTRACEOPT_AGGSORTKEY 23

#define DTRACEOPT_AGGSORTKEYPOS 26

#define DTRACEOPT_AGGSORTPOS 25

#define DTRACEOPT_AGGSORTREV 24

#define DTRACEOPT_BUFPOLICY 1

#define DTRACEOPT_BUFPOLICY_FILL 1

#define DTRACEOPT_BUFPOLICY_RING 0

#define DTRACEOPT_BUFPOLICY_SWITCH 2

#define DTRACEOPT_BUFRESIZE 9

#define DTRACEOPT_BUFRESIZE_AUTO 0

#define DTRACEOPT_BUFRESIZE_MANUAL 1

#define DTRACEOPT_BUFSIZE 0

#define DTRACEOPT_CLEANRATE 7

#define DTRACEOPT_CPU 8

#define DTRACEOPT_DESTRUCTIVE 18

#define DTRACEOPT_DYNVARSIZE 2

#define DTRACEOPT_FLOWINDENT 11

#define DTRACEOPT_GRABANON 10

#define DTRACEOPT_JSTACKFRAMES 21

#define DTRACEOPT_JSTACKSTRSIZE 22

#define DTRACEOPT_MAX 28

#define DTRACEOPT_NSPEC 5

#define DTRACEOPT_QUIET 12

#define DTRACEOPT_RAWBYTES 20

#define DTRACEOPT_SPECSIZE 4

#define DTRACEOPT_STACKFRAMES 13

#define DTRACEOPT_STACKINDENT 19

#define DTRACEOPT_STACKSYMBOLS 27

#define DTRACEOPT_STATUSRATE 17

#define DTRACEOPT_STRSIZE 6

#define DTRACEOPT_SWITCHRATE 16

#define DTRACEOPT_UNSET -2

#define DTRACEOPT_USTACKFRAMES 14

#define MICROSEC 1000000

#define MILLISEC 1000

#define NANOSEC 1000000000

#define SEC 1

typedef va_list __va_list;

typedef enum enum_4055 {
    B_FALSE=0,
    B_TRUE=1
} enum_4055;

typedef enum enum_4055 _dtrace_boolean;

typedef struct ctf_file ctf_file, *Pctf_file;

struct ctf_file {
};

typedef struct ctf_file ctf_file_t;

typedef long ctf_id_t;

typedef uint32_t dif_instr_t;

typedef struct dof_actdesc dof_actdesc, *Pdof_actdesc;

typedef uint32_t dof_secidx_t;

struct dof_actdesc {
    dof_secidx_t dofa_difo;
    dof_secidx_t dofa_strtab;
    uint32_t dofa_kind;
    uint32_t dofa_ntuple;
    uint64_t dofa_arg;
    uint64_t dofa_uarg;
};

typedef struct dof_actdesc dof_actdesc_t;

typedef uint32_t dof_attr_t;

typedef struct dof_difohdr dof_difohdr, *Pdof_difohdr;

typedef struct dtrace_diftype dtrace_diftype, *Pdtrace_diftype;

typedef struct dtrace_diftype dtrace_diftype_t;

struct dtrace_diftype {
    uint8_t dtdt_kind;
    uint8_t dtdt_ckind;
    uint8_t dtdt_flags;
    uint8_t dtdt_pad;
    uint32_t dtdt_size;
};

struct dof_difohdr {
    dtrace_diftype_t dofd_rtype;
    dof_secidx_t dofd_links[1];
};

typedef struct dof_difohdr dof_difohdr_t;

typedef struct dof_ecbdesc dof_ecbdesc, *Pdof_ecbdesc;

struct dof_ecbdesc {
    dof_secidx_t dofe_probes;
    dof_secidx_t dofe_pred;
    dof_secidx_t dofe_actions;
    uint32_t dofe_pad;
    uint64_t dofe_uarg;
};

typedef struct dof_ecbdesc dof_ecbdesc_t;

typedef struct dof_hdr dof_hdr, *Pdof_hdr;

struct dof_hdr {
    uint8_t dofh_ident[16];
    uint32_t dofh_flags;
    uint32_t dofh_hdrsize;
    uint32_t dofh_secsize;
    uint32_t dofh_secnum;
    uint64_t dofh_secoff;
    uint64_t dofh_loadsz;
    uint64_t dofh_filesz;
    uint64_t dofh_pad;
};

typedef struct dof_hdr dof_hdr_t;

typedef struct dof_helper dof_helper, *Pdof_helper;

struct dof_helper {
    char dofhp_mod[64];
    uint64_t dofhp_addr;
    uint64_t dofhp_dof;
};

typedef struct dof_helper dof_helper_t;

typedef struct dof_ioctl_data dof_ioctl_data, *Pdof_ioctl_data;

struct dof_ioctl_data {
    uint64_t dofiod_count;
    dof_helper_t dofiod_helpers[1];
};

typedef struct dof_ioctl_data dof_ioctl_data_t;

typedef struct dof_optdesc dof_optdesc, *Pdof_optdesc;

struct dof_optdesc {
    uint32_t dofo_option;
    dof_secidx_t dofo_strtab;
    uint64_t dofo_value;
};

typedef struct dof_optdesc dof_optdesc_t;

typedef struct dof_probe dof_probe, *Pdof_probe;

typedef uint32_t dof_stridx_t;

struct dof_probe {
    uint64_t dofpr_addr;
    dof_stridx_t dofpr_func;
    dof_stridx_t dofpr_name;
    dof_stridx_t dofpr_nargv;
    dof_stridx_t dofpr_xargv;
    uint32_t dofpr_argidx;
    uint32_t dofpr_offidx;
    uint8_t dofpr_nargc;
    uint8_t dofpr_xargc;
    uint16_t dofpr_noffs;
    uint32_t dofpr_enoffidx;
    uint16_t dofpr_nenoffs;
    uint16_t dofpr_pad1;
    uint32_t dofpr_pad2;
};

typedef struct dof_probe dof_probe_t;

typedef struct dof_probedesc dof_probedesc, *Pdof_probedesc;

struct dof_probedesc {
    dof_secidx_t dofp_strtab;
    dof_stridx_t dofp_provider;
    dof_stridx_t dofp_mod;
    dof_stridx_t dofp_func;
    dof_stridx_t dofp_name;
    uint32_t dofp_id;
};

typedef struct dof_probedesc dof_probedesc_t;

typedef struct dof_provider dof_provider, *Pdof_provider;

struct dof_provider {
    dof_secidx_t dofpv_strtab;
    dof_secidx_t dofpv_probes;
    dof_secidx_t dofpv_prargs;
    dof_secidx_t dofpv_proffs;
    dof_stridx_t dofpv_name;
    dof_attr_t dofpv_provattr;
    dof_attr_t dofpv_modattr;
    dof_attr_t dofpv_funcattr;
    dof_attr_t dofpv_nameattr;
    dof_attr_t dofpv_argsattr;
    dof_secidx_t dofpv_prenoffs;
};

typedef struct dof_provider dof_provider_t;

typedef struct dof_relodesc dof_relodesc, *Pdof_relodesc;

struct dof_relodesc {
    dof_stridx_t dofr_name;
    uint32_t dofr_type;
    uint64_t dofr_offset;
    uint64_t dofr_data;
};

typedef struct dof_relodesc dof_relodesc_t;

typedef struct dof_relohdr dof_relohdr, *Pdof_relohdr;

struct dof_relohdr {
    dof_secidx_t dofr_strtab;
    dof_secidx_t dofr_relsec;
    dof_secidx_t dofr_tgtsec;
};

typedef struct dof_relohdr dof_relohdr_t;

typedef struct dof_sec dof_sec, *Pdof_sec;

struct dof_sec {
    uint32_t dofs_type;
    uint32_t dofs_align;
    uint32_t dofs_flags;
    uint32_t dofs_entsize;
    uint64_t dofs_offset;
    uint64_t dofs_size;
};

typedef struct dof_sec dof_sec_t;

typedef struct dof_xlator dof_xlator, *Pdof_xlator;

struct dof_xlator {
    dof_secidx_t dofxl_members;
    dof_secidx_t dofxl_strtab;
    dof_stridx_t dofxl_argv;
    uint32_t dofxl_argc;
    dof_stridx_t dofxl_type;
    dof_attr_t dofxl_attr;
};

typedef struct dof_xlator dof_xlator_t;

typedef struct dof_xlmember dof_xlmember, *Pdof_xlmember;

struct dof_xlmember {
    dof_secidx_t dofxm_difo;
    dof_stridx_t dofxm_name;
    dtrace_diftype_t dofxm_type;
};

typedef struct dof_xlmember dof_xlmember_t;

typedef struct dof_xlref dof_xlref, *Pdof_xlref;

struct dof_xlref {
    dof_secidx_t dofxr_xlator;
    uint32_t dofxr_member;
    uint32_t dofxr_argn;
};

typedef struct dof_xlref dof_xlref_t;

typedef struct dt_node dt_node, *Pdt_node;

struct dt_node {
};

typedef struct dtrace_actdesc dtrace_actdesc, *Pdtrace_actdesc;

typedef struct dtrace_difo dtrace_difo, *Pdtrace_difo;

typedef struct dtrace_difo dtrace_difo_t;

typedef uint16_t dtrace_actkind_t;

typedef struct dtrace_difv dtrace_difv, *Pdtrace_difv;

typedef struct dtrace_difv dtrace_difv_t;

typedef uint32_t uint_t;

struct dtrace_difv {
    uint32_t dtdv_name;
    uint32_t dtdv_id;
    uint8_t dtdv_kind;
    uint8_t dtdv_scope;
    uint16_t dtdv_flags;
    dtrace_diftype_t dtdv_type;
};

struct dtrace_difo {
    dif_instr_t * dtdo_buf;
    uint64_t * dtdo_inttab;
    char * dtdo_strtab;
    dtrace_difv_t * dtdo_vartab;
    uint_t dtdo_len;
    uint_t dtdo_intlen;
    uint_t dtdo_strlen;
    uint_t dtdo_varlen;
    dtrace_diftype_t dtdo_rtype;
    uint_t dtdo_refcnt;
    uint_t dtdo_destructive;
    dof_relodesc_t * dtdo_kreltab;
    dof_relodesc_t * dtdo_ureltab;
    struct dt_node * * dtdo_xlmtab;
    uint_t dtdo_krelen;
    uint_t dtdo_urelen;
    uint_t dtdo_xlmlen;
};

struct dtrace_actdesc {
    dtrace_difo_t * dtad_difo;
    struct dtrace_actdesc * dtad_next;
    dtrace_actkind_t dtad_kind;
    uint32_t dtad_ntuple;
    uint64_t dtad_arg;
    uint64_t dtad_uarg;
    int dtad_refcnt;
};

typedef struct dtrace_actdesc dtrace_actdesc_t;

typedef struct dtrace_aggdesc dtrace_aggdesc, *Pdtrace_aggdesc;

typedef int64_t dtrace_aggvarid_t;

typedef uint32_t dtrace_aggid_t;

typedef uint32_t dtrace_epid_t;

typedef struct dtrace_recdesc dtrace_recdesc, *Pdtrace_recdesc;

typedef struct dtrace_recdesc dtrace_recdesc_t;

struct dtrace_recdesc {
    dtrace_actkind_t dtrd_action;
    uint32_t dtrd_size;
    uint32_t dtrd_offset;
    uint16_t dtrd_alignment;
    uint16_t dtrd_format;
    uint64_t dtrd_arg;
    uint64_t dtrd_uarg;
};

struct dtrace_aggdesc {
    char * dtagd_name;
    dtrace_aggvarid_t dtagd_varid;
    int dtagd_flags;
    dtrace_aggid_t dtagd_id;
    dtrace_epid_t dtagd_epid;
    uint32_t dtagd_size;
    int dtagd_nrecs;
    uint32_t dtagd_pad;
    dtrace_recdesc_t dtagd_rec[1];
};

typedef struct dtrace_aggdesc dtrace_aggdesc_t;

typedef struct dtrace_argdesc dtrace_argdesc, *Pdtrace_argdesc;

typedef uint32_t dtrace_id_t;

struct dtrace_argdesc {
    dtrace_id_t dtargd_id;
    int dtargd_ndx;
    int dtargd_mapping;
    char dtargd_native[128];
    char dtargd_xlate[128];
};

typedef struct dtrace_argdesc dtrace_argdesc_t;

typedef struct dtrace_attribute dtrace_attribute, *Pdtrace_attribute;

typedef uint8_t dtrace_stability_t;

typedef uint8_t dtrace_class_t;

struct dtrace_attribute {
    dtrace_stability_t dtat_name;
    dtrace_stability_t dtat_data;
    dtrace_class_t dtat_class;
};

typedef struct dtrace_attribute dtrace_attribute_t;

typedef struct dtrace_bufdesc dtrace_bufdesc, *Pdtrace_bufdesc;

struct dtrace_bufdesc {
    uint64_t dtbd_size;
    uint32_t dtbd_cpu;
    uint32_t dtbd_errors;
    uint64_t dtbd_drops;
    char * dtbd_data;
    uint64_t dtbd_oldest;
};

typedef struct dtrace_bufdesc dtrace_bufdesc_t;

typedef uint32_t dtrace_cacheid_t;

typedef struct dtrace_conf dtrace_conf, *Pdtrace_conf;

struct dtrace_conf {
    uint_t dtc_difversion;
    uint_t dtc_difintregs;
    uint_t dtc_diftupregs;
    uint_t dtc_ctfmodel;
    uint_t dtc_pad[8];
};

typedef struct dtrace_conf dtrace_conf_t;

typedef struct dtrace_ecbdesc dtrace_ecbdesc, *Pdtrace_ecbdesc;

typedef struct dtrace_preddesc dtrace_preddesc, *Pdtrace_preddesc;

typedef struct dtrace_preddesc dtrace_preddesc_t;

typedef struct dtrace_probedesc dtrace_probedesc, *Pdtrace_probedesc;

typedef struct dtrace_probedesc dtrace_probedesc_t;

typedef struct dtrace_predicate dtrace_predicate, *Pdtrace_predicate;

struct dtrace_probedesc {
    dtrace_id_t dtpd_id;
    char dtpd_provider[64];
    char dtpd_mod[64];
    char dtpd_func[128];
    char dtpd_name[64];
};

struct dtrace_preddesc {
    dtrace_difo_t * dtpdd_difo;
    struct dtrace_predicate * dtpdd_predicate;
};

struct dtrace_ecbdesc {
    dtrace_actdesc_t * dted_action;
    dtrace_preddesc_t dted_pred;
    dtrace_probedesc_t dted_probe;
    uint64_t dted_uarg;
    int dted_refcnt;
};

struct dtrace_predicate {
};

typedef struct dtrace_ecbdesc dtrace_ecbdesc_t;

typedef struct dtrace_eprobedesc dtrace_eprobedesc, *Pdtrace_eprobedesc;

struct dtrace_eprobedesc {
    dtrace_epid_t dtepd_epid;
    dtrace_id_t dtepd_probeid;
    uint64_t dtepd_uarg;
    uint32_t dtepd_size;
    int dtepd_nrecs;
    dtrace_recdesc_t dtepd_rec[1];
};

typedef struct dtrace_eprobedesc dtrace_eprobedesc_t;

typedef struct dtrace_fmtdesc dtrace_fmtdesc, *Pdtrace_fmtdesc;

struct dtrace_fmtdesc {
    char * dtfd_string;
    int dtfd_length;
    uint16_t dtfd_format;
};

typedef struct dtrace_fmtdesc dtrace_fmtdesc_t;

typedef struct dtrace_module_symbols dtrace_module_symbols, *Pdtrace_module_symbols;

typedef uint8_t UUID[16];

typedef struct dtrace_symbol dtrace_symbol, *Pdtrace_symbol;

typedef struct dtrace_symbol dtrace_symbol_t;

struct dtrace_symbol {
    uint64_t dtsym_addr;
    uint64_t dtsym_size;
    char dtsym_name[128];
};

struct dtrace_module_symbols {
    UUID dtmodsyms_uuid;
    uint64_t dtmodsyms_count;
    dtrace_symbol_t dtmodsyms_symbols[1];
};

typedef struct dtrace_module_symbols dtrace_module_symbols_t;

typedef struct dtrace_module_uuids_list dtrace_module_uuids_list, *Pdtrace_module_uuids_list;

struct dtrace_module_uuids_list {
    uint64_t dtmul_count;
    UUID dtmul_uuid[1];
};

typedef struct dtrace_module_uuids_list dtrace_module_uuids_list_t;

typedef int64_t dtrace_optval_t;

typedef struct dtrace_pattr dtrace_pattr, *Pdtrace_pattr;

struct dtrace_pattr {
    dtrace_attribute_t dtpa_provider;
    dtrace_attribute_t dtpa_mod;
    dtrace_attribute_t dtpa_func;
    dtrace_attribute_t dtpa_name;
    dtrace_attribute_t dtpa_args;
};

typedef struct dtrace_pattr dtrace_pattr_t;

typedef struct dtrace_ppriv dtrace_ppriv, *Pdtrace_ppriv;

typedef uint32_t zoneid_t;

struct dtrace_ppriv {
    uint32_t dtpp_flags;
    uid_t dtpp_uid;
    zoneid_t dtpp_zoneid;
};

typedef struct dtrace_ppriv dtrace_ppriv_t;

typedef enum dtrace_probespec {
    DTRACE_PROBESPEC_FUNC=2,
    DTRACE_PROBESPEC_MOD=1,
    DTRACE_PROBESPEC_NAME=3,
    DTRACE_PROBESPEC_NONE=0,
    DTRACE_PROBESPEC_PROVIDER=0
} dtrace_probespec;

typedef enum dtrace_probespec dtrace_probespec_t;

typedef struct dtrace_providerdesc dtrace_providerdesc, *Pdtrace_providerdesc;

struct dtrace_providerdesc {
    char dtvd_name[64];
    dtrace_pattr_t dtvd_attr;
    dtrace_ppriv_t dtvd_priv;
};

typedef struct dtrace_providerdesc dtrace_providerdesc_t;

typedef struct dtrace_repldesc dtrace_repldesc, *Pdtrace_repldesc;

struct dtrace_repldesc {
    dtrace_probedesc_t dtrpd_match;
    dtrace_probedesc_t dtrpd_create;
};

typedef struct dtrace_repldesc dtrace_repldesc_t;

typedef struct dtrace_status dtrace_status, *Pdtrace_status;

struct dtrace_status {
    uint64_t dtst_dyndrops;
    uint64_t dtst_dyndrops_rinsing;
    uint64_t dtst_dyndrops_dirty;
    uint64_t dtst_specdrops;
    uint64_t dtst_specdrops_busy;
    uint64_t dtst_specdrops_unavail;
    uint64_t dtst_errors;
    uint64_t dtst_filled;
    uint64_t dtst_stkstroverflows;
    uint64_t dtst_dblerrors;
    char dtst_killed;
    char dtst_exiting;
    char dtst_pad[6];
};

typedef struct dtrace_status dtrace_status_t;

typedef int64_t hrtime_t;

typedef int64_t longlong_t;

typedef struct modctl modctl, *Pmodctl;

struct modctl {
};

typedef int64_t off64_t;

typedef int processorid_t;

typedef uint64_t u_longlong_t;

typedef uint8_t uchar_t;

typedef ulong ulong_t;

typedef uint16_t ushort_t;

typedef struct _struct_2171 _struct_2171, *P_struct_2171;

struct _struct_2171 {
    uintptr_t start;
    uintptr_t length;
};

typedef struct dyld_all_image_infos dyld_all_image_infos, *Pdyld_all_image_infos;

typedef struct dyld_image_info dyld_image_info, *Pdyld_image_info;

typedef enum dyld_image_mode {
    dyld_image_adding=0,
    dyld_image_info_change=2,
    dyld_image_removing=1
} dyld_image_mode;

typedef void (* dyld_image_notifier)(enum dyld_image_mode, uint32_t, struct dyld_image_info *);

typedef struct mach_header mach_header, *Pmach_header;

typedef struct dyld_uuid_info dyld_uuid_info, *Pdyld_uuid_info;

struct dyld_all_image_infos {
    uint32_t version;
    uint32_t infoArrayCount;
    struct dyld_image_info * infoArray;
    dyld_image_notifier notification;
    BOOL processDetachedFromSharedRegion;
    BOOL libSystemInitialized;
    struct mach_header * dyldImageLoadAddress;
    void * jitInfo;
    char * dyldVersion;
    char * errorMessage;
    uintptr_t terminationFlags;
    void * coreSymbolicationShmPage;
    uintptr_t systemOrderFlag;
    uintptr_t uuidArrayCount;
    struct dyld_uuid_info * uuidArray;
    struct dyld_all_image_infos * dyldAllImageInfosAddress;
    uintptr_t initialImageCount;
    uintptr_t errorKind;
    char * errorClientOfDylibPath;
    char * errorTargetDylibPath;
    char * errorSymbol;
    uintptr_t sharedCacheSlide;
    uint8_t sharedCacheUUID[16];
    uintptr_t reserved[16];
};

struct dyld_uuid_info {
    struct mach_header * imageLoadAddress;
    uuid_t imageUUID;
};

struct dyld_image_info {
    struct mach_header * imageLoadAddress;
    char * imageFilePath;
    uintptr_t imageFileModDate;
};

struct mach_header {
    uint32_t magic;
    cpu_type_t cputype;
    cpu_subtype_t cpusubtype;
    uint32_t filetype;
    uint32_t ncmds;
    uint32_t sizeofcmds;
    uint32_t flags;
};

typedef struct dyld_shared_cache_ranges dyld_shared_cache_ranges, *Pdyld_shared_cache_ranges;

struct dyld_shared_cache_ranges {
    uintptr_t sharedRegionsCount;
    struct _struct_2171 ranges[4];
};

typedef enum enum_2164 {
    dyld_error_kind_dylib_missing=1,
    dyld_error_kind_dylib_version=3,
    dyld_error_kind_dylib_wrong_arch=2,
    dyld_error_kind_none=0,
    dyld_error_kind_symbol_missing=4
} enum_2164;

#define EC_F_COMPUTE_WNAF 143

#define EC_F_D2I_ECPARAMETERS 144

#define EC_F_D2I_ECPKPARAMETERS 145

#define EC_F_D2I_ECPRIVATEKEY 146

#define EC_F_EC_ASN1_GROUP2CURVE 153

#define EC_F_EC_ASN1_GROUP2FIELDID 154

#define EC_F_EC_ASN1_GROUP2PARAMETERS 155

#define EC_F_EC_ASN1_GROUP2PKPARAMETERS 156

#define EC_F_EC_ASN1_PARAMETERS2GROUP 157

#define EC_F_EC_ASN1_PKPARAMETERS2GROUP 158

#define EC_F_EC_EX_DATA_SET_DATA 211

#define EC_F_EC_GF2M_MONTGOMERY_POINT_MULTIPLY 208

#define EC_F_EC_GF2M_SIMPLE_GROUP_CHECK_DISCRIMINANT 159

#define EC_F_EC_GF2M_SIMPLE_GROUP_SET_CURVE 195

#define EC_F_EC_GF2M_SIMPLE_OCT2POINT 160

#define EC_F_EC_GF2M_SIMPLE_POINT2OCT 161

#define EC_F_EC_GF2M_SIMPLE_POINT_GET_AFFINE_COORDINATES 162

#define EC_F_EC_GF2M_SIMPLE_POINT_SET_AFFINE_COORDINATES 163

#define EC_F_EC_GF2M_SIMPLE_SET_COMPRESSED_COORDINATES 164

#define EC_F_EC_GFP_MONT_FIELD_DECODE 133

#define EC_F_EC_GFP_MONT_FIELD_ENCODE 134

#define EC_F_EC_GFP_MONT_FIELD_MUL 131

#define EC_F_EC_GFP_MONT_FIELD_SET_TO_ONE 209

#define EC_F_EC_GFP_MONT_FIELD_SQR 132

#define EC_F_EC_GFP_MONT_GROUP_SET_CURVE 189

#define EC_F_EC_GFP_MONT_GROUP_SET_CURVE_GFP 135

#define EC_F_EC_GFP_NIST_FIELD_MUL 200

#define EC_F_EC_GFP_NIST_FIELD_SQR 201

#define EC_F_EC_GFP_NIST_GROUP_SET_CURVE 202

#define EC_F_EC_GFP_SIMPLE_GROUP_CHECK_DISCRIMINANT 165

#define EC_F_EC_GFP_SIMPLE_GROUP_SET_CURVE 166

#define EC_F_EC_GFP_SIMPLE_GROUP_SET_CURVE_GFP 100

#define EC_F_EC_GFP_SIMPLE_GROUP_SET_GENERATOR 101

#define EC_F_EC_GFP_SIMPLE_MAKE_AFFINE 102

#define EC_F_EC_GFP_SIMPLE_OCT2POINT 103

#define EC_F_EC_GFP_SIMPLE_POINT2OCT 104

#define EC_F_EC_GFP_SIMPLE_POINT_GET_AFFINE_COORDINATES 167

#define EC_F_EC_GFP_SIMPLE_POINT_GET_AFFINE_COORDINATES_GFP 105

#define EC_F_EC_GFP_SIMPLE_POINT_SET_AFFINE_COORDINATES 168

#define EC_F_EC_GFP_SIMPLE_POINT_SET_AFFINE_COORDINATES_GFP 128

#define EC_F_EC_GFP_SIMPLE_POINTS_MAKE_AFFINE 137

#define EC_F_EC_GFP_SIMPLE_SET_COMPRESSED_COORDINATES 169

#define EC_F_EC_GFP_SIMPLE_SET_COMPRESSED_COORDINATES_GFP 129

#define EC_F_EC_GROUP_CHECK 170

#define EC_F_EC_GROUP_CHECK_DISCRIMINANT 171

#define EC_F_EC_GROUP_COPY 106

#define EC_F_EC_GROUP_GET0_GENERATOR 139

#define EC_F_EC_GROUP_GET_COFACTOR 140

#define EC_F_EC_GROUP_GET_CURVE_GF2M 172

#define EC_F_EC_GROUP_GET_CURVE_GFP 130

#define EC_F_EC_GROUP_GET_DEGREE 173

#define EC_F_EC_GROUP_GET_ORDER 141

#define EC_F_EC_GROUP_GET_PENTANOMIAL_BASIS 193

#define EC_F_EC_GROUP_GET_TRINOMIAL_BASIS 194

#define EC_F_EC_GROUP_NEW 108

#define EC_F_EC_GROUP_NEW_BY_CURVE_NAME 174

#define EC_F_EC_GROUP_NEW_FROM_DATA 175

#define EC_F_EC_GROUP_PRECOMPUTE_MULT 142

#define EC_F_EC_GROUP_SET_CURVE_GF2M 176

#define EC_F_EC_GROUP_SET_CURVE_GFP 109

#define EC_F_EC_GROUP_SET_EXTRA_DATA 110

#define EC_F_EC_GROUP_SET_GENERATOR 111

#define EC_F_EC_KEY_CHECK_KEY 177

#define EC_F_EC_KEY_COPY 178

#define EC_F_EC_KEY_GENERATE_KEY 179

#define EC_F_EC_KEY_NEW 182

#define EC_F_EC_KEY_PRINT 180

#define EC_F_EC_KEY_PRINT_FP 181

#define EC_F_EC_POINT_ADD 112

#define EC_F_EC_POINT_CMP 113

#define EC_F_EC_POINT_COPY 114

#define EC_F_EC_POINT_DBL 115

#define EC_F_EC_POINT_GET_AFFINE_COORDINATES_GF2M 183

#define EC_F_EC_POINT_GET_AFFINE_COORDINATES_GFP 116

#define EC_F_EC_POINT_GET_JPROJECTIVE_COORDINATES_GFP 117

#define EC_F_EC_POINT_INVERT 210

#define EC_F_EC_POINT_IS_AT_INFINITY 118

#define EC_F_EC_POINT_IS_ON_CURVE 119

#define EC_F_EC_POINT_MAKE_AFFINE 120

#define EC_F_EC_POINT_MUL 184

#define EC_F_EC_POINT_NEW 121

#define EC_F_EC_POINT_OCT2POINT 122

#define EC_F_EC_POINT_POINT2OCT 123

#define EC_F_EC_POINT_SET_AFFINE_COORDINATES_GF2M 185

#define EC_F_EC_POINT_SET_AFFINE_COORDINATES_GFP 124

#define EC_F_EC_POINT_SET_COMPRESSED_COORDINATES_GF2M 186

#define EC_F_EC_POINT_SET_COMPRESSED_COORDINATES_GFP 125

#define EC_F_EC_POINT_SET_JPROJECTIVE_COORDINATES_GFP 126

#define EC_F_EC_POINT_SET_TO_INFINITY 127

#define EC_F_EC_POINTS_MAKE_AFFINE 136

#define EC_F_EC_POINTS_MUL 138

#define EC_F_EC_PRE_COMP_DUP 207

#define EC_F_EC_PRE_COMP_NEW 196

#define EC_F_EC_WNAF_MUL 187

#define EC_F_EC_WNAF_PRECOMPUTE_MULT 188

#define EC_F_ECP_NIST_MOD_192 203

#define EC_F_ECP_NIST_MOD_224 204

#define EC_F_ECP_NIST_MOD_256 205

#define EC_F_ECP_NIST_MOD_521 206

#define EC_F_ECPARAMETERS_PRINT 147

#define EC_F_ECPARAMETERS_PRINT_FP 148

#define EC_F_ECPKPARAMETERS_PRINT 149

#define EC_F_ECPKPARAMETERS_PRINT_FP 150

#define EC_F_I2D_ECPARAMETERS 190

#define EC_F_I2D_ECPKPARAMETERS 191

#define EC_F_I2D_ECPRIVATEKEY 192

#define EC_F_I2O_ECPUBLICKEY 151

#define EC_F_O2I_ECPUBLICKEY 152

#define EC_PKEY_NO_PARAMETERS 1

#define EC_PKEY_NO_PUBKEY 2

#define EC_R_ASN1_ERROR 115

#define EC_R_ASN1_UNKNOWN_FIELD 116

#define EC_R_BUFFER_TOO_SMALL 100

#define EC_R_D2I_ECPKPARAMETERS_FAILURE 117

#define EC_R_DISCRIMINANT_IS_ZERO 118

#define EC_R_EC_GROUP_NEW_BY_NAME_FAILURE 119

#define EC_R_FIELD_TOO_LARGE 138

#define EC_R_GROUP2PKPARAMETERS_FAILURE 120

#define EC_R_I2D_ECPKPARAMETERS_FAILURE 121

#define EC_R_INCOMPATIBLE_OBJECTS 101

#define EC_R_INVALID_ARGUMENT 112

#define EC_R_INVALID_COMPRESSED_POINT 110

#define EC_R_INVALID_COMPRESSION_BIT 109

#define EC_R_INVALID_ENCODING 102

#define EC_R_INVALID_FIELD 103

#define EC_R_INVALID_FORM 104

#define EC_R_INVALID_GROUP_ORDER 122

#define EC_R_INVALID_PENTANOMIAL_BASIS 132

#define EC_R_INVALID_PRIVATE_KEY 123

#define EC_R_INVALID_TRINOMIAL_BASIS 137

#define EC_R_MISSING_PARAMETERS 124

#define EC_R_MISSING_PRIVATE_KEY 125

#define EC_R_NO_FIELD_MOD 133

#define EC_R_NOT_A_NIST_PRIME 135

#define EC_R_NOT_A_SUPPORTED_NIST_PRIME 136

#define EC_R_NOT_IMPLEMENTED 126

#define EC_R_NOT_INITIALIZED 111

#define EC_R_PASSED_NULL_PARAMETER 134

#define EC_R_PKPARAMETERS2GROUP_FAILURE 127

#define EC_R_POINT_AT_INFINITY 106

#define EC_R_POINT_IS_NOT_ON_CURVE 107

#define EC_R_SLOT_FULL 108

#define EC_R_UNDEFINED_GENERATOR 113

#define EC_R_UNDEFINED_ORDER 128

#define EC_R_UNKNOWN_GROUP 129

#define EC_R_UNKNOWN_ORDER 114

#define EC_R_UNSUPPORTED_FIELD 131

#define EC_R_WRONG_ORDER 130

#define OPENSSL_EC_NAMED_CURVE 1

#define OPENSSL_ECC_MAX_FIELD_BITS 661

typedef struct EC_builtin_curve EC_builtin_curve, *PEC_builtin_curve;

struct EC_builtin_curve {
    int nid;
    char * comment;
};

typedef struct ec_group_st ec_group_st, *Pec_group_st;

typedef struct ec_group_st EC_GROUP;

struct ec_group_st {
};

typedef struct ec_key_st ec_key_st, *Pec_key_st;

typedef struct ec_key_st EC_KEY;

struct ec_key_st {
};

typedef struct ec_method_st ec_method_st, *Pec_method_st;

typedef struct ec_method_st EC_METHOD;

struct ec_method_st {
};

typedef struct ec_point_st ec_point_st, *Pec_point_st;

typedef struct ec_point_st EC_POINT;

struct ec_point_st {
};

typedef struct ecpk_parameters_st ecpk_parameters_st, *Pecpk_parameters_st;

struct ecpk_parameters_st {
};

typedef struct ecpk_parameters_st ECPKPARAMETERS;

typedef enum enum_3099 {
    POINT_CONVERSION_COMPRESSED=2,
    POINT_CONVERSION_HYBRID=6,
    POINT_CONVERSION_UNCOMPRESSED=4
} enum_3099;

typedef enum enum_3099 point_conversion_form_t;

#define ECDH_F_ECDH_COMPUTE_KEY 100

#define ECDH_F_ECDH_DATA_NEW_METHOD 101

#define ECDH_R_KDF_FAILED 102

#define ECDH_R_NO_PRIVATE_VALUE 100

#define ECDH_R_POINT_ARITHMETIC_FAILURE 101

#define ECDSA_F_ECDSA_DATA_NEW_METHOD 100

#define ECDSA_F_ECDSA_DO_SIGN 101

#define ECDSA_F_ECDSA_DO_VERIFY 102

#define ECDSA_F_ECDSA_SIGN_SETUP 103

#define ECDSA_R_BAD_SIGNATURE 100

#define ECDSA_R_DATA_TOO_LARGE_FOR_KEY_SIZE 101

#define ECDSA_R_ERR_EC_LIB 102

#define ECDSA_R_MISSING_PARAMETERS 103

#define ECDSA_R_NEED_NEW_SETUP_VALUES 106

#define ECDSA_R_RANDOM_NUMBER_GENERATION_FAILED 104

#define ECDSA_R_SIGNATURE_MALLOC_FAILED 105

typedef struct ECDSA_SIG_st ECDSA_SIG_st, *PECDSA_SIG_st;

typedef struct ECDSA_SIG_st ECDSA_SIG;

struct ECDSA_SIG_st {
    BIGNUM * r;
    BIGNUM * s;
};

#define EFI_1_02_SYSTEM_TABLE_REVISION 65538

#define EFI_1_10_SYSTEM_TABLE_REVISION 65546

#define EFI_2_00_SYSTEM_TABLE_REVISION 131072

#define EFI_ABORTED 2147483669

#define EFI_ACCESS_DENIED 2147483663

#define EFI_ALREADY_STARTED 2147483668

#define EFI_BAD_BUFFER_SIZE 2147483652

#define EFI_BUFFER_TOO_SMALL 2147483653

#define EFI_CRC_ERROR 2147483675

#define EFI_DEVICE_ERROR 2147483655

#define EFI_ICMP_ERROR 2147483670

#define EFI_INCOMPATIBLE_VERSION 2147483673

#define EFI_INVALID_PARAMETER 2147483650

#define EFI_LOAD_ERROR 2147483649

#define EFI_MAX_BIT 2147483648

#define EFI_MEDIA_CHANGED 2147483661

#define EFI_MEMORY_DESCRIPTOR_VERSION 1

#define EFI_NO_MAPPING 2147483665

#define EFI_NO_MEDIA 2147483660

#define EFI_NO_RESPONSE 2147483664

#define EFI_NOT_FOUND 2147483662

#define EFI_NOT_READY 2147483654

#define EFI_NOT_STARTED 2147483667

#define EFI_OUT_OF_RESOURCES 2147483657

#define EFI_PROTOCOL_ERROR 2147483672

#define EFI_RUNTIME_SERVICES_REVISION 65546

#define EFI_SECURITY_VIOLATION 2147483674

#define EFI_SPECIFICATION_MAJOR_REVISION 1

#define EFI_SPECIFICATION_MINOR_REVISION 10

#define EFI_SUCCESS 0

#define EFI_SYSTEM_TABLE_REVISION 65546

#define EFI_TFTP_ERROR 2147483671

#define EFI_TIME_ADJUST_DAYLIGHT 1

#define EFI_TIME_IN_DAYLIGHT 2

#define EFI_TIMEOUT 2147483666

#define EFI_UNSPECIFIED_TIMEZONE 2047

#define EFI_UNSUPPORTED 2147483651

#define EFI_VARIABLE_BOOTSERVICE_ACCESS 2

#define EFI_VARIABLE_NON_VOLATILE 1

#define EFI_VARIABLE_READ_ONLY 8

#define EFI_VARIABLE_RUNTIME_ACCESS 4

#define EFI_VOLUME_CORRUPTED 2147483658

#define EFI_VOLUME_FULL 2147483659

#define EFI_WARN_BUFFER_TOO_SMALL 4

#define EFI_WARN_DELETE_FAILURE 2

#define EFI_WARN_UNKNOWN_GLYPH 1

#define EFI_WARN_WRITE_FAILURE 3

#define EFI_WRITE_PROTECTED 2147483656

typedef uint8_t EFI_BOOLEAN;

typedef int16_t EFI_CHAR16;

typedef int32_t EFI_CHAR32;

typedef int64_t EFI_CHAR64;

typedef int8_t EFI_CHAR8;

typedef struct EFI_CONFIGURATION_TABLE_32 EFI_CONFIGURATION_TABLE_32, *PEFI_CONFIGURATION_TABLE_32;

typedef struct EFI_GUID EFI_GUID, *PEFI_GUID;

typedef uint32_t EFI_PTR32;

typedef uint32_t EFI_UINT32;

typedef uint16_t EFI_UINT16;

typedef uint8_t EFI_UINT8;

struct EFI_GUID {
    EFI_UINT32 Data1;
    EFI_UINT16 Data2;
    EFI_UINT16 Data3;
    EFI_UINT8 Data4[8];
};

struct EFI_CONFIGURATION_TABLE_32 {
    struct EFI_GUID VendorGuid;
    EFI_PTR32 VendorTable;
};

typedef struct EFI_CONFIGURATION_TABLE_64 EFI_CONFIGURATION_TABLE_64, *PEFI_CONFIGURATION_TABLE_64;

typedef uint64_t EFI_PTR64;

struct EFI_CONFIGURATION_TABLE_64 {
    struct EFI_GUID VendorGuid;
    EFI_PTR64 VendorTable;
};

typedef uint32_t EFI_STATUS;

typedef uint32_t EFI_UINTN;

typedef void VOID;

typedef EFI_STATUS (* EFI_CONVERT_POINTER)(EFI_UINTN, VOID * *);

typedef EFI_STATUS (* EFI_GET_NEXT_HIGH_MONO_COUNT)(EFI_UINT32 *);

typedef EFI_STATUS (* EFI_GET_NEXT_VARIABLE_NAME)(EFI_UINTN *, EFI_CHAR16 *, struct EFI_GUID *);

typedef struct EFI_TIME EFI_TIME, *PEFI_TIME;

typedef struct EFI_TIME_CAPABILITIES EFI_TIME_CAPABILITIES, *PEFI_TIME_CAPABILITIES;

typedef EFI_STATUS (* EFI_GET_TIME)(struct EFI_TIME *, struct EFI_TIME_CAPABILITIES *);

typedef int16_t EFI_INT16;

struct EFI_TIME_CAPABILITIES {
    EFI_UINT32 Resolution;
    EFI_UINT32 Accuracy;
    EFI_BOOLEAN SetsToZero;
};

struct EFI_TIME {
    EFI_UINT16 Year;
    EFI_UINT8 Month;
    EFI_UINT8 Day;
    EFI_UINT8 Hour;
    EFI_UINT8 Minute;
    EFI_UINT8 Second;
    EFI_UINT8 Pad1;
    EFI_UINT32 Nanosecond;
    EFI_INT16 TimeZone;
    EFI_UINT8 Daylight;
    EFI_UINT8 Pad2;
};

typedef EFI_STATUS (* EFI_GET_VARIABLE)(EFI_CHAR16 *, struct EFI_GUID *, EFI_UINT32 *, EFI_UINTN *, VOID *);

typedef EFI_STATUS (* EFI_GET_WAKEUP_TIME)(EFI_BOOLEAN *, EFI_BOOLEAN *, struct EFI_TIME *);

typedef union EFI_GUID_UNION EFI_GUID_UNION, *PEFI_GUID_UNION;

union EFI_GUID_UNION {
    struct EFI_GUID Guid;
    EFI_UINT8 Raw[16];
};

typedef uint32_t EFI_HANDLE32;

typedef uint64_t EFI_HANDLE64;

typedef int32_t EFI_INT32;

typedef int64_t EFI_INT64;

typedef int8_t EFI_INT8;

typedef struct EFI_MEMORY_DESCRIPTOR EFI_MEMORY_DESCRIPTOR, *PEFI_MEMORY_DESCRIPTOR;

typedef uint64_t EFI_UINT64;

typedef EFI_UINT64 EFI_PHYSICAL_ADDRESS;

typedef EFI_UINT64 EFI_VIRTUAL_ADDRESS;

struct EFI_MEMORY_DESCRIPTOR {
    EFI_UINT32 Type;
    EFI_UINT32 Pad;
    EFI_PHYSICAL_ADDRESS PhysicalStart;
    EFI_VIRTUAL_ADDRESS VirtualStart;
    EFI_UINT64 NumberOfPages;
    EFI_UINT64 Attribute;
};

typedef enum enum_3305 {
    EfiACPIMemoryNVS=10,
    EfiACPIReclaimMemory=9,
    EfiBootServicesCode=3,
    EfiBootServicesData=4,
    EfiConventionalMemory=7,
    EfiLoaderCode=1,
    EfiLoaderData=2,
    EfiMaxMemoryType=14,
    EfiMemoryMappedIO=11,
    EfiMemoryMappedIOPortSpace=12,
    EfiPalCode=13,
    EfiReservedMemoryType=0,
    EfiRuntimeServicesCode=5,
    EfiRuntimeServicesData=6,
    EfiUnusableMemory=8
} enum_3305;

typedef enum enum_3305 EFI_MEMORY_TYPE;

typedef enum enum_3309 {
    EfiResetCold=0,
    EfiResetShutdown=2,
    EfiResetWarm=1
} enum_3309;

typedef enum enum_3309 EFI_RESET_TYPE;

typedef VOID (* EFI_RESET_SYSTEM)(EFI_RESET_TYPE, EFI_STATUS, EFI_UINTN, EFI_CHAR16 *);

typedef struct EFI_RUNTIME_SERVICES_32 EFI_RUNTIME_SERVICES_32, *PEFI_RUNTIME_SERVICES_32;

typedef struct EFI_TABLE_HEADER EFI_TABLE_HEADER, *PEFI_TABLE_HEADER;

struct EFI_TABLE_HEADER {
    EFI_UINT64 Signature;
    EFI_UINT32 Revision;
    EFI_UINT32 HeaderSize;
    EFI_UINT32 CRC32;
    EFI_UINT32 Reserved;
};

struct EFI_RUNTIME_SERVICES_32 {
    struct EFI_TABLE_HEADER Hdr;
    EFI_PTR32 GetTime;
    EFI_PTR32 SetTime;
    EFI_PTR32 GetWakeupTime;
    EFI_PTR32 SetWakeupTime;
    EFI_PTR32 SetVirtualAddressMap;
    EFI_PTR32 ConvertPointer;
    EFI_PTR32 GetVariable;
    EFI_PTR32 GetNextVariableName;
    EFI_PTR32 SetVariable;
    EFI_PTR32 GetNextHighMonotonicCount;
    EFI_PTR32 ResetSystem;
};

typedef struct EFI_RUNTIME_SERVICES_64 EFI_RUNTIME_SERVICES_64, *PEFI_RUNTIME_SERVICES_64;

struct EFI_RUNTIME_SERVICES_64 {
    struct EFI_TABLE_HEADER Hdr;
    EFI_PTR64 GetTime;
    EFI_PTR64 SetTime;
    EFI_PTR64 GetWakeupTime;
    EFI_PTR64 SetWakeupTime;
    EFI_PTR64 SetVirtualAddressMap;
    EFI_PTR64 ConvertPointer;
    EFI_PTR64 GetVariable;
    EFI_PTR64 GetNextVariableName;
    EFI_PTR64 SetVariable;
    EFI_PTR64 GetNextHighMonotonicCount;
    EFI_PTR64 ResetSystem;
};

typedef EFI_STATUS (* EFI_SET_TIME)(struct EFI_TIME *);

typedef EFI_STATUS (* EFI_SET_VARIABLE)(EFI_CHAR16 *, struct EFI_GUID *, EFI_UINT32, EFI_UINTN, VOID *);

typedef EFI_STATUS (* EFI_SET_VIRTUAL_ADDRESS_MAP)(EFI_UINTN, EFI_UINTN, EFI_UINT32, struct EFI_MEMORY_DESCRIPTOR *);

typedef EFI_STATUS (* EFI_SET_WAKEUP_TIME)(EFI_BOOLEAN, struct EFI_TIME *);

typedef struct EFI_SYSTEM_TABLE_32 EFI_SYSTEM_TABLE_32, *PEFI_SYSTEM_TABLE_32;

struct EFI_SYSTEM_TABLE_32 {
    struct EFI_TABLE_HEADER Hdr;
    EFI_PTR32 FirmwareVendor;
    EFI_UINT32 FirmwareRevision;
    EFI_HANDLE32 ConsoleInHandle;
    EFI_PTR32 ConIn;
    EFI_HANDLE32 ConsoleOutHandle;
    EFI_PTR32 ConOut;
    EFI_HANDLE32 StandardErrorHandle;
    EFI_PTR32 StdErr;
    EFI_PTR32 RuntimeServices;
    EFI_PTR32 BootServices;
    EFI_UINT32 NumberOfTableEntries;
    EFI_PTR32 ConfigurationTable;
};

typedef struct EFI_SYSTEM_TABLE_64 EFI_SYSTEM_TABLE_64, *PEFI_SYSTEM_TABLE_64;

struct EFI_SYSTEM_TABLE_64 {
    struct EFI_TABLE_HEADER Hdr;
    EFI_PTR64 FirmwareVendor;
    EFI_UINT32 FirmwareRevision;
    EFI_UINT32 __pad;
    EFI_HANDLE64 ConsoleInHandle;
    EFI_PTR64 ConIn;
    EFI_HANDLE64 ConsoleOutHandle;
    EFI_PTR64 ConOut;
    EFI_HANDLE64 StandardErrorHandle;
    EFI_PTR64 StdErr;
    EFI_PTR64 RuntimeServices;
    EFI_PTR64 BootServices;
    EFI_UINT64 NumberOfTableEntries;
    EFI_PTR64 ConfigurationTable;
};

#define EFL_USER_CLEAR 94208

#define EFL_USER_SET 512

typedef struct _uconv_t _uconv_t, *P_uconv_t;

typedef struct UConverter UConverter, *PUConverter;

struct _uconv_t {
    struct UConverter * uconv;
    struct UConverter * utf8;
};

struct UConverter {
};

typedef struct _xmlCharEncodingHandler _xmlCharEncodingHandler, *P_xmlCharEncodingHandler;

typedef int (* xmlCharEncodingInputFunc)(uchar *, int *, uchar *, int *);

typedef int (* xmlCharEncodingOutputFunc)(uchar *, int *, uchar *, int *);

typedef struct _uconv_t uconv_t;

struct _xmlCharEncodingHandler {
    char * name;
    xmlCharEncodingInputFunc input;
    xmlCharEncodingOutputFunc output;
    uconv_t * uconv_in;
    uconv_t * uconv_out;
};

typedef enum enum_2039 {
    XML_CHAR_ENCODING_2022_JP=19,
    XML_CHAR_ENCODING_8859_1=10,
    XML_CHAR_ENCODING_8859_2=11,
    XML_CHAR_ENCODING_8859_3=12,
    XML_CHAR_ENCODING_8859_4=13,
    XML_CHAR_ENCODING_8859_5=14,
    XML_CHAR_ENCODING_8859_6=15,
    XML_CHAR_ENCODING_8859_7=16,
    XML_CHAR_ENCODING_8859_8=17,
    XML_CHAR_ENCODING_8859_9=18,
    XML_CHAR_ENCODING_ASCII=22,
    XML_CHAR_ENCODING_EBCDIC=6,
    XML_CHAR_ENCODING_ERROR=0,
    XML_CHAR_ENCODING_EUC_JP=21,
    XML_CHAR_ENCODING_NONE=0,
    XML_CHAR_ENCODING_SHIFT_JIS=20,
    XML_CHAR_ENCODING_UCS2=9,
    XML_CHAR_ENCODING_UCS4BE=5,
    XML_CHAR_ENCODING_UCS4LE=4,
    XML_CHAR_ENCODING_UCS4_2143=7,
    XML_CHAR_ENCODING_UCS4_3412=8,
    XML_CHAR_ENCODING_UTF16BE=3,
    XML_CHAR_ENCODING_UTF16LE=2,
    XML_CHAR_ENCODING_UTF8=1
} enum_2039;

typedef enum enum_2039 xmlCharEncoding;

typedef struct _xmlCharEncodingHandler xmlCharEncodingHandler;

typedef xmlCharEncodingHandler * xmlCharEncodingHandlerPtr;

#define __DARWIN_BIG_ENDIAN 4321

#define __DARWIN_BYTE_ORDER 1234

#define __DARWIN_LITTLE_ENDIAN 1234

#define __DARWIN_PDP_ENDIAN 3412

#define _QUAD_HIGHWORD 1

#define _QUAD_LOWWORD 0

#define BIG_ENDIAN 4321

#define LITTLE_ENDIAN 1234

#define PDP_ENDIAN 3412

#define ENGINE_CMD_BASE 200

#define ENGINE_CMD_FLAG_INTERNAL 8

#define ENGINE_CMD_FLAG_NO_INPUT 4

#define ENGINE_CMD_FLAG_NUMERIC 1

#define ENGINE_CMD_FLAG_STRING 2

#define ENGINE_CTRL_CHIL_NO_LOCKING 101

#define ENGINE_CTRL_CHIL_SET_FORKCHECK 100

#define ENGINE_CTRL_GET_CMD_FLAGS 18

#define ENGINE_CTRL_GET_CMD_FROM_NAME 13

#define ENGINE_CTRL_GET_DESC_FROM_CMD 17

#define ENGINE_CTRL_GET_DESC_LEN_FROM_CMD 16

#define ENGINE_CTRL_GET_FIRST_CMD_TYPE 11

#define ENGINE_CTRL_GET_NAME_FROM_CMD 15

#define ENGINE_CTRL_GET_NAME_LEN_FROM_CMD 14

#define ENGINE_CTRL_GET_NEXT_CMD_TYPE 12

#define ENGINE_CTRL_HAS_CTRL_FUNCTION 10

#define ENGINE_CTRL_HUP 3

#define ENGINE_CTRL_LOAD_CONFIGURATION 6

#define ENGINE_CTRL_LOAD_SECTION 7

#define ENGINE_CTRL_SET_CALLBACK_DATA 5

#define ENGINE_CTRL_SET_LOGSTREAM 1

#define ENGINE_CTRL_SET_PASSWORD_CALLBACK 2

#define ENGINE_CTRL_SET_USER_INTERFACE 4

#define ENGINE_F_DYNAMIC_CTRL 180

#define ENGINE_F_DYNAMIC_GET_DATA_CTX 181

#define ENGINE_F_DYNAMIC_LOAD 182

#define ENGINE_F_DYNAMIC_SET_DATA_CTX 183

#define ENGINE_F_ENGINE_ADD 105

#define ENGINE_F_ENGINE_BY_ID 106

#define ENGINE_F_ENGINE_CMD_IS_EXECUTABLE 170

#define ENGINE_F_ENGINE_CTRL 142

#define ENGINE_F_ENGINE_CTRL_CMD 178

#define ENGINE_F_ENGINE_CTRL_CMD_STRING 171

#define ENGINE_F_ENGINE_FINISH 107

#define ENGINE_F_ENGINE_FREE_UTIL 108

#define ENGINE_F_ENGINE_GET_CIPHER 185

#define ENGINE_F_ENGINE_GET_DEFAULT_TYPE 177

#define ENGINE_F_ENGINE_GET_DIGEST 186

#define ENGINE_F_ENGINE_GET_NEXT 115

#define ENGINE_F_ENGINE_GET_PREV 116

#define ENGINE_F_ENGINE_INIT 119

#define ENGINE_F_ENGINE_LIST_ADD 120

#define ENGINE_F_ENGINE_LIST_REMOVE 121

#define ENGINE_F_ENGINE_LOAD_PRIVATE_KEY 150

#define ENGINE_F_ENGINE_LOAD_PUBLIC_KEY 151

#define ENGINE_F_ENGINE_LOAD_SSL_CLIENT_CERT 192

#define ENGINE_F_ENGINE_NEW 122

#define ENGINE_F_ENGINE_REMOVE 123

#define ENGINE_F_ENGINE_SET_DEFAULT_STRING 189

#define ENGINE_F_ENGINE_SET_DEFAULT_TYPE 126

#define ENGINE_F_ENGINE_SET_ID 129

#define ENGINE_F_ENGINE_SET_NAME 130

#define ENGINE_F_ENGINE_TABLE_REGISTER 184

#define ENGINE_F_ENGINE_UNLOAD_KEY 152

#define ENGINE_F_ENGINE_UNLOCKED_FINISH 191

#define ENGINE_F_ENGINE_UP_REF 190

#define ENGINE_F_INT_CTRL_HELPER 172

#define ENGINE_F_INT_ENGINE_CONFIGURE 188

#define ENGINE_F_INT_ENGINE_MODULE_INIT 187

#define ENGINE_F_LOG_MESSAGE 141

#define ENGINE_FLAGS_BY_ID_COPY 4

#define ENGINE_FLAGS_MANUAL_CMD_CTRL 2

#define ENGINE_METHOD_ALL 65535

#define ENGINE_METHOD_CIPHERS 64

#define ENGINE_METHOD_DH 4

#define ENGINE_METHOD_DIGESTS 128

#define ENGINE_METHOD_DSA 2

#define ENGINE_METHOD_ECDH 16

#define ENGINE_METHOD_ECDSA 32

#define ENGINE_METHOD_NONE 0

#define ENGINE_METHOD_RAND 8

#define ENGINE_METHOD_RSA 1

#define ENGINE_METHOD_STORE 256

#define ENGINE_R_ALREADY_LOADED 100

#define ENGINE_R_ARGUMENT_IS_NOT_A_NUMBER 133

#define ENGINE_R_CMD_NOT_EXECUTABLE 134

#define ENGINE_R_COMMAND_TAKES_INPUT 135

#define ENGINE_R_COMMAND_TAKES_NO_INPUT 136

#define ENGINE_R_CONFLICTING_ENGINE_ID 103

#define ENGINE_R_CTRL_COMMAND_NOT_IMPLEMENTED 119

#define ENGINE_R_DH_NOT_IMPLEMENTED 139

#define ENGINE_R_DSA_NOT_IMPLEMENTED 140

#define ENGINE_R_DSO_FAILURE 104

#define ENGINE_R_DSO_NOT_FOUND 132

#define ENGINE_R_ENGINE_CONFIGURATION_ERROR 101

#define ENGINE_R_ENGINE_IS_NOT_IN_LIST 105

#define ENGINE_R_ENGINE_SECTION_ERROR 149

#define ENGINE_R_ENGINES_SECTION_ERROR 148

#define ENGINE_R_FAILED_LOADING_PRIVATE_KEY 128

#define ENGINE_R_FAILED_LOADING_PUBLIC_KEY 129

#define ENGINE_R_FINISH_FAILED 106

#define ENGINE_R_GET_HANDLE_FAILED 107

#define ENGINE_R_ID_OR_NAME_MISSING 108

#define ENGINE_R_INIT_FAILED 109

#define ENGINE_R_INTERNAL_LIST_ERROR 110

#define ENGINE_R_INVALID_ARGUMENT 143

#define ENGINE_R_INVALID_CMD_NAME 137

#define ENGINE_R_INVALID_CMD_NUMBER 138

#define ENGINE_R_INVALID_INIT_VALUE 151

#define ENGINE_R_INVALID_STRING 150

#define ENGINE_R_NO_CONTROL_FUNCTION 120

#define ENGINE_R_NO_INDEX 144

#define ENGINE_R_NO_LOAD_FUNCTION 125

#define ENGINE_R_NO_REFERENCE 130

#define ENGINE_R_NO_SUCH_ENGINE 116

#define ENGINE_R_NO_UNLOAD_FUNCTION 126

#define ENGINE_R_NOT_INITIALISED 117

#define ENGINE_R_NOT_LOADED 112

#define ENGINE_R_PROVIDE_PARAMETERS 113

#define ENGINE_R_RSA_NOT_IMPLEMENTED 141

#define ENGINE_R_UNIMPLEMENTED_CIPHER 146

#define ENGINE_R_UNIMPLEMENTED_DIGEST 147

#define ENGINE_R_VERSION_INCOMPATIBILITY 145

#define ENGINE_TABLE_FLAG_NOINIT 1

#define OSSL_DYNAMIC_OLDEST 131072

#define OSSL_DYNAMIC_VERSION 131072

typedef CRYPTO_dynlock_value * (* dyn_dynlock_create_cb)(char *, int);

typedef void (* dyn_dynlock_destroy_cb)(struct CRYPTO_dynlock_value *, char *, int);

typedef void (* dyn_dynlock_lock_cb)(int, struct CRYPTO_dynlock_value *, char *, int);

typedef int (* dyn_lock_add_lock_cb)(int *, int, int, char *, int);

typedef void (* dyn_lock_locking_cb)(int, int, char *, int);

typedef void (* dyn_MEM_free_cb)(void *);

typedef void * (* dyn_MEM_malloc_cb)(size_t);

typedef void * (* dyn_MEM_realloc_cb)(void *, size_t);

typedef struct engine_st engine_st, *Pengine_st;

typedef struct engine_st ENGINE;

typedef struct st_dynamic_fns st_dynamic_fns, *Pst_dynamic_fns;

typedef struct st_dynamic_fns dynamic_fns;

typedef int (* dynamic_bind_engine)(ENGINE *, char *, dynamic_fns *);

typedef struct st_ERR_FNS st_ERR_FNS, *Pst_ERR_FNS;

typedef struct st_ERR_FNS ERR_FNS;

typedef struct st_dynamic_MEM_fns st_dynamic_MEM_fns, *Pst_dynamic_MEM_fns;

typedef struct st_dynamic_MEM_fns dynamic_MEM_fns;

typedef struct st_dynamic_LOCK_fns st_dynamic_LOCK_fns, *Pst_dynamic_LOCK_fns;

typedef struct st_dynamic_LOCK_fns dynamic_LOCK_fns;

struct st_dynamic_LOCK_fns {
    dyn_lock_locking_cb lock_locking_cb;
    dyn_lock_add_lock_cb lock_add_lock_cb;
    dyn_dynlock_create_cb dynlock_create_cb;
    dyn_dynlock_lock_cb dynlock_lock_cb;
    dyn_dynlock_destroy_cb dynlock_destroy_cb;
};

struct st_ERR_FNS {
};

struct st_dynamic_MEM_fns {
    dyn_MEM_malloc_cb malloc_cb;
    dyn_MEM_realloc_cb realloc_cb;
    dyn_MEM_free_cb free_cb;
};

struct st_dynamic_fns {
    void * static_state;
    ERR_FNS * err_fns;
    CRYPTO_EX_DATA_IMPL * ex_data_fns;
    dynamic_MEM_fns mem_fns;
    dynamic_LOCK_fns lock_fns;
};

struct engine_st {
};

typedef ulong (* dynamic_v_check_fn)(ulong);

typedef struct evp_cipher_st evp_cipher_st, *Pevp_cipher_st;

typedef struct evp_cipher_ctx_st evp_cipher_ctx_st, *Pevp_cipher_ctx_st;

typedef struct evp_cipher_ctx_st EVP_CIPHER_CTX;

typedef struct evp_cipher_st EVP_CIPHER;

typedef int (* ENGINE_CIPHERS_PTR)(ENGINE *, EVP_CIPHER * *, int * *, int);

struct evp_cipher_ctx_st {
    EVP_CIPHER * cipher;
    ENGINE * engine;
    int encrypt;
    int buf_len;
    uchar oiv[16];
    uchar iv[16];
    uchar buf[32];
    int num;
    void * app_data;
    int key_len;
    ulong flags;
    void * cipher_data;
    int final_used;
    int block_mask;
    uchar final[32];
};

struct evp_cipher_st {
    int nid;
    int block_size;
    int key_len;
    int iv_len;
    ulong flags;
    int (* init)(EVP_CIPHER_CTX *, uchar *, uchar *, int);
    int (* do_cipher)(EVP_CIPHER_CTX *, uchar *, uchar *, uint);
    int (* cleanup)(EVP_CIPHER_CTX *);
    int ctx_size;
    int (* set_asn1_parameters)(EVP_CIPHER_CTX *, ASN1_TYPE *);
    int (* get_asn1_parameters)(EVP_CIPHER_CTX *, ASN1_TYPE *);
    int (* ctrl)(EVP_CIPHER_CTX *, int, int, void *);
    void * app_data;
};

typedef struct ENGINE_CMD_DEFN_st ENGINE_CMD_DEFN_st, *PENGINE_CMD_DEFN_st;

typedef struct ENGINE_CMD_DEFN_st ENGINE_CMD_DEFN;

struct ENGINE_CMD_DEFN_st {
    uint cmd_num;
    char * cmd_name;
    char * cmd_desc;
    uint cmd_flags;
};

typedef int (* ENGINE_CTRL_FUNC_PTR)(ENGINE *, int, long, void *, void (* )(void));

typedef struct env_md_st env_md_st, *Penv_md_st;

typedef struct env_md_ctx_st env_md_ctx_st, *Penv_md_ctx_st;

typedef struct env_md_ctx_st EVP_MD_CTX;

typedef struct env_md_st EVP_MD;

typedef int (* ENGINE_DIGESTS_PTR)(ENGINE *, EVP_MD * *, int * *, int);

struct env_md_ctx_st {
    EVP_MD * digest;
    ENGINE * engine;
    ulong flags;
    void * md_data;
};

struct env_md_st {
    int type;
    int pkey_type;
    int md_size;
    ulong flags;
    int (* init)(EVP_MD_CTX *);
    int (* update)(EVP_MD_CTX *, void *, size_t);
    int (* final)(EVP_MD_CTX *, uchar *);
    int (* copy)(EVP_MD_CTX *, EVP_MD_CTX *);
    int (* cleanup)(EVP_MD_CTX *);
    int (* sign)(int, uchar *, uint, uchar *, uint *, void *);
    int (* verify)(int, uchar *, uint, uchar *, uint, void *);
    int required_pkey_type[5];
    int block_size;
    int ctx_size;
};

typedef int (* ENGINE_GEN_FUNC_PTR)(void);

typedef int (* ENGINE_GEN_INT_FUNC_PTR)(ENGINE *);

typedef struct evp_pkey_st evp_pkey_st, *Pevp_pkey_st;

typedef struct evp_pkey_st EVP_PKEY;

typedef struct ui_method_st ui_method_st, *Pui_method_st;

typedef struct ui_method_st UI_METHOD;

typedef EVP_PKEY * (* ENGINE_LOAD_KEY_PTR)(ENGINE *, char *, UI_METHOD *, void *);

typedef union _union_3110 _union_3110, *P_union_3110;

typedef struct rsa_st rsa_st, *Prsa_st;

typedef struct dsa_st dsa_st, *Pdsa_st;

typedef struct dh_st dh_st, *Pdh_st;

typedef struct rsa_meth_st rsa_meth_st, *Prsa_meth_st;

typedef struct rsa_st RSA;

typedef struct bignum_ctx bignum_ctx, *Pbignum_ctx;

typedef struct bignum_ctx BN_CTX;

typedef struct bn_mont_ctx_st bn_mont_ctx_st, *Pbn_mont_ctx_st;

typedef struct bn_mont_ctx_st BN_MONT_CTX;

typedef struct rsa_meth_st RSA_METHOD;

typedef struct bn_blinding_st bn_blinding_st, *Pbn_blinding_st;

typedef struct bn_blinding_st BN_BLINDING;

typedef struct dsa_method dsa_method, *Pdsa_method;

typedef struct dsa_st DSA;

typedef struct dsa_method DSA_METHOD;

typedef struct dh_method dh_method, *Pdh_method;

typedef struct dh_st DH;

typedef struct dh_method DH_METHOD;

union _union_3110 {
    char * ptr;
    struct rsa_st * rsa;
    struct dsa_st * dsa;
    struct dh_st * dh;
    struct ec_key_st * ec;
};

struct bignum_ctx {
};

struct dsa_st {
    int pad;
    long version;
    int write_params;
    BIGNUM * p;
    BIGNUM * q;
    BIGNUM * g;
    BIGNUM * pub_key;
    BIGNUM * priv_key;
    BIGNUM * kinv;
    BIGNUM * r;
    int flags;
    BN_MONT_CTX * method_mont_p;
    int references;
    CRYPTO_EX_DATA ex_data;
    DSA_METHOD * meth;
    ENGINE * engine;
};

struct rsa_st {
    int pad;
    long version;
    RSA_METHOD * meth;
    ENGINE * engine;
    BIGNUM * n;
    BIGNUM * e;
    BIGNUM * d;
    BIGNUM * p;
    BIGNUM * q;
    BIGNUM * dmp1;
    BIGNUM * dmq1;
    BIGNUM * iqmp;
    CRYPTO_EX_DATA ex_data;
    int references;
    int flags;
    BN_MONT_CTX * _method_mod_n;
    BN_MONT_CTX * _method_mod_p;
    BN_MONT_CTX * _method_mod_q;
    char * bignum_data;
    BN_BLINDING * blinding;
    BN_BLINDING * mt_blinding;
};

struct dh_st {
    int pad;
    int version;
    BIGNUM * p;
    BIGNUM * g;
    long length;
    BIGNUM * pub_key;
    BIGNUM * priv_key;
    int flags;
    BN_MONT_CTX * method_mont_p;
    BIGNUM * q;
    BIGNUM * j;
    uchar * seed;
    int seedlen;
    BIGNUM * counter;
    int references;
    CRYPTO_EX_DATA ex_data;
    DH_METHOD * meth;
    ENGINE * engine;
};

struct rsa_meth_st {
    char * name;
    int (* rsa_pub_enc)(int, uchar *, uchar *, RSA *, int);
    int (* rsa_pub_dec)(int, uchar *, uchar *, RSA *, int);
    int (* rsa_priv_enc)(int, uchar *, uchar *, RSA *, int);
    int (* rsa_priv_dec)(int, uchar *, uchar *, RSA *, int);
    int (* rsa_mod_exp)(BIGNUM *, BIGNUM *, RSA *, BN_CTX *);
    int (* bn_mod_exp)(BIGNUM *, BIGNUM *, BIGNUM *, BIGNUM *, BN_CTX *, BN_MONT_CTX *);
    int (* init)(RSA *);
    int (* finish)(RSA *);
    int flags;
    char * app_data;
    int (* rsa_sign)(int, uchar *, uint, uchar *, uint *, RSA *);
    int (* rsa_verify)(int, uchar *, uint, uchar *, uint, RSA *);
    int (* rsa_keygen)(RSA *, int, BIGNUM *, BN_GENCB *);
};

struct bn_blinding_st {
};

struct dh_method {
    char * name;
    int (* generate_key)(DH *);
    int (* compute_key)(uchar *, BIGNUM *, DH *);
    int (* bn_mod_exp)(DH *, BIGNUM *, BIGNUM *, BIGNUM *, BIGNUM *, BN_CTX *, BN_MONT_CTX *);
    int (* init)(DH *);
    int (* finish)(DH *);
    int flags;
    char * app_data;
    int (* generate_params)(DH *, int, int, BN_GENCB *);
};

struct ui_method_st {
};

struct dsa_method {
    char * name;
    DSA_SIG * (* dsa_do_sign)(uchar *, int, DSA *);
    int (* dsa_sign_setup)(DSA *, BN_CTX *, BIGNUM * *, BIGNUM * *);
    int (* dsa_do_verify)(uchar *, int, DSA_SIG *, DSA *);
    int (* dsa_mod_exp)(DSA *, BIGNUM *, BIGNUM *, BIGNUM *, BIGNUM *, BIGNUM *, BIGNUM *, BN_CTX *, BN_MONT_CTX *);
    int (* bn_mod_exp)(DSA *, BIGNUM *, BIGNUM *, BIGNUM *, BIGNUM *, BN_CTX *, BN_MONT_CTX *);
    int (* init)(DSA *);
    int (* finish)(DSA *);
    int flags;
    char * app_data;
    int (* dsa_paramgen)(DSA *, int, uchar *, int, int *, ulong *, BN_GENCB *);
    int (* dsa_keygen)(DSA *);
};

struct evp_pkey_st {
    int type;
    int save_type;
    int references;
    union _union_3110 pkey;
    int save_parameters;
    STACK * attributes;
};

struct bn_mont_ctx_st {
    int ri;
    BIGNUM RR;
    BIGNUM N;
    BIGNUM Ni;
    ulong n0;
    int flags;
};

typedef struct ssl_st ssl_st, *Pssl_st;

typedef struct ssl_st SSL;

typedef struct x509_st x509_st, *Px509_st;

typedef struct x509_st X509;

typedef int (* ENGINE_SSL_CLIENT_CERT_PTR)(ENGINE *, SSL *, STACK *, X509 * *, EVP_PKEY * *, STACK * *, UI_METHOD *, void *);

typedef struct x509_cinf_st x509_cinf_st, *Px509_cinf_st;

typedef struct x509_cinf_st X509_CINF;

typedef struct X509_algor_st X509_algor_st, *PX509_algor_st;

typedef struct X509_algor_st X509_ALGOR;

typedef struct AUTHORITY_KEYID_st AUTHORITY_KEYID_st, *PAUTHORITY_KEYID_st;

typedef struct X509_POLICY_CACHE_st X509_POLICY_CACHE_st, *PX509_POLICY_CACHE_st;

typedef struct X509_POLICY_CACHE_st X509_POLICY_CACHE;

typedef struct x509_cert_aux_st x509_cert_aux_st, *Px509_cert_aux_st;

typedef struct x509_cert_aux_st X509_CERT_AUX;

typedef struct X509_name_st X509_name_st, *PX509_name_st;

typedef struct X509_name_st X509_NAME;

typedef struct X509_val_st X509_val_st, *PX509_val_st;

typedef struct X509_val_st X509_VAL;

typedef struct X509_pubkey_st X509_pubkey_st, *PX509_pubkey_st;

typedef struct X509_pubkey_st X509_PUBKEY;

typedef STACK GENERAL_NAMES;

typedef struct buf_mem_st buf_mem_st, *Pbuf_mem_st;

typedef struct buf_mem_st BUF_MEM;

typedef struct asn1_string_st ASN1_TIME;

struct X509_name_st {
    STACK * entries;
    int modified;
    BUF_MEM * bytes;
    ulong hash;
};

struct X509_algor_st {
    ASN1_OBJECT * algorithm;
    ASN1_TYPE * parameter;
};

struct x509_st {
    X509_CINF * cert_info;
    X509_ALGOR * sig_alg;
    ASN1_BIT_STRING * signature;
    int valid;
    int references;
    char * name;
    CRYPTO_EX_DATA ex_data;
    long ex_pathlen;
    long ex_pcpathlen;
    ulong ex_flags;
    ulong ex_kusage;
    ulong ex_xkusage;
    ulong ex_nscert;
    ASN1_OCTET_STRING * skid;
    struct AUTHORITY_KEYID_st * akid;
    X509_POLICY_CACHE * policy_cache;
    uchar sha1_hash[20];
    X509_CERT_AUX * aux;
};

struct X509_val_st {
    ASN1_TIME * notBefore;
    ASN1_TIME * notAfter;
};

struct x509_cinf_st {
    ASN1_INTEGER * version;
    ASN1_INTEGER * serialNumber;
    X509_ALGOR * signature;
    X509_NAME * issuer;
    X509_VAL * validity;
    X509_NAME * subject;
    X509_PUBKEY * key;
    ASN1_BIT_STRING * issuerUID;
    ASN1_BIT_STRING * subjectUID;
    STACK * extensions;
    ASN1_ENCODING enc;
};

struct X509_POLICY_CACHE_st {
};

struct ssl_st {
};

struct X509_pubkey_st {
    X509_ALGOR * algor;
    ASN1_BIT_STRING * public_key;
    EVP_PKEY * pkey;
};

struct AUTHORITY_KEYID_st {
    ASN1_OCTET_STRING * keyid;
    GENERAL_NAMES * issuer;
    ASN1_INTEGER * serial;
};

struct x509_cert_aux_st {
    STACK * trust;
    STACK * reject;
    ASN1_UTF8STRING * alias;
    ASN1_OCTET_STRING * keyid;
    STACK * other;
};

struct buf_mem_st {
    int length;
    char * data;
    int max;
};

typedef enum enum_2013 {
    XML_EXTERNAL_GENERAL_PARSED_ENTITY=2,
    XML_EXTERNAL_GENERAL_UNPARSED_ENTITY=3,
    XML_EXTERNAL_PARAMETER_ENTITY=5,
    XML_INTERNAL_GENERAL_ENTITY=1,
    XML_INTERNAL_PARAMETER_ENTITY=4,
    XML_INTERNAL_PREDEFINED_ENTITY=6
} enum_2013;

typedef struct _xmlHashTable xmlEntitiesTable;

typedef xmlEntitiesTable * xmlEntitiesTablePtr;

typedef enum enum_2013 xmlEntityType;

#define ERR_FLAG_MARK 1

#define ERR_LIB_ASN1 13

#define ERR_LIB_BIO 32

#define ERR_LIB_BN 3

#define ERR_LIB_BUF 7

#define ERR_LIB_CMS 46

#define ERR_LIB_COMP 41

#define ERR_LIB_CONF 14

#define ERR_LIB_CRYPTO 15

#define ERR_LIB_DH 5

#define ERR_LIB_DSA 10

#define ERR_LIB_DSO 37

#define ERR_LIB_EC 16

#define ERR_LIB_ECDH 43

#define ERR_LIB_ECDSA 42

#define ERR_LIB_ENGINE 38

#define ERR_LIB_EVP 6

#define ERR_LIB_FIPS 45

#define ERR_LIB_JPAKE 47

#define ERR_LIB_NONE 1

#define ERR_LIB_OBJ 8

#define ERR_LIB_OCSP 39

#define ERR_LIB_PEM 9

#define ERR_LIB_PKCS12 35

#define ERR_LIB_PKCS7 33

#define ERR_LIB_RAND 36

#define ERR_LIB_RSA 4

#define ERR_LIB_SSL 20

#define ERR_LIB_STORE 44

#define ERR_LIB_SYS 2

#define ERR_LIB_UI 40

#define ERR_LIB_USER 128

#define ERR_LIB_X509 11

#define ERR_LIB_X509V3 34

#define ERR_NUM_ERRORS 16

#define ERR_R_ASN1_LENGTH_MISMATCH 62

#define ERR_R_ASN1_LIB 13

#define ERR_R_BAD_ASN1_OBJECT_HEADER 59

#define ERR_R_BAD_GET_ASN1_OBJECT_CALL 60

#define ERR_R_BIO_LIB 32

#define ERR_R_BN_LIB 3

#define ERR_R_BUF_LIB 7

#define ERR_R_COMP_LIB 41

#define ERR_R_CONF_LIB 14

#define ERR_R_CRYPTO_LIB 15

#define ERR_R_DH_LIB 5

#define ERR_R_DISABLED 69

#define ERR_R_DSA_LIB 10

#define ERR_R_DSO_LIB 37

#define ERR_R_EC_LIB 16

#define ERR_R_ECDH_LIB 43

#define ERR_R_ECDSA_LIB 42

#define ERR_R_ENGINE_LIB 38

#define ERR_R_EVP_LIB 6

#define ERR_R_EXPECTING_AN_ASN1_SEQUENCE 61

#define ERR_R_FATAL 64

#define ERR_R_INTERNAL_ERROR 68

#define ERR_R_MALLOC_FAILURE 65

#define ERR_R_MISSING_ASN1_EOS 63

#define ERR_R_NESTED_ASN1_ERROR 58

#define ERR_R_OBJ_LIB 8

#define ERR_R_OCSP_LIB 39

#define ERR_R_PASSED_NULL_PARAMETER 67

#define ERR_R_PEM_LIB 9

#define ERR_R_PKCS12_LIB 35

#define ERR_R_PKCS7_LIB 33

#define ERR_R_RAND_LIB 36

#define ERR_R_RSA_LIB 4

#define ERR_R_SHOULD_NOT_HAVE_BEEN_CALLED 66

#define ERR_R_SSL_LIB 20

#define ERR_R_STORE_LIB 44

#define ERR_R_SYS_LIB 2

#define ERR_R_UI_LIB 40

#define ERR_R_X509_LIB 11

#define ERR_R_X509V3_LIB 34

#define ERR_TXT_MALLOCED 1

#define ERR_TXT_STRING 2

#define SYS_F_ACCEPT 8

#define SYS_F_BIND 6

#define SYS_F_CONNECT 2

#define SYS_F_FOPEN 1

#define SYS_F_FREAD 11

#define SYS_F_GETSERVBYNAME 3

#define SYS_F_IOCTLSOCKET 5

#define SYS_F_LISTEN 7

#define SYS_F_OPENDIR 10

#define SYS_F_SOCKET 4

#define SYS_F_WSASTARTUP 9

typedef struct err_state_st err_state_st, *Perr_state_st;

typedef struct err_state_st ERR_STATE;

struct err_state_st {
    ulong pid;
    int err_flags[16];
    ulong err_buffer[16];
    char * err_data[16];
    int err_data_flags[16];
    char * err_file[16];
    int err_line[16];
    int top;
    int bottom;
};

typedef struct ERR_string_data_st ERR_string_data_st, *PERR_string_data_st;

typedef struct ERR_string_data_st ERR_STRING_DATA;

struct ERR_string_data_st {
    ulong error;
    char * string;
};

#define E2BIG 7

#define EACCES 13

#define EADDRINUSE 48

#define EADDRNOTAVAIL 49

#define EAFNOSUPPORT 47

#define EAGAIN 35

#define EALREADY 37

#define EAUTH 80

#define EBADARCH 86

#define EBADEXEC 85

#define EBADF 9

#define EBADMACHO 88

#define EBADMSG 94

#define EBADRPC 72

#define EBUSY 16

#define ECANCELED 89

#define ECHILD 10

#define ECONNABORTED 53

#define ECONNREFUSED 61

#define ECONNRESET 54

#define EDEADLK 11

#define EDESTADDRREQ 39

#define EDEVERR 83

#define EDOM 33

#define EDQUOT 69

#define EEXIST 17

#define EFAULT 14

#define EFBIG 27

#define EFTYPE 79

#define EHOSTDOWN 64

#define EHOSTUNREACH 65

#define EIDRM 90

#define EILSEQ 92

#define EINPROGRESS 36

#define EINTR 4

#define EINVAL 22

#define EIO 5

#define EISCONN 56

#define EISDIR 21

#define ELAST 106

#define ELOOP 62

#define EMFILE 24

#define EMLINK 31

#define EMSGSIZE 40

#define EMULTIHOP 95

#define ENAMETOOLONG 63

#define ENEEDAUTH 81

#define ENETDOWN 50

#define ENETRESET 52

#define ENETUNREACH 51

#define ENFILE 23

#define ENOATTR 93

#define ENOBUFS 55

#define ENODATA 96

#define ENODEV 19

#define ENOENT 2

#define ENOEXEC 8

#define ENOLCK 77

#define ENOLINK 97

#define ENOMEM 12

#define ENOPOLICY 103

#define ENOPROTOOPT 42

#define ENOSPC 28

#define ENOSR 98

#define ENOSTR 99

#define ENOSYS 78

#define ENOTBLK 15

#define ENOTCONN 57

#define ENOTDIR 20

#define ENOTEMPTY 66

#define ENOTRECOVERABLE 104

#define ENOTSOCK 38

#define ENOTSUP 45

#define ENOTTY 25

#define ENXIO 6

#define EOPNOTSUPP 102

#define EOVERFLOW 84

#define EOWNERDEAD 105

#define EPERM 1

#define EPFNOSUPPORT 46

#define EPIPE 32

#define EPROCLIM 67

#define EPROCUNAVAIL 76

#define EPROGMISMATCH 75

#define EPROGUNAVAIL 74

#define EPROTO 100

#define EPROTONOSUPPORT 43

#define EPROTOTYPE 41

#define EPWROFF 82

#define EQFULL 106

#define ERANGE 34

#define EREMOTE 71

#define EROFS 30

#define ERPCMISMATCH 73

#define ESHLIBVERS 87

#define ESHUTDOWN 58

#define ESOCKTNOSUPPORT 44

#define ESPIPE 29

#define ESRCH 3

#define ESTALE 70

#define ETIME 101

#define ETIMEDOUT 60

#define ETOOMANYREFS 59

#define ETXTBSY 26

#define EUSERS 68

#define EWOULDBLOCK 35

#define EXDEV 18

#define code_emask 16383

#define err_dipc 469762048

#define err_ipc 201326592

#define err_ipc_compat 4227858432

#define err_kern 0

#define err_local 4160749568

#define err_mach_ipc 268435456

#define err_max_system 63

#define err_none 0

#define ERR_ROUTINE_NIL 0

#define err_server 134217728

#define ERR_SUCCESS 0

#define err_us 67108864

#define sub_emask 67092480

#define system_emask 4227858432

typedef kern_return_t mach_error_t;

typedef mach_error_t (* mach_error_fn_t)(void);

typedef struct esp esp, *Pesp;

struct esp {
    u_int32_t esp_spi;
};

typedef struct esptail esptail, *Pesptail;

struct esptail {
    u_int8_t esp_padlen;
    u_int8_t esp_nxt;
};

typedef struct newesp newesp, *Pnewesp;

struct newesp {
    u_int32_t esp_spi;
    u_int32_t esp_seq;
};

#define ETHER_ADDR_LEN 6

#define ETHER_ALIGN 2

#define ETHER_CRC_LEN 4

#define ETHER_HDR_LEN 14

#define ETHER_MAX_LEN 1518

#define ETHER_MIN_LEN 64

#define ETHER_TYPE_LEN 2

#define ETHERMIN 46

#define ETHERMTU 1500

#define ETHERTYPE_ARP 2054

#define ETHERTYPE_IP 2048

#define ETHERTYPE_IPV6 34525

#define ETHERTYPE_LOOPBACK 36864

#define ETHERTYPE_NTRAILER 16

#define ETHERTYPE_PAE 34958

#define ETHERTYPE_PUP 512

#define ETHERTYPE_REVARP 32821

#define ETHERTYPE_RSN_PREAUTH 35015

#define ETHERTYPE_TRAIL 4096

#define ETHERTYPE_VLAN 33024

typedef struct ether_addr ether_addr, *Pether_addr;

struct ether_addr {
    u_char octet[6];
};

typedef struct ether_header ether_header, *Pether_header;

struct ether_header {
    u_char ether_dhost[6];
    u_char ether_shost[6];
    u_short ether_type;
};

#define E_BAD_ARGUMENT -2

#define E_BAD_STATE -5

#define E_CONNECTED -4

#define E_CURRENT -14

#define E_INVALID_FIELD -13

#define E_NO_MATCH -9

#define E_NO_ROOM -6

#define E_NOT_CONNECTED -11

#define E_NOT_POSTED -7

#define E_NOT_SELECTABLE -10

#define E_OK 0

#define E_POSTED -3

#define E_REQUEST_DENIED -12

#define E_SYSTEM_ERROR -1

#define E_UNKNOWN_COMMAND -8

#define NCURSES_ETI_H_incl 1

#define EV_DMASK 4294967040

#define EV_EX 4

#define EV_FD 1

#define EV_FIN 32768

#define EV_MASK 15

#define EV_OOB 16384

#define EV_RBYTES 256

#define EV_RCLOSED 1024

#define EV_RCONN 2048

#define EV_RE 1

#define EV_RESET 65536

#define EV_RM 8

#define EV_RWBYTES 768

#define EV_TIMEOUT 131072

#define EV_WBYTES 512

#define EV_WCLOSED 4096

#define EV_WCONN 8192

#define EV_WR 2

typedef struct eventreq eventreq, *Peventreq;

typedef struct eventreq * er_t;

struct eventreq {
    int er_type;
    int er_handle;
    void * er_data;
    int er_rcnt;
    int er_wcnt;
    int er_ecnt;
    int er_eventbits;
};

#define EV_ADD 1

#define EV_CLEAR 32

#define EV_DELETE 2

#define EV_DISABLE 8

#define EV_DISPATCH 128

#define EV_ENABLE 4

#define EV_EOF 32768

#define EV_ERROR 16384

#define EV_FLAG0 4096

#define EV_FLAG1 8192

#define EV_ONESHOT 16

#define EV_OOBAND 8192

#define EV_POLL 4096

#define EV_RECEIPT 64

#define EV_SYSFLAGS 61440

#define EVFILT_AIO -3

#define EVFILT_FS -9

#define EVFILT_MACHPORT -8

#define EVFILT_PROC -5

#define EVFILT_READ -1

#define EVFILT_SIGNAL -6

#define EVFILT_SYSCOUNT 14

#define EVFILT_THREADMARKER 14

#define EVFILT_TIMER -7

#define EVFILT_USER -10

#define EVFILT_VM -12

#define EVFILT_VNODE -4

#define EVFILT_WRITE -2

#define NOTE_ABSOLUTE 8

#define NOTE_ATTRIB 8

#define NOTE_BACKGROUND 64

#define NOTE_CHILD 4

#define NOTE_CRITICAL 32

#define NOTE_DELETE 1

#define NOTE_EXEC 536870912

#define NOTE_EXIT 2147483648

#define NOTE_EXIT_CSERROR 262144

#define NOTE_EXIT_DECRYPTFAIL 65536

#define NOTE_EXIT_DETAIL 33554432

#define NOTE_EXIT_DETAIL_MASK 458752

#define NOTE_EXIT_MEMORY 131072

#define NOTE_EXITSTATUS 67108864

#define NOTE_EXTEND 4

#define NOTE_FFAND 1073741824

#define NOTE_FFCOPY 3221225472

#define NOTE_FFCTRLMASK 3221225472

#define NOTE_FFLAGSMASK 16777215

#define NOTE_FFNOP 0

#define NOTE_FFOR 2147483648

#define NOTE_FORK 1073741824

#define NOTE_LEEWAY 16

#define NOTE_LINK 16

#define NOTE_LOWAT 1

#define NOTE_NONE 128

#define NOTE_NSECONDS 4

#define NOTE_PCTRLMASK -1048576

#define NOTE_PDATAMASK 1048575

#define NOTE_RENAME 32

#define NOTE_REVOKE 64

#define NOTE_SECONDS 1

#define NOTE_SIGNAL 134217728

#define NOTE_TRACK 1

#define NOTE_TRACKERR 2

#define NOTE_TRIGGER 16777216

#define NOTE_USECONDS 2

#define NOTE_VM_ERROR 268435456

#define NOTE_VM_PRESSURE 2147483648

#define NOTE_VM_PRESSURE_SUDDEN_TERMINATE 536870912

#define NOTE_VM_PRESSURE_TERMINATE 1073741824

#define NOTE_WRITE 2

typedef enum enum_2383 {
    eNoteReapDeprecated=268435456
} enum_2383;

typedef enum enum_2384 {
    eNoteExitReparentedDeprecated=524288
} enum_2384;

typedef struct kevent64_s kevent64_s, *Pkevent64_s;

struct kevent64_s {
    uint64_t ident;
    int16_t filter;
    uint16_t flags;
    uint32_t fflags;
    int64_t data;
    uint64_t udata;
    uint64_t ext[2];
};

typedef struct klist klist, *Pklist;

typedef struct knote knote, *Pknote;

struct knote {
};

struct klist {
    struct knote * slh_first;
};

#define EVP_CIPH_ALWAYS_CALL_INIT 32

#define EVP_CIPH_CBC_MODE 2

#define EVP_CIPH_CFB_MODE 3

#define EVP_CIPH_CTRL_INIT 64

#define EVP_CIPH_CUSTOM_IV 16

#define EVP_CIPH_CUSTOM_KEY_LENGTH 128

#define EVP_CIPH_ECB_MODE 1

#define EVP_CIPH_FLAG_DEFAULT_ASN1 4096

#define EVP_CIPH_FLAG_FIPS 1024

#define EVP_CIPH_FLAG_LENGTH_BITS 8192

#define EVP_CIPH_FLAG_NON_FIPS_ALLOW 2048

#define EVP_CIPH_MODE 7

#define EVP_CIPH_NO_PADDING 256

#define EVP_CIPH_OFB_MODE 4

#define EVP_CIPH_RAND_KEY 512

#define EVP_CIPH_STREAM_CIPHER 0

#define EVP_CIPH_VARIABLE_LENGTH 8

#define EVP_CTRL_GET_RC2_KEY_BITS 2

#define EVP_CTRL_GET_RC5_ROUNDS 4

#define EVP_CTRL_INIT 0

#define EVP_CTRL_RAND_KEY 6

#define EVP_CTRL_SET_KEY_LENGTH 1

#define EVP_CTRL_SET_RC2_KEY_BITS 3

#define EVP_CTRL_SET_RC5_ROUNDS 5

#define EVP_F_AES_INIT_KEY 133

#define EVP_F_ALG_MODULE_INIT 138

#define EVP_F_CAMELLIA_INIT_KEY 159

#define EVP_F_D2I_PKEY 100

#define EVP_F_DO_EVP_ENC_ENGINE 140

#define EVP_F_DO_EVP_ENC_ENGINE_FULL 141

#define EVP_F_DO_EVP_MD_ENGINE 139

#define EVP_F_DO_EVP_MD_ENGINE_FULL 142

#define EVP_F_DSA_PKEY2PKCS8 135

#define EVP_F_DSAPKEY2PKCS8 134

#define EVP_F_ECDSA_PKEY2PKCS8 129

#define EVP_F_ECKEY_PKEY2PKCS8 132

#define EVP_F_EVP_CIPHER_CTX_CTRL 124

#define EVP_F_EVP_CIPHER_CTX_SET_KEY_LENGTH 122

#define EVP_F_EVP_CIPHERINIT 137

#define EVP_F_EVP_CIPHERINIT_EX 123

#define EVP_F_EVP_DECRYPTFINAL_EX 101

#define EVP_F_EVP_DIGESTINIT 136

#define EVP_F_EVP_DIGESTINIT_EX 128

#define EVP_F_EVP_ENCRYPTFINAL_EX 127

#define EVP_F_EVP_MD_CTX_COPY_EX 110

#define EVP_F_EVP_OPENINIT 102

#define EVP_F_EVP_PBE_ALG_ADD 115

#define EVP_F_EVP_PBE_CIPHERINIT 116

#define EVP_F_EVP_PKCS82PKEY 111

#define EVP_F_EVP_PKEY2PKCS8_BROKEN 113

#define EVP_F_EVP_PKEY_COPY_PARAMETERS 103

#define EVP_F_EVP_PKEY_DECRYPT 104

#define EVP_F_EVP_PKEY_ENCRYPT 105

#define EVP_F_EVP_PKEY_GET1_DH 119

#define EVP_F_EVP_PKEY_GET1_DSA 120

#define EVP_F_EVP_PKEY_GET1_EC_KEY 131

#define EVP_F_EVP_PKEY_GET1_ECDSA 130

#define EVP_F_EVP_PKEY_GET1_RSA 121

#define EVP_F_EVP_PKEY_NEW 106

#define EVP_F_EVP_RIJNDAEL 126

#define EVP_F_EVP_SIGNFINAL 107

#define EVP_F_EVP_VERIFYFINAL 108

#define EVP_F_PKCS5_PBE_KEYIVGEN 117

#define EVP_F_PKCS5_V2_PBE_KEYIVGEN 118

#define EVP_F_PKCS8_SET_BROKEN 112

#define EVP_F_RC2_MAGIC_TO_METH 109

#define EVP_F_RC5_CTRL 125

#define EVP_MAX_BLOCK_LENGTH 32

#define EVP_MAX_IV_LENGTH 16

#define EVP_MAX_KEY_LENGTH 32

#define EVP_MAX_MD_SIZE 64

#define EVP_MD_CTX_FLAG_CLEANED 2

#define EVP_MD_CTX_FLAG_NON_FIPS_ALLOW 8

#define EVP_MD_CTX_FLAG_ONESHOT 1

#define EVP_MD_CTX_FLAG_PAD_MASK 240

#define EVP_MD_CTX_FLAG_PAD_PKCS1 0

#define EVP_MD_CTX_FLAG_PAD_PSS 32

#define EVP_MD_CTX_FLAG_PAD_X931 16

#define EVP_MD_CTX_FLAG_PSS_MDLEN 65535

#define EVP_MD_CTX_FLAG_PSS_MREC 65534

#define EVP_MD_CTX_FLAG_REUSE 4

#define EVP_MD_FLAG_FIPS 1024

#define EVP_MD_FLAG_ONESHOT 1

#define EVP_MD_FLAG_SVCTX 2048

#define EVP_PK_DH 4

#define EVP_PK_DSA 2

#define EVP_PK_EC 8

#define EVP_PK_RSA 1

#define EVP_PKEY_DH 28

#define EVP_PKEY_DSA 116

#define EVP_PKEY_DSA1 67

#define EVP_PKEY_DSA2 66

#define EVP_PKEY_DSA3 113

#define EVP_PKEY_DSA4 70

#define EVP_PKEY_EC 408

#define EVP_PKEY_MO_DECRYPT 8

#define EVP_PKEY_MO_ENCRYPT 4

#define EVP_PKEY_MO_SIGN 1

#define EVP_PKEY_MO_VERIFY 2

#define EVP_PKEY_NONE 0

#define EVP_PKEY_RSA 6

#define EVP_PKEY_RSA2 19

#define EVP_PKS_DSA 512

#define EVP_PKS_EC 1024

#define EVP_PKS_RSA 256

#define EVP_PKT_ENC 32

#define EVP_PKT_EXCH 64

#define EVP_PKT_EXP 4096

#define EVP_PKT_SIGN 16

#define EVP_R_AES_KEY_SETUP_FAILED 143

#define EVP_R_ASN1_LIB 140

#define EVP_R_BAD_BLOCK_LENGTH 136

#define EVP_R_BAD_DECRYPT 100

#define EVP_R_BAD_KEY_LENGTH 137

#define EVP_R_BN_DECODE_ERROR 112

#define EVP_R_BN_PUBKEY_ERROR 113

#define EVP_R_CAMELLIA_KEY_SETUP_FAILED 157

#define EVP_R_CIPHER_PARAMETER_ERROR 122

#define EVP_R_CTRL_NOT_IMPLEMENTED 132

#define EVP_R_CTRL_OPERATION_NOT_IMPLEMENTED 133

#define EVP_R_DATA_NOT_MULTIPLE_OF_BLOCK_LENGTH 138

#define EVP_R_DECODE_ERROR 114

#define EVP_R_DIFFERENT_KEY_TYPES 101

#define EVP_R_DISABLED_FOR_FIPS 144

#define EVP_R_ENCODE_ERROR 115

#define EVP_R_ERROR_LOADING_SECTION 145

#define EVP_R_ERROR_SETTING_FIPS_MODE 146

#define EVP_R_EVP_PBE_CIPHERINIT_ERROR 119

#define EVP_R_EXPECTING_A_DH_KEY 128

#define EVP_R_EXPECTING_A_DSA_KEY 129

#define EVP_R_EXPECTING_A_EC_KEY 142

#define EVP_R_EXPECTING_A_ECDSA_KEY 141

#define EVP_R_EXPECTING_AN_RSA_KEY 127

#define EVP_R_FIPS_MODE_NOT_SUPPORTED 147

#define EVP_R_INITIALIZATION_ERROR 134

#define EVP_R_INPUT_NOT_INITIALIZED 111

#define EVP_R_INVALID_FIPS_MODE 148

#define EVP_R_INVALID_KEY_LENGTH 130

#define EVP_R_IV_TOO_LARGE 102

#define EVP_R_KEYGEN_FAILURE 120

#define EVP_R_MISSING_PARAMETERS 103

#define EVP_R_NO_CIPHER_SET 131

#define EVP_R_NO_DIGEST_SET 139

#define EVP_R_NO_DSA_PARAMETERS 116

#define EVP_R_NO_SIGN_FUNCTION_CONFIGURED 104

#define EVP_R_NO_VERIFY_FUNCTION_CONFIGURED 105

#define EVP_R_PKCS8_UNKNOWN_BROKEN_TYPE 117

#define EVP_R_PUBLIC_KEY_NOT_RSA 106

#define EVP_R_SEED_KEY_SETUP_FAILED 162

#define EVP_R_UNKNOWN_OPTION 149

#define EVP_R_UNKNOWN_PBE_ALGORITHM 121

#define EVP_R_UNSUPORTED_NUMBER_OF_ROUNDS 135

#define EVP_R_UNSUPPORTED_CIPHER 107

#define EVP_R_UNSUPPORTED_KEY_DERIVATION_FUNCTION 124

#define EVP_R_UNSUPPORTED_KEY_SIZE 108

#define EVP_R_UNSUPPORTED_KEYLENGTH 123

#define EVP_R_UNSUPPORTED_PRF 125

#define EVP_R_UNSUPPORTED_PRIVATE_KEY_ALGORITHM 118

#define EVP_R_UNSUPPORTED_SALT_TYPE 126

#define EVP_R_WRONG_FINAL_BLOCK_LENGTH 109

#define EVP_R_WRONG_PUBLIC_KEY_TYPE 110

#define PKCS5_DEFAULT_ITER 2048

#define PKCS5_SALT_LEN 8

typedef struct evp_cipher_info_st evp_cipher_info_st, *Pevp_cipher_info_st;

typedef struct evp_cipher_info_st EVP_CIPHER_INFO;

struct evp_cipher_info_st {
    EVP_CIPHER * cipher;
    uchar iv[16];
};

typedef struct evp_Encode_Ctx_st evp_Encode_Ctx_st, *Pevp_Encode_Ctx_st;

typedef struct evp_Encode_Ctx_st EVP_ENCODE_CTX;

struct evp_Encode_Ctx_st {
    int num;
    int length;
    uchar enc_data[80];
    int line_num;
    int expect_nl;
};

typedef struct EVP_MD_SVCTX EVP_MD_SVCTX, *PEVP_MD_SVCTX;

struct EVP_MD_SVCTX {
    EVP_MD_CTX * mctx;
    void * key;
};

typedef int (EVP_PBE_KEYGEN)(EVP_CIPHER_CTX *, char *, int, ASN1_TYPE *, EVP_CIPHER *, EVP_MD *, int);

typedef int (evp_sign_method)(int, uchar *, uint, uchar *, uint *, void *);

typedef int (evp_verify_method)(int, uchar *, uint, uchar *, uint, void *);

#define exc_MSG_COUNT 3

typedef struct __Reply__exception_raise_state_identity_t __Reply__exception_raise_state_identity_t, *P__Reply__exception_raise_state_identity_t;

struct __Reply__exception_raise_state_identity_t {
    struct mach_msg_header_t Head;
    struct NDR_record_t NDR;
    kern_return_t RetCode;
    int flavor;
    mach_msg_type_number_t new_stateCnt;
    natural_t new_state[224];
};

typedef struct __Reply__exception_raise_state_t __Reply__exception_raise_state_t, *P__Reply__exception_raise_state_t;

struct __Reply__exception_raise_state_t {
    struct mach_msg_header_t Head;
    struct NDR_record_t NDR;
    kern_return_t RetCode;
    int flavor;
    mach_msg_type_number_t new_stateCnt;
    natural_t new_state[224];
};

typedef struct __Reply__exception_raise_t __Reply__exception_raise_t, *P__Reply__exception_raise_t;

struct __Reply__exception_raise_t {
    struct mach_msg_header_t Head;
    struct NDR_record_t NDR;
    kern_return_t RetCode;
};

typedef union __ReplyUnion__exc_subsystem __ReplyUnion__exc_subsystem, *P__ReplyUnion__exc_subsystem;

union __ReplyUnion__exc_subsystem {
    struct __Reply__exception_raise_t Reply_exception_raise;
    struct __Reply__exception_raise_state_t Reply_exception_raise_state;
    struct __Reply__exception_raise_state_identity_t Reply_exception_raise_state_identity;
};

typedef struct __Request__exception_raise_state_identity_t __Request__exception_raise_state_identity_t, *P__Request__exception_raise_state_identity_t;

typedef int exception_type_t;

struct __Request__exception_raise_state_identity_t {
    struct mach_msg_header_t Head;
    struct mach_msg_body_t msgh_body;
    struct mach_msg_port_descriptor_t thread;
    struct mach_msg_port_descriptor_t task;
    struct NDR_record_t NDR;
    exception_type_t exception;
    mach_msg_type_number_t codeCnt;
    integer_t code[2];
    int flavor;
    mach_msg_type_number_t old_stateCnt;
    natural_t old_state[224];
};

typedef struct __Request__exception_raise_state_t __Request__exception_raise_state_t, *P__Request__exception_raise_state_t;

struct __Request__exception_raise_state_t {
    struct mach_msg_header_t Head;
    struct NDR_record_t NDR;
    exception_type_t exception;
    mach_msg_type_number_t codeCnt;
    integer_t code[2];
    int flavor;
    mach_msg_type_number_t old_stateCnt;
    natural_t old_state[224];
};

typedef struct __Request__exception_raise_t __Request__exception_raise_t, *P__Request__exception_raise_t;

struct __Request__exception_raise_t {
    struct mach_msg_header_t Head;
    struct mach_msg_body_t msgh_body;
    struct mach_msg_port_descriptor_t thread;
    struct mach_msg_port_descriptor_t task;
    struct NDR_record_t NDR;
    exception_type_t exception;
    mach_msg_type_number_t codeCnt;
    integer_t code[2];
};

typedef union __RequestUnion__exc_subsystem __RequestUnion__exc_subsystem, *P__RequestUnion__exc_subsystem;

union __RequestUnion__exc_subsystem {
    struct __Request__exception_raise_t Request_exception_raise;
    struct __Request__exception_raise_state_t Request_exception_raise_state;
    struct __Request__exception_raise_state_identity_t Request_exception_raise_state_identity;
};

#define EXC_I386_ALIGNFLT 17

#define EXC_I386_BOUND 7

#define EXC_I386_BOUNDFLT 5

#define EXC_I386_BPT 2

#define EXC_I386_BPTFLT 3

#define EXC_I386_DBLFLT 8

#define EXC_I386_DIV 1

#define EXC_I386_DIVERR 0

#define EXC_I386_EMERR 6

#define EXC_I386_ENDPERR 33

#define EXC_I386_ENOEXTFLT 32

#define EXC_I386_EXTERR 5

#define EXC_I386_EXTERRFLT 16

#define EXC_I386_EXTOVR 4

#define EXC_I386_EXTOVRFLT 9

#define EXC_I386_GPFLT 13

#define EXC_I386_INTO 2

#define EXC_I386_INTOFLT 4

#define EXC_I386_INVOP 1

#define EXC_I386_INVOPFLT 6

#define EXC_I386_INVTSSFLT 10

#define EXC_I386_NMIFLT 2

#define EXC_I386_NOEXT 3

#define EXC_I386_NOEXTFLT 7

#define EXC_I386_PGFLT 14

#define EXC_I386_SEGNPFLT 11

#define EXC_I386_SGL 1

#define EXC_I386_SGLSTP 1

#define EXC_I386_SSEEXTERR 8

#define EXC_I386_STKFLT 12

#define EXC_MASK_MACHINE 0

#define EXC_TYPES_COUNT 13

#define EXCEPTION_CODE_MAX 2

#define EXC_ARITHMETIC 3

#define EXC_BAD_ACCESS 1

#define EXC_BAD_INSTRUCTION 2

#define EXC_BREAKPOINT 6

#define EXC_CRASH 10

#define EXC_EMULATION 4

#define EXC_GUARD 12

#define EXC_MACF_MAX 196607

#define EXC_MACF_MIN 131072

#define EXC_MACH_SYSCALL 8

#define EXC_MASK_ARITHMETIC 8

#define EXC_MASK_BAD_ACCESS 2

#define EXC_MASK_BAD_INSTRUCTION 4

#define EXC_MASK_BREAKPOINT 64

#define EXC_MASK_CRASH 1024

#define EXC_MASK_EMULATION 16

#define EXC_MASK_GUARD 4096

#define EXC_MASK_MACH_SYSCALL 256

#define EXC_MASK_RESOURCE 2048

#define EXC_MASK_RPC_ALERT 512

#define EXC_MASK_SOFTWARE 32

#define EXC_MASK_SYSCALL 128

#define EXC_RESOURCE 11

#define EXC_RPC_ALERT 9

#define EXC_SOFT_SIGNAL 65539

#define EXC_SOFTWARE 5

#define EXC_SYSCALL 7

#define EXCEPTION_DEFAULT 1

#define EXCEPTION_STATE 2

#define EXCEPTION_STATE_IDENTITY 3

#define FIRST_EXCEPTION 1

#define MACH_EXCEPTION_CODES 2147483648

typedef int exception_behavior_t;

typedef exception_behavior_t * exception_behavior_array_t;

typedef integer_t exception_data_type_t;

typedef exception_data_type_t * exception_data_t;

typedef int thread_state_flavor_t;

typedef thread_state_flavor_t * exception_flavor_array_t;

typedef uint exception_mask_t;

typedef exception_mask_t * exception_mask_array_t;

typedef mach_port_t * exception_port_array_t;

typedef int64_t mach_exception_data_type_t;

typedef mach_exception_data_type_t mach_exception_code_t;

typedef mach_exception_data_type_t * mach_exception_data_t;

typedef mach_exception_data_type_t mach_exception_subcode_t;

#define _EXECINFO_H_ 1

#define PT_SUNWDTRACE_SIZE 64

typedef struct fasttrap_instr_query fasttrap_instr_query, *Pfasttrap_instr_query;

typedef uint8_t fasttrap_instr_t;

struct fasttrap_instr_query {
    uint64_t ftiq_pc;
    pid_t ftiq_pid;
    fasttrap_instr_t ftiq_instr;
};

typedef struct fasttrap_instr_query fasttrap_instr_query_t;

typedef struct fasttrap_probe_spec fasttrap_probe_spec, *Pfasttrap_probe_spec;

typedef enum fasttrap_provider_type {
    DTFTP_PROVIDER_NONE=0,
    DTFTP_PROVIDER_OBJC=3,
    DTFTP_PROVIDER_ONESHOT=4,
    DTFTP_PROVIDER_PID=2,
    DTFTP_PROVIDER_USDT=1
} fasttrap_provider_type;

typedef enum fasttrap_provider_type fasttrap_provider_type_t;

typedef enum fasttrap_probe_type {
    DTFTP_ENTRY=1,
    DTFTP_IS_ENABLED=5,
    DTFTP_NONE=0,
    DTFTP_OFFSETS=3,
    DTFTP_POST_OFFSETS=4,
    DTFTP_RETURN=2
} fasttrap_probe_type;

typedef enum fasttrap_probe_type fasttrap_probe_type_t;

struct fasttrap_probe_spec {
    pid_t ftps_pid;
    fasttrap_provider_type_t ftps_provider_type;
    fasttrap_probe_type_t ftps_probe_type;
    char ftps_func[128];
    char ftps_mod[64];
    uint64_t ftps_pc;
    uint64_t ftps_size;
    uint64_t ftps_noffs;
    uint64_t ftps_offs[1];
};

typedef struct fasttrap_probe_spec fasttrap_probe_spec_t;

#define FASTTRAP_ENTRY_AFRAMES 5

#define FASTTRAP_INSTR 204

#define FASTTRAP_MAX_INSTR_SIZE 15

#define FASTTRAP_OFFSET_AFRAMES 5

#define FASTTRAP_RETURN_AFRAMES 6

#define FASTTRAP_RIP_1 1

#define FASTTRAP_RIP_2 2

#define FASTTRAP_RIP_X 4

#define FASTTRAP_SEG_CS 1

#define FASTTRAP_SEG_DS 2

#define FASTTRAP_SEG_ES 3

#define FASTTRAP_SEG_FS 4

#define FASTTRAP_SEG_GS 5

#define FASTTRAP_SEG_NONE 0

#define FASTTRAP_SEG_SS 6

#define FASTTRAP_SUNWDTRACE_SIZE 64

#define FASTTRAP_T_CALL 5

#define FASTTRAP_T_COMMON 0

#define FASTTRAP_T_JCC 1

#define FASTTRAP_T_JCXZ 3

#define FASTTRAP_T_JMP 4

#define FASTTRAP_T_LOOP 2

#define FASTTRAP_T_NOP 17

#define FASTTRAP_T_PUSHL_EBP 16

#define FASTTRAP_T_RET 6

#define FASTTRAP_T_RET16 7

typedef struct fasttrap_machtp fasttrap_machtp, *Pfasttrap_machtp;

typedef u_int64_t user_addr_t;

struct fasttrap_machtp {
    uint8_t ftmt_instr[15];
    uint8_t ftmt_size;
    uint8_t ftmt_ripmode;
    uint8_t ftmt_modrm;
    uint8_t ftmt_type;
    uint8_t ftmt_code;
    uint8_t ftmt_base;
    uint8_t ftmt_index;
    uint8_t ftmt_scale;
    uint8_t ftmt_segment;
    user_addr_t ftmt_dest;
};

typedef struct fasttrap_machtp fasttrap_machtp_t;

#define FAT_CIGAM 3199925962

#define FAT_MAGIC 3405691582

typedef struct fat_header fat_header, *Pfat_header;

struct fat_header {
    uint32_t magic;
    uint32_t nfat_arch;
};

#define _FILESEC_REMOVE_ACL 1

#define _FILESEC_UNSET_PROPERTY 0

#define CPF_IGNORE_MODE 2

#define CPF_MASK 3

#define CPF_OVERWRITE 1

#define F_ADDFILESIGS 61

#define F_ADDSIGS 59

#define F_ALLOCATEALL 4

#define F_ALLOCATECONTIG 2

#define F_CHKCLEAN 41

#define F_DUPFD 0

#define F_DUPFD_CLOEXEC 67

#define F_FINDSIGS 78

#define F_FLUSH_DATA 40

#define F_FREEZE_FS 53

#define F_FULLFSYNC 51

#define F_GETFD 1

#define F_GETFL 3

#define F_GETLK 7

#define F_GETLKPID 66

#define F_GETNOSIGPIPE 74

#define F_GETOWN 5

#define F_GETPATH 50

#define F_GETPATH_MTMINFO 71

#define F_GETPROTECTIONCLASS 63

#define F_GETPROTECTIONLEVEL 77

#define F_GLOBAL_NOCACHE 55

#define F_LOG2PHYS 49

#define F_LOG2PHYS_EXT 65

#define F_NOCACHE 48

#define F_NODIRECT 62

#define F_PATHPKG_CHECK 52

#define F_PEOFPOSMODE 3

#define F_PREALLOCATE 42

#define F_RDADVISE 44

#define F_RDAHEAD 45

#define F_RDLCK 1

#define F_SETBACKINGSTORE 70

#define F_SETFD 2

#define F_SETFL 4

#define F_SETLK 8

#define F_SETLKW 9

#define F_SETLKWTIMEOUT 10

#define F_SETNOSIGPIPE 73

#define F_SETOWN 6

#define F_SETPROTECTIONCLASS 64

#define F_SETSIZE 43

#define F_SINGLE_WRITER 76

#define F_THAW_FS 54

#define F_TRANSCODEKEY 75

#define F_UNLCK 2

#define F_VOLPOSMODE 4

#define F_WRLCK 3

#define FAPPEND 8

#define FASYNC 64

#define FCNTL_FS_SPECIFIC_BASE 65536

#define FD_CLOEXEC 1

#define FFDSYNC 4194304

#define FFSYNC 128

#define FNDELAY 4

#define FNONBLOCK 4

#define FREAD 1

#define FWRITE 2

#define LOCK_EX 2

#define LOCK_NB 4

#define LOCK_SH 1

#define LOCK_UN 8

#define O_ACCMODE 3

#define O_ALERT 536870912

#define O_APPEND 8

#define O_ASYNC 64

#define O_CLOEXEC 16777216

#define O_CREAT 512

#define O_DIRECTORY 1048576

#define O_DP_GETRAWENCRYPTED 1

#define O_EVTONLY 32768

#define O_EXCL 2048

#define O_EXLOCK 32

#define O_FSYNC 128

#define O_NDELAY 4

#define O_NOCTTY 131072

#define O_NOFOLLOW 256

#define O_NONBLOCK 4

#define O_POPUP 2147483648

#define O_RDONLY 0

#define O_RDWR 2

#define O_SHLOCK 16

#define O_SYMLINK 2097152

#define O_TRUNC 1024

#define O_WRONLY 1

typedef enum enum_398 {
    FILESEC_ACL=5,
    FILESEC_ACL_ALLOCSIZE=101,
    FILESEC_ACL_RAW=100,
    FILESEC_GROUP=2,
    FILESEC_GRPUUID=6,
    FILESEC_MODE=4,
    FILESEC_OWNER=1,
    FILESEC_UUID=3
} enum_398;

typedef struct fbootstraptransfer fbootstraptransfer, *Pfbootstraptransfer;

struct fbootstraptransfer {
    off_t fbt_offset;
    size_t fbt_length;
    void * fbt_buffer;
};

typedef struct fbootstraptransfer fbootstraptransfer_t;

typedef enum enum_398 filesec_property_t;

typedef struct flock flock, *Pflock;

struct flock {
    off_t l_start;
    off_t l_len;
    pid_t l_pid;
    short l_type;
    short l_whence;
};

typedef struct flocktimeout flocktimeout, *Pflocktimeout;

struct flocktimeout {
    struct flock fl;
    struct timespec timeout;
};

typedef struct fsignatures fsignatures, *Pfsignatures;

struct fsignatures {
    off_t fs_file_start;
    void * fs_blob_start;
    size_t fs_blob_size;
};

typedef struct fsignatures fsignatures_t;

typedef struct fstore fstore, *Pfstore;

struct fstore {
    uint fst_flags;
    int fst_posmode;
    off_t fst_offset;
    off_t fst_length;
    off_t fst_bytesalloc;
};

typedef struct fstore fstore_t;

typedef struct log2phys log2phys, *Plog2phys;

struct log2phys {
    uint l2p_flags;
    off_t l2p_contigbytes;
    off_t l2p_devoffset;
};

typedef struct radvisory radvisory, *Pradvisory;

struct radvisory {
    off_t ra_offset;
    int ra_count;
};

#define FFI_LONG_LONG_MAX 9223372036854775807

#define FFI_SIZEOF_ARG 8

#define FFI_TYPE_DOUBLE 3

#define FFI_TYPE_FLOAT 2

#define FFI_TYPE_INT 1

#define FFI_TYPE_LAST 14

#define FFI_TYPE_LONGDOUBLE 4

#define FFI_TYPE_POINTER 14

#define FFI_TYPE_SINT16 8

#define FFI_TYPE_SINT32 10

#define FFI_TYPE_SINT64 12

#define FFI_TYPE_SINT8 6

#define FFI_TYPE_STRUCT 13

#define FFI_TYPE_UINT16 7

#define FFI_TYPE_UINT32 9

#define FFI_TYPE_UINT64 11

#define FFI_TYPE_UINT8 5

#define FFI_TYPE_VOID 0

typedef struct _ffi_type _ffi_type, *P_ffi_type;

struct _ffi_type {
    size_t size;
    ushort alignment;
    ushort type;
    struct _ffi_type * * elements;
};

typedef struct ffi_cif ffi_cif, *Pffi_cif;

typedef enum ffi_abi {
    FFI_DEFAULT_ABI=3,
    FFI_FIRST_ABI=0,
    FFI_LAST_ABI=4,
    FFI_SYSV=1,
    FFI_UNIX64=2
} ffi_abi;

typedef struct _ffi_type ffi_type;

struct ffi_cif {
    enum ffi_abi abi;
    uint nargs;
    ffi_type * * arg_types;
    ffi_type * rtype;
    uint bytes;
    uint flags;
};

typedef struct ffi_closure ffi_closure, *Pffi_closure;

struct ffi_closure {
    char tramp[24];
    struct ffi_cif * cif;
    void (* fun)(struct ffi_cif *, void *, void * *, void *);
    void * user_data;
};

typedef union ffi_raw ffi_raw, *Pffi_raw;

typedef long ffi_sarg;

typedef ulong ffi_arg;

union ffi_raw {
    ffi_sarg sint;
    ffi_arg uint;
    float flt;
    char data[8];
    void * ptr;
};

typedef struct ffi_raw_closure ffi_raw_closure, *Pffi_raw_closure;

struct ffi_raw_closure {
    char tramp[24];
    struct ffi_cif * cif;
    void (* translate_args)(struct ffi_cif *, void *, void * *, void *);
    void * this_closure;
    void (* fun)(struct ffi_cif *, void *, union ffi_raw *, void *);
    void * user_data;
};

typedef enum ffi_status {
    FFI_BAD_ABI=2,
    FFI_BAD_TYPEDEF=1,
    FFI_OK=0
} ffi_status;

typedef uint FFI_TYPE;

typedef struct extended_cif extended_cif, *Pextended_cif;

struct extended_cif {
    struct ffi_cif * cif;
    void * rvalue;
    void * * avalue;
};

typedef float FLOAT32;

typedef int SINT16;

typedef int SINT32;

typedef int SINT64;

typedef int SINT8;

typedef uint UINT16;

typedef uint UINT32;

typedef uint UINT64;

typedef uint UINT8;

#define BYTEORDER 1234

#define FFI_NO_RAW_API 1

#define HAVE_ALLOCA 1

#define HAVE_ALLOCA_H 1

#define HAVE_LONG_DOUBLE 1

#define HAVE_MEMCPY 1

#define HAVE_MMAP_ANON 1

#define HAVE_MMAP_FILE 1

#define SIZEOF_DOUBLE 8

#define SIZEOF_LONG_DOUBLE 16

#define STDC_HEADERS 1

#define NDEXTENT 50

#define NDFILE 25

#define MM_APPL 16

#define MM_CONSOLE 512

#define MM_ERROR 2

#define MM_FIRM 4

#define MM_HALT 1

#define MM_HARD 1

#define MM_INFO 4

#define MM_NOCON 2

#define MM_NOMSG 1

#define MM_NOSEV 0

#define MM_NOTOK 3

#define MM_NRECOV 8192

#define MM_NULLACT 0

#define MM_NULLLBL 0

#define MM_NULLMC 0

#define MM_NULLSEV 0

#define MM_NULLTAG 0

#define MM_NULLTXT 0

#define MM_OK 0

#define MM_OPSYS 64

#define MM_PRINT 256

#define MM_RECOVER 4096

#define MM_SOFT 2

#define MM_UTIL 32

#define MM_WARNING 3

#define FP_287 2

#define FP_387 3

#define FP_FXSR 4

#define FP_NO 0

#define FP_SOFT 1

#define FPC_DE 2

#define FPC_DM 2

#define FPC_IC 4096

#define FPC_IC_AFF 4096

#define FPC_IC_PROJ 0

#define FPC_IE 1

#define FPC_IM 1

#define FPC_OE 8

#define FPC_OM 8

#define FPC_PC 768

#define FPC_PC_24 0

#define FPC_PC_53 512

#define FPC_PC_64 768

#define FPC_PE 32

#define FPC_RC 3072

#define FPC_RC_CHOP 3072

#define FPC_RC_RD 1024

#define FPC_RC_RN 0

#define FPC_RC_RU 2048

#define FPC_UE 16

#define FPC_ZE 4

#define FPC_ZM 4

#define FPS_BUSY 32768

#define FPS_C0 256

#define FPS_C1 512

#define FPS_C2 1024

#define FPS_C3 16384

#define FPS_DE 2

#define FPS_ES 128

#define FPS_IE 1

#define FPS_OE 8

#define FPS_PE 32

#define FPS_SF 64

#define FPS_TOS 14336

#define FPS_TOS_SHIFT 11

#define FPS_UE 16

#define FPS_ZE 4

#define FP_TAG_EMPTY 3

#define FP_TAG_SPEC 2

#define FP_TAG_VALID 0

#define FP_TAG_ZERO 1

typedef union anon__struct_554_bitfield_1 anon__struct_554_bitfield_1, *Panon__struct_554_bitfield_1;

union anon__struct_554_bitfield_1 {
    ushort mant1:16; /* : bits 0-15 */
};

typedef union anon__struct_554_bitfield_2 anon__struct_554_bitfield_2, *Panon__struct_554_bitfield_2;

union anon__struct_554_bitfield_2 {
    ushort mant2:16; /* : bits 0-15 */
};

typedef union anon__struct_554_bitfield_3 anon__struct_554_bitfield_3, *Panon__struct_554_bitfield_3;

union anon__struct_554_bitfield_3 {
    ushort mant3:16; /* : bits 0-15 */
};

typedef union anon__struct_554_bitfield_4 anon__struct_554_bitfield_4, *Panon__struct_554_bitfield_4;

union anon__struct_554_bitfield_4 {
    ushort exp:15; /* : bits 0-14 */
    ushort sign:1; /* : bits 15 */
};

typedef union anon__struct_556_bitfield_1 anon__struct_556_bitfield_1, *Panon__struct_556_bitfield_1;

union anon__struct_556_bitfield_1 {
    ushort tag0:2; /* : bits 0-1 */
    ushort tag1:2; /* : bits 2-3 */
    ushort tag2:2; /* : bits 4-5 */
    ushort tag3:2; /* : bits 6-7 */
    ushort tag4:2; /* : bits 8-9 */
    ushort tag5:2; /* : bits 10-11 */
    ushort tag6:2; /* : bits 12-13 */
    ushort tag7:2; /* : bits 14-15 */
};

typedef union anon__struct_557_bitfield_1 anon__struct_557_bitfield_1, *Panon__struct_557_bitfield_1;

union anon__struct_557_bitfield_1 {
    ushort invalid:1; /* : bits 0 */
    ushort denorm:1; /* : bits 1 */
    ushort zdiv:1; /* : bits 2 */
    ushort ovrfl:1; /* : bits 3 */
    ushort undfl:1; /* : bits 4 */
    ushort precis:1; /* : bits 5 */
    ushort stkflt:1; /* : bits 6 */
    ushort errsumm:1; /* : bits 7 */
    ushort c0:1; /* : bits 8 */
    ushort c1:1; /* : bits 9 */
    ushort c2:1; /* : bits 10 */
    ushort tos:3; /* : bits 11-13 */
    ushort c3:1; /* : bits 14 */
    ushort busy:1; /* : bits 15 */
};

typedef union anon__struct_558_bitfield_1 anon__struct_558_bitfield_1, *Panon__struct_558_bitfield_1;

union anon__struct_558_bitfield_1 {
    ushort invalid:1; /* : bits 0 */
    ushort denorm:1; /* : bits 1 */
    ushort zdiv:1; /* : bits 2 */
    ushort ovrfl:1; /* : bits 3 */
    ushort undfl:1; /* : bits 4 */
    ushort precis:1; /* : bits 5 */
    ushort pc:2; /* : bits 6-7 */
    ushort rc:2; /* : bits 8-9 */
};

typedef struct fp_control fp_control, *Pfp_control;

struct fp_control {
    union anon__struct_558_bitfield_1 field_0x0;
};

typedef struct fp_control fp_control_t;

typedef struct fp_data_reg fp_data_reg, *Pfp_data_reg;

struct fp_data_reg {
    ushort mant;
    union anon__struct_554_bitfield_1 field_0x2;
    union anon__struct_554_bitfield_2 field_0x4;
    union anon__struct_554_bitfield_3 field_0x6;
    union anon__struct_554_bitfield_4 field_0x8;
};

typedef struct fp_data_reg fp_data_reg_t;

typedef struct fp_env fp_env, *Pfp_env;

typedef struct fp_status fp_status, *Pfp_status;

typedef struct fp_status fp_status_t;

typedef struct fp_tag fp_tag, *Pfp_tag;

typedef struct fp_tag fp_tag_t;

struct fp_tag {
    union anon__struct_556_bitfield_1 field_0x0;
};

struct fp_status {
    union anon__struct_557_bitfield_1 field_0x0;
};

struct fp_env {
    fp_control_t control;
    fp_status_t status;
    fp_tag_t tag;
    uint ip;
    sel_t cs;
    ushort opcode;
    uint dp;
    sel_t ds;
};

typedef struct fp_env fp_env_t;

typedef struct fp_stack fp_stack, *Pfp_stack;

struct fp_stack {
    fp_data_reg_t ST[8];
};

typedef struct fp_stack fp_stack_t;

typedef struct fp_state fp_state, *Pfp_state;

struct fp_state {
    fp_env_t fp_environ;
    fp_stack_t fp_stack;
};

typedef struct fp_state fp_state_t;

#define EFL_AC 262144

#define EFL_AF 16

#define EFL_CF 1

#define EFL_CLR 4294475816

#define EFL_DF 1024

#define EFL_IF 512

#define EFL_IOPL 12288

#define EFL_NT 16384

#define EFL_OF 2048

#define EFL_PF 4

#define EFL_RF 65536

#define EFL_SET 2

#define EFL_SF 128

#define EFL_TF 256

#define EFL_VM 131072

#define EFL_ZF 64

#define ERR_GDT 0

#define ERR_IDT 1

#define ERR_LDT 2

typedef union anon__struct_563_bitfield_1 anon__struct_563_bitfield_1, *Panon__struct_563_bitfield_1;

union anon__struct_563_bitfield_1 {
    uint ext:1; /* : bits 0 */
    uint tbl:2; /* : bits 1-2 */
    uint index:13; /* : bits 3-15 */
};

typedef union anon__struct_564_bitfield_1 anon__struct_564_bitfield_1, *Panon__struct_564_bitfield_1;

union anon__struct_564_bitfield_1 {
    uint prot:1; /* : bits 0 */
    uint wrtflt:1; /* : bits 1 */
    uint user:1; /* : bits 2 */
};

typedef union err_code err_code, *Perr_code;

typedef struct err_code_normal err_code_normal, *Perr_code_normal;

typedef struct err_code_pgfault err_code_pgfault, *Perr_code_pgfault;

struct err_code_pgfault {
    union anon__struct_564_bitfield_1 field_0x0;
};

struct err_code_normal {
    union anon__struct_563_bitfield_1 field_0x0;
};

union err_code {
    struct err_code_normal normal;
    struct err_code_pgfault pgfault;
};

typedef union err_code err_code_t;

typedef struct except_frame except_frame, *Pexcept_frame;

struct except_frame {
    err_code_t err;
    uint eip;
    sel_t cs;
    uint eflags;
    uint esp;
    sel_t ss;
    ushort v_es;
    ushort v_ds;
    ushort v_fs;
    ushort v_gs;
};

typedef struct except_frame except_frame_t;

typedef struct fstab fstab, *Pfstab;

struct fstab {
    char * fs_spec;
    char * fs_file;
    char * fs_vfstype;
    char * fs_mntops;
    char * fs_type;
    int fs_freq;
    int fs_passno;
};

#define FTS_AGAIN 1

#define FTS_COMFOLLOW 1

#define FTS_COMFOLLOWDIR 1024

#define FTS_D 1

#define FTS_DC 2

#define FTS_DEFAULT 3

#define FTS_DNR 4

#define FTS_DONTCHDIR 1

#define FTS_DOT 5

#define FTS_DP 6

#define FTS_ERR 7

#define FTS_F 8

#define FTS_FOLLOW 2

#define FTS_INIT 9

#define FTS_ISW 4

#define FTS_LOGICAL 2

#define FTS_NAMEONLY 256

#define FTS_NOCHDIR 4

#define FTS_NOINSTR 3

#define FTS_NOSTAT 8

#define FTS_NS 10

#define FTS_NSOK 11

#define FTS_OPTIONMASK 1279

#define FTS_PHYSICAL 16

#define FTS_ROOTLEVEL 0

#define FTS_ROOTPARENTLEVEL -1

#define FTS_SEEDOT 32

#define FTS_SKIP 4

#define FTS_SL 12

#define FTS_SLNONE 13

#define FTS_STOP 512

#define FTS_SYMFOLLOW 2

#define FTS_W 14

#define FTS_WHITEOUT 128

#define FTS_XDEV 64

typedef struct _ftsent _ftsent, *P_ftsent;

typedef struct stat stat, *Pstat;

struct stat {
    dev_t st_dev;
    mode_t st_mode;
    nlink_t st_nlink;
    __darwin_ino64_t st_ino;
    uid_t st_uid;
    gid_t st_gid;
    dev_t st_rdev;
    struct timespec st_atimespec;
    struct timespec st_mtimespec;
    struct timespec st_ctimespec;
    struct timespec st_birthtimespec;
    off_t st_size;
    blkcnt_t st_blocks;
    blksize_t st_blksize;
    __uint32_t st_flags;
    __uint32_t st_gen;
    __int32_t st_lspare;
    __int64_t st_qspare[2];
};

struct _ftsent {
    struct _ftsent * fts_cycle;
    struct _ftsent * fts_parent;
    struct _ftsent * fts_link;
    long fts_number;
    void * fts_pointer;
    char * fts_accpath;
    char * fts_path;
    int fts_errno;
    int fts_symfd;
    ushort fts_pathlen;
    ushort fts_namelen;
    ino_t fts_ino;
    dev_t fts_dev;
    nlink_t fts_nlink;
    short fts_level;
    ushort fts_info;
    ushort fts_flags;
    ushort fts_instr;
    struct stat * fts_statp;
    char fts_name[1];
};

typedef struct FTS FTS, *PFTS;

struct FTS {
    struct _ftsent * fts_cur;
    struct _ftsent * fts_child;
    struct _ftsent * * fts_array;
    dev_t fts_dev;
    char * fts_path;
    int fts_rfd;
    int fts_pathlen;
    int fts_nitems;
    int (* fts_compar)(void);
    int fts_options;
};

typedef struct _ftsent FTSENT;

#define FTW_CHDIR 8

#define FTW_D 1

#define FTW_DEPTH 4

#define FTW_DNR 2

#define FTW_DP 3

#define FTW_F 0

#define FTW_MOUNT 2

#define FTW_NS 4

#define FTW_PHYS 1

#define FTW_SL 5

#define FTW_SLN 6

typedef struct FTW FTW, *PFTW;

struct FTW {
    int base;
    int level;
};

#define GLOB_ABEND -2

#define GLOB_ABORTED -2

#define GLOB_ALTDIRFUNC 64

#define GLOB_APPEND 1

#define GLOB_BRACE 128

#define GLOB_DOOFFS 2

#define GLOB_ERR 4

#define GLOB_LIMIT 4096

#define GLOB_MAGCHAR 256

#define GLOB_MARK 8

#define GLOB_MAXPATH 4096

#define GLOB_NOCHECK 16

#define GLOB_NOESCAPE 8192

#define GLOB_NOMAGIC 512

#define GLOB_NOMATCH -3

#define GLOB_NOSORT 32

#define GLOB_NOSPACE -1

#define GLOB_NOSYS -4

#define GLOB_QUOTE 1024

#define GLOB_TILDE 2048

typedef struct dirent dirent, *Pdirent;

struct dirent {
    __uint64_t d_ino;
    __uint64_t d_seekoff;
    __uint16_t d_reclen;
    __uint16_t d_namlen;
    __uint8_t d_type;
    char d_name[1024];
};

typedef struct glob_t glob_t, *Pglob_t;

struct glob_t {
    size_t gl_pathc;
    int gl_matchc;
    size_t gl_offs;
    int gl_flags;
    char * * gl_pathv;
    int (* gl_errfunc)(char *, int);
    void (* gl_closedir)(void *);
    dirent * (* gl_readdir)(void *);
    void * (* gl_opendir)(char *);
    int (* gl_lstat)(char *, struct stat *);
    int (* gl_stat)(char *, struct stat *);
};

typedef struct _xmlGlobalState _xmlGlobalState, *P_xmlGlobalState;

typedef struct _xmlSAXLocator _xmlSAXLocator, *P_xmlSAXLocator;

typedef struct _xmlSAXLocator xmlSAXLocator;

typedef struct _xmlSAXHandlerV1 _xmlSAXHandlerV1, *P_xmlSAXHandlerV1;

typedef struct _xmlSAXHandlerV1 xmlSAXHandlerV1;

typedef void (* xmlFreeFunc)(void *);

typedef void * (* xmlMallocFunc)(size_t);

typedef char * (* xmlStrdupFunc)(char *);

typedef void * (* xmlReallocFunc)(void *, size_t);

typedef void (* xmlGenericErrorFunc)(void *, char *, ...);

typedef enum enum_1899 {
    XML_BUFFER_ALLOC_DOUBLEIT=0,
    XML_BUFFER_ALLOC_EXACT=1,
    XML_BUFFER_ALLOC_HYBRID=4,
    XML_BUFFER_ALLOC_IMMUTABLE=2,
    XML_BUFFER_ALLOC_IO=3
} enum_1899;

typedef enum enum_1899 xmlBufferAllocationScheme;

typedef void (* xmlRegisterNodeFunc)(xmlNodePtr);

typedef void (* xmlDeregisterNodeFunc)(xmlNodePtr);

typedef struct _xmlParserInputBuffer _xmlParserInputBuffer, *P_xmlParserInputBuffer;

typedef struct _xmlParserInputBuffer xmlParserInputBuffer;

typedef xmlParserInputBuffer * xmlParserInputBufferPtr;

typedef xmlParserInputBufferPtr (* xmlParserInputBufferCreateFilenameFunc)(char *, xmlCharEncoding);

typedef struct _xmlOutputBuffer _xmlOutputBuffer, *P_xmlOutputBuffer;

typedef struct _xmlOutputBuffer xmlOutputBuffer;

typedef xmlOutputBuffer * xmlOutputBufferPtr;

typedef xmlOutputBufferPtr (* xmlOutputBufferCreateFilenameFunc)(char *, xmlCharEncodingHandlerPtr, int);

typedef void (* internalSubsetSAXFunc)(void *, xmlChar *, xmlChar *, xmlChar *);

typedef int (* isStandaloneSAXFunc)(void *);

typedef int (* hasInternalSubsetSAXFunc)(void *);

typedef int (* hasExternalSubsetSAXFunc)(void *);

typedef struct _xmlParserInput _xmlParserInput, *P_xmlParserInput;

typedef struct _xmlParserInput xmlParserInput;

typedef xmlParserInput * xmlParserInputPtr;

typedef xmlParserInputPtr (* resolveEntitySAXFunc)(void *, xmlChar *, xmlChar *);

typedef struct _xmlEntity _xmlEntity, *P_xmlEntity;

typedef struct _xmlEntity xmlEntity;

typedef xmlEntity * xmlEntityPtr;

typedef xmlEntityPtr (* getEntitySAXFunc)(void *, xmlChar *);

typedef void (* entityDeclSAXFunc)(void *, xmlChar *, int, xmlChar *, xmlChar *, xmlChar *);

typedef void (* notationDeclSAXFunc)(void *, xmlChar *, xmlChar *, xmlChar *);

typedef struct _xmlEnumeration _xmlEnumeration, *P_xmlEnumeration;

typedef struct _xmlEnumeration xmlEnumeration;

typedef xmlEnumeration * xmlEnumerationPtr;

typedef void (* attributeDeclSAXFunc)(void *, xmlChar *, xmlChar *, int, int, xmlChar *, xmlEnumerationPtr);

typedef struct _xmlElementContent _xmlElementContent, *P_xmlElementContent;

typedef struct _xmlElementContent xmlElementContent;

typedef xmlElementContent * xmlElementContentPtr;

typedef void (* elementDeclSAXFunc)(void *, xmlChar *, int, xmlElementContentPtr);

typedef void (* unparsedEntityDeclSAXFunc)(void *, xmlChar *, xmlChar *, xmlChar *, xmlChar *);

typedef xmlSAXLocator * xmlSAXLocatorPtr;

typedef void (* setDocumentLocatorSAXFunc)(void *, xmlSAXLocatorPtr);

typedef void (* startDocumentSAXFunc)(void *);

typedef void (* endDocumentSAXFunc)(void *);

typedef void (* startElementSAXFunc)(void *, xmlChar *, xmlChar * *);

typedef void (* endElementSAXFunc)(void *, xmlChar *);

typedef void (* referenceSAXFunc)(void *, xmlChar *);

typedef void (* charactersSAXFunc)(void *, xmlChar *, int);

typedef void (* ignorableWhitespaceSAXFunc)(void *, xmlChar *, int);

typedef void (* processingInstructionSAXFunc)(void *, xmlChar *, xmlChar *);

typedef void (* commentSAXFunc)(void *, xmlChar *);

typedef void (* warningSAXFunc)(void *, char *, ...);

typedef void (* errorSAXFunc)(void *, char *, ...);

typedef void (* fatalErrorSAXFunc)(void *, char *, ...);

typedef xmlEntityPtr (* getParameterEntitySAXFunc)(void *, xmlChar *);

typedef void (* cdataBlockSAXFunc)(void *, xmlChar *, int);

typedef void (* externalSubsetSAXFunc)(void *, xmlChar *, xmlChar *, xmlChar *);

typedef int (* xmlInputReadCallback)(void *, char *, int);

typedef int (* xmlInputCloseCallback)(void *);

typedef struct _xmlBuf _xmlBuf, *P_xmlBuf;

typedef struct _xmlBuf xmlBuf;

typedef xmlBuf * xmlBufPtr;

typedef int (* xmlOutputWriteCallback)(void *, char *, int);

typedef int (* xmlOutputCloseCallback)(void *);

typedef void (* xmlParserInputDeallocate)(xmlChar *);

typedef enum enum_1920 {
    XML_ELEMENT_CONTENT_ELEMENT=2,
    XML_ELEMENT_CONTENT_OR=4,
    XML_ELEMENT_CONTENT_PCDATA=1,
    XML_ELEMENT_CONTENT_SEQ=3
} enum_1920;

typedef enum enum_1920 xmlElementContentType;

typedef enum enum_1921 {
    XML_ELEMENT_CONTENT_MULT=3,
    XML_ELEMENT_CONTENT_ONCE=1,
    XML_ELEMENT_CONTENT_OPT=2,
    XML_ELEMENT_CONTENT_PLUS=4
} enum_1921;

typedef enum enum_1921 xmlElementContentOccur;

struct _xmlSAXLocator {
    xmlChar * (* getPublicId)(void *);
    xmlChar * (* getSystemId)(void *);
    int (* getLineNumber)(void *);
    int (* getColumnNumber)(void *);
};

struct _xmlSAXHandlerV1 {
    internalSubsetSAXFunc internalSubset;
    isStandaloneSAXFunc isStandalone;
    hasInternalSubsetSAXFunc hasInternalSubset;
    hasExternalSubsetSAXFunc hasExternalSubset;
    resolveEntitySAXFunc resolveEntity;
    getEntitySAXFunc getEntity;
    entityDeclSAXFunc entityDecl;
    notationDeclSAXFunc notationDecl;
    attributeDeclSAXFunc attributeDecl;
    elementDeclSAXFunc elementDecl;
    unparsedEntityDeclSAXFunc unparsedEntityDecl;
    setDocumentLocatorSAXFunc setDocumentLocator;
    startDocumentSAXFunc startDocument;
    endDocumentSAXFunc endDocument;
    startElementSAXFunc startElement;
    endElementSAXFunc endElement;
    referenceSAXFunc reference;
    charactersSAXFunc characters;
    ignorableWhitespaceSAXFunc ignorableWhitespace;
    processingInstructionSAXFunc processingInstruction;
    commentSAXFunc comment;
    warningSAXFunc warning;
    errorSAXFunc error;
    fatalErrorSAXFunc fatalError;
    getParameterEntitySAXFunc getParameterEntity;
    cdataBlockSAXFunc cdataBlock;
    externalSubsetSAXFunc externalSubset;
    uint initialized;
};

struct _xmlGlobalState {
    char * xmlParserVersion;
    xmlSAXLocator xmlDefaultSAXLocator;
    xmlSAXHandlerV1 xmlDefaultSAXHandler;
    xmlSAXHandlerV1 docbDefaultSAXHandler;
    xmlSAXHandlerV1 htmlDefaultSAXHandler;
    xmlFreeFunc xmlFree;
    xmlMallocFunc xmlMalloc;
    xmlStrdupFunc xmlMemStrdup;
    xmlReallocFunc xmlRealloc;
    xmlGenericErrorFunc xmlGenericError;
    xmlStructuredErrorFunc xmlStructuredError;
    void * xmlGenericErrorContext;
    int oldXMLWDcompatibility;
    xmlBufferAllocationScheme xmlBufferAllocScheme;
    int xmlDefaultBufferSize;
    int xmlSubstituteEntitiesDefaultValue;
    int xmlDoValidityCheckingDefaultValue;
    int xmlGetWarningsDefaultValue;
    int xmlKeepBlanksDefaultValue;
    int xmlLineNumbersDefaultValue;
    int xmlLoadExtDtdDefaultValue;
    int xmlParserDebugEntities;
    int xmlPedanticParserDefaultValue;
    int xmlSaveNoEmptyTags;
    int xmlIndentTreeOutput;
    char * xmlTreeIndentString;
    xmlRegisterNodeFunc xmlRegisterNodeDefaultValue;
    xmlDeregisterNodeFunc xmlDeregisterNodeDefaultValue;
    xmlMallocFunc xmlMallocAtomic;
    xmlError xmlLastError;
    xmlParserInputBufferCreateFilenameFunc xmlParserInputBufferCreateFilenameValue;
    xmlOutputBufferCreateFilenameFunc xmlOutputBufferCreateFilenameValue;
    void * xmlStructuredErrorContext;
};

struct _xmlEntity {
    void * _private;
    xmlElementType type;
    xmlChar * name;
    struct _xmlNode * children;
    struct _xmlNode * last;
    struct _xmlDtd * parent;
    struct _xmlNode * next;
    struct _xmlNode * prev;
    struct _xmlDoc * doc;
    xmlChar * orig;
    xmlChar * content;
    int length;
    xmlEntityType etype;
    xmlChar * ExternalID;
    xmlChar * SystemID;
    struct _xmlEntity * nexte;
    xmlChar * URI;
    int owner;
    int checked;
};

struct _xmlOutputBuffer {
    void * context;
    xmlOutputWriteCallback writecallback;
    xmlOutputCloseCallback closecallback;
    xmlCharEncodingHandlerPtr encoder;
    xmlBufPtr buffer;
    xmlBufPtr conv;
    int written;
    int error;
};

struct _xmlEnumeration {
    struct _xmlEnumeration * next;
    xmlChar * name;
};

struct _xmlParserInput {
    xmlParserInputBufferPtr buf;
    char * filename;
    char * directory;
    xmlChar * base;
    xmlChar * cur;
    xmlChar * end;
    int length;
    int line;
    int col;
    ulong consumed;
    xmlParserInputDeallocate free;
    xmlChar * encoding;
    xmlChar * version;
    int standalone;
    int id;
};

struct _xmlElementContent {
    xmlElementContentType type;
    xmlElementContentOccur ocur;
    xmlChar * name;
    struct _xmlElementContent * c1;
    struct _xmlElementContent * c2;
    struct _xmlElementContent * parent;
    xmlChar * prefix;
};

struct _xmlParserInputBuffer {
    void * context;
    xmlInputReadCallback readcallback;
    xmlInputCloseCallback closecallback;
    xmlCharEncodingHandlerPtr encoder;
    xmlBufPtr buffer;
    xmlBufPtr raw;
    int compressed;
    int error;
    ulong rawconsumed;
};

struct _xmlBuf {
};

typedef struct _xmlGlobalState xmlGlobalState;

typedef xmlGlobalState * xmlGlobalStatePtr;

#define ARCDENSITY 2

#define GMON_MAGIC 3203381950

#define GMON_MAGIC_64 3203381951

#define GMON_PROF_BUSY 1

#define GMON_PROF_ERROR 2

#define GMON_PROF_OFF 3

#define GMON_PROF_ON 0

#define GMONTYPE_ARCS_ORDERS 3

#define GMONTYPE_DYLD2_STATE 5

#define GMONTYPE_DYLD_STATE 4

#define GMONTYPE_RAWARCS 2

#define GMONTYPE_SAMPLES 1

#define GMONVERSION 333945

#define GPROF_COUNT 1

#define GPROF_FROMS 2

#define GPROF_GMONPARAM 4

#define GPROF_STATE 0

#define GPROF_TOS 3

#define HASHFRACTION 2

#define HISTFRACTION 2

#define MINARCS 50

typedef struct gmon_data gmon_data, *Pgmon_data;

struct gmon_data {
    uint32_t type;
    uint32_t size;
};

typedef struct gmon_data gmon_data_t;

typedef struct gmonhdr gmonhdr, *Pgmonhdr;

struct gmonhdr {
    uint32_t lpc;
    uint32_t hpc;
    uint32_t ncnt;
    int32_t version;
    int32_t profrate;
    int32_t spare[3];
};

typedef struct gmonhdr_64 gmonhdr_64, *Pgmonhdr_64;

struct gmonhdr_64 {
    uint64_t lpc;
    uint64_t hpc;
    uint32_t ncnt;
    int32_t version;
    int32_t profrate;
    int32_t spare[3];
};

typedef struct gmonhdr_64 gmonhdr_t;

typedef struct gmonparam gmonparam, *Pgmonparam;

typedef ulong u_long;

typedef struct tostruct_64 tostruct_64, *Ptostruct_64;

typedef struct tostruct_64 tostruct_t;

struct gmonparam {
    int state;
    u_short * kcount;
    u_long kcountsize;
    u_short * froms;
    u_long fromssize;
    tostruct_t * tos;
    u_long tossize;
    long tolimit;
    u_long lowpc;
    u_long highpc;
    u_long textsize;
    u_long hashfraction;
};

struct tostruct_64 {
    uint64_t selfpc;
    int32_t count;
    uint16_t link;
    uint16_t order;
};

typedef struct rawarc rawarc, *Prawarc;

struct rawarc {
    uint32_t raw_frompc;
    uint32_t raw_selfpc;
    int32_t raw_count;
};

typedef struct rawarc_64 rawarc_64, *Prawarc_64;

struct rawarc_64 {
    uint64_t raw_frompc;
    uint64_t raw_selfpc;
    int32_t raw_count;
};

typedef struct rawarc_order rawarc_order, *Prawarc_order;

struct rawarc_order {
    uint32_t raw_frompc;
    uint32_t raw_selfpc;
    uint32_t raw_count;
    uint32_t raw_order;
};

typedef struct rawarc_order_64 rawarc_order_64, *Prawarc_order_64;

struct rawarc_order_64 {
    uint64_t raw_frompc;
    uint64_t raw_selfpc;
    uint32_t raw_count;
    uint32_t raw_order;
};

typedef struct rawarc_order_64 rawarc_order_t;

typedef struct rawarc_64 rawarc_t;

typedef struct tostruct tostruct, *Ptostruct;

struct tostruct {
    uint32_t selfpc;
    int32_t count;
    uint16_t link;
    uint16_t order;
};

typedef struct dispatch_group_s dispatch_group_s, *Pdispatch_group_s;

typedef struct dispatch_group_s * dispatch_group_t;

struct dispatch_group_s {
};

#define GSS_C_ACCEPT 2

#define GSS_C_AF_APPLETALK 16

#define GSS_C_AF_BSC 17

#define GSS_C_AF_CCITT 10

#define GSS_C_AF_CHAOS 5

#define GSS_C_AF_DATAKIT 9

#define GSS_C_AF_DECnet 12

#define GSS_C_AF_DLI 13

#define GSS_C_AF_DSS 18

#define GSS_C_AF_ECMA 8

#define GSS_C_AF_HYLINK 15

#define GSS_C_AF_IMPLINK 3

#define GSS_C_AF_INET 2

#define GSS_C_AF_LAT 14

#define GSS_C_AF_LOCAL 1

#define GSS_C_AF_NBS 7

#define GSS_C_AF_NS 6

#define GSS_C_AF_NULLADDR 255

#define GSS_C_AF_OSI 19

#define GSS_C_AF_PUP 4

#define GSS_C_AF_SNA 11

#define GSS_C_AF_UNSPEC 0

#define GSS_C_AF_X25 21

#define GSS_C_ANON_FLAG 64

#define GSS_C_BOTH 0

#define GSS_C_CALLING_ERROR_OFFSET 24

#define GSS_C_CONF_FLAG 16

#define GSS_C_CRED_NO_UI 65536

#define GSS_C_DELEG_FLAG 1

#define GSS_C_DELEG_POLICY_FLAG 32768

#define GSS_C_GSS_CODE 1

#define GSS_C_INITIATE 1

#define GSS_C_INTEG_FLAG 32

#define GSS_C_MECH_CODE 2

#define GSS_C_MUTUAL_FLAG 2

#define GSS_C_NO_BUFFER 0

#define GSS_C_NO_CHANNEL_BINDINGS 0

#define GSS_C_NO_CONTEXT 0

#define GSS_C_NO_CREDENTIAL 0

#define GSS_C_NO_NAME 0

#define GSS_C_NO_OID 0

#define GSS_C_NO_OID_SET 0

#define GSS_C_NO_UI_FLAG 2147483648

#define GSS_C_NULL_OID 0

#define GSS_C_NULL_OID_SET 0

#define GSS_C_OPTION_MASK 65535

#define GSS_C_PROT_READY_FLAG 128

#define GSS_C_QOP_DEFAULT 0

#define GSS_C_REPLAY_FLAG 4

#define GSS_C_ROUTINE_ERROR_OFFSET 16

#define GSS_C_SEQUENCE_FLAG 8

#define GSS_C_SUPPLEMENTARY_OFFSET 0

#define GSS_C_TRANS_FLAG 256

#define GSS_S_COMPLETE 0

#define GSS_S_CONTINUE_NEEDED 1

#define GSS_S_DUPLICATE_TOKEN 2

#define GSS_S_GAP_TOKEN 16

#define GSS_S_OLD_TOKEN 4

#define GSS_S_UNSEQ_TOKEN 8

typedef struct gss_buffer_desc_struct gss_buffer_desc_struct, *Pgss_buffer_desc_struct;

typedef struct gss_buffer_desc_struct gss_buffer_desc;

struct gss_buffer_desc_struct {
    size_t length;
    void * value;
};

typedef struct gss_buffer_desc_struct * gss_buffer_t;

typedef struct gss_channel_bindings_struct gss_channel_bindings_struct, *Pgss_channel_bindings_struct;

typedef uint32_t gss_uint32;

typedef gss_uint32 OM_uint32;

struct gss_channel_bindings_struct {
    OM_uint32 initiator_addrtype;
    gss_buffer_desc initiator_address;
    OM_uint32 acceptor_addrtype;
    gss_buffer_desc acceptor_address;
    gss_buffer_desc application_data;
};

typedef struct gss_channel_bindings_struct * gss_channel_bindings_t;

typedef struct gss_cred_id_struct gss_cred_id_struct, *Pgss_cred_id_struct;

struct gss_cred_id_struct {
};

typedef struct gss_cred_id_struct * gss_cred_id_t;

typedef int gss_cred_usage_t;

typedef struct gss_ctx_id_struct gss_ctx_id_struct, *Pgss_ctx_id_struct;

struct gss_ctx_id_struct {
};

typedef struct gss_ctx_id_struct * gss_ctx_id_t;

typedef int32_t gss_int32;

typedef struct gss_name_struct gss_name_struct, *Pgss_name_struct;

struct gss_name_struct {
};

typedef struct gss_name_struct * gss_name_t;

typedef struct gss_OID_desc_struct gss_OID_desc_struct, *Pgss_OID_desc_struct;

typedef struct gss_OID_desc_struct * gss_OID;

struct gss_OID_desc_struct {
    OM_uint32 length;
    void * elements;
};

typedef struct gss_OID_desc_struct gss_OID_desc;

typedef struct gss_OID_set_desc_struct gss_OID_set_desc_struct, *Pgss_OID_set_desc_struct;

typedef struct gss_OID_set_desc_struct * gss_OID_set;

struct gss_OID_set_desc_struct {
    size_t count;
    gss_OID elements;
};

typedef struct gss_OID_set_desc_struct gss_OID_set_desc;

typedef OM_uint32 gss_qop_t;

#define GSS_KRB5_UI_ALLOW 1

#define GSS_KRB5_UI_DENY 2

#define GSS_KRB5_UI_PROBE 3

typedef struct apple_gss_krb5_authdata_if_relevant_key apple_gss_krb5_authdata_if_relevant_key, *Papple_gss_krb5_authdata_if_relevant_key;

typedef struct apple_gss_krb5_authdata_if_relevant_key apple_gss_krb5_authdata_if_relevant;

struct apple_gss_krb5_authdata_if_relevant_key {
    OM_uint32 type;
    OM_uint32 length;
    void * data;
};

typedef struct gss_krb5_cfx_keydata gss_krb5_cfx_keydata, *Pgss_krb5_cfx_keydata;

typedef struct gss_krb5_lucid_key gss_krb5_lucid_key, *Pgss_krb5_lucid_key;

typedef struct gss_krb5_lucid_key gss_krb5_lucid_key_t;

struct gss_krb5_lucid_key {
    OM_uint32 type;
    OM_uint32 length;
    void * data;
};

struct gss_krb5_cfx_keydata {
    OM_uint32 have_acceptor_subkey;
    gss_krb5_lucid_key_t ctx_key;
    gss_krb5_lucid_key_t acceptor_subkey;
};

typedef struct gss_krb5_cfx_keydata gss_krb5_cfx_keydata_t;

typedef struct gss_krb5_lucid_context_v1 gss_krb5_lucid_context_v1, *Pgss_krb5_lucid_context_v1;

typedef uint64_t gss_uint64;

typedef struct gss_krb5_rfc1964_keydata gss_krb5_rfc1964_keydata, *Pgss_krb5_rfc1964_keydata;

typedef struct gss_krb5_rfc1964_keydata gss_krb5_rfc1964_keydata_t;

struct gss_krb5_rfc1964_keydata {
    OM_uint32 sign_alg;
    OM_uint32 seal_alg;
    gss_krb5_lucid_key_t ctx_key;
};

struct gss_krb5_lucid_context_v1 {
    OM_uint32 version;
    OM_uint32 initiate;
    OM_uint32 endtime;
    gss_uint64 send_seq;
    gss_uint64 recv_seq;
    OM_uint32 protocol;
    gss_krb5_rfc1964_keydata_t rfc1964_kd;
    gss_krb5_cfx_keydata_t cfx_kd;
};

typedef struct gss_krb5_lucid_context_v1 gss_krb5_lucid_context_v1_t;

typedef struct gss_krb5_lucid_context_version gss_krb5_lucid_context_version, *Pgss_krb5_lucid_context_version;

struct gss_krb5_lucid_context_version {
    OM_uint32 version;
};

typedef struct gss_krb5_lucid_context_version gss_krb5_lucid_context_version_t;

typedef void * (* xmlHashCopier)(void *, xmlChar *);

typedef void (* xmlHashDeallocator)(void *, xmlChar *);

typedef void (* xmlHashScanner)(void *, void *, xmlChar *);

typedef void (* xmlHashScannerFull)(void *, void *, xmlChar *, xmlChar *, xmlChar *);

typedef struct hash_info_bucket hash_info_bucket, *Phash_info_bucket;

struct hash_info_bucket {
    natural_t hib_count;
};

typedef struct hash_info_bucket hash_info_bucket_t;

typedef hash_info_bucket_t * hash_info_bucket_array_t;

#define CC_ARGHACK 3

#define CC_CURSOR 5

#define CC_EOF 2

#define CC_ERROR 6

#define CC_FATAL 7

#define CC_NEWLINE 1

#define CC_NORM 0

#define CC_REDISPLAY 8

#define CC_REFRESH 4

#define CC_REFRESH_BEEP 9

#define EL_ADDFN 9

#define EL_BIND 4

#define EL_BUILTIN_GETCFN 0

#define EL_CLIENTDATA 14

#define EL_ECHOTC 7

#define EL_EDITMODE 11

#define EL_EDITOR 2

#define EL_GETCFN 13

#define EL_GETFP 18

#define EL_GETTC 17

#define EL_HIST 10

#define EL_PREP_TERM 16

#define EL_PROMPT 0

#define EL_PROMPT_ESC 21

#define EL_REFRESH 20

#define EL_RESIZE 23

#define EL_RPROMPT 12

#define EL_RPROMPT_ESC 22

#define EL_SETFP 19

#define EL_SETTC 6

#define EL_SETTY 8

#define EL_SIGNAL 3

#define EL_TELLTC 5

#define EL_TERMINAL 1

#define EL_UNBUFFERED 15

#define H_ADD 9

#define H_APPEND 11

#define H_CLEAR 19

#define H_CURR 8

#define H_DEL 22

#define H_DELDATA 24

#define H_END 12

#define H_ENTER 10

#define H_FIRST 3

#define H_FUNC 0

#define H_GETSIZE 2

#define H_GETUNIQUE 21

#define H_LAST 4

#define H_LOAD 17

#define H_NEXT 6

#define H_NEXT_EVDATA 23

#define H_NEXT_EVENT 15

#define H_NEXT_STR 13

#define H_PREV 5

#define H_PREV_EVENT 16

#define H_PREV_STR 14

#define H_REPLACE 25

#define H_SAVE 18

#define H_SET 7

#define H_SETSIZE 1

#define H_SETUNIQUE 20

#define LIBEDIT_MAJOR 2

#define LIBEDIT_MINOR 11

typedef struct editline editline, *Peditline;

typedef struct editline EditLine;

struct editline {
};

typedef struct HistEvent HistEvent, *PHistEvent;

struct HistEvent {
    int num;
    char * str;
};

typedef struct histeventW histeventW, *PhisteventW;

typedef int    wchar_t;
struct histeventW {
    int num;
    wchar_t * str;
};

typedef struct histeventW HistEventW;

typedef struct history history, *Phistory;

typedef struct history History;

struct history {
};

typedef struct historyW historyW, *PhistoryW;

typedef struct historyW HistoryW;

struct historyW {
};

typedef struct lineinfo lineinfo, *Plineinfo;

struct lineinfo {
    char * buffer;
    char * cursor;
    char * lastchar;
};

typedef struct lineinfo LineInfo;

typedef struct lineinfow lineinfow, *Plineinfow;

typedef struct lineinfow LineInfoW;

struct lineinfow {
    wchar_t * buffer;
    wchar_t * cursor;
    wchar_t * lastchar;
};

typedef struct tokenizer tokenizer, *Ptokenizer;

typedef struct tokenizer Tokenizer;

struct tokenizer {
};

typedef struct tokenizerW tokenizerW, *PtokenizerW;

typedef struct tokenizerW TokenizerW;

struct tokenizerW {
};

#define HOST_BASIC_INFO 1

#define HOST_CPU_LOAD_INFO 3

#define HOST_EXPIRED_TASK_INFO 6

#define HOST_EXTMOD_INFO64 5

#define HOST_INFO_MAX 1024

#define HOST_LOAD_INFO 1

#define HOST_MACH_MSG_TRAP 8

#define HOST_PRIORITY_INFO 5

#define HOST_RESOURCE_SIZES 4

#define HOST_SCHED_INFO 3

#define HOST_SEMAPHORE_TRAPS 7

#define HOST_VM_INFO 2

#define HOST_VM_INFO64 4

#define HOST_VM_PURGABLE 9

#define KERNEL_BOOT_INFO_MAX 4096

#define KERNEL_VERSION_MAX 512

typedef struct host_basic_info host_basic_info, *Phost_basic_info;

typedef integer_t cpu_threadtype_t;

struct host_basic_info {
    integer_t max_cpus;
    integer_t avail_cpus;
    natural_t memory_size;
    cpu_type_t cpu_type;
    cpu_subtype_t cpu_subtype;
    cpu_threadtype_t cpu_threadtype;
    integer_t physical_cpu;
    integer_t physical_cpu_max;
    integer_t logical_cpu;
    integer_t logical_cpu_max;
    uint64_t max_mem;
};

typedef struct host_basic_info host_basic_info_data_t;

typedef struct host_basic_info * host_basic_info_t;

typedef struct host_cpu_load_info host_cpu_load_info, *Phost_cpu_load_info;

struct host_cpu_load_info {
    natural_t cpu_ticks[4];
};

typedef struct host_cpu_load_info host_cpu_load_info_data_t;

typedef struct host_cpu_load_info * host_cpu_load_info_t;

typedef integer_t host_flavor_t;

typedef integer_t * host_info64_t;

typedef integer_t host_info_data_t[1024];

typedef integer_t * host_info_t;

typedef struct host_load_info host_load_info, *Phost_load_info;

struct host_load_info {
    integer_t avenrun[3];
    integer_t mach_factor[3];
};

typedef struct host_load_info host_load_info_data_t;

typedef struct host_load_info * host_load_info_t;

typedef struct host_priority_info host_priority_info, *Phost_priority_info;

struct host_priority_info {
    integer_t kernel_priority;
    integer_t system_priority;
    integer_t server_priority;
    integer_t user_priority;
    integer_t depress_priority;
    integer_t idle_priority;
    integer_t minimum_priority;
    integer_t maximum_priority;
};

typedef struct host_priority_info host_priority_info_data_t;

typedef struct host_priority_info * host_priority_info_t;

typedef struct vm_purgeable_info vm_purgeable_info, *Pvm_purgeable_info;

typedef struct vm_purgeable_info host_purgable_info_data_t;

typedef struct vm_purgeable_stat vm_purgeable_stat, *Pvm_purgeable_stat;

typedef struct vm_purgeable_stat vm_purgeable_stat_t;

struct vm_purgeable_stat {
    uint64_t count;
    uint64_t size;
};

struct vm_purgeable_info {
    vm_purgeable_stat_t fifo_data[8];
    vm_purgeable_stat_t obsolete_data;
    vm_purgeable_stat_t lifo_data[8];
};

typedef struct vm_purgeable_info * host_purgable_info_t;

typedef struct host_sched_info host_sched_info, *Phost_sched_info;

struct host_sched_info {
    integer_t min_timeout;
    integer_t min_quantum;
};

typedef struct host_sched_info host_sched_info_data_t;

typedef struct host_sched_info * host_sched_info_t;

typedef char kernel_boot_info_t[4096];

typedef struct kernel_resource_sizes kernel_resource_sizes, *Pkernel_resource_sizes;

struct kernel_resource_sizes {
    natural_t task;
    natural_t thread;
    natural_t port;
    natural_t memory_region;
    natural_t memory_object;
};

typedef struct kernel_resource_sizes kernel_resource_sizes_data_t;

typedef struct kernel_resource_sizes * kernel_resource_sizes_t;

typedef char kernel_version_t[512];

#define HOST_CALENDAR_CHANGED_REPLYID 950

#define HOST_NOTIFY_CALENDAR_CHANGE 0

#define HOST_NOTIFY_TYPE_MAX 0

#define host_priv_MSG_COUNT 26

typedef struct __Reply__get_dp_control_port_t __Reply__get_dp_control_port_t, *P__Reply__get_dp_control_port_t;

struct __Reply__get_dp_control_port_t {
    struct mach_msg_header_t Head;
    struct mach_msg_body_t msgh_body;
    struct mach_msg_port_descriptor_t contorl_port;
};

typedef struct __Reply__host_default_memory_manager_t __Reply__host_default_memory_manager_t, *P__Reply__host_default_memory_manager_t;

struct __Reply__host_default_memory_manager_t {
    struct mach_msg_header_t Head;
    struct mach_msg_body_t msgh_body;
    struct mach_msg_port_descriptor_t default_manager;
};

typedef struct __Reply__host_get_boot_info_t __Reply__host_get_boot_info_t, *P__Reply__host_get_boot_info_t;

struct __Reply__host_get_boot_info_t {
    struct mach_msg_header_t Head;
    struct NDR_record_t NDR;
    kern_return_t RetCode;
    mach_msg_type_number_t boot_infoOffset;
    mach_msg_type_number_t boot_infoCnt;
    char boot_info[4096];
};

typedef struct __Reply__host_get_clock_control_t __Reply__host_get_clock_control_t, *P__Reply__host_get_clock_control_t;

struct __Reply__host_get_clock_control_t {
    struct mach_msg_header_t Head;
    struct mach_msg_body_t msgh_body;
    struct mach_msg_port_descriptor_t clock_ctrl;
};

typedef struct __Reply__host_get_exception_ports_t __Reply__host_get_exception_ports_t, *P__Reply__host_get_exception_ports_t;

struct __Reply__host_get_exception_ports_t {
    struct mach_msg_header_t Head;
    struct mach_msg_body_t msgh_body;
    struct mach_msg_port_descriptor_t old_handlers[32];
    struct NDR_record_t NDR;
    mach_msg_type_number_t masksCnt;
    exception_mask_t masks[32];
    exception_behavior_t old_behaviors[32];
    thread_state_flavor_t old_flavors[32];
};

typedef struct __Reply__host_get_special_port_t __Reply__host_get_special_port_t, *P__Reply__host_get_special_port_t;

struct __Reply__host_get_special_port_t {
    struct mach_msg_header_t Head;
    struct mach_msg_body_t msgh_body;
    struct mach_msg_port_descriptor_t port;
};

typedef struct __Reply__host_get_UNDServer_t __Reply__host_get_UNDServer_t, *P__Reply__host_get_UNDServer_t;

struct __Reply__host_get_UNDServer_t {
    struct mach_msg_header_t Head;
    struct mach_msg_body_t msgh_body;
    struct mach_msg_port_descriptor_t server;
};

typedef struct __Reply__host_priv_statistics_t __Reply__host_priv_statistics_t, *P__Reply__host_priv_statistics_t;

struct __Reply__host_priv_statistics_t {
    struct mach_msg_header_t Head;
    struct NDR_record_t NDR;
    kern_return_t RetCode;
    mach_msg_type_number_t host_info_outCnt;
    integer_t host_info_out[68];
};

typedef struct __Reply__host_processor_set_priv_t __Reply__host_processor_set_priv_t, *P__Reply__host_processor_set_priv_t;

struct __Reply__host_processor_set_priv_t {
    struct mach_msg_header_t Head;
    struct mach_msg_body_t msgh_body;
    struct mach_msg_port_descriptor_t set;
};

typedef struct __Reply__host_processor_sets_t __Reply__host_processor_sets_t, *P__Reply__host_processor_sets_t;

struct __Reply__host_processor_sets_t {
    struct mach_msg_header_t Head;
    struct mach_msg_body_t msgh_body;
    struct mach_msg_ool_ports_descriptor_t processor_sets;
    struct NDR_record_t NDR;
    mach_msg_type_number_t processor_setsCnt;
};

typedef struct __Reply__host_processors_t __Reply__host_processors_t, *P__Reply__host_processors_t;

struct __Reply__host_processors_t {
    struct mach_msg_header_t Head;
    struct mach_msg_body_t msgh_body;
    struct mach_msg_ool_ports_descriptor_t out_processor_list;
    struct NDR_record_t NDR;
    mach_msg_type_number_t out_processor_listCnt;
};

typedef struct __Reply__host_reboot_t __Reply__host_reboot_t, *P__Reply__host_reboot_t;

struct __Reply__host_reboot_t {
    struct mach_msg_header_t Head;
    struct NDR_record_t NDR;
    kern_return_t RetCode;
};

typedef struct __Reply__host_set_exception_ports_t __Reply__host_set_exception_ports_t, *P__Reply__host_set_exception_ports_t;

struct __Reply__host_set_exception_ports_t {
    struct mach_msg_header_t Head;
    struct NDR_record_t NDR;
    kern_return_t RetCode;
};

typedef struct __Reply__host_set_special_port_t __Reply__host_set_special_port_t, *P__Reply__host_set_special_port_t;

struct __Reply__host_set_special_port_t {
    struct mach_msg_header_t Head;
    struct NDR_record_t NDR;
    kern_return_t RetCode;
};

typedef struct __Reply__host_set_UNDServer_t __Reply__host_set_UNDServer_t, *P__Reply__host_set_UNDServer_t;

struct __Reply__host_set_UNDServer_t {
    struct mach_msg_header_t Head;
    struct NDR_record_t NDR;
    kern_return_t RetCode;
};

typedef struct __Reply__host_swap_exception_ports_t __Reply__host_swap_exception_ports_t, *P__Reply__host_swap_exception_ports_t;

struct __Reply__host_swap_exception_ports_t {
    struct mach_msg_header_t Head;
    struct mach_msg_body_t msgh_body;
    struct mach_msg_port_descriptor_t old_handlerss[32];
    struct NDR_record_t NDR;
    mach_msg_type_number_t masksCnt;
    exception_mask_t masks[32];
    exception_behavior_t old_behaviors[32];
    thread_state_flavor_t old_flavors[32];
};

typedef struct __Reply__kext_request_t __Reply__kext_request_t, *P__Reply__kext_request_t;

struct __Reply__kext_request_t {
    struct mach_msg_header_t Head;
    struct mach_msg_body_t msgh_body;
    struct mach_msg_ool_descriptor_t response_data;
    struct mach_msg_ool_descriptor_t log_data;
    struct NDR_record_t NDR;
    mach_msg_type_number_t response_dataCnt;
    mach_msg_type_number_t log_dataCnt;
    kern_return_t op_result;
};

typedef struct __Reply__kmod_control_t __Reply__kmod_control_t, *P__Reply__kmod_control_t;

struct __Reply__kmod_control_t {
    struct mach_msg_header_t Head;
    struct mach_msg_body_t msgh_body;
    struct mach_msg_ool_descriptor_t data;
    struct NDR_record_t NDR;
    mach_msg_type_number_t dataCnt;
};

typedef struct __Reply__kmod_create_t __Reply__kmod_create_t, *P__Reply__kmod_create_t;

typedef int kmod_t;

struct __Reply__kmod_create_t {
    struct mach_msg_header_t Head;
    struct NDR_record_t NDR;
    kern_return_t RetCode;
    kmod_t module;
};

typedef struct __Reply__kmod_destroy_t __Reply__kmod_destroy_t, *P__Reply__kmod_destroy_t;

struct __Reply__kmod_destroy_t {
    struct mach_msg_header_t Head;
    struct NDR_record_t NDR;
    kern_return_t RetCode;
};

typedef struct __Reply__mach_vm_wire_t __Reply__mach_vm_wire_t, *P__Reply__mach_vm_wire_t;

struct __Reply__mach_vm_wire_t {
    struct mach_msg_header_t Head;
    struct NDR_record_t NDR;
    kern_return_t RetCode;
};

typedef struct __Reply__set_dp_control_port_t __Reply__set_dp_control_port_t, *P__Reply__set_dp_control_port_t;

struct __Reply__set_dp_control_port_t {
    struct mach_msg_header_t Head;
    struct NDR_record_t NDR;
    kern_return_t RetCode;
};

typedef struct __Reply__thread_wire_t __Reply__thread_wire_t, *P__Reply__thread_wire_t;

struct __Reply__thread_wire_t {
    struct mach_msg_header_t Head;
    struct NDR_record_t NDR;
    kern_return_t RetCode;
};

typedef struct __Reply__vm_allocate_cpm_t __Reply__vm_allocate_cpm_t, *P__Reply__vm_allocate_cpm_t;

typedef vm_offset_t vm_address_t;

struct __Reply__vm_allocate_cpm_t {
    struct mach_msg_header_t Head;
    struct NDR_record_t NDR;
    kern_return_t RetCode;
    vm_address_t address;
};

typedef struct __Reply__vm_wire_t __Reply__vm_wire_t, *P__Reply__vm_wire_t;

struct __Reply__vm_wire_t {
    struct mach_msg_header_t Head;
    struct NDR_record_t NDR;
    kern_return_t RetCode;
};

typedef union __ReplyUnion__host_priv_subsystem __ReplyUnion__host_priv_subsystem, *P__ReplyUnion__host_priv_subsystem;

union __ReplyUnion__host_priv_subsystem {
    struct __Reply__host_get_boot_info_t Reply_host_get_boot_info;
    struct __Reply__host_reboot_t Reply_host_reboot;
    struct __Reply__host_priv_statistics_t Reply_host_priv_statistics;
    struct __Reply__host_default_memory_manager_t Reply_host_default_memory_manager;
    struct __Reply__vm_wire_t Reply_vm_wire;
    struct __Reply__thread_wire_t Reply_thread_wire;
    struct __Reply__vm_allocate_cpm_t Reply_vm_allocate_cpm;
    struct __Reply__host_processors_t Reply_host_processors;
    struct __Reply__host_get_clock_control_t Reply_host_get_clock_control;
    struct __Reply__kmod_create_t Reply_kmod_create;
    struct __Reply__kmod_destroy_t Reply_kmod_destroy;
    struct __Reply__kmod_control_t Reply_kmod_control;
    struct __Reply__host_get_special_port_t Reply_host_get_special_port;
    struct __Reply__host_set_special_port_t Reply_host_set_special_port;
    struct __Reply__host_set_exception_ports_t Reply_host_set_exception_ports;
    struct __Reply__host_get_exception_ports_t Reply_host_get_exception_ports;
    struct __Reply__host_swap_exception_ports_t Reply_host_swap_exception_ports;
    struct __Reply__mach_vm_wire_t Reply_mach_vm_wire;
    struct __Reply__host_processor_sets_t Reply_host_processor_sets;
    struct __Reply__host_processor_set_priv_t Reply_host_processor_set_priv;
    struct __Reply__set_dp_control_port_t Reply_set_dp_control_port;
    struct __Reply__get_dp_control_port_t Reply_get_dp_control_port;
    struct __Reply__host_set_UNDServer_t Reply_host_set_UNDServer;
    struct __Reply__host_get_UNDServer_t Reply_host_get_UNDServer;
    struct __Reply__kext_request_t Reply_kext_request;
};

typedef struct __Request__get_dp_control_port_t __Request__get_dp_control_port_t, *P__Request__get_dp_control_port_t;

struct __Request__get_dp_control_port_t {
    struct mach_msg_header_t Head;
};

typedef struct __Request__host_default_memory_manager_t __Request__host_default_memory_manager_t, *P__Request__host_default_memory_manager_t;

typedef natural_t memory_object_cluster_size_t;

struct __Request__host_default_memory_manager_t {
    struct mach_msg_header_t Head;
    struct mach_msg_body_t msgh_body;
    struct mach_msg_port_descriptor_t default_manager;
    struct NDR_record_t NDR;
    memory_object_cluster_size_t cluster_size;
};

typedef struct __Request__host_get_boot_info_t __Request__host_get_boot_info_t, *P__Request__host_get_boot_info_t;

struct __Request__host_get_boot_info_t {
    struct mach_msg_header_t Head;
};

typedef struct __Request__host_get_clock_control_t __Request__host_get_clock_control_t, *P__Request__host_get_clock_control_t;

struct __Request__host_get_clock_control_t {
    struct mach_msg_header_t Head;
    struct NDR_record_t NDR;
    clock_id_t clock_id;
};

typedef struct __Request__host_get_exception_ports_t __Request__host_get_exception_ports_t, *P__Request__host_get_exception_ports_t;

struct __Request__host_get_exception_ports_t {
    struct mach_msg_header_t Head;
    struct NDR_record_t NDR;
    exception_mask_t exception_mask;
};

typedef struct __Request__host_get_special_port_t __Request__host_get_special_port_t, *P__Request__host_get_special_port_t;

struct __Request__host_get_special_port_t {
    struct mach_msg_header_t Head;
    struct NDR_record_t NDR;
    int node;
    int which;
};

typedef struct __Request__host_get_UNDServer_t __Request__host_get_UNDServer_t, *P__Request__host_get_UNDServer_t;

struct __Request__host_get_UNDServer_t {
    struct mach_msg_header_t Head;
};

typedef struct __Request__host_priv_statistics_t __Request__host_priv_statistics_t, *P__Request__host_priv_statistics_t;

struct __Request__host_priv_statistics_t {
    struct mach_msg_header_t Head;
    struct NDR_record_t NDR;
    host_flavor_t flavor;
    mach_msg_type_number_t host_info_outCnt;
};

typedef struct __Request__host_processor_set_priv_t __Request__host_processor_set_priv_t, *P__Request__host_processor_set_priv_t;

struct __Request__host_processor_set_priv_t {
    struct mach_msg_header_t Head;
    struct mach_msg_body_t msgh_body;
    struct mach_msg_port_descriptor_t set_name;
};

typedef struct __Request__host_processor_sets_t __Request__host_processor_sets_t, *P__Request__host_processor_sets_t;

struct __Request__host_processor_sets_t {
    struct mach_msg_header_t Head;
};

typedef struct __Request__host_processors_t __Request__host_processors_t, *P__Request__host_processors_t;

struct __Request__host_processors_t {
    struct mach_msg_header_t Head;
};

typedef struct __Request__host_reboot_t __Request__host_reboot_t, *P__Request__host_reboot_t;

struct __Request__host_reboot_t {
    struct mach_msg_header_t Head;
    struct NDR_record_t NDR;
    int options;
};

typedef struct __Request__host_set_exception_ports_t __Request__host_set_exception_ports_t, *P__Request__host_set_exception_ports_t;

struct __Request__host_set_exception_ports_t {
    struct mach_msg_header_t Head;
    struct mach_msg_body_t msgh_body;
    struct mach_msg_port_descriptor_t new_port;
    struct NDR_record_t NDR;
    exception_mask_t exception_mask;
    exception_behavior_t behavior;
    thread_state_flavor_t new_flavor;
};

typedef struct __Request__host_set_special_port_t __Request__host_set_special_port_t, *P__Request__host_set_special_port_t;

struct __Request__host_set_special_port_t {
    struct mach_msg_header_t Head;
    struct mach_msg_body_t msgh_body;
    struct mach_msg_port_descriptor_t port;
    struct NDR_record_t NDR;
    int which;
};

typedef struct __Request__host_set_UNDServer_t __Request__host_set_UNDServer_t, *P__Request__host_set_UNDServer_t;

struct __Request__host_set_UNDServer_t {
    struct mach_msg_header_t Head;
    struct mach_msg_body_t msgh_body;
    struct mach_msg_port_descriptor_t server;
};

typedef struct __Request__host_swap_exception_ports_t __Request__host_swap_exception_ports_t, *P__Request__host_swap_exception_ports_t;

struct __Request__host_swap_exception_ports_t {
    struct mach_msg_header_t Head;
    struct mach_msg_body_t msgh_body;
    struct mach_msg_port_descriptor_t new_port;
    struct NDR_record_t NDR;
    exception_mask_t exception_mask;
    exception_behavior_t behavior;
    thread_state_flavor_t new_flavor;
};

typedef struct __Request__kext_request_t __Request__kext_request_t, *P__Request__kext_request_t;

struct __Request__kext_request_t {
    struct mach_msg_header_t Head;
    struct mach_msg_body_t msgh_body;
    struct mach_msg_ool_descriptor_t request_data;
    struct NDR_record_t NDR;
    uint32_t user_log_flags;
    mach_msg_type_number_t request_dataCnt;
};

typedef struct __Request__kmod_control_t __Request__kmod_control_t, *P__Request__kmod_control_t;

typedef int kmod_control_flavor_t;

struct __Request__kmod_control_t {
    struct mach_msg_header_t Head;
    struct mach_msg_body_t msgh_body;
    struct mach_msg_ool_descriptor_t data;
    struct NDR_record_t NDR;
    kmod_t module;
    kmod_control_flavor_t flavor;
    mach_msg_type_number_t dataCnt;
};

typedef struct __Request__kmod_create_t __Request__kmod_create_t, *P__Request__kmod_create_t;

struct __Request__kmod_create_t {
    struct mach_msg_header_t Head;
    struct NDR_record_t NDR;
    vm_address_t info;
};

typedef struct __Request__kmod_destroy_t __Request__kmod_destroy_t, *P__Request__kmod_destroy_t;

struct __Request__kmod_destroy_t {
    struct mach_msg_header_t Head;
    struct NDR_record_t NDR;
    kmod_t module;
};

typedef struct __Request__mach_vm_wire_t __Request__mach_vm_wire_t, *P__Request__mach_vm_wire_t;

typedef uint64_t mach_vm_address_t;

typedef uint64_t mach_vm_size_t;

typedef int vm_prot_t;

struct __Request__mach_vm_wire_t {
    struct mach_msg_header_t Head;
    struct mach_msg_body_t msgh_body;
    struct mach_msg_port_descriptor_t task;
    struct NDR_record_t NDR;
    mach_vm_address_t address;
    mach_vm_size_t size;
    vm_prot_t desired_access;
};

typedef struct __Request__set_dp_control_port_t __Request__set_dp_control_port_t, *P__Request__set_dp_control_port_t;

struct __Request__set_dp_control_port_t {
    struct mach_msg_header_t Head;
    struct mach_msg_body_t msgh_body;
    struct mach_msg_port_descriptor_t control_port;
};

typedef struct __Request__thread_wire_t __Request__thread_wire_t, *P__Request__thread_wire_t;

struct __Request__thread_wire_t {
    struct mach_msg_header_t Head;
    struct mach_msg_body_t msgh_body;
    struct mach_msg_port_descriptor_t thread;
    struct NDR_record_t NDR;
    boolean_t wired;
};

typedef struct __Request__vm_allocate_cpm_t __Request__vm_allocate_cpm_t, *P__Request__vm_allocate_cpm_t;

struct __Request__vm_allocate_cpm_t {
    struct mach_msg_header_t Head;
    struct mach_msg_body_t msgh_body;
    struct mach_msg_port_descriptor_t task;
    struct NDR_record_t NDR;
    vm_address_t address;
    vm_size_t size;
    int flags;
};

typedef struct __Request__vm_wire_t __Request__vm_wire_t, *P__Request__vm_wire_t;

struct __Request__vm_wire_t {
    struct mach_msg_header_t Head;
    struct mach_msg_body_t msgh_body;
    struct mach_msg_port_descriptor_t task;
    struct NDR_record_t NDR;
    vm_address_t address;
    vm_size_t size;
    vm_prot_t desired_access;
};

typedef union __RequestUnion__host_priv_subsystem __RequestUnion__host_priv_subsystem, *P__RequestUnion__host_priv_subsystem;

union __RequestUnion__host_priv_subsystem {
    struct __Request__host_get_boot_info_t Request_host_get_boot_info;
    struct __Request__host_reboot_t Request_host_reboot;
    struct __Request__host_priv_statistics_t Request_host_priv_statistics;
    struct __Request__host_default_memory_manager_t Request_host_default_memory_manager;
    struct __Request__vm_wire_t Request_vm_wire;
    struct __Request__thread_wire_t Request_thread_wire;
    struct __Request__vm_allocate_cpm_t Request_vm_allocate_cpm;
    struct __Request__host_processors_t Request_host_processors;
    struct __Request__host_get_clock_control_t Request_host_get_clock_control;
    struct __Request__kmod_create_t Request_kmod_create;
    struct __Request__kmod_destroy_t Request_kmod_destroy;
    struct __Request__kmod_control_t Request_kmod_control;
    struct __Request__host_get_special_port_t Request_host_get_special_port;
    struct __Request__host_set_special_port_t Request_host_set_special_port;
    struct __Request__host_set_exception_ports_t Request_host_set_exception_ports;
    struct __Request__host_get_exception_ports_t Request_host_get_exception_ports;
    struct __Request__host_swap_exception_ports_t Request_host_swap_exception_ports;
    struct __Request__mach_vm_wire_t Request_mach_vm_wire;
    struct __Request__host_processor_sets_t Request_host_processor_sets;
    struct __Request__host_processor_set_priv_t Request_host_processor_set_priv;
    struct __Request__set_dp_control_port_t Request_set_dp_control_port;
    struct __Request__get_dp_control_port_t Request_get_dp_control_port;
    struct __Request__host_set_UNDServer_t Request_host_set_UNDServer;
    struct __Request__host_get_UNDServer_t Request_host_get_UNDServer;
    struct __Request__kext_request_t Request_kext_request;
};

#define host_security_MSG_COUNT 2

typedef struct __Reply__host_security_create_task_token_t __Reply__host_security_create_task_token_t, *P__Reply__host_security_create_task_token_t;

struct __Reply__host_security_create_task_token_t {
    struct mach_msg_header_t Head;
    struct mach_msg_body_t msgh_body;
    struct mach_msg_port_descriptor_t child_task;
};

typedef struct __Reply__host_security_set_task_token_t __Reply__host_security_set_task_token_t, *P__Reply__host_security_set_task_token_t;

struct __Reply__host_security_set_task_token_t {
    struct mach_msg_header_t Head;
    struct NDR_record_t NDR;
    kern_return_t RetCode;
};

typedef union __ReplyUnion__host_security_subsystem __ReplyUnion__host_security_subsystem, *P__ReplyUnion__host_security_subsystem;

union __ReplyUnion__host_security_subsystem {
    struct __Reply__host_security_create_task_token_t Reply_host_security_create_task_token;
    struct __Reply__host_security_set_task_token_t Reply_host_security_set_task_token;
};

typedef struct __Request__host_security_create_task_token_t __Request__host_security_create_task_token_t, *P__Request__host_security_create_task_token_t;

typedef struct security_token_t security_token_t, *Psecurity_token_t;

typedef struct audit_token_t audit_token_t, *Paudit_token_t;

struct audit_token_t {
    uint val[8];
};

struct security_token_t {
    uint val[2];
};

struct __Request__host_security_create_task_token_t {
    struct mach_msg_header_t Head;
    struct mach_msg_body_t msgh_body;
    struct mach_msg_port_descriptor_t parent_task;
    struct mach_msg_port_descriptor_t host;
    struct mach_msg_ool_ports_descriptor_t ledgers;
    struct NDR_record_t NDR;
    struct security_token_t sec_token;
    struct audit_token_t audit_token;
    mach_msg_type_number_t ledgersCnt;
    boolean_t inherit_memory;
};

typedef struct __Request__host_security_set_task_token_t __Request__host_security_set_task_token_t, *P__Request__host_security_set_task_token_t;

struct __Request__host_security_set_task_token_t {
    struct mach_msg_header_t Head;
    struct mach_msg_body_t msgh_body;
    struct mach_msg_port_descriptor_t target_task;
    struct mach_msg_port_descriptor_t host;
    struct NDR_record_t NDR;
    struct security_token_t sec_token;
    struct audit_token_t audit_token;
};

typedef union __RequestUnion__host_security_subsystem __RequestUnion__host_security_subsystem, *P__RequestUnion__host_security_subsystem;

union __RequestUnion__host_security_subsystem {
    struct __Request__host_security_create_task_token_t Request_host_security_create_task_token;
    struct __Request__host_security_set_task_token_t Request_host_security_set_task_token;
};

#define HOST_AMFID_PORT 18

#define HOST_AUDIT_CONTROL_PORT 9

#define HOST_AUTOMOUNTD_PORT 11

#define HOST_CHUD_PORT 16

#define HOST_DYNAMIC_PAGER_PORT 8

#define HOST_GSSD_PORT 19

#define HOST_IO_MASTER_PORT 3

#define HOST_KEXTD_PORT 15

#define HOST_LOCAL_NODE -1

#define HOST_LOCKD_PORT 12

#define HOST_MAX_SPECIAL_KERNEL_PORT 7

#define HOST_MAX_SPECIAL_PORT 21

#define HOST_PORT 1

#define HOST_PRIV_PORT 2

#define HOST_SEATBELT_PORT 14

#define HOST_SECURITY_PORT 0

#define HOST_TELEMETRY_PORT 20

#define HOST_UNFREED_PORT 17

#define HOST_USER_NOTIFICATION_PORT 10

typedef struct _htmlElemDesc _htmlElemDesc, *P_htmlElemDesc;

struct _htmlElemDesc {
    char * name;
    char startTag;
    char endTag;
    char saveEndTag;
    char empty;
    char depr;
    char dtd;
    char isinline;
    char * desc;
    char * * subelts;
    char * defaultsubelt;
    char * * attrs_opt;
    char * * attrs_depr;
    char * * attrs_req;
};

typedef struct _htmlEntityDesc _htmlEntityDesc, *P_htmlEntityDesc;

struct _htmlEntityDesc {
    uint value;
    char * name;
    char * desc;
};

typedef enum enum_2059 {
    HTML_PARSE_COMPACT=65536,
    HTML_PARSE_IGNORE_ENC=2097152,
    HTML_PARSE_NOBLANKS=256,
    HTML_PARSE_NODEFDTD=4,
    HTML_PARSE_NOERROR=32,
    HTML_PARSE_NOIMPLIED=8192,
    HTML_PARSE_NONET=2048,
    HTML_PARSE_NOWARNING=64,
    HTML_PARSE_PEDANTIC=128,
    HTML_PARSE_RECOVER=1
} enum_2059;

typedef enum enum_2060 {
    HTML_DEPRECATED=2,
    HTML_INVALID=1,
    HTML_NA=0,
    HTML_REQUIRED=12,
    HTML_VALID=4
} enum_2060;

typedef xmlDocPtr htmlDocPtr;

typedef struct _htmlElemDesc htmlElemDesc;

typedef htmlElemDesc * htmlElemDescPtr;

typedef struct _htmlEntityDesc htmlEntityDesc;

typedef htmlEntityDesc * htmlEntityDescPtr;

typedef xmlNodePtr htmlNodePtr;

typedef struct _xmlParserCtxt _xmlParserCtxt, *P_xmlParserCtxt;

typedef struct _xmlParserCtxt xmlParserCtxt;

typedef xmlParserCtxt htmlParserCtxt;

typedef struct _xmlSAXHandler _xmlSAXHandler, *P_xmlSAXHandler;

typedef struct _xmlParserNodeInfoSeq _xmlParserNodeInfoSeq, *P_xmlParserNodeInfoSeq;

typedef struct _xmlParserNodeInfoSeq xmlParserNodeInfoSeq;

typedef struct _xmlValidCtxt _xmlValidCtxt, *P_xmlValidCtxt;

typedef struct _xmlValidCtxt xmlValidCtxt;

typedef enum enum_2029 {
    XML_PARSER_ATTRIBUTE_VALUE=12,
    XML_PARSER_CDATA_SECTION=8,
    XML_PARSER_COMMENT=5,
    XML_PARSER_CONTENT=7,
    XML_PARSER_DTD=3,
    XML_PARSER_END_TAG=9,
    XML_PARSER_ENTITY_DECL=10,
    XML_PARSER_ENTITY_VALUE=11,
    XML_PARSER_EOF=0,
    XML_PARSER_EPILOG=14,
    XML_PARSER_IGNORE=15,
    XML_PARSER_MISC=1,
    XML_PARSER_PI=2,
    XML_PARSER_PROLOG=4,
    XML_PARSER_PUBLIC_LITERAL=16,
    XML_PARSER_START=0,
    XML_PARSER_START_TAG=6,
    XML_PARSER_SYSTEM_LITERAL=13
} enum_2029;

typedef enum enum_2029 xmlParserInputState;

typedef struct _xmlAttr xmlAttr;

typedef xmlAttr * xmlAttrPtr;

typedef enum enum_2030 {
    XML_PARSE_DOM=1,
    XML_PARSE_PUSH_DOM=3,
    XML_PARSE_PUSH_SAX=4,
    XML_PARSE_READER=5,
    XML_PARSE_SAX=2,
    XML_PARSE_UNKNOWN=0
} enum_2030;

typedef enum enum_2030 xmlParserMode;

typedef struct _xmlParserNodeInfo _xmlParserNodeInfo, *P_xmlParserNodeInfo;

typedef struct _xmlParserNodeInfo xmlParserNodeInfo;

typedef void (* startElementNsSAX2Func)(void *, xmlChar *, xmlChar *, xmlChar *, int, xmlChar * *, int, int, xmlChar * *);

typedef void (* endElementNsSAX2Func)(void *, xmlChar *, xmlChar *, xmlChar *);

typedef void (* xmlValidityErrorFunc)(void *, char *, ...);

typedef void (* xmlValidityWarningFunc)(void *, char *, ...);

typedef struct _xmlValidState _xmlValidState, *P_xmlValidState;

typedef struct _xmlValidState xmlValidState;

typedef struct _xmlAutomata _xmlAutomata, *P_xmlAutomata;

typedef struct _xmlAutomata xmlAutomata;

typedef xmlAutomata * xmlAutomataPtr;

typedef struct _xmlAutomataState _xmlAutomataState, *P_xmlAutomataState;

typedef struct _xmlAutomataState xmlAutomataState;

typedef xmlAutomataState * xmlAutomataStatePtr;

struct _xmlParserNodeInfoSeq {
    ulong maximum;
    ulong length;
    xmlParserNodeInfo * buffer;
};

struct _xmlAutomata {
};

struct _xmlAutomataState {
};

struct _xmlValidState {
};

struct _xmlSAXHandler {
    internalSubsetSAXFunc internalSubset;
    isStandaloneSAXFunc isStandalone;
    hasInternalSubsetSAXFunc hasInternalSubset;
    hasExternalSubsetSAXFunc hasExternalSubset;
    resolveEntitySAXFunc resolveEntity;
    getEntitySAXFunc getEntity;
    entityDeclSAXFunc entityDecl;
    notationDeclSAXFunc notationDecl;
    attributeDeclSAXFunc attributeDecl;
    elementDeclSAXFunc elementDecl;
    unparsedEntityDeclSAXFunc unparsedEntityDecl;
    setDocumentLocatorSAXFunc setDocumentLocator;
    startDocumentSAXFunc startDocument;
    endDocumentSAXFunc endDocument;
    startElementSAXFunc startElement;
    endElementSAXFunc endElement;
    referenceSAXFunc reference;
    charactersSAXFunc characters;
    ignorableWhitespaceSAXFunc ignorableWhitespace;
    processingInstructionSAXFunc processingInstruction;
    commentSAXFunc comment;
    warningSAXFunc warning;
    errorSAXFunc error;
    fatalErrorSAXFunc fatalError;
    getParameterEntitySAXFunc getParameterEntity;
    cdataBlockSAXFunc cdataBlock;
    externalSubsetSAXFunc externalSubset;
    uint initialized;
    void * _private;
    startElementNsSAX2Func startElementNs;
    endElementNsSAX2Func endElementNs;
    xmlStructuredErrorFunc serror;
};

struct _xmlValidCtxt {
    void * userData;
    xmlValidityErrorFunc error;
    xmlValidityWarningFunc warning;
    xmlNodePtr node;
    int nodeNr;
    int nodeMax;
    xmlNodePtr * nodeTab;
    uint finishDtd;
    xmlDocPtr doc;
    int valid;
    xmlValidState * vstate;
    int vstateNr;
    int vstateMax;
    xmlValidState * vstateTab;
    xmlAutomataPtr am;
    xmlAutomataStatePtr state;
};

struct _xmlParserCtxt {
    struct _xmlSAXHandler * sax;
    void * userData;
    xmlDocPtr myDoc;
    int wellFormed;
    int replaceEntities;
    xmlChar * version;
    xmlChar * encoding;
    int standalone;
    int html;
    xmlParserInputPtr input;
    int inputNr;
    int inputMax;
    xmlParserInputPtr * inputTab;
    xmlNodePtr node;
    int nodeNr;
    int nodeMax;
    xmlNodePtr * nodeTab;
    int record_info;
    xmlParserNodeInfoSeq node_seq;
    int errNo;
    int hasExternalSubset;
    int hasPErefs;
    int external;
    int valid;
    int validate;
    xmlValidCtxt vctxt;
    xmlParserInputState instate;
    int token;
    char * directory;
    xmlChar * name;
    int nameNr;
    int nameMax;
    xmlChar * * nameTab;
    long nbChars;
    long checkIndex;
    int keepBlanks;
    int disableSAX;
    int inSubset;
    xmlChar * intSubName;
    xmlChar * extSubURI;
    xmlChar * extSubSystem;
    int * space;
    int spaceNr;
    int spaceMax;
    int * spaceTab;
    int depth;
    xmlParserInputPtr entity;
    int charset;
    int nodelen;
    int nodemem;
    int pedantic;
    void * _private;
    int loadsubset;
    int linenumbers;
    void * catalogs;
    int recovery;
    int progressive;
    xmlDictPtr dict;
    xmlChar * * atts;
    int maxatts;
    int docdict;
    xmlChar * str_xml;
    xmlChar * str_xmlns;
    xmlChar * str_xml_ns;
    int sax2;
    int nsNr;
    int nsMax;
    xmlChar * * nsTab;
    int * attallocs;
    void * * pushTab;
    xmlHashTablePtr attsDefault;
    xmlHashTablePtr attsSpecial;
    int nsWellFormed;
    int options;
    int dictNames;
    int freeElemsNr;
    xmlNodePtr freeElems;
    int freeAttrsNr;
    xmlAttrPtr freeAttrs;
    xmlError lastError;
    xmlParserMode parseMode;
    ulong nbentities;
    ulong sizeentities;
    xmlParserNodeInfo * nodeInfo;
    int nodeInfoNr;
    int nodeInfoMax;
    xmlParserNodeInfo * nodeInfoTab;
    int input_id;
    ulong sizeentcopy;
};

struct _xmlParserNodeInfo {
    struct _xmlNode * node;
    ulong begin_pos;
    ulong begin_line;
    ulong end_pos;
    ulong end_line;
};

typedef xmlParserCtxt * xmlParserCtxtPtr;

typedef xmlParserCtxtPtr htmlParserCtxtPtr;

typedef xmlParserInput htmlParserInput;

typedef xmlParserInputPtr htmlParserInputPtr;

typedef xmlParserNodeInfo htmlParserNodeInfo;

typedef enum enum_2059 htmlParserOption;

typedef struct _xmlSAXHandler xmlSAXHandler;

typedef xmlSAXHandler htmlSAXHandler;

typedef xmlSAXHandler * xmlSAXHandlerPtr;

typedef xmlSAXHandlerPtr htmlSAXHandlerPtr;

typedef enum enum_2060 htmlStatus;

#define ICMP6_DST_UNREACH 1

#define ICMP6_DST_UNREACH_ADDR 3

#define ICMP6_DST_UNREACH_ADMIN 1

#define ICMP6_DST_UNREACH_BEYONDSCOPE 2

#define ICMP6_DST_UNREACH_NOPORT 4

#define ICMP6_DST_UNREACH_NOROUTE 0

#define ICMP6_DST_UNREACH_NOTNEIGHBOR 2

#define ICMP6_ECHO_REPLY 129

#define ICMP6_ECHO_REQUEST 128

#define ICMP6_FQDN_QUERY 139

#define ICMP6_FQDN_REPLY 140

#define ICMP6_INFOMSG_MASK 128

#define ICMP6_MAXTYPE 201

#define ICMP6_MEMBERSHIP_QUERY 130

#define ICMP6_MEMBERSHIP_REDUCTION 132

#define ICMP6_MEMBERSHIP_REPORT 131

#define ICMP6_NI_QUERY 139

#define ICMP6_NI_REFUSED 1

#define ICMP6_NI_REPLY 140

#define ICMP6_NI_SUBJ_FQDN 1

#define ICMP6_NI_SUBJ_IPV4 2

#define ICMP6_NI_SUBJ_IPV6 0

#define ICMP6_NI_SUCCESS 0

#define ICMP6_NI_UNKNOWN 2

#define ICMP6_PACKET_TOO_BIG 2

#define ICMP6_PARAM_PROB 4

#define ICMP6_PARAMPROB_HEADER 0

#define ICMP6_PARAMPROB_NEXTHEADER 1

#define ICMP6_PARAMPROB_OPTION 2

#define ICMP6_ROUTER_RENUMBERING 138

#define ICMP6_ROUTER_RENUMBERING_COMMAND 0

#define ICMP6_ROUTER_RENUMBERING_RESULT 1

#define ICMP6_ROUTER_RENUMBERING_SEQNUM_RESET 255

#define ICMP6_RR_FLAGS_FORCEAPPLY 32

#define ICMP6_RR_FLAGS_PREVDONE 8

#define ICMP6_RR_FLAGS_REQRESULT 64

#define ICMP6_RR_FLAGS_SPECSITE 16

#define ICMP6_RR_FLAGS_TEST 128

#define ICMP6_RR_PCOUSE_FLAGS_DECRPLTIME 64

#define ICMP6_RR_PCOUSE_FLAGS_DECRVLTIME 128

#define ICMP6_RR_PCOUSE_RAFLAGS_AUTO 64

#define ICMP6_RR_PCOUSE_RAFLAGS_ONLINK 128

#define ICMP6_RR_RESULT_FLAGS_FORBIDDEN 256

#define ICMP6_RR_RESULT_FLAGS_OOB 512

#define ICMP6_TIME_EXCEED_REASSEMBLY 1

#define ICMP6_TIME_EXCEED_TRANSIT 0

#define ICMP6_TIME_EXCEEDED 3

#define ICMP6_WRUREPLY 140

#define ICMP6_WRUREQUEST 139

#define ICMPV6_PLD_MAXLEN 1232

#define ICMPV6CTL_ERRPPSLIMIT 14

#define ICMPV6CTL_MAXID 27

#define ICMPV6CTL_MLD_MAXSRCFILTER 21

#define ICMPV6CTL_MLD_SOMAXSRC 22

#define ICMPV6CTL_MLD_VERSION 23

#define ICMPV6CTL_MTUDISC_HIWAT 16

#define ICMPV6CTL_MTUDISC_LOWAT 17

#define ICMPV6CTL_ND6_ACCEPT_6TO4 25

#define ICMPV6CTL_ND6_DEBUG 18

#define ICMPV6CTL_ND6_DELAY 8

#define ICMPV6CTL_ND6_DRLIST 19

#define ICMPV6CTL_ND6_MAXNUDHINT 15

#define ICMPV6CTL_ND6_MAXQLEN 24

#define ICMPV6CTL_ND6_MMAXTRIES 10

#define ICMPV6CTL_ND6_OPTIMISTIC_DAD 26

#define ICMPV6CTL_ND6_PRLIST 20

#define ICMPV6CTL_ND6_PRUNE 6

#define ICMPV6CTL_ND6_UMAXTRIES 9

#define ICMPV6CTL_ND6_USELOOPBACK 11

#define ICMPV6CTL_NODEINFO 13

#define ICMPV6CTL_REDIRACCEPT 2

#define ICMPV6CTL_REDIRTIMEOUT 3

#define ICMPV6CTL_STATS 1

#define MLD6_LISTENER_DONE 132

#define MLD6_LISTENER_QUERY 130

#define MLD6_LISTENER_REPORT 131

#define MLD6_MTRACE 201

#define MLD6_MTRACE_RESP 200

#define MLD_LISTENER_DONE 132

#define MLD_LISTENER_QUERY 130

#define MLD_LISTENER_REDUCTION 132

#define MLD_LISTENER_REPORT 131

#define MLD_MTRACE 201

#define MLD_MTRACE_RESP 200

#define MLDV2_LISTENER_REPORT 143

#define ND_NA_FLAG_OVERRIDE 32

#define ND_NA_FLAG_ROUTER 128

#define ND_NA_FLAG_SOLICITED 64

#define ND_NEIGHBOR_ADVERT 136

#define ND_NEIGHBOR_SOLICIT 135

#define ND_OPT_DNSSL 31

#define ND_OPT_MTU 5

#define ND_OPT_PI_FLAG_AUTO 64

#define ND_OPT_PI_FLAG_ONLINK 128

#define ND_OPT_PREFIX_INFORMATION 3

#define ND_OPT_RDNSS 25

#define ND_OPT_REDIRECTED_HEADER 4

#define ND_OPT_ROUTE_INFO 200

#define ND_OPT_SOURCE_LINKADDR 1

#define ND_OPT_TARGET_LINKADDR 2

#define ND_RA_FLAG_HA 32

#define ND_RA_FLAG_MANAGED 128

#define ND_RA_FLAG_OTHER 64

#define ND_RA_FLAG_RTPREF_HIGH 8

#define ND_RA_FLAG_RTPREF_LOW 24

#define ND_RA_FLAG_RTPREF_MASK 24

#define ND_RA_FLAG_RTPREF_MEDIUM 0

#define ND_RA_FLAG_RTPREF_RSV 16

#define ND_REDIRECT 137

#define ND_REDIRECT_ONLINK 0

#define ND_REDIRECT_ROUTER 1

#define ND_ROUTER_ADVERT 134

#define ND_ROUTER_SOLICIT 133

#define NI_FQDN_FLAG_VALIDTTL 256

#define NI_NODEADDR_FLAG_ALL 512

#define NI_NODEADDR_FLAG_ANYCAST 16384

#define NI_NODEADDR_FLAG_COMPAT 1024

#define NI_NODEADDR_FLAG_GLOBAL 8192

#define NI_NODEADDR_FLAG_LINKLOCAL 2048

#define NI_NODEADDR_FLAG_SITELOCAL 4096

#define NI_NODEADDR_FLAG_TRUNCATE 256

#define NI_QTYPE_DNSNAME 2

#define NI_QTYPE_FQDN 2

#define NI_QTYPE_IPV4ADDR 4

#define NI_QTYPE_NODEADDR 3

#define NI_QTYPE_NOOP 0

#define NI_QTYPE_SUPTYPES 1

#define NI_SUPTYPE_FLAG_COMPRESS 256

#define RPM_PCO_ADD 1

#define RPM_PCO_CHANGE 2

#define RPM_PCO_MAX 4

#define RPM_PCO_SETGLOBAL 3

typedef union _union_2608 _union_2608, *P_union_2608;

union _union_2608 {
    u_int32_t icmp6_un_data32[1];
    u_int16_t icmp6_un_data16[2];
    u_int8_t icmp6_un_data8[4];
};

typedef struct icmp6_filter icmp6_filter, *Picmp6_filter;

struct icmp6_filter {
    u_int32_t icmp6_filt[8];
};

typedef struct icmp6_hdr icmp6_hdr, *Picmp6_hdr;

struct icmp6_hdr {
    u_int8_t icmp6_type;
    u_int8_t icmp6_code;
    u_int16_t icmp6_cksum;
    union _union_2608 icmp6_dataun;
};

typedef struct icmp6_namelookup icmp6_namelookup, *Picmp6_namelookup;

struct icmp6_namelookup {
    struct icmp6_hdr icmp6_nl_hdr;
    u_int8_t icmp6_nl_nonce[8];
    int32_t icmp6_nl_ttl;
};

typedef struct icmp6_nodeinfo icmp6_nodeinfo, *Picmp6_nodeinfo;

struct icmp6_nodeinfo {
    struct icmp6_hdr icmp6_ni_hdr;
    u_int8_t icmp6_ni_nonce[8];
};

typedef struct icmp6_router_renum icmp6_router_renum, *Picmp6_router_renum;

struct icmp6_router_renum {
    struct icmp6_hdr rr_hdr;
    u_int8_t rr_segnum;
    u_int8_t rr_flags;
    u_int16_t rr_maxdelay;
    u_int32_t rr_reserved;
};

typedef struct icmp6errstat icmp6errstat, *Picmp6errstat;

typedef u_int64_t u_quad_t;

struct icmp6errstat {
    u_quad_t icp6errs_dst_unreach_noroute;
    u_quad_t icp6errs_dst_unreach_admin;
    u_quad_t icp6errs_dst_unreach_beyondscope;
    u_quad_t icp6errs_dst_unreach_addr;
    u_quad_t icp6errs_dst_unreach_noport;
    u_quad_t icp6errs_packet_too_big;
    u_quad_t icp6errs_time_exceed_transit;
    u_quad_t icp6errs_time_exceed_reassembly;
    u_quad_t icp6errs_paramprob_header;
    u_quad_t icp6errs_paramprob_nextheader;
    u_quad_t icp6errs_paramprob_option;
    u_quad_t icp6errs_redirect;
    u_quad_t icp6errs_unknown;
};

typedef struct icmp6stat icmp6stat, *Picmp6stat;

struct icmp6stat {
    u_quad_t icp6s_error;
    u_quad_t icp6s_canterror;
    u_quad_t icp6s_toofreq;
    u_quad_t icp6s_outhist[256];
    u_quad_t icp6s_badcode;
    u_quad_t icp6s_tooshort;
    u_quad_t icp6s_checksum;
    u_quad_t icp6s_badlen;
    u_quad_t icp6s_reflect;
    u_quad_t icp6s_inhist[256];
    u_quad_t icp6s_nd_toomanyopt;
    struct icmp6errstat icp6s_outerrhist;
    u_quad_t icp6s_pmtuchg;
    u_quad_t icp6s_nd_badopt;
    u_quad_t icp6s_badns;
    u_quad_t icp6s_badna;
    u_quad_t icp6s_badrs;
    u_quad_t icp6s_badra;
    u_quad_t icp6s_badredirect;
};

typedef struct mld_hdr mld_hdr, *Pmld_hdr;

struct mld_hdr {
    struct icmp6_hdr mld_icmp6_hdr;
    struct in6_addr mld_addr;
};

typedef struct nd_neighbor_advert nd_neighbor_advert, *Pnd_neighbor_advert;

struct nd_neighbor_advert {
    struct icmp6_hdr nd_na_hdr;
    struct in6_addr nd_na_target;
};

typedef struct nd_neighbor_solicit nd_neighbor_solicit, *Pnd_neighbor_solicit;

struct nd_neighbor_solicit {
    struct icmp6_hdr nd_ns_hdr;
    struct in6_addr nd_ns_target;
};

typedef struct nd_opt_dnssl nd_opt_dnssl, *Pnd_opt_dnssl;

struct nd_opt_dnssl {
    u_int8_t nd_opt_dnssl_type;
    u_int8_t nd_opt_dnssl_len;
    u_int16_t nd_opt_dnssl_reserved;
    u_int32_t nd_opt_dnssl_lifetime;
    u_int8_t nd_opt_dnssl_domains[8];
};

typedef struct nd_opt_hdr nd_opt_hdr, *Pnd_opt_hdr;

struct nd_opt_hdr {
    u_int8_t nd_opt_type;
    u_int8_t nd_opt_len;
};

typedef struct nd_opt_mtu nd_opt_mtu, *Pnd_opt_mtu;

struct nd_opt_mtu {
    u_int8_t nd_opt_mtu_type;
    u_int8_t nd_opt_mtu_len;
    u_int16_t nd_opt_mtu_reserved;
    u_int32_t nd_opt_mtu_mtu;
};

typedef struct nd_opt_prefix_info nd_opt_prefix_info, *Pnd_opt_prefix_info;

struct nd_opt_prefix_info {
    u_int8_t nd_opt_pi_type;
    u_int8_t nd_opt_pi_len;
    u_int8_t nd_opt_pi_prefix_len;
    u_int8_t nd_opt_pi_flags_reserved;
    u_int32_t nd_opt_pi_valid_time;
    u_int32_t nd_opt_pi_preferred_time;
    u_int32_t nd_opt_pi_reserved2;
    struct in6_addr nd_opt_pi_prefix;
};

typedef struct nd_opt_rd_hdr nd_opt_rd_hdr, *Pnd_opt_rd_hdr;

struct nd_opt_rd_hdr {
    u_int8_t nd_opt_rh_type;
    u_int8_t nd_opt_rh_len;
    u_int16_t nd_opt_rh_reserved1;
    u_int32_t nd_opt_rh_reserved2;
};

typedef struct nd_opt_rdnss nd_opt_rdnss, *Pnd_opt_rdnss;

struct nd_opt_rdnss {
    u_int8_t nd_opt_rdnss_type;
    u_int8_t nd_opt_rdnss_len;
    u_int16_t nd_opt_rdnss_reserved;
    u_int32_t nd_opt_rdnss_lifetime;
    struct in6_addr nd_opt_rdnss_addr[1];
};

typedef struct nd_opt_route_info nd_opt_route_info, *Pnd_opt_route_info;

struct nd_opt_route_info {
    u_int8_t nd_opt_rti_type;
    u_int8_t nd_opt_rti_len;
    u_int8_t nd_opt_rti_prefixlen;
    u_int8_t nd_opt_rti_flags;
    u_int32_t nd_opt_rti_lifetime;
};

typedef struct nd_redirect nd_redirect, *Pnd_redirect;

struct nd_redirect {
    struct icmp6_hdr nd_rd_hdr;
    struct in6_addr nd_rd_target;
    struct in6_addr nd_rd_dst;
};

typedef struct nd_router_advert nd_router_advert, *Pnd_router_advert;

struct nd_router_advert {
    struct icmp6_hdr nd_ra_hdr;
    u_int32_t nd_ra_reachable;
    u_int32_t nd_ra_retransmit;
};

typedef struct nd_router_solicit nd_router_solicit, *Pnd_router_solicit;

struct nd_router_solicit {
    struct icmp6_hdr nd_rs_hdr;
};

typedef struct ni_reply_fqdn ni_reply_fqdn, *Pni_reply_fqdn;

struct ni_reply_fqdn {
    u_int32_t ni_fqdn_ttl;
    u_int8_t ni_fqdn_namelen;
    u_int8_t ni_fqdn_name[3];
};

typedef struct rr_pco_match rr_pco_match, *Prr_pco_match;

struct rr_pco_match {
    u_int8_t rpm_code;
    u_int8_t rpm_len;
    u_int8_t rpm_ordinal;
    u_int8_t rpm_matchlen;
    u_int8_t rpm_minlen;
    u_int8_t rpm_maxlen;
    u_int16_t rpm_reserved;
    struct in6_addr rpm_prefix;
};

typedef struct rr_pco_use rr_pco_use, *Prr_pco_use;

struct rr_pco_use {
    u_int8_t rpu_uselen;
    u_int8_t rpu_keeplen;
    u_int8_t rpu_ramask;
    u_int8_t rpu_raflags;
    u_int32_t rpu_vltime;
    u_int32_t rpu_pltime;
    u_int32_t rpu_flags;
    struct in6_addr rpu_prefix;
};

typedef struct rr_result rr_result, *Prr_result;

struct rr_result {
    u_int16_t rrr_flags;
    u_int8_t rrr_ordinal;
    u_int8_t rrr_matchedlen;
    u_int32_t rrr_ifid;
    struct in6_addr rrr_prefix;
};

#define ICMPCTL_ICMPLIM 3

#define ICMPCTL_MASKREPL 1

#define ICMPCTL_MAXID 5

#define ICMPCTL_STATS 2

#define ICMPCTL_TIMESTAMP 4

typedef struct icmpstat icmpstat, *Picmpstat;

struct icmpstat {
    u_int32_t icps_error;
    u_int32_t icps_oldshort;
    u_int32_t icps_oldicmp;
    u_int32_t icps_badcode;
    u_int32_t icps_tooshort;
    u_int32_t icps_checksum;
    u_int32_t icps_badlen;
    u_int32_t icps_reflect;
    u_int32_t icps_bmcastecho;
    u_int32_t icps_bmcasttstamp;
};

#define IF_NAMESIZE 16

#define IF_WAKE_ON_MAGIC_PACKET 1

#define IFCAP_AV 256

#define IFCAP_HWCSUM 3

#define IFCAP_JUMBO_MTU 16

#define IFCAP_LRO 128

#define IFCAP_RXCSUM 1

#define IFCAP_TSO 96

#define IFCAP_TSO4 32

#define IFCAP_TSO6 64

#define IFCAP_TXCSUM 2

#define IFCAP_TXSTATUS 512

#define IFCAP_VLAN_HWTAGGING 8

#define IFCAP_VLAN_MTU 4

#define IFF_ALLMULTI 512

#define IFF_ALTPHYS 16384

#define IFF_BROADCAST 2

#define IFF_DEBUG 4

#define IFF_LINK0 4096

#define IFF_LINK1 8192

#define IFF_LINK2 16384

#define IFF_LOOPBACK 8

#define IFF_MULTICAST 32768

#define IFF_NOARP 128

#define IFF_NOTRAILERS 32

#define IFF_OACTIVE 1024

#define IFF_POINTOPOINT 16

#define IFF_PROMISC 256

#define IFF_RUNNING 64

#define IFF_SIMPLEX 2048

#define IFF_UP 1

#define IFLR_PREFIX 32768

#define IFNET_SLOWHZ 1

#define IFQ_MAXLEN 128

#define IFSTATMAX 800

#define KEV_DL_ADDMULTI 7

#define KEV_DL_DELMULTI 8

#define KEV_DL_IF_ATTACHED 9

#define KEV_DL_IF_DETACHED 11

#define KEV_DL_IF_DETACHING 10

#define KEV_DL_IF_IDLE_ROUTE_REFCNT 18

#define KEV_DL_IFCAP_CHANGED 19

#define KEV_DL_IFDELEGATE_CHANGED 25

#define KEV_DL_ISSUES 24

#define KEV_DL_LINK_ADDRESS_CHANGED 16

#define KEV_DL_LINK_OFF 12

#define KEV_DL_LINK_ON 13

#define KEV_DL_LINK_QUALITY_METRIC_CHANGED 20

#define KEV_DL_MASTER_ELECTED 23

#define KEV_DL_NODE_ABSENCE 22

#define KEV_DL_NODE_PRESENCE 21

#define KEV_DL_PROTO_ATTACHED 14

#define KEV_DL_PROTO_DETACHED 15

#define KEV_DL_SIFFLAGS 1

#define KEV_DL_SIFGENERIC 6

#define KEV_DL_SIFMEDIA 5

#define KEV_DL_SIFMETRICS 2

#define KEV_DL_SIFMTU 3

#define KEV_DL_SIFPHYS 4

#define KEV_DL_SUBCLASS 2

#define KEV_DL_WAKEFLAGS_CHANGED 17

typedef union _union_1748 _union_1748, *P_union_1748;

union _union_1748 {
    void * ifk_ptr;
    int ifk_value;
};

typedef union _union_1750 _union_1750, *P_union_1750;

typedef struct ifdevmtu ifdevmtu, *Pifdevmtu;

typedef struct ifkpi ifkpi, *Pifkpi;

struct ifkpi {
    uint ifk_module_id;
    uint ifk_type;
    union _union_1748 ifk_data;
};

struct ifdevmtu {
    int ifdm_current;
    int ifdm_min;
    int ifdm_max;
};

union _union_1750 {
    struct sockaddr ifru_addr;
    struct sockaddr ifru_dstaddr;
    struct sockaddr ifru_broadaddr;
    short ifru_flags;
    int ifru_metric;
    int ifru_mtu;
    int ifru_phys;
    int ifru_media;
    int ifru_intval;
    caddr_t ifru_data;
    struct ifdevmtu ifru_devmtu;
    struct ifkpi ifru_kpi;
    u_int32_t ifru_wake_flags;
    u_int32_t ifru_route_refcnt;
    int ifru_cap[2];
};

typedef union _union_1767 _union_1767, *P_union_1767;

typedef struct ifreq ifreq, *Pifreq;

struct ifreq {
    char ifr_name[16];
    union _union_1750 ifr_ifru;
};

union _union_1767 {
    caddr_t ifcu_buf;
    struct ifreq * ifcu_req;
};

typedef struct if_clonereq if_clonereq, *Pif_clonereq;

struct if_clonereq {
    int ifcr_total;
    int ifcr_count;
    char * ifcr_buffer;
};

typedef struct if_laddrreq if_laddrreq, *Pif_laddrreq;

typedef struct sockaddr_storage sockaddr_storage, *Psockaddr_storage;

struct sockaddr_storage {
    __uint8_t ss_len;
    sa_family_t ss_family;
    __int64_t __ss_align;
    char __ss_pad2[128];
};

struct if_laddrreq {
    char iflr_name[16];
    uint flags;
    uint prefixlen;
    struct sockaddr_storage addr;
    struct sockaddr_storage dstaddr;
};

typedef struct if_msghdr if_msghdr, *Pif_msghdr;

typedef struct if_data if_data, *Pif_data;

struct if_data {
    u_char ifi_type;
    u_char ifi_typelen;
    u_char ifi_physical;
    u_char ifi_addrlen;
    u_char ifi_hdrlen;
    u_char ifi_recvquota;
    u_char ifi_xmitquota;
    u_char ifi_unused1;
    u_int32_t ifi_mtu;
    u_int32_t ifi_metric;
    u_int32_t ifi_baudrate;
    u_int32_t ifi_ipackets;
    u_int32_t ifi_ierrors;
    u_int32_t ifi_opackets;
    u_int32_t ifi_oerrors;
    u_int32_t ifi_collisions;
    u_int32_t ifi_ibytes;
    u_int32_t ifi_obytes;
    u_int32_t ifi_imcasts;
    u_int32_t ifi_omcasts;
    u_int32_t ifi_iqdrops;
    u_int32_t ifi_noproto;
    u_int32_t ifi_recvtiming;
    u_int32_t ifi_xmittiming;
    struct timeval32 ifi_lastchange;
    u_int32_t ifi_unused2;
    u_int32_t ifi_hwassist;
    u_int32_t ifi_reserved1;
    u_int32_t ifi_reserved2;
};

struct if_msghdr {
    ushort ifm_msglen;
    uchar ifm_version;
    uchar ifm_type;
    int ifm_addrs;
    int ifm_flags;
    ushort ifm_index;
    struct if_data ifm_data;
};

typedef struct if_msghdr2 if_msghdr2, *Pif_msghdr2;

typedef struct if_data64 if_data64, *Pif_data64;

struct if_data64 {
    u_char ifi_type;
    u_char ifi_typelen;
    u_char ifi_physical;
    u_char ifi_addrlen;
    u_char ifi_hdrlen;
    u_char ifi_recvquota;
    u_char ifi_xmitquota;
    u_char ifi_unused1;
    u_int32_t ifi_mtu;
    u_int32_t ifi_metric;
    u_int64_t ifi_baudrate;
    u_int64_t ifi_ipackets;
    u_int64_t ifi_ierrors;
    u_int64_t ifi_opackets;
    u_int64_t ifi_oerrors;
    u_int64_t ifi_collisions;
    u_int64_t ifi_ibytes;
    u_int64_t ifi_obytes;
    u_int64_t ifi_imcasts;
    u_int64_t ifi_omcasts;
    u_int64_t ifi_iqdrops;
    u_int64_t ifi_noproto;
    u_int32_t ifi_recvtiming;
    u_int32_t ifi_xmittiming;
    struct timeval32 ifi_lastchange;
};

struct if_msghdr2 {
    u_short ifm_msglen;
    u_char ifm_version;
    u_char ifm_type;
    int ifm_addrs;
    int ifm_flags;
    u_short ifm_index;
    int ifm_snd_len;
    int ifm_snd_maxlen;
    int ifm_snd_drops;
    int ifm_timer;
    struct if_data64 ifm_data;
};

typedef struct if_nameindex if_nameindex, *Pif_nameindex;

struct if_nameindex {
    uint if_index;
    char * if_name;
};

typedef struct ifa_msghdr ifa_msghdr, *Pifa_msghdr;

struct ifa_msghdr {
    ushort ifam_msglen;
    uchar ifam_version;
    uchar ifam_type;
    int ifam_addrs;
    int ifam_flags;
    ushort ifam_index;
    int ifam_metric;
};

typedef struct ifaliasreq ifaliasreq, *Pifaliasreq;

struct ifaliasreq {
    char ifra_name[16];
    struct sockaddr ifra_addr;
    struct sockaddr ifra_broadaddr;
    struct sockaddr ifra_mask;
};

typedef struct ifconf ifconf, *Pifconf;

struct ifconf {
    int ifc_len;
    union _union_1767 ifc_ifcu;
};

typedef struct ifdrv ifdrv, *Pifdrv;

struct ifdrv {
    char ifd_name[16];
    ulong ifd_cmd;
    size_t ifd_len;
    void * ifd_data;
};

typedef struct ifma_msghdr ifma_msghdr, *Pifma_msghdr;

struct ifma_msghdr {
    ushort ifmam_msglen;
    uchar ifmam_version;
    uchar ifmam_type;
    int ifmam_addrs;
    int ifmam_flags;
    ushort ifmam_index;
};

typedef struct ifma_msghdr2 ifma_msghdr2, *Pifma_msghdr2;

struct ifma_msghdr2 {
    u_short ifmam_msglen;
    u_char ifmam_version;
    u_char ifmam_type;
    int ifmam_addrs;
    int ifmam_flags;
    u_short ifmam_index;
    int32_t ifmam_refcount;
};

typedef struct ifmediareq ifmediareq, *Pifmediareq;

struct ifmediareq {
    char ifm_name[16];
    int ifm_current;
    int ifm_mask;
    int ifm_status;
    int ifm_active;
    int ifm_count;
    int * ifm_ulist;
};

typedef struct ifstat ifstat, *Pifstat;

struct ifstat {
    char ifs_name[16];
    char ascii[801];
};

typedef struct kev_dl_proto_data kev_dl_proto_data, *Pkev_dl_proto_data;

typedef struct net_event_data net_event_data, *Pnet_event_data;

struct net_event_data {
    u_int32_t if_family;
    u_int32_t if_unit;
    char if_name[16];
};

struct kev_dl_proto_data {
    struct net_event_data link_data;
    u_int32_t proto_family;
    u_int32_t proto_remaining_count;
};

typedef struct rslvmulti_req rslvmulti_req, *Prslvmulti_req;

struct rslvmulti_req {
    struct sockaddr * sa;
    struct sockaddr * * llsa;
};

#define ARPHRD_ETHER 1

#define ARPHRD_FRELAY 15

#define ARPHRD_IEEE1394 24

#define ARPHRD_IEEE1394_EUI64 27

#define ARPHRD_IEEE802 6

#define ARPOP_INVREPLY 9

#define ARPOP_INVREQUEST 8

#define ARPOP_REPLY 2

#define ARPOP_REQUEST 1

#define ARPOP_REVREPLY 4

#define ARPOP_REVREQUEST 3

#define ATF_COM 2

#define ATF_INUSE 1

#define ATF_PERM 4

#define ATF_PUBL 8

#define ATF_USETRAILERS 16

typedef struct arphdr arphdr, *Parphdr;

struct arphdr {
    u_short ar_hrd;
    u_short ar_pro;
    u_char ar_hln;
    u_char ar_pln;
    u_short ar_op;
};

typedef struct arpreq arpreq, *Parpreq;

struct arpreq {
    struct sockaddr arp_pa;
    struct sockaddr arp_ha;
    int arp_flags;
};

typedef struct arpstat arpstat, *Parpstat;

struct arpstat {
    uint32_t txrequests;
    uint32_t txreplies;
    uint32_t txannounces;
    uint32_t rxrequests;
    uint32_t rxreplies;
    uint32_t received;
    uint32_t txconflicts;
    uint32_t invalidreqs;
    uint32_t reqnobufs;
    uint32_t dropped;
    uint32_t purged;
    uint32_t timeouts;
    uint32_t dupips;
    uint32_t inuse;
    uint32_t txurequests;
};

typedef struct sockaddr_dl sockaddr_dl, *Psockaddr_dl;

struct sockaddr_dl {
    u_char sdl_len;
    u_char sdl_family;
    u_short sdl_index;
    u_char sdl_type;
    u_char sdl_nlen;
    u_char sdl_alen;
    u_char sdl_slen;
    char sdl_data[12];
};

#define RTF_ANNOUNCE 16384

#define RTF_USETRAILERS 32768

#define SIN_PROXY 1

#define SIN_ROUTER 2

typedef struct ether_arp ether_arp, *Pether_arp;

struct ether_arp {
    struct arphdr ea_hdr;
    u_char arp_sha[6];
    u_char arp_spa[4];
    u_char arp_tha[6];
    u_char arp_tpa[4];
};

typedef struct sockaddr_inarp sockaddr_inarp, *Psockaddr_inarp;

struct sockaddr_inarp {
    u_char sin_len;
    u_char sin_family;
    u_short sin_port;
    struct in_addr sin_addr;
    struct in_addr sin_srcaddr;
    u_short sin_tos;
    u_short sin_other;
};

#define LLC_8021D_LSAP 66

#define LLC_DISC 67

#define LLC_DISC_P 83

#define LLC_DM 15

#define LLC_DM_P 31

#define LLC_FRMR 135

#define LLC_FRMR_P 151

#define LLC_FRMRLEN 7

#define LLC_INFO 0

#define LLC_ISFRAMELEN 4

#define LLC_ISO_LSAP 254

#define LLC_REJ 9

#define LLC_RNR 5

#define LLC_RR 1

#define LLC_SABME 111

#define LLC_SABME_P 127

#define LLC_SNAP_LSAP 170

#define LLC_SNAPFRAMELEN 8

#define LLC_TEST 227

#define LLC_TEST_P 243

#define LLC_UA 99

#define LLC_UA_P 115

#define LLC_UFRAMELEN 3

#define LLC_UI 3

#define LLC_UI_P 19

#define LLC_X25_LSAP 126

#define LLC_XID 175

#define LLC_XID_BASIC_MINLEN 6

#define LLC_XID_CLASS_I 1

#define LLC_XID_CLASS_II 3

#define LLC_XID_CLASS_III 5

#define LLC_XID_CLASS_IV 7

#define LLC_XID_FORMAT_BASIC 129

#define LLC_XID_P 191

typedef struct _struct_2569 _struct_2569, *P_struct_2569;

struct _struct_2569 {
    u_int8_t control;
    u_int8_t format_id;
    u_int8_t class_id;
    u_int8_t window_x2;
};

typedef struct _struct_2570 _struct_2570, *P_struct_2570;

struct _struct_2570 {
    u_int8_t num_snd_x2;
    u_int8_t num_rcv_x2;
};

typedef struct _struct_2571 _struct_2571, *P_struct_2571;

struct _struct_2571 {
    u_int8_t control;
    u_int8_t num_rcv_x2;
};

typedef struct _struct_2572 _struct_2572, *P_struct_2572;

struct _struct_2572 {
    u_int8_t control;
    u_int8_t frmr_rej_pdu0;
    u_int8_t frmr_rej_pdu1;
    u_int8_t frmr_control;
    u_int8_t frmr_control_ext;
    u_int8_t frmr_cause;
};

typedef struct _struct_2573 _struct_2573, *P_struct_2573;

struct _struct_2573 {
    u_int8_t control;
    u_int8_t org_code[3];
    u_int16_t ether_type;
};

typedef struct _struct_2574 _struct_2574, *P_struct_2574;

struct _struct_2574 {
    u_int8_t control;
    u_int8_t control_ext;
};

typedef union _union_2568 _union_2568, *P_union_2568;

union _union_2568 {
    struct _struct_2569 type_u;
    struct _struct_2570 type_i;
    struct _struct_2571 type_s;
    struct _struct_2572 type_frmr;
    struct _struct_2573 type_snap;
    struct _struct_2574 type_raw;
};

typedef struct frmrinfo frmrinfo, *Pfrmrinfo;

struct frmrinfo {
    u_int8_t frmr_rej_pdu0;
    u_int8_t frmr_rej_pdu1;
    u_int8_t frmr_control;
    u_int8_t frmr_control_ext;
    u_int8_t frmr_cause;
};

typedef struct llc llc, *Pllc;

struct llc {
    u_int8_t llc_dsap;
    u_int8_t llc_ssap;
    union _union_2568 llc_un;
};

#define IFM_1000_CX 15

#define IFM_1000_LX 14

#define IFM_1000_SX 11

#define IFM_1000_T 16

#define IFM_100_FX 7

#define IFM_100_T2 10

#define IFM_100_T4 8

#define IFM_100_TX 6

#define IFM_100_VG 9

#define IFM_10_2 4

#define IFM_10_5 5

#define IFM_10_FL 13

#define IFM_10_STP 12

#define IFM_10_T 3

#define IFM_10G_CX4 20

#define IFM_10G_LR 19

#define IFM_10G_SR 18

#define IFM_10G_T 21

#define IFM_ACTIVE 2

#define IFM_AUTO 0

#define IFM_AVALID 1

#define IFM_EEE 8388608

#define IFM_ETHER 32

#define IFM_FDDI 96

#define IFM_FDDI_DA 256

#define IFM_FDDI_MMF 4

#define IFM_FDDI_SMF 3

#define IFM_FDDI_UTP 5

#define IFM_FDX 1048576

#define IFM_FLAG0 16777216

#define IFM_FLAG1 33554432

#define IFM_FLAG2 67108864

#define IFM_FLOW 4194304

#define IFM_GMASK 267386880

#define IFM_HDX 2097152

#define IFM_HPNA_1 17

#define IFM_IEEE80211 128

#define IFM_IEEE80211_ADHOC 256

#define IFM_IEEE80211_DS1 8

#define IFM_IEEE80211_DS11 7

#define IFM_IEEE80211_DS2 5

#define IFM_IEEE80211_DS22 9

#define IFM_IEEE80211_DS5 6

#define IFM_IEEE80211_FH1 3

#define IFM_IEEE80211_FH2 4

#define IFM_IMASK 4026531840

#define IFM_INST_MAX 15

#define IFM_ISHIFT 28

#define IFM_LOOP 134217728

#define IFM_MANUAL 1

#define IFM_NMASK 224

#define IFM_NONE 2

#define IFM_OMASK 65280

#define IFM_TMASK 31

#define IFM_TOK_ALLR 2048

#define IFM_TOK_AUTO 32768

#define IFM_TOK_CLASSIC 16384

#define IFM_TOK_DTR 8192

#define IFM_TOK_ETR 512

#define IFM_TOK_SRCRT 1024

#define IFM_TOK_STP100 7

#define IFM_TOK_STP16 4

#define IFM_TOK_STP4 3

#define IFM_TOK_UTP100 8

#define IFM_TOK_UTP16 6

#define IFM_TOK_UTP4 5

#define IFM_TOKEN 64

#define IFM_WAKESAMENET 4

typedef struct ifmedia_description ifmedia_description, *Pifmedia_description;

struct ifmedia_description {
    int ifmt_word;
    char * ifmt_string;
};

#define _NET_IF_MIB_H 1

#define DOT3COMPLIANCE_COLLS 2

#define DOT3COMPLIANCE_STATS 1

#define IFDATA_ADDRS 3

#define IFDATA_GENERAL 1

#define IFDATA_LINKSPECIFIC 2

#define IFDATA_MULTIADDRS 4

#define IFMIB_IFALLDATA 3

#define IFMIB_IFCOUNT 1

#define IFMIB_IFDATA 2

#define IFMIB_SYSTEM 1

#define NETLINK_GENERIC 0

typedef enum dot3Vendors {
    dot3VendorAMD=1,
    dot3VendorDigital=6,
    dot3VendorFujitsu=5,
    dot3VendorIntel=2,
    dot3VendorNational=4,
    dot3VendorWesternDigital=7
} dot3Vendors;

typedef enum enum_2580 {
    dot3ChipSetAMD7990=1,
    dot3ChipSetAMD79900=2,
    dot3ChipSetAMD79C940=3
} enum_2580;

typedef enum enum_2581 {
    dot3ChipSetIntel82557=3,
    dot3ChipSetIntel82586=1,
    dot3ChipSetIntel82596=2
} enum_2581;

typedef enum enum_2582 {
    dot3ChipSetNational8390=1,
    dot3ChipSetNationalSonic=2
} enum_2582;

typedef enum enum_2583 {
    dot3ChipSetFujitsu86950=1
} enum_2583;

typedef enum enum_2584 {
    dot3ChipSetDigitalDC21040=1,
    dot3ChipSetDigitalDC21041=3,
    dot3ChipSetDigitalDC21140=2,
    dot3ChipSetDigitalDC21140A=4,
    dot3ChipSetDigitalDC21142=5
} enum_2584;

typedef enum enum_2585 {
    dot3ChipSetWesternDigital83C690=1,
    dot3ChipSetWesternDigital83C790=2
} enum_2585;

typedef struct if_family_id if_family_id, *Pif_family_id;

struct if_family_id {
    u_int32_t iffmid_len;
    u_int32_t iffmid_id;
    char iffmid_str[1];
};

typedef struct ifmibdata ifmibdata, *Pifmibdata;

struct ifmibdata {
    char ifmd_name[16];
    uint ifmd_pcount;
    uint ifmd_flags;
    uint ifmd_snd_len;
    uint ifmd_snd_maxlen;
    uint ifmd_snd_drops;
    uint ifmd_filler[4];
    struct if_data64 ifmd_data;
};

typedef struct ifs_iso_8802_3 ifs_iso_8802_3, *Pifs_iso_8802_3;

struct ifs_iso_8802_3 {
    u_int32_t dot3StatsAlignmentErrors;
    u_int32_t dot3StatsFCSErrors;
    u_int32_t dot3StatsSingleCollisionFrames;
    u_int32_t dot3StatsMultipleCollisionFrames;
    u_int32_t dot3StatsSQETestErrors;
    u_int32_t dot3StatsDeferredTransmissions;
    u_int32_t dot3StatsLateCollisions;
    u_int32_t dot3StatsExcessiveCollisions;
    u_int32_t dot3StatsInternalMacTransmitErrors;
    u_int32_t dot3StatsCarrierSenseErrors;
    u_int32_t dot3StatsFrameTooLongs;
    u_int32_t dot3StatsInternalMacReceiveErrors;
    u_int32_t dot3StatsEtherChipSet;
    u_int32_t dot3StatsMissedFrames;
    u_int32_t dot3StatsCollFrequencies[16];
    u_int32_t dot3Compliance;
};

#define IFT_1822 2

#define IFT_AAL5 49

#define IFT_ARCNET 35

#define IFT_ARCNETPLUS 36

#define IFT_ATM 37

#define IFT_BRIDGE 209

#define IFT_CARP 248

#define IFT_CELLULAR 255

#define IFT_CEPT 19

#define IFT_DS3 30

#define IFT_ENC 244

#define IFT_EON 25

#define IFT_ETHER 6

#define IFT_FAITH 56

#define IFT_FDDI 15

#define IFT_FRELAY 32

#define IFT_FRELAYDCE 44

#define IFT_GIF 55

#define IFT_HDH1822 3

#define IFT_HIPPI 47

#define IFT_HSSI 46

#define IFT_HY 14

#define IFT_IEEE1394 144

#define IFT_IEEE8023ADLAG 136

#define IFT_ISDNBASIC 20

#define IFT_ISDNPRIMARY 21

#define IFT_ISO88022LLC 41

#define IFT_ISO88023 7

#define IFT_ISO88024 8

#define IFT_ISO88025 9

#define IFT_ISO88026 10

#define IFT_L2VLAN 135

#define IFT_LAPB 16

#define IFT_LOCALTALK 42

#define IFT_LOOP 24

#define IFT_MIOX25 38

#define IFT_MODEM 48

#define IFT_NSIP 27

#define IFT_OTHER 1

#define IFT_P10 12

#define IFT_P80 13

#define IFT_PARA 34

#define IFT_PDP 255

#define IFT_PFLOG 245

#define IFT_PFSYNC 246

#define IFT_PKTAP 254

#define IFT_PPP 23

#define IFT_PROPMUX 54

#define IFT_PROPVIRTUAL 53

#define IFT_PTPSERIAL 22

#define IFT_RS232 33

#define IFT_SDLC 17

#define IFT_SIP 31

#define IFT_SLIP 28

#define IFT_SMDSDXI 43

#define IFT_SMDSICIP 52

#define IFT_SONET 39

#define IFT_SONETPATH 50

#define IFT_SONETVT 51

#define IFT_STARLAN 11

#define IFT_STF 57

#define IFT_T1 18

#define IFT_ULTRA 29

#define IFT_V35 45

#define IFT_X25 5

#define IFT_X25DDN 4

#define IFT_X25PLE 40

#define IFT_XETHER 26

#define APPLE_IF_FAM_BOND 14

#define APPLE_IF_FAM_DISC 8

#define APPLE_IF_FAM_ETHERNET 2

#define APPLE_IF_FAM_FAITH 11

#define APPLE_IF_FAM_FIREWIRE 13

#define APPLE_IF_FAM_GIF 10

#define APPLE_IF_FAM_LOOPBACK 1

#define APPLE_IF_FAM_MDECAP 9

#define APPLE_IF_FAM_PPP 6

#define APPLE_IF_FAM_PVC 7

#define APPLE_IF_FAM_SLIP 3

#define APPLE_IF_FAM_STF 12

#define APPLE_IF_FAM_TUN 4

#define APPLE_IF_FAM_VLAN 5

#define IF_MAXMTU 65535

#define IF_MINMTU 72

#define IFNAMSIZ 16

typedef struct ifqueue ifqueue, *Pifqueue;

struct ifqueue {
    void * ifq_head;
    void * ifq_tail;
    int ifq_len;
    int ifq_maxlen;
    int ifq_drops;
};

typedef struct ifaddrs ifaddrs, *Pifaddrs;

struct ifaddrs {
    struct ifaddrs * ifa_next;
    char * ifa_name;
    uint ifa_flags;
    struct sockaddr * ifa_addr;
    struct sockaddr * ifa_netmask;
    struct sockaddr * ifa_dstaddr;
    void * ifa_data;
};

typedef struct ifmaddrs ifmaddrs, *Pifmaddrs;

struct ifmaddrs {
    struct ifmaddrs * ifma_next;
    struct sockaddr * ifma_name;
    struct sockaddr * ifma_addr;
    struct sockaddr * ifma_lladdr;
};

#define IGMP_ALLOW_NEW_SOURCES 5

#define IGMP_BLOCK_OLD_SOURCES 6

#define IGMP_CHANGE_TO_EXCLUDE_MODE 4

#define IGMP_CHANGE_TO_INCLUDE_MODE 3

#define IGMP_DO_NOTHING 0

#define IGMP_DVMRP 19

#define IGMP_GRPREC_HDRLEN 8

#define IGMP_HOST_LEAVE_MESSAGE 23

#define IGMP_HOST_MEMBERSHIP_QUERY 17

#define IGMP_MAX_HOST_REPORT_DELAY 10

#define IGMP_MINLEN 8

#define IGMP_MODE_IS_EXCLUDE 2

#define IGMP_MODE_IS_INCLUDE 1

#define IGMP_MTRACE_QUERY 31

#define IGMP_MTRACE_REPLY 30

#define IGMP_PIM 20

#define IGMP_TIMER_SCALE 10

#define IGMP_v1_HOST_MEMBERSHIP_REPORT 18

#define IGMP_V1V2_MAX_RI 10

#define IGMP_v2_HOST_MEMBERSHIP_REPORT 22

#define IGMP_V3_GENERAL_QUERY 1

#define IGMP_V3_GROUP_QUERY 2

#define IGMP_V3_GROUP_SOURCE_QUERY 3

#define IGMP_v3_HOST_MEMBERSHIP_REPORT 34

#define IGMP_V3_QUERY_MINLEN 12

#define IGMP_V3_REPORT_MAXRECS 65535

#define IGMP_V3_REPORT_MINLEN 8

typedef struct igmp igmp, *Pigmp;

struct igmp {
    u_char igmp_type;
    u_char igmp_code;
    u_short igmp_cksum;
    struct in_addr igmp_group;
};

typedef struct igmp_grouprec igmp_grouprec, *Pigmp_grouprec;

struct igmp_grouprec {
    u_char ig_type;
    u_char ig_datalen;
    u_short ig_numsrc;
    struct in_addr ig_group;
};

typedef struct igmp_report igmp_report, *Pigmp_report;

struct igmp_report {
    u_char ir_type;
    u_char ir_rsv1;
    u_short ir_cksum;
    u_short ir_rsv2;
    u_short ir_numgrps;
};

typedef struct igmpv3 igmpv3, *Pigmpv3;

struct igmpv3 {
    u_char igmp_type;
    u_char igmp_code;
    u_short igmp_cksum;
    struct in_addr igmp_group;
    u_char igmp_misc;
    u_char igmp_qqi;
    u_short igmp_numsrc;
};

#define IGMPCTL_MAXID 2

#define IGMPCTL_STATS 1

#define IGPS_VERSION3_LEN 168

#define IGPS_VERSION_3 3

typedef struct igmpstat igmpstat, *Pigmpstat;

struct igmpstat {
    u_int igps_rcv_total;
    u_int igps_rcv_tooshort;
    u_int igps_rcv_badsum;
    u_int igps_rcv_queries;
    u_int igps_rcv_badqueries;
    u_int igps_rcv_reports;
    u_int igps_rcv_badreports;
    u_int igps_rcv_ourreports;
    u_int igps_snd_reports;
};

typedef struct igmpstat_v3 igmpstat_v3, *Pigmpstat_v3;

struct igmpstat_v3 {
    uint32_t igps_version;
    uint32_t igps_len;
    uint64_t igps_rcv_total;
    uint64_t igps_rcv_tooshort;
    uint64_t igps_rcv_badttl;
    uint64_t igps_rcv_badsum;
    uint64_t igps_rcv_v1v2_queries;
    uint64_t igps_rcv_v3_queries;
    uint64_t igps_rcv_badqueries;
    uint64_t igps_rcv_gen_queries;
    uint64_t igps_rcv_group_queries;
    uint64_t igps_rcv_gsr_queries;
    uint64_t igps_drop_gsr_queries;
    uint64_t igps_rcv_reports;
    uint64_t igps_rcv_badreports;
    uint64_t igps_rcv_ourreports;
    uint64_t igps_rcv_nora;
    uint64_t igps_snd_reports;
    uint64_t __igps_pad[4];
};

#define __DARWIN_IPPORT_RESERVED 1024

#define IN_CLASSA_HOST 16777215

#define IN_CLASSA_MAX 128

#define IN_CLASSA_NET 4278190080

#define IN_CLASSA_NSHIFT 24

#define IN_CLASSB_HOST 65535

#define IN_CLASSB_MAX 65536

#define IN_CLASSB_NET 4294901760

#define IN_CLASSB_NSHIFT 16

#define IN_CLASSC_HOST 255

#define IN_CLASSC_NET 4294967040

#define IN_CLASSC_NSHIFT 8

#define IN_CLASSD_HOST 268435455

#define IN_CLASSD_NET 4026531840

#define IN_CLASSD_NSHIFT 28

#define IN_LINKLOCALNETNUM 2851995648

#define IN_LOOPBACKNET 127

#define INADDR_ALLHOSTS_GROUP 3758096385

#define INADDR_ALLMDNS_GROUP 3758096635

#define INADDR_ALLRPTS_GROUP 3758096406

#define INADDR_ALLRTRS_GROUP 3758096386

#define INADDR_ANY 0

#define INADDR_BROADCAST 4294967295

#define INADDR_CARP_GROUP 3758096402

#define INADDR_LOOPBACK 2130706433

#define INADDR_MAX_LOCAL_GROUP 3758096639

#define INADDR_NONE 4294967295

#define INADDR_PFSYNC_GROUP 3758096624

#define INADDR_UNSPEC_GROUP 3758096384

#define INET_ADDRSTRLEN 16

#define IP_ADD_MEMBERSHIP 12

#define IP_ADD_SOURCE_MEMBERSHIP 70

#define IP_BLOCK_SOURCE 72

#define IP_BOUND_IF 25

#define IP_DEFAULT_MULTICAST_LOOP 1

#define IP_DEFAULT_MULTICAST_TTL 1

#define IP_DROP_MEMBERSHIP 13

#define IP_DROP_SOURCE_MEMBERSHIP 71

#define IP_DUMMYNET_CONFIGURE 60

#define IP_DUMMYNET_DEL 61

#define IP_DUMMYNET_FLUSH 62

#define IP_DUMMYNET_GET 64

#define IP_FAITH 22

#define IP_FW_ADD 40

#define IP_FW_DEL 41

#define IP_FW_FLUSH 42

#define IP_FW_GET 44

#define IP_FW_RESETLOG 45

#define IP_FW_ZERO 43

#define IP_HDRINCL 2

#define IP_IPSEC_POLICY 21

#define IP_MAX_GROUP_SRC_FILTER 512

#define IP_MAX_MEMBERSHIPS 4095

#define IP_MAX_SOCK_MUTE_FILTER 128

#define IP_MAX_SOCK_SRC_FILTER 128

#define IP_MIN_MEMBERSHIPS 31

#define IP_MSFILTER 74

#define IP_MULTICAST_IF 9

#define IP_MULTICAST_IFINDEX 66

#define IP_MULTICAST_LOOP 11

#define IP_MULTICAST_TTL 10

#define IP_MULTICAST_VIF 14

#define IP_NAT__XXX 55

#define IP_OLD_FW_ADD 50

#define IP_OLD_FW_DEL 51

#define IP_OLD_FW_FLUSH 52

#define IP_OLD_FW_GET 54

#define IP_OLD_FW_RESETLOG 56

#define IP_OLD_FW_ZERO 53

#define IP_OPTIONS 1

#define IP_PKTINFO 26

#define IP_PORTRANGE 19

#define IP_PORTRANGE_DEFAULT 0

#define IP_PORTRANGE_HIGH 1

#define IP_PORTRANGE_LOW 2

#define IP_RECVDSTADDR 7

#define IP_RECVIF 20

#define IP_RECVOPTS 5

#define IP_RECVPKTINFO 26

#define IP_RECVRETOPTS 6

#define IP_RECVTTL 24

#define IP_RETOPTS 8

#define IP_RSVP_OFF 16

#define IP_RSVP_ON 15

#define IP_RSVP_VIF_OFF 18

#define IP_RSVP_VIF_ON 17

#define IP_STRIPHDR 23

#define IP_TOS 3

#define IP_TRAFFIC_MGT_BACKGROUND 65

#define IP_TTL 4

#define IP_UNBLOCK_SOURCE 73

#define IPCTL_ACCEPTSOURCEROUTE 13

#define IPCTL_DEFTTL 3

#define IPCTL_DIRECTEDBROADCAST 9

#define IPCTL_FASTFORWARDING 14

#define IPCTL_FORWARDING 1

#define IPCTL_GIF_TTL 16

#define IPCTL_INTRQDROPS 11

#define IPCTL_INTRQMAXLEN 10

#define IPCTL_KEEPFAITH 15

#define IPCTL_MAXID 17

#define IPCTL_RTEXPIRE 5

#define IPCTL_RTMAXCACHE 7

#define IPCTL_RTMINEXPIRE 6

#define IPCTL_SENDREDIRECTS 2

#define IPCTL_SOURCEROUTE 8

#define IPCTL_STATS 12

#define IPPORT_HIFIRSTAUTO 49152

#define IPPORT_HILASTAUTO 65535

#define IPPORT_RESERVED 1024

#define IPPORT_RESERVEDSTART 600

#define IPPORT_USERRESERVED 5000

#define IPPROTO_3PC 34

#define IPPROTO_ADFS 68

#define IPPROTO_AH 51

#define IPPROTO_AHIP 61

#define IPPROTO_APES 99

#define IPPROTO_ARGUS 13

#define IPPROTO_AX25 93

#define IPPROTO_BHA 49

#define IPPROTO_BLT 30

#define IPPROTO_BRSATMON 76

#define IPPROTO_CFTP 62

#define IPPROTO_CHAOS 16

#define IPPROTO_CMTP 38

#define IPPROTO_CPHB 73

#define IPPROTO_CPNX 72

#define IPPROTO_DDP 37

#define IPPROTO_DGP 86

#define IPPROTO_DIVERT 254

#define IPPROTO_DONE 257

#define IPPROTO_DSTOPTS 60

#define IPPROTO_EGP 8

#define IPPROTO_EMCON 14

#define IPPROTO_ENCAP 98

#define IPPROTO_EON 80

#define IPPROTO_ESP 50

#define IPPROTO_ETHERIP 97

#define IPPROTO_FRAGMENT 44

#define IPPROTO_GGP 3

#define IPPROTO_GMTP 100

#define IPPROTO_GRE 47

#define IPPROTO_HELLO 63

#define IPPROTO_HMP 20

#define IPPROTO_HOPOPTS 0

#define IPPROTO_ICMP 1

#define IPPROTO_ICMPV6 58

#define IPPROTO_IDP 22

#define IPPROTO_IDPR 35

#define IPPROTO_IDRP 45

#define IPPROTO_IGMP 2

#define IPPROTO_IGP 85

#define IPPROTO_IGRP 88

#define IPPROTO_IL 40

#define IPPROTO_INLSP 52

#define IPPROTO_INP 32

#define IPPROTO_IP 0

#define IPPROTO_IPCOMP 108

#define IPPROTO_IPCV 71

#define IPPROTO_IPEIP 94

#define IPPROTO_IPIP 4

#define IPPROTO_IPPC 67

#define IPPROTO_IPV4 4

#define IPPROTO_IPV6 41

#define IPPROTO_IRTP 28

#define IPPROTO_KRYPTOLAN 65

#define IPPROTO_LARP 91

#define IPPROTO_LEAF1 25

#define IPPROTO_LEAF2 26

#define IPPROTO_MAX 256

#define IPPROTO_MAXID 52

#define IPPROTO_MEAS 19

#define IPPROTO_MHRP 48

#define IPPROTO_MICP 95

#define IPPROTO_MTP 92

#define IPPROTO_MUX 18

#define IPPROTO_ND 77

#define IPPROTO_NHRP 54

#define IPPROTO_NONE 59

#define IPPROTO_NSP 31

#define IPPROTO_NVPII 11

#define IPPROTO_OSPFIGP 89

#define IPPROTO_PGM 113

#define IPPROTO_PIGP 9

#define IPPROTO_PIM 103

#define IPPROTO_PRM 21

#define IPPROTO_PUP 12

#define IPPROTO_PVP 75

#define IPPROTO_RAW 255

#define IPPROTO_RCCMON 10

#define IPPROTO_RDP 27

#define IPPROTO_ROUTING 43

#define IPPROTO_RSVP 46

#define IPPROTO_RVD 66

#define IPPROTO_SATEXPAK 64

#define IPPROTO_SATMON 69

#define IPPROTO_SCCSP 96

#define IPPROTO_SCTP 132

#define IPPROTO_SDRP 42

#define IPPROTO_SEP 33

#define IPPROTO_SRPC 90

#define IPPROTO_ST 7

#define IPPROTO_SVMTP 82

#define IPPROTO_SWIPE 53

#define IPPROTO_TCF 87

#define IPPROTO_TCP 6

#define IPPROTO_TP 29

#define IPPROTO_TPXX 39

#define IPPROTO_TRUNK1 23

#define IPPROTO_TRUNK2 24

#define IPPROTO_TTP 84

#define IPPROTO_UDP 17

#define IPPROTO_VINES 83

#define IPPROTO_VISA 70

#define IPPROTO_VMTP 81

#define IPPROTO_WBEXPAK 79

#define IPPROTO_WBMON 78

#define IPPROTO_WSN 74

#define IPPROTO_XNET 15

#define IPPROTO_XTP 36

#define MCAST_BLOCK_SOURCE 84

#define MCAST_EXCLUDE 2

#define MCAST_INCLUDE 1

#define MCAST_JOIN_GROUP 80

#define MCAST_JOIN_SOURCE_GROUP 82

#define MCAST_LEAVE_GROUP 81

#define MCAST_LEAVE_SOURCE_GROUP 83

#define MCAST_UNBLOCK_SOURCE 85

#define MCAST_UNDEFINED 0

typedef struct __msfilterreq __msfilterreq, *P__msfilterreq;

struct __msfilterreq {
    uint32_t msfr_ifindex;
    uint32_t msfr_fmode;
    uint32_t msfr_nsrcs;
    uint32_t __msfr_align;
    struct sockaddr_storage msfr_group;
    struct sockaddr_storage * msfr_srcs;
};

typedef struct group_req group_req, *Pgroup_req;

struct group_req {
    uint32_t gr_interface;
    struct sockaddr_storage gr_group;
};

typedef struct group_source_req group_source_req, *Pgroup_source_req;

struct group_source_req {
    uint32_t gsr_interface;
    struct sockaddr_storage gsr_group;
    struct sockaddr_storage gsr_source;
};

typedef struct in_pktinfo in_pktinfo, *Pin_pktinfo;

struct in_pktinfo {
    uint ipi_ifindex;
    struct in_addr ipi_spec_dst;
    struct in_addr ipi_addr;
};

typedef struct ip_mreq ip_mreq, *Pip_mreq;

struct ip_mreq {
    struct in_addr imr_multiaddr;
    struct in_addr imr_interface;
};

typedef struct ip_mreq_source ip_mreq_source, *Pip_mreq_source;

struct ip_mreq_source {
    struct in_addr imr_multiaddr;
    struct in_addr imr_sourceaddr;
    struct in_addr imr_interface;
};

typedef struct ip_mreqn ip_mreqn, *Pip_mreqn;

struct ip_mreqn {
    struct in_addr imr_multiaddr;
    struct in_addr imr_address;
    int imr_ifindex;
};

typedef struct ip_opts ip_opts, *Pip_opts;

struct ip_opts {
    struct in_addr ip_dst;
    char ip_opts[40];
};

typedef struct sockaddr_in sockaddr_in, *Psockaddr_in;

struct sockaddr_in {
    __uint8_t sin_len;
    sa_family_t sin_family;
    in_port_t sin_port;
    struct in_addr sin_addr;
    char sin_zero[8];
};

#define __IPV6_ADDR_SCOPE_GLOBAL 14

#define __IPV6_ADDR_SCOPE_INTFACELOCAL 1

#define __IPV6_ADDR_SCOPE_LINKLOCAL 2

#define __IPV6_ADDR_SCOPE_NODELOCAL 1

#define __IPV6_ADDR_SCOPE_ORGLOCAL 8

#define __IPV6_ADDR_SCOPE_SITELOCAL 5

#define ICMP6_FILTER 18

#define ICMPV6CTL_ND6_ONLINKNSRFC4861 50

#define INET6_ADDRSTRLEN 46

#define IPV6_2292DSTOPTS 23

#define IPV6_2292HOPLIMIT 20

#define IPV6_2292HOPOPTS 22

#define IPV6_2292NEXTHOP 21

#define IPV6_2292PKTINFO 19

#define IPV6_2292PKTOPTIONS 25

#define IPV6_2292RTHDR 24

#define IPV6_BINDV6ONLY 27

#define IPV6_BOUND_IF 125

#define IPV6_CHECKSUM 26

#define IPV6_DEFAULT_MULTICAST_HOPS 1

#define IPV6_DEFAULT_MULTICAST_LOOP 1

#define IPV6_FAITH 29

#define IPV6_FW_ADD 30

#define IPV6_FW_DEL 31

#define IPV6_FW_FLUSH 32

#define IPV6_FW_GET 34

#define IPV6_FW_ZERO 33

#define IPV6_IPSEC_POLICY 28

#define IPV6_JOIN_GROUP 12

#define IPV6_LEAVE_GROUP 13

#define IPV6_MAX_GROUP_SRC_FILTER 512

#define IPV6_MAX_MEMBERSHIPS 4095

#define IPV6_MAX_SOCK_SRC_FILTER 128

#define IPV6_MIN_MEMBERSHIPS 31

#define IPV6_MULTICAST_HOPS 10

#define IPV6_MULTICAST_IF 9

#define IPV6_MULTICAST_LOOP 11

#define IPV6_PORTRANGE 14

#define IPV6_PORTRANGE_DEFAULT 0

#define IPV6_PORTRANGE_HIGH 1

#define IPV6_PORTRANGE_LOW 2

#define IPV6_RECVTCLASS 35

#define IPV6_RTHDR_LOOSE 0

#define IPV6_RTHDR_STRICT 1

#define IPV6_RTHDR_TYPE_0 0

#define IPV6_SOCKOPT_RESERVED1 3

#define IPV6_TCLASS 36

#define IPV6_UNICAST_HOPS 4

#define IPV6_V6ONLY 27

#define IPV6CTL_ACCEPT_RTADV 12

#define IPV6CTL_ADDRCTLPOLICY 38

#define IPV6CTL_AUTO_FLOWLABEL 17

#define IPV6CTL_AUTO_LINKLOCAL 35

#define IPV6CTL_DAD_COUNT 16

#define IPV6CTL_DEFHLIM 3

#define IPV6CTL_DEFMCASTHLIM 18

#define IPV6CTL_FORWARDING 1

#define IPV6CTL_FORWSRCRT 5

#define IPV6CTL_GIF_HLIM 19

#define IPV6CTL_HDRNESTLIMIT 15

#define IPV6CTL_KAME_VERSION 20

#define IPV6CTL_KEEPFAITH 13

#define IPV6CTL_LOG_INTERVAL 14

#define IPV6CTL_MAXDYNROUTES 49

#define IPV6CTL_MAXFRAGPACKETS 9

#define IPV6CTL_MAXFRAGS 41

#define IPV6CTL_MAXID 51

#define IPV6CTL_MAXIFDEFROUTERS 48

#define IPV6CTL_MAXIFPREFIXES 47

#define IPV6CTL_MCAST_PMTU 44

#define IPV6CTL_MRTPROTO 8

#define IPV6CTL_MRTSTATS 7

#define IPV6CTL_NEIGHBORGCTHRESH 46

#define IPV6CTL_PREFER_TEMPADDR 37

#define IPV6CTL_RIP6STATS 36

#define IPV6CTL_RR_PRUNE 22

#define IPV6CTL_RTEXPIRE 25

#define IPV6CTL_RTMAXCACHE 27

#define IPV6CTL_RTMINEXPIRE 26

#define IPV6CTL_SENDREDIRECTS 2

#define IPV6CTL_SOURCECHECK 10

#define IPV6CTL_SOURCECHECK_LOGINT 11

#define IPV6CTL_STATS 6

#define IPV6CTL_TEMPPLTIME 33

#define IPV6CTL_TEMPVLTIME 34

#define IPV6CTL_USE_DEFAULTZONE 39

#define IPV6CTL_USE_DEPRECATED 21

#define IPV6CTL_USETEMPADDR 32

#define IPV6CTL_V6ONLY 24

#define IPV6PORT_ANONMAX 65535

#define IPV6PORT_ANONMIN 49152

#define IPV6PORT_RESERVED 1024

#define IPV6PORT_RESERVEDMAX 1023

#define IPV6PORT_RESERVEDMIN 600

#define IPV6PROTO_MAXID 104

typedef struct in6_pktinfo in6_pktinfo, *Pin6_pktinfo;

struct in6_pktinfo {
    struct in6_addr ipi6_addr;
    uint ipi6_ifindex;
};

typedef struct ip6_mtuinfo ip6_mtuinfo, *Pip6_mtuinfo;

typedef struct sockaddr_in6 sockaddr_in6, *Psockaddr_in6;

struct sockaddr_in6 {
    __uint8_t sin6_len;
    sa_family_t sin6_family;
    in_port_t sin6_port;
    __uint32_t sin6_flowinfo;
    struct in6_addr sin6_addr;
    __uint32_t sin6_scope_id;
};

struct ip6_mtuinfo {
    struct sockaddr_in6 ip6m_addr;
    uint32_t ip6m_mtu;
};

typedef struct ipv6_mreq ipv6_mreq, *Pipv6_mreq;

struct ipv6_mreq {
    struct in6_addr ipv6mr_multiaddr;
    uint ipv6mr_interface;
};

#define IN6_IFF_ANYCAST 1

#define IN6_IFF_AUTOCONF 64

#define IN6_IFF_DADPROGRESS 514

#define IN6_IFF_DEPRECATED 16

#define IN6_IFF_DETACHED 8

#define IN6_IFF_DUPLICATED 4

#define IN6_IFF_DYNAMIC 256

#define IN6_IFF_NODAD 32

#define IN6_IFF_NOPFX 32768

#define IN6_IFF_NOTREADY 6

#define IN6_IFF_OPTIMISTIC 512

#define IN6_IFF_SECURED 1024

#define IN6_IFF_TEMPORARY 128

#define IN6_IFF_TENTATIVE 2

#define IN6_PREFIX_ND 1

#define IN6_PREFIX_RR 2

#define KEV_INET6_ADDR_DELETED 3

#define KEV_INET6_CHANGED_ADDR 2

#define KEV_INET6_DEFROUTER 6

#define KEV_INET6_NEW_LL_ADDR 4

#define KEV_INET6_NEW_RTADV_ADDR 5

#define KEV_INET6_NEW_USER_ADDR 1

#define KEV_INET6_SUBCLASS 6

#define PR_ORIG_KERNEL 3

#define PR_ORIG_RA 0

#define PR_ORIG_RR 1

#define PR_ORIG_STATIC 2

typedef union _union_2703 _union_2703, *P_union_2703;

typedef struct in6_addrlifetime in6_addrlifetime, *Pin6_addrlifetime;

typedef struct in6_ifstat in6_ifstat, *Pin6_ifstat;

typedef struct icmp6_ifstat icmp6_ifstat, *Picmp6_ifstat;

struct icmp6_ifstat {
    u_quad_t ifs6_in_msg;
    u_quad_t ifs6_in_error;
    u_quad_t ifs6_in_dstunreach;
    u_quad_t ifs6_in_adminprohib;
    u_quad_t ifs6_in_timeexceed;
    u_quad_t ifs6_in_paramprob;
    u_quad_t ifs6_in_pkttoobig;
    u_quad_t ifs6_in_echo;
    u_quad_t ifs6_in_echoreply;
    u_quad_t ifs6_in_routersolicit;
    u_quad_t ifs6_in_routeradvert;
    u_quad_t ifs6_in_neighborsolicit;
    u_quad_t ifs6_in_neighboradvert;
    u_quad_t ifs6_in_redirect;
    u_quad_t ifs6_in_mldquery;
    u_quad_t ifs6_in_mldreport;
    u_quad_t ifs6_in_mlddone;
    u_quad_t ifs6_out_msg;
    u_quad_t ifs6_out_error;
    u_quad_t ifs6_out_dstunreach;
    u_quad_t ifs6_out_adminprohib;
    u_quad_t ifs6_out_timeexceed;
    u_quad_t ifs6_out_paramprob;
    u_quad_t ifs6_out_pkttoobig;
    u_quad_t ifs6_out_echo;
    u_quad_t ifs6_out_echoreply;
    u_quad_t ifs6_out_routersolicit;
    u_quad_t ifs6_out_routeradvert;
    u_quad_t ifs6_out_neighborsolicit;
    u_quad_t ifs6_out_neighboradvert;
    u_quad_t ifs6_out_redirect;
    u_quad_t ifs6_out_mldquery;
    u_quad_t ifs6_out_mldreport;
    u_quad_t ifs6_out_mlddone;
};

struct in6_ifstat {
    u_quad_t ifs6_in_receive;
    u_quad_t ifs6_in_hdrerr;
    u_quad_t ifs6_in_toobig;
    u_quad_t ifs6_in_noroute;
    u_quad_t ifs6_in_addrerr;
    u_quad_t ifs6_in_protounknown;
    u_quad_t ifs6_in_truncated;
    u_quad_t ifs6_in_discard;
    u_quad_t ifs6_in_deliver;
    u_quad_t ifs6_out_forward;
    u_quad_t ifs6_out_request;
    u_quad_t ifs6_out_discard;
    u_quad_t ifs6_out_fragok;
    u_quad_t ifs6_out_fragfail;
    u_quad_t ifs6_out_fragcreat;
    u_quad_t ifs6_reass_reqd;
    u_quad_t ifs6_reass_ok;
    u_quad_t ifs6_reass_fail;
    u_quad_t ifs6_in_mcast;
    u_quad_t ifs6_out_mcast;
};

struct in6_addrlifetime {
    time_t ia6t_expire;
    time_t ia6t_preferred;
    u_int32_t ia6t_vltime;
    u_int32_t ia6t_pltime;
};

union _union_2703 {
    struct sockaddr_in6 ifru_addr;
    struct sockaddr_in6 ifru_dstaddr;
    int ifru_flags;
    int ifru_flags6;
    int ifru_metric;
    int ifru_intval;
    caddr_t ifru_data;
    struct in6_addrlifetime ifru_lifetime;
    struct in6_ifstat ifru_stat;
    struct icmp6_ifstat ifru_icmp6stat;
    u_int32_t ifru_scope_id[16];
};

typedef union anon__struct_2715_bitfield_1 anon__struct_2715_bitfield_1, *Panon__struct_2715_bitfield_1;

union anon__struct_2715_bitfield_1 {
    u_char onlink:1; /* : bits 0 */
    u_char autonomous:1; /* : bits 1 */
    u_char reserved:6; /* : bits 2-7 */
};

typedef union anon__struct_2716_bitfield_1 anon__struct_2716_bitfield_1, *Panon__struct_2716_bitfield_1;

union anon__struct_2716_bitfield_1 {
    u_char decrvalid:1; /* : bits 0 */
    u_char decrprefd:1; /* : bits 1 */
    u_char reserved:6; /* : bits 2-7 */
};

typedef union anon__struct_2721_bitfield_1 anon__struct_2721_bitfield_1, *Panon__struct_2721_bitfield_1;

union anon__struct_2721_bitfield_1 {
    u_char onlink:1; /* : bits 0 */
    u_char autonomous:1; /* : bits 1 */
    u_char reserved:6; /* : bits 2-7 */
};

typedef struct in6_addrpolicy in6_addrpolicy, *Pin6_addrpolicy;

struct in6_addrpolicy {
    struct sockaddr_in6 addr;
    struct sockaddr_in6 addrmask;
    int preced;
    int label;
    u_quad_t use;
};

typedef struct in6_aliasreq in6_aliasreq, *Pin6_aliasreq;

struct in6_aliasreq {
    char ifra_name[16];
    struct sockaddr_in6 ifra_addr;
    struct sockaddr_in6 ifra_broadaddr;
    struct sockaddr_in6 ifra_prefixmask;
    int ifra_flags;
    struct in6_addrlifetime ifra_lifetime;
};

typedef struct in6_ifreq in6_ifreq, *Pin6_ifreq;

struct in6_ifreq {
    char ifr_name[16];
    union _union_2703 ifr_ifru;
};

typedef struct in6_prefixreq in6_prefixreq, *Pin6_prefixreq;

typedef struct in6_prflags in6_prflags, *Pin6_prflags;

typedef struct prf_ra prf_ra, *Pprf_ra;

typedef struct prf_rr prf_rr, *Pprf_rr;

struct prf_rr {
    union anon__struct_2716_bitfield_1 field_0x0;
};

struct prf_ra {
    union anon__struct_2715_bitfield_1 field_0x0;
};

struct in6_prflags {
    struct prf_ra prf_ra;
    u_char prf_reserved1;
    u_short prf_reserved2;
    struct prf_rr prf_rr;
    u_char prf_reserved3;
    u_short prf_reserved4;
};

struct in6_prefixreq {
    char ipr_name[16];
    u_char ipr_origin;
    u_char ipr_plen;
    u_int32_t ipr_vltime;
    u_int32_t ipr_pltime;
    struct in6_prflags ipr_flags;
    struct sockaddr_in6 ipr_prefix;
};

typedef struct in6_rrenumreq in6_rrenumreq, *Pin6_rrenumreq;

typedef struct irr_raflagmask irr_raflagmask, *Pirr_raflagmask;

struct irr_raflagmask {
    union anon__struct_2721_bitfield_1 field_0x0;
};

struct in6_rrenumreq {
    char irr_name[16];
    u_char irr_origin;
    u_char irr_m_len;
    u_char irr_m_minlen;
    u_char irr_m_maxlen;
    u_char irr_u_uselen;
    u_char irr_u_keeplen;
    struct irr_raflagmask irr_raflagmask;
    u_int32_t irr_vltime;
    u_int32_t irr_pltime;
    struct in6_prflags irr_flags;
    struct sockaddr_in6 irr_matchprefix;
    struct sockaddr_in6 irr_useprefix;
};

typedef struct kev_in6_addrlifetime kev_in6_addrlifetime, *Pkev_in6_addrlifetime;

struct kev_in6_addrlifetime {
    u_int32_t ia6t_expire;
    u_int32_t ia6t_preferred;
    u_int32_t ia6t_vltime;
    u_int32_t ia6t_pltime;
};

typedef struct kev_in6_data kev_in6_data, *Pkev_in6_data;

struct kev_in6_data {
    struct net_event_data link_data;
    struct sockaddr_in6 ia_addr;
    struct sockaddr_in6 ia_net;
    struct sockaddr_in6 ia_dstaddr;
    struct sockaddr_in6 ia_prefixmask;
    u_int32_t ia_plen;
    u_int32_t ia6_flags;
    struct kev_in6_addrlifetime ia_lifetime;
};

#define IN6P_BINDV6ONLY 16777216

#define IN6P_IPV6_V6ONLY 32768

#define INP_ANONPORT 64

#define INP_IPV4 1

#define INP_IPV6 2

typedef struct _inpcb_list_entry _inpcb_list_entry, *P_inpcb_list_entry;

struct _inpcb_list_entry {
    u_int32_t le_next;
    u_int32_t le_prev;
};

typedef struct _struct_2821 _struct_2821, *P_struct_2821;

struct _struct_2821 {
    u_char inp4_ip_tos;
    u_int32_t inp4_options;
    u_int32_t inp4_moptions;
};

typedef struct _struct_2822 _struct_2822, *P_struct_2822;


/* WARNING! conflicting data type names: /types.h/ushort - /ushort */

struct _struct_2822 {
    u_int32_t inp6_options;
    u_int8_t inp6_hlim;
    u_int8_t unused_uint8_1;
    ushort unused_uint16_1;
    u_int32_t inp6_outputopts;
    u_int32_t inp6_moptions;
    u_int32_t inp6_icmp6filt;
    int inp6_cksum;
    u_short inp6_ifindex;
    short inp6_hops;
};

typedef struct _struct_2836 _struct_2836, *P_struct_2836;

struct _struct_2836 {
    u_char inp4_ip_tos;
};

typedef struct _struct_2837 _struct_2837, *P_struct_2837;

struct _struct_2837 {
    u_int8_t inp6_hlim;
    int inp6_cksum;
    u_short inp6_ifindex;
    short inp6_hops;
};

typedef union _union_2814 _union_2814, *P_union_2814;

typedef struct in_addr_4in6 in_addr_4in6, *Pin_addr_4in6;

struct in_addr_4in6 {
    u_int32_t ia46_pad32[3];
    struct in_addr ia46_addr4;
};

union _union_2814 {
    struct in_addr_4in6 inp46_foreign;
    struct in6_addr inp6_foreign;
};

typedef union _union_2817 _union_2817, *P_union_2817;

union _union_2817 {
    struct in_addr_4in6 inp46_local;
    struct in6_addr inp6_local;
};

typedef union _union_2820 _union_2820, *P_union_2820;

union _union_2820 {
    u_char inp4_route[20];
    u_char inp6_route[32];
};

typedef union _union_2830 _union_2830, *P_union_2830;

union _union_2830 {
    struct in_addr_4in6 inp46_foreign;
    struct in6_addr inp6_foreign;
};

typedef union _union_2833 _union_2833, *P_union_2833;

union _union_2833 {
    struct in_addr_4in6 inp46_local;
    struct in6_addr inp6_local;
};

typedef u_quad_t inp_gen_t;

typedef struct inpcb inpcb, *Pinpcb;

struct inpcb {
    struct _inpcb_list_entry inp_hash;
    struct in_addr reserved1;
    struct in_addr reserved2;
    u_short inp_fport;
    u_short inp_lport;
    struct _inpcb_list_entry inp_list;
    u_int32_t inp_ppcb;
    u_int32_t inp_pcbinfo;
    u_int32_t inp_socket;
    u_char nat_owner;
    u_int32_t nat_cookie;
    struct _inpcb_list_entry inp_portlist;
    u_int32_t inp_phd;
    inp_gen_t inp_gencnt;
    int inp_flags;
    u_int32_t inp_flow;
    u_char inp_vflag;
    u_char inp_ip_ttl;
    u_char inp_ip_p;
    union _union_2814 inp_dependfaddr;
    union _union_2817 inp_dependladdr;
    union _union_2820 inp_dependroute;
    struct _struct_2821 inp_depend4;
    struct _struct_2822 inp_depend6;
    int hash_element;
    u_int32_t inp_saved_ppcb;
    u_int32_t inp_sp;
    u_int32_t reserved[3];
};

typedef struct inpcb64_list_entry inpcb64_list_entry, *Pinpcb64_list_entry;

struct inpcb64_list_entry {
    u_int64_t le_next;
    u_int64_t le_prev;
};

typedef struct inpcbinfo inpcbinfo, *Pinpcbinfo;

struct inpcbinfo {
};

typedef struct inpcbpolicy inpcbpolicy, *Pinpcbpolicy;

struct inpcbpolicy {
};

typedef struct inpcbport inpcbport, *Pinpcbport;

struct inpcbport {
};

typedef struct ip6_moptions ip6_moptions, *Pip6_moptions;

struct ip6_moptions {
};

typedef struct ip6_pktopts ip6_pktopts, *Pip6_pktopts;

struct ip6_pktopts {
};

typedef struct mbuf mbuf, *Pmbuf;

struct mbuf {
};

typedef struct xinpcb xinpcb, *Pxinpcb;

typedef struct xsocket xsocket, *Pxsocket;

typedef struct xsockbuf xsockbuf, *Pxsockbuf;

struct xsockbuf {
    u_int32_t sb_cc;
    u_int32_t sb_hiwat;
    u_int32_t sb_mbcnt;
    u_int32_t sb_mbmax;
    int32_t sb_lowat;
    short sb_flags;
    short sb_timeo;
};

struct xsocket {
    u_int32_t xso_len;
    u_int32_t xso_so;
    short so_type;
    short so_options;
    short so_linger;
    short so_state;
    u_int32_t so_pcb;
    int xso_protocol;
    int xso_family;
    short so_qlen;
    short so_incqlen;
    short so_qlimit;
    short so_timeo;
    u_short so_error;
    pid_t so_pgid;
    u_int32_t so_oobmark;
    struct xsockbuf so_rcv;
    struct xsockbuf so_snd;
    uid_t so_uid;
};

struct xinpcb {
    u_int32_t xi_len;
    struct inpcb xi_inp;
    struct xsocket xi_socket;
    u_quad_t xi_alignment_hack;
};

typedef struct xinpcb64 xinpcb64, *Pxinpcb64;

typedef struct xsocket64 xsocket64, *Pxsocket64;

struct xsocket64 {
    u_int32_t xso_len;
    u_int64_t xso_so;
    short so_type;
    short so_options;
    short so_linger;
    short so_state;
    u_int64_t so_pcb;
    int xso_protocol;
    int xso_family;
    short so_qlen;
    short so_incqlen;
    short so_qlimit;
    short so_timeo;
    u_short so_error;
    pid_t so_pgid;
    u_int32_t so_oobmark;
    struct xsockbuf so_rcv;
    struct xsockbuf so_snd;
    uid_t so_uid;
};

struct xinpcb64 {
    u_int64_t xi_len;
    u_int64_t xi_inpp;
    u_short inp_fport;
    u_short inp_lport;
    struct inpcb64_list_entry inp_list;
    u_int64_t inp_ppcb;
    u_int64_t inp_pcbinfo;
    struct inpcb64_list_entry inp_portlist;
    u_int64_t inp_phd;
    inp_gen_t inp_gencnt;
    int inp_flags;
    u_int32_t inp_flow;
    u_char inp_vflag;
    u_char inp_ip_ttl;
    u_char inp_ip_p;
    union _union_2830 inp_dependfaddr;
    union _union_2833 inp_dependladdr;
    struct _struct_2836 inp_depend4;
    struct _struct_2837 inp_depend6;
    struct xsocket64 xi_socket;
    u_quad_t xi_alignment_hack;
};

typedef struct xinpgen xinpgen, *Pxinpgen;

typedef u_quad_t so_gen_t;

struct xinpgen {
    u_int32_t xig_len;
    u_int xig_count;
    inp_gen_t xig_gen;
    so_gen_t xig_sogen;
};

typedef __uint32_t n_long;

typedef __uint16_t n_short;

typedef __uint32_t n_time;

#define KEV_INET_ADDR_DELETED 3

#define KEV_INET_ARPCOLLISION 7

#define KEV_INET_CHANGED_ADDR 2

#define KEV_INET_NEW_ADDR 1

#define KEV_INET_PORTINUSE 8

#define KEV_INET_SIFBRDADDR 5

#define KEV_INET_SIFDSTADDR 4

#define KEV_INET_SIFNETMASK 6

#define KEV_INET_SUBCLASS 1

typedef struct in_aliasreq in_aliasreq, *Pin_aliasreq;

struct in_aliasreq {
    char ifra_name[16];
    struct sockaddr_in ifra_addr;
    struct sockaddr_in ifra_broadaddr;
    struct sockaddr_in ifra_mask;
};

typedef struct kev_in_collision kev_in_collision, *Pkev_in_collision;

struct kev_in_collision {
    struct net_event_data link_data;
    struct in_addr ia_ipaddr;
    u_char hw_len;
    u_char[0] hw_addr;
};

typedef struct kev_in_data kev_in_data, *Pkev_in_data;

struct kev_in_data {
    struct net_event_data link_data;
    struct in_addr ia_addr;
    u_int32_t ia_net;
    u_int32_t ia_netmask;
    u_int32_t ia_subnet;
    u_int32_t ia_subnetmask;
    struct in_addr ia_netbroadcast;
    struct in_addr ia_dstaddr;
};

typedef struct kev_in_portinuse kev_in_portinuse, *Pkev_in_portinuse;

struct kev_in_portinuse {
    u_int16_t port;
    u_int32_t req_pid;
    u_int32_t reserved[2];
};

typedef struct imaxdiv_t imaxdiv_t, *Pimaxdiv_t;

struct imaxdiv_t {
    intmax_t quot;
    intmax_t rem;
};

#define DISPATCH_IO_RANDOM 1

#define DISPATCH_IO_STOP 1

#define DISPATCH_IO_STREAM 0

#define DISPATCH_IO_STRICT_INTERVAL 1

typedef int dispatch_fd_t;

typedef ulong dispatch_io_close_flags_t;

typedef ulong dispatch_io_interval_flags_t;

typedef struct dispatch_io_s dispatch_io_s, *Pdispatch_io_s;

typedef struct dispatch_io_s * dispatch_io_t;

struct dispatch_io_s {
};

typedef ulong dispatch_io_type_t;

#define IOC_DIRMASK 3758096384

#define IOC_IN 2147483648

#define IOC_INOUT 3221225472

#define IOC_OUT 1073741824

#define IOC_VOID 536870912

#define IOCPARM_MASK 8191

#define IOCPARM_MAX 8192

typedef struct ttysize ttysize, *Pttysize;

struct ttysize {
    ushort ts_lines;
    ushort ts_cols;
    ushort ts_xxx;
    ushort ts_yyy;
};

#define IP6_ALERT_AN 512

#define IP6_ALERT_MLD 0

#define IP6_ALERT_RSVP 256

#define IP6F_MORE_FRAG 256

#define IP6F_OFF_MASK 63743

#define IP6F_RESERVED_MASK 1536

#define IP6OPT_EID 138

#define IP6OPT_JUMBO 194

#define IP6OPT_JUMBO_LEN 6

#define IP6OPT_MINLEN 2

#define IP6OPT_MUTABLE 32

#define IP6OPT_NSAP_ADDR 195

#define IP6OPT_PAD1 0

#define IP6OPT_PADN 1

#define IP6OPT_ROUTER_ALERT 5

#define IP6OPT_RTALERT 5

#define IP6OPT_RTALERT_ACTNET 2

#define IP6OPT_RTALERT_LEN 4

#define IP6OPT_RTALERT_MLD 0

#define IP6OPT_RTALERT_RSVP 1

#define IP6OPT_TUNNEL_LIMIT 4

#define IP6OPT_TYPE_DISCARD 64

#define IP6OPT_TYPE_FORCEICMP 128

#define IP6OPT_TYPE_ICMP 192

#define IP6OPT_TYPE_SKIP 0

#define IP6TOS_CE 1

#define IP6TOS_ECT 2

#define IPV6_DEFHLIM 64

#define IPV6_FLOWINFO_MASK 4294967055

#define IPV6_FLOWLABEL_MASK 4294905600

#define IPV6_FRAGTTL 60

#define IPV6_HLIMDEC 1

#define IPV6_MAXHLIM 255

#define IPV6_MAXOPTHDR 2048

#define IPV6_MAXPACKET 65535

#define IPV6_MMTU 1280

#define IPV6_VERSION 96

#define IPV6_VERSION_MASK 240

typedef union _union_2734 _union_2734, *P_union_2734;

typedef struct ip6_hdrctl ip6_hdrctl, *Pip6_hdrctl;

struct ip6_hdrctl {
    u_int32_t ip6_un1_flow;
    u_int16_t ip6_un1_plen;
    u_int8_t ip6_un1_nxt;
    u_int8_t ip6_un1_hlim;
};

union _union_2734 {
    struct ip6_hdrctl ip6_un1;
    u_int8_t ip6_un2_vfc;
};

typedef struct ip6_dest ip6_dest, *Pip6_dest;

struct ip6_dest {
    u_int8_t ip6d_nxt;
    u_int8_t ip6d_len;
};

typedef struct ip6_ext ip6_ext, *Pip6_ext;

struct ip6_ext {
    u_int8_t ip6e_nxt;
    u_int8_t ip6e_len;
};

typedef struct ip6_frag ip6_frag, *Pip6_frag;

struct ip6_frag {
    u_int8_t ip6f_nxt;
    u_int8_t ip6f_reserved;
    u_int16_t ip6f_offlg;
    u_int32_t ip6f_ident;
};

typedef struct ip6_hbh ip6_hbh, *Pip6_hbh;

struct ip6_hbh {
    u_int8_t ip6h_nxt;
    u_int8_t ip6h_len;
};

typedef struct ip6_hdr ip6_hdr, *Pip6_hdr;

struct ip6_hdr {
    union _union_2734 ip6_ctlun;
    struct in6_addr ip6_src;
    struct in6_addr ip6_dst;
};

typedef struct ip6_opt ip6_opt, *Pip6_opt;

struct ip6_opt {
    u_int8_t ip6o_type;
    u_int8_t ip6o_len;
};

typedef struct ip6_opt_jumbo ip6_opt_jumbo, *Pip6_opt_jumbo;

struct ip6_opt_jumbo {
    u_int8_t ip6oj_type;
    u_int8_t ip6oj_len;
    u_int8_t ip6oj_jumbo_len[4];
};

typedef struct ip6_opt_nsap ip6_opt_nsap, *Pip6_opt_nsap;

struct ip6_opt_nsap {
    u_int8_t ip6on_type;
    u_int8_t ip6on_len;
    u_int8_t ip6on_src_nsap_len;
    u_int8_t ip6on_dst_nsap_len;
};

typedef struct ip6_opt_router ip6_opt_router, *Pip6_opt_router;

struct ip6_opt_router {
    u_int8_t ip6or_type;
    u_int8_t ip6or_len;
    u_int8_t ip6or_value[2];
};

typedef struct ip6_opt_tunnel ip6_opt_tunnel, *Pip6_opt_tunnel;

struct ip6_opt_tunnel {
    u_int8_t ip6ot_type;
    u_int8_t ip6ot_len;
    u_int8_t ip6ot_encap_limit;
};

typedef struct ip6_rthdr ip6_rthdr, *Pip6_rthdr;

struct ip6_rthdr {
    u_int8_t ip6r_nxt;
    u_int8_t ip6r_len;
    u_int8_t ip6r_type;
    u_int8_t ip6r_segleft;
};

typedef struct ip6_rthdr0 ip6_rthdr0, *Pip6_rthdr0;

struct ip6_rthdr0 {
    u_int8_t ip6r0_nxt;
    u_int8_t ip6r0_len;
    u_int8_t ip6r0_type;
    u_int8_t ip6r0_segleft;
    u_int8_t ip6r0_reserved;
    u_int8_t ip6r0_slmap[3];
    struct in6_addr ip6r0_addr[1];
};

#define IF_SETSIZE 256

#define MAXMIFS 64

#define MIFF_REGISTER 1

#define MRT6_ADD_MFC 104

#define MRT6_ADD_MIF 102

#define MRT6_DEL_MFC 105

#define MRT6_DEL_MIF 103

#define MRT6_DONE 101

#define MRT6_INIT 108

#define MRT6_PIM 107

#define MRT6MSG_NOCACHE 1

#define MRT6MSG_WHOLEPKT 3

#define MRT6MSG_WRONGMIF 2

typedef u_int32_t if_mask;

typedef struct if_set if_set, *Pif_set;

struct if_set {
    if_mask[0] ifs_bits;
};

typedef struct mf6cctl mf6cctl, *Pmf6cctl;

typedef u_short mifi_t;

struct mf6cctl {
    struct sockaddr_in6 mf6cc_origin;
    struct sockaddr_in6 mf6cc_mcastgrp;
    mifi_t mf6cc_parent;
    struct if_set mf6cc_ifset;
};

typedef struct mif6ctl mif6ctl, *Pmif6ctl;

struct mif6ctl {
    mifi_t mif6c_mifi;
    u_char mif6c_flags;
    u_short mif6c_pifi;
};

typedef struct mrt6msg mrt6msg, *Pmrt6msg;

struct mrt6msg {
    u_char im6_mbz;
    u_char im6_msgtype;
    u_int16_t im6_mif;
    u_int32_t im6_pad;
    struct in6_addr im6_src;
    struct in6_addr im6_dst;
};

typedef struct mrt6stat mrt6stat, *Pmrt6stat;

struct mrt6stat {
    u_quad_t mrt6s_mfc_lookups;
    u_quad_t mrt6s_mfc_misses;
    u_quad_t mrt6s_upcalls;
    u_quad_t mrt6s_no_route;
    u_quad_t mrt6s_bad_tunnel;
    u_quad_t mrt6s_cant_tunnel;
    u_quad_t mrt6s_wrong_if;
    u_quad_t mrt6s_upq_ovflw;
    u_quad_t mrt6s_cache_cleanups;
    u_quad_t mrt6s_drop_sel;
    u_quad_t mrt6s_q_overflow;
    u_quad_t mrt6s_pkt2large;
    u_quad_t mrt6s_upq_sockfull;
};

typedef struct sioc_mif_req6 sioc_mif_req6, *Psioc_mif_req6;

struct sioc_mif_req6 {
    mifi_t mifi;
    u_quad_t icount;
    u_quad_t ocount;
    u_quad_t ibytes;
    u_quad_t obytes;
};

typedef struct sioc_sg_req6 sioc_sg_req6, *Psioc_sg_req6;

struct sioc_sg_req6 {
    struct sockaddr_in6 src;
    struct sockaddr_in6 grp;
    u_quad_t pktcnt;
    u_quad_t bytecnt;
    u_quad_t wrong_if;
};

#define ICMP_ALTHOSTADDR 6

#define ICMP_DATACONVERR 31

#define ICMP_ECHO 8

#define ICMP_ECHOREPLY 0

#define ICMP_IPV6_IAMHERE 34

#define ICMP_IPV6_WHEREAREYOU 33

#define ICMP_IREQ 15

#define ICMP_IREQREPLY 16

#define ICMP_MASKLEN 12

#define ICMP_MASKREPLY 18

#define ICMP_MASKREQ 17

#define ICMP_MAXTYPE 40

#define ICMP_MINLEN 8

#define ICMP_MOBILE_REDIRECT 32

#define ICMP_MOBILE_REGREPLY 36

#define ICMP_MOBILE_REGREQUEST 35

#define ICMP_PARAMPROB 12

#define ICMP_PARAMPROB_ERRATPTR 0

#define ICMP_PARAMPROB_LENGTH 2

#define ICMP_PARAMPROB_OPTABSENT 1

#define ICMP_PHOTURIS 40

#define ICMP_PHOTURIS_AUTH_FAILED 2

#define ICMP_PHOTURIS_DECRYPT_FAILED 3

#define ICMP_PHOTURIS_UNKNOWN_INDEX 1

#define ICMP_REDIRECT 5

#define ICMP_REDIRECT_HOST 1

#define ICMP_REDIRECT_NET 0

#define ICMP_REDIRECT_TOSHOST 3

#define ICMP_REDIRECT_TOSNET 2

#define ICMP_ROUTERADVERT 9

#define ICMP_ROUTERADVERT_NORMAL 0

#define ICMP_ROUTERADVERT_NOROUTE_COMMON 16

#define ICMP_ROUTERSOLICIT 10

#define ICMP_SKIP 39

#define ICMP_SOURCEQUENCH 4

#define ICMP_TIMXCEED 11

#define ICMP_TIMXCEED_INTRANS 0

#define ICMP_TIMXCEED_REASS 1

#define ICMP_TRACEROUTE 30

#define ICMP_TSTAMP 13

#define ICMP_TSTAMPREPLY 14

#define ICMP_UNREACH 3

#define ICMP_UNREACH_FILTER_PROHIB 13

#define ICMP_UNREACH_HOST 1

#define ICMP_UNREACH_HOST_PRECEDENCE 14

#define ICMP_UNREACH_HOST_PROHIB 10

#define ICMP_UNREACH_HOST_UNKNOWN 7

#define ICMP_UNREACH_ISOLATED 8

#define ICMP_UNREACH_NEEDFRAG 4

#define ICMP_UNREACH_NET 0

#define ICMP_UNREACH_NET_PROHIB 9

#define ICMP_UNREACH_NET_UNKNOWN 6

#define ICMP_UNREACH_PORT 3

#define ICMP_UNREACH_PRECEDENCE_CUTOFF 15

#define ICMP_UNREACH_PROTOCOL 2

#define ICMP_UNREACH_SRCFAIL 5

#define ICMP_UNREACH_TOSHOST 12

#define ICMP_UNREACH_TOSNET 11

typedef union _union_2752 _union_2752, *P_union_2752;

typedef struct ih_idseq ih_idseq, *Pih_idseq;

typedef struct ih_pmtu ih_pmtu, *Pih_pmtu;

typedef struct ih_rtradv ih_rtradv, *Pih_rtradv;

struct ih_pmtu {
    n_short ipm_void;
    n_short ipm_nextmtu;
};

struct ih_idseq {
    n_short icd_id;
    n_short icd_seq;
};

struct ih_rtradv {
    u_char irt_num_addrs;
    u_char irt_wpa;
    u_int16_t irt_lifetime;
};

union _union_2752 {
    u_char ih_pptr;
    struct in_addr ih_gwaddr;
    struct ih_idseq ih_idseq;
    int ih_void;
    struct ih_pmtu ih_pmtu;
    struct ih_rtradv ih_rtradv;
};

typedef union _union_2757 _union_2757, *P_union_2757;

typedef struct id_ts id_ts, *Pid_ts;

typedef struct id_ip id_ip, *Pid_ip;

typedef struct icmp_ra_addr icmp_ra_addr, *Picmp_ra_addr;

struct id_ts {
    n_time its_otime;
    n_time its_rtime;
    n_time its_ttime;
};

struct icmp_ra_addr {
    u_int32_t ira_addr;
    u_int32_t ira_preference;
};

struct id_ip {
    struct ip idi_ip;
};

union _union_2757 {
    struct id_ts id_ts;
    struct id_ip id_ip;
    struct icmp_ra_addr id_radv;
    u_int32_t id_mask;
    char id_data[1];
};

typedef struct icmp icmp, *Picmp;

struct icmp {
    u_char icmp_type;
    u_char icmp_code;
    u_short icmp_cksum;
    union _union_2752 icmp_hun;
    union _union_2757 icmp_dun;
};

#define ALL_VIFS -1

#define CONFIG_MAXVIFS 32

#define CONFIG_MFCTBLSIZ 256

#define IGMPMSG_NOCACHE 1

#define IGMPMSG_WRONGVIF 2

#define MFCTBLSIZ 256

#define MRT_ADD_MFC 104

#define MRT_ADD_VIF 102

#define MRT_ASSERT 107

#define MRT_DEL_MFC 105

#define MRT_DEL_VIF 103

#define MRT_DONE 101

#define MRT_INIT 100

#define MRT_VERSION 106

#define VIFF_SRCRT 2

#define VIFF_TUNNEL 1

typedef struct igmpmsg igmpmsg, *Pigmpmsg;

struct igmpmsg {
    u_int32_t unused1;
    u_int32_t unused2;
    u_char im_msgtype;
    u_char im_mbz;
    u_char im_vif;
    u_char unused3;
    struct in_addr im_src;
    struct in_addr im_dst;
};

typedef struct mfcctl mfcctl, *Pmfcctl;

typedef u_short vifi_t;

struct mfcctl {
    struct in_addr mfcc_origin;
    struct in_addr mfcc_mcastgrp;
    vifi_t mfcc_parent;
    u_char mfcc_ttls[32];
};

typedef struct mrtstat mrtstat, *Pmrtstat;

struct mrtstat {
    u_int32_t mrts_mfc_lookups;
    u_int32_t mrts_mfc_misses;
    u_int32_t mrts_upcalls;
    u_int32_t mrts_no_route;
    u_int32_t mrts_bad_tunnel;
    u_int32_t mrts_cant_tunnel;
    u_int32_t mrts_wrong_if;
    u_int32_t mrts_upq_ovflw;
    u_int32_t mrts_cache_cleanups;
    u_int32_t mrts_drop_sel;
    u_int32_t mrts_q_overflow;
    u_int32_t mrts_pkt2large;
    u_int32_t mrts_upq_sockfull;
};

typedef struct sioc_sg_req sioc_sg_req, *Psioc_sg_req;

struct sioc_sg_req {
    struct in_addr src;
    struct in_addr grp;
    u_int32_t pktcnt;
    u_int32_t bytecnt;
    u_int32_t wrong_if;
};

typedef struct sioc_vif_req sioc_vif_req, *Psioc_vif_req;

struct sioc_vif_req {
    vifi_t vifi;
    u_int32_t icount;
    u_int32_t ocount;
    u_int32_t ibytes;
    u_int32_t obytes;
};

typedef u_int32_t vifbitmap_t;

typedef struct vifctl vifctl, *Pvifctl;

struct vifctl {
    vifi_t vifc_vifi;
    u_char vifc_flags;
    u_char vifc_threshold;
    u_int vifc_rate_limit;
    struct in_addr vifc_lcl_addr;
    struct in_addr vifc_rmt_addr;
};

#define MAX_IPOPTLEN 40

typedef struct ip_linklocal_stat ip_linklocal_stat, *Pip_linklocal_stat;

struct ip_linklocal_stat {
    u_int32_t iplls_in_total;
    u_int32_t iplls_in_badttl;
    u_int32_t iplls_out_total;
    u_int32_t iplls_out_badttl;
};

typedef struct ipovly ipovly, *Pipovly;

struct ipovly {
    u_char ih_x1[9];
    u_char ih_pr;
    u_short ih_len;
    struct in_addr ih_src;
    struct in_addr ih_dst;
};

typedef struct ipstat ipstat, *Pipstat;

struct ipstat {
    u_int32_t ips_total;
    u_int32_t ips_badsum;
    u_int32_t ips_tooshort;
    u_int32_t ips_toosmall;
    u_int32_t ips_badhlen;
    u_int32_t ips_badlen;
    u_int32_t ips_fragments;
    u_int32_t ips_fragdropped;
    u_int32_t ips_fragtimeout;
    u_int32_t ips_forward;
    u_int32_t ips_fastforward;
    u_int32_t ips_cantforward;
    u_int32_t ips_redirectsent;
    u_int32_t ips_noproto;
    u_int32_t ips_delivered;
    u_int32_t ips_localout;
    u_int32_t ips_odropped;
    u_int32_t ips_reassembled;
    u_int32_t ips_fragmented;
    u_int32_t ips_ofragments;
    u_int32_t ips_cantfrag;
    u_int32_t ips_badoptions;
    u_int32_t ips_noroute;
    u_int32_t ips_badvers;
    u_int32_t ips_rawout;
    u_int32_t ips_toolong;
    u_int32_t ips_notmember;
    u_int32_t ips_nogif;
    u_int32_t ips_badaddr;
    u_int32_t ips_pktdropcntrl;
    u_int32_t ips_rcv_swcsum;
    u_int32_t ips_rcv_swcsum_bytes;
    u_int32_t ips_snd_swcsum;
    u_int32_t ips_snd_swcsum_bytes;
    u_int32_t ips_adj;
    u_int32_t ips_adj_hwcsum_clr;
};

#define IPC_CREAT 512

#define IPC_EXCL 1024

#define IPC_M 4096

#define IPC_NOWAIT 2048

#define IPC_PRIVATE 0

#define IPC_R 256

#define IPC_RMID 0

#define IPC_SET 1

#define IPC_STAT 2

#define IPC_W 128

typedef struct ipc_info_name ipc_info_name, *Pipc_info_name;

typedef natural_t mach_port_name_t;

typedef natural_t mach_port_type_t;

typedef natural_t mach_port_urefs_t;

struct ipc_info_name {
    mach_port_name_t iin_name;
    integer_t iin_collision;
    mach_port_type_t iin_type;
    mach_port_urefs_t iin_urefs;
    natural_t iin_object;
    natural_t iin_next;
    natural_t iin_hash;
};

typedef struct ipc_info_name ipc_info_name_t;

typedef ipc_info_name_t * ipc_info_name_array_t;

typedef struct ipc_info_space ipc_info_space, *Pipc_info_space;

struct ipc_info_space {
    natural_t iis_genno_mask;
    natural_t iis_table_size;
    natural_t iis_table_next;
    natural_t iis_tree_size;
    natural_t iis_tree_small;
    natural_t iis_tree_hash;
};

typedef struct ipc_info_space ipc_info_space_t;

typedef struct ipc_info_tree_name ipc_info_tree_name, *Pipc_info_tree_name;

struct ipc_info_tree_name {
    ipc_info_name_t iitn_name;
    mach_port_name_t iitn_lchild;
    mach_port_name_t iitn_rchild;
};

typedef struct ipc_info_tree_name ipc_info_tree_name_t;

typedef ipc_info_tree_name_t * ipc_info_tree_name_array_t;

#define IPCOMP_CPI_NEGOTIATE_MIN 256

#define IPCOMP_DEFLATE 2

#define IPCOMP_LZS 3

#define IPCOMP_MAX 4

#define IPCOMP_OUI 1

typedef struct ipcomp ipcomp, *Pipcomp;

struct ipcomp {
    u_int8_t comp_nxt;
    u_int8_t comp_flags;
    u_int16_t comp_cpi;
};

#define IPSEC_DIR_ANY 0

#define IPSEC_DIR_INBOUND 1

#define IPSEC_DIR_INVALID 4

#define IPSEC_DIR_MAX 3

#define IPSEC_DIR_OUTBOUND 2

#define IPSEC_LEVEL_DEFAULT 0

#define IPSEC_LEVEL_REQUIRE 2

#define IPSEC_LEVEL_UNIQUE 3

#define IPSEC_LEVEL_USE 1

#define IPSEC_MANUAL_REQID_MAX 16383

#define IPSEC_MODE_ANY 0

#define IPSEC_MODE_TRANSPORT 1

#define IPSEC_MODE_TUNNEL 2

#define IPSEC_POLICY_BYPASS 4

#define IPSEC_POLICY_DISCARD 0

#define IPSEC_POLICY_ENTRUST 3

#define IPSEC_POLICY_GENERATE 5

#define IPSEC_POLICY_IPSEC 2

#define IPSEC_POLICY_NONE 1

#define IPSEC_PORT_ANY 0

#define IPSEC_PROTO_ANY 255

#define IPSEC_REPLAYWSIZE 32

#define IPSEC_ULPROTO_ANY 255

typedef struct ipsecstat ipsecstat, *Pipsecstat;

struct ipsecstat {
    u_quad_t in_success;
    u_quad_t in_polvio;
    u_quad_t in_nosa;
    u_quad_t in_inval;
    u_quad_t in_nomem;
    u_quad_t in_badspi;
    u_quad_t in_ahreplay;
    u_quad_t in_espreplay;
    u_quad_t in_ahauthsucc;
    u_quad_t in_ahauthfail;
    u_quad_t in_espauthsucc;
    u_quad_t in_espauthfail;
    u_quad_t in_esphist[256];
    u_quad_t in_ahhist[256];
    u_quad_t in_comphist[256];
    u_quad_t out_success;
    u_quad_t out_polvio;
    u_quad_t out_nosa;
    u_quad_t out_inval;
    u_quad_t out_nomem;
    u_quad_t out_noroute;
    u_quad_t out_esphist[256];
    u_quad_t out_ahhist[256];
    u_quad_t out_comphist[256];
};

#define KAUTH_ACE_ALARM 4

#define KAUTH_ACE_AUDIT 3

#define KAUTH_ACE_DENY 2

#define KAUTH_ACE_DIRECTORY_INHERIT 64

#define KAUTH_ACE_FAILURE 1024

#define KAUTH_ACE_FILE_INHERIT 32

#define KAUTH_ACE_GENERIC_ALL 2097152

#define KAUTH_ACE_GENERIC_EXECUTE 4194304

#define KAUTH_ACE_GENERIC_READ 16777216

#define KAUTH_ACE_GENERIC_WRITE 8388608

#define KAUTH_ACE_INHERITED 16

#define KAUTH_ACE_KINDMASK 15

#define KAUTH_ACE_LIMIT_INHERIT 128

#define KAUTH_ACE_ONLY_INHERIT 256

#define KAUTH_ACE_PERMIT 1

#define KAUTH_ACE_SUCCESS 512

#define KAUTH_ACL_DEFER_INHERIT 65536

#define KAUTH_ACL_FLAGS_PRIVATE 65535

#define KAUTH_ACL_MAX_ENTRIES 128

#define KAUTH_ACL_NO_INHERIT 131072

#define KAUTH_CLEAR_CACHES 32

#define KAUTH_ENDIAN_DISK 2

#define KAUTH_ENDIAN_HOST 1

#define KAUTH_EXTLOOKUP_BADRQ 1

#define KAUTH_EXTLOOKUP_DEREGISTER 4

#define KAUTH_EXTLOOKUP_FAILURE 2

#define KAUTH_EXTLOOKUP_FATAL 3

#define KAUTH_EXTLOOKUP_INPROG 100

#define KAUTH_EXTLOOKUP_ISMEMBER 16384

#define KAUTH_EXTLOOKUP_REGISTER 0

#define KAUTH_EXTLOOKUP_RESULT 1

#define KAUTH_EXTLOOKUP_SUCCESS 0

#define KAUTH_EXTLOOKUP_VALID_GGUID 16

#define KAUTH_EXTLOOKUP_VALID_GID 8

#define KAUTH_EXTLOOKUP_VALID_GRNAM 131072

#define KAUTH_EXTLOOKUP_VALID_GSID 32

#define KAUTH_EXTLOOKUP_VALID_MEMBERSHIP 8192

#define KAUTH_EXTLOOKUP_VALID_PWNAM 32768

#define KAUTH_EXTLOOKUP_VALID_SUPGRPS 524288

#define KAUTH_EXTLOOKUP_VALID_UGUID 2

#define KAUTH_EXTLOOKUP_VALID_UID 1

#define KAUTH_EXTLOOKUP_VALID_USID 4

#define KAUTH_EXTLOOKUP_WANT_GGUID 1024

#define KAUTH_EXTLOOKUP_WANT_GID 512

#define KAUTH_EXTLOOKUP_WANT_GRNAM 262144

#define KAUTH_EXTLOOKUP_WANT_GSID 2048

#define KAUTH_EXTLOOKUP_WANT_MEMBERSHIP 4096

#define KAUTH_EXTLOOKUP_WANT_PWNAM 65536

#define KAUTH_EXTLOOKUP_WANT_SUPGRPS 1048576

#define KAUTH_EXTLOOKUP_WANT_UGUID 128

#define KAUTH_EXTLOOKUP_WANT_UID 64

#define KAUTH_EXTLOOKUP_WANT_USID 256

#define KAUTH_EXTLOOKUP_WORKER 2

#define KAUTH_FILESEC_DEFER_INHERIT 65536

#define KAUTH_FILESEC_FLAGS_PRIVATE 65535

#define KAUTH_FILESEC_MAGIC 19710317

#define KAUTH_FILESEC_NO_INHERIT 131072

#define KAUTH_FILESEC_NOACL -1

#define KAUTH_FILESEC_NONE 0

#define KAUTH_FILESEC_WANTED 1

#define KAUTH_GET_CACHE_SIZES 8

#define KAUTH_GID_NONE -101

#define KAUTH_INVALIDATE_CACHED_RIGHTS -1

#define KAUTH_NTSID_HDRSIZE 8

#define KAUTH_NTSID_MAX_AUTHORITIES 16

#define KAUTH_SET_CACHE_SIZES 16

#define KAUTH_UID_NONE -101

#define KAUTH_VNODE_ACCESS 2147483648

#define KAUTH_VNODE_ADD_FILE 4

#define KAUTH_VNODE_ADD_SUBDIRECTORY 32

#define KAUTH_VNODE_APPEND_DATA 32

#define KAUTH_VNODE_CHANGE_OWNER 8192

#define KAUTH_VNODE_CHECKIMMUTABLE 67108864

#define KAUTH_VNODE_DELETE 16

#define KAUTH_VNODE_DELETE_CHILD 64

#define KAUTH_VNODE_EXECUTE 8

#define KAUTH_VNODE_GENERIC_EXECUTE_BITS 8

#define KAUTH_VNODE_LINKTARGET 33554432

#define KAUTH_VNODE_LIST_DIRECTORY 2

#define KAUTH_VNODE_NOIMMUTABLE 1073741824

#define KAUTH_VNODE_READ_ATTRIBUTES 128

#define KAUTH_VNODE_READ_DATA 2

#define KAUTH_VNODE_READ_EXTATTRIBUTES 512

#define KAUTH_VNODE_READ_SECURITY 2048

#define KAUTH_VNODE_SEARCH 8

#define KAUTH_VNODE_SEARCHBYANYONE 536870912

#define KAUTH_VNODE_SYNCHRONIZE 1048576

#define KAUTH_VNODE_TAKE_OWNERSHIP 8192

#define KAUTH_VNODE_WRITE_ATTRIBUTES 256

#define KAUTH_VNODE_WRITE_DATA 4

#define KAUTH_VNODE_WRITE_EXTATTRIBUTES 1024

#define KAUTH_VNODE_WRITE_SECURITY 4096

typedef u_int32_t kauth_ace_rights_t;

typedef struct kauth_cache_sizes kauth_cache_sizes, *Pkauth_cache_sizes;

struct kauth_cache_sizes {
    u_int32_t kcs_group_size;
    u_int32_t kcs_id_size;
};

typedef struct kauth_identity_extlookup kauth_identity_extlookup, *Pkauth_identity_extlookup;

typedef struct ntsid_t ntsid_t, *Pntsid_t;

struct ntsid_t {
    u_int8_t sid_kind;
    u_int8_t sid_authcount;
    u_int8_t sid_authority[6];
    u_int32_t sid_authorities[16];
};

struct kauth_identity_extlookup {
    u_int32_t el_seqno;
    u_int32_t el_result;
    u_int32_t el_flags;
    __darwin_pid_t el_info_pid;
    u_int64_t el_extend;
    u_int32_t el_info_reserved_1;
    uid_t el_uid;
    struct guid_t el_uguid;
    u_int32_t el_uguid_valid;
    struct ntsid_t el_usid;
    u_int32_t el_usid_valid;
    gid_t el_gid;
    struct guid_t el_gguid;
    u_int32_t el_gguid_valid;
    struct ntsid_t el_gsid;
    u_int32_t el_gsid_valid;
    u_int32_t el_member_valid;
    u_int32_t el_sup_grp_cnt;
    gid_t el_sup_groups[16];
};

#define BSD_MEMSTAT_CLEAR_ERRORS 8

#define BSD_MEMSTAT_FREEZE 4

#define BSD_MEMSTAT_IDLE_DEMOTE 7

#define BSD_MEMSTAT_JETSAM 2

#define BSD_MEMSTAT_JETSAM_HIWAT 3

#define BSD_MEMSTAT_LATENCY_COALESCE 5

#define BSD_MEMSTAT_SCAN 1

#define BSD_MEMSTAT_UPDATE 6

#define BSD_PROC_EXIT 1

#define BSD_PROC_FRCEXIT 2

#define DBG_ACFS 16

#define DBG_APP_AUDIO 4

#define DBG_APP_LOGINWINDOW 3

#define DBG_APP_SAMBA 128

#define DBG_APPS 33

#define DBG_BOOTCACHE 7

#define DBG_BSD 4

#define DBG_BSD_AIO 13

#define DBG_BSD_EXCP_SC 12

#define DBG_BSD_MEMSTAT 2

#define DBG_BSD_PROC 1

#define DBG_BSD_SC_EXTENDED_INFO 14

#define DBG_BSD_SC_EXTENDED_INFO2 15

#define DBG_BUFFER 32

#define DBG_CACHE_HIT_FAULT 4

#define DBG_CG 11

#define DBG_COMPRESSOR_FAULT 9

#define DBG_COMPRESSOR_SWAPIN_FAULT 10

#define DBG_CORESTORAGE 10

#define DBG_COW_FAULT 3

#define DBG_CS_IO 0

#define DBG_DKRW 2

#define DBG_DLIL 8

#define DBG_DLIL_IF_FLT 5

#define DBG_DLIL_IF_MOD 3

#define DBG_DLIL_PR_FLT 4

#define DBG_DLIL_PR_MOD 2

#define DBG_DLIL_STATIC 1

#define DBG_DRIVERS 6

#define DBG_DRVAUDIO 5

#define DBG_DRVBLUETOOTH 15

#define DBG_DRVDISK 1

#define DBG_DRVFIBRECHANNEL 13

#define DBG_DRVFIREWIRE 16

#define DBG_DRVGRAPHICS 18

#define DBG_DRVHID 4

#define DBG_DRVINFINIBAND 17

#define DBG_DRVKEYBOARD 3

#define DBG_DRVNAND 20

#define DBG_DRVNETWORK 2

#define DBG_DRVPARALLELATA 9

#define DBG_DRVPARALLELSCSI 10

#define DBG_DRVPOINTING 4

#define DBG_DRVSAM 8

#define DBG_DRVSAS 12

#define DBG_DRVSATA 11

#define DBG_DRVSD 19

#define DBG_DRVSERIAL 7

#define DBG_DRVSPI 22

#define DBG_DRVSTORAGE 1

#define DBG_DRVUSB 14

#define DBG_DYLD 31

#define DBG_DYLD_STRING 5

#define DBG_EVENT 16

#define DBG_EXFAT 14

#define DBG_FSLOOOKUP 4

#define DBG_FSRW 1

#define DBG_FSVN 3

#define DBG_FSYSTEM 3

#define DBG_FUNC_END 2

#define DBG_FUNC_NONE 0

#define DBG_FUNC_START 1

#define DBG_GUARD_FAULT 6

#define DBG_HFS 8

#define DBG_HFS_UPDATE_ACCTIME 1

#define DBG_HFS_UPDATE_CHGTIME 4

#define DBG_HFS_UPDATE_DATEADDED 32

#define DBG_HFS_UPDATE_FORCE 16

#define DBG_HFS_UPDATE_MODIFIED 8

#define DBG_HFS_UPDATE_MODTIME 2

#define DBG_HIBERNATE 51

#define DBG_IMPORTANCE 38

#define DBG_IOAUDIO 36

#define DBG_IOBLUETOOTH 46

#define DBG_IOCLKES 3

#define DBG_IOCMDQ 4

#define DBG_IOCPUPM 49

#define DBG_IOCTL 6

#define DBG_IODISK 32

#define DBG_IOFIBRECHANNEL 44

#define DBG_IOFIREWIRE 47

#define DBG_IOGRAPHICS 50

#define DBG_IOHID 35

#define DBG_IOINFINIBAND 48

#define DBG_IOINTC 0

#define DBG_IOINTES 2

#define DBG_IOKEYBOARD 34

#define DBG_IOKIT 5

#define DBG_IOMCURS 5

#define DBG_IOMDESC 6

#define DBG_IONETWORK 33

#define DBG_IOPARALLELATA 40

#define DBG_IOPARALLELSCSI 41

#define DBG_IOPOINTING 35

#define DBG_IOPOWER 7

#define DBG_IOSAM 39

#define DBG_IOSAS 43

#define DBG_IOSATA 42

#define DBG_IOSERIAL 37

#define DBG_IOSERVICE 8

#define DBG_IOSTORAGE 32

#define DBG_IOTHUNDERBOLT 52

#define DBG_IOTTY 38

#define DBG_IOUSB 45

#define DBG_IOWORKLOOP 1

#define DBG_JOURNAL 5

#define DBG_LAUNCHD 34

#define DBG_MACH 1

#define DBG_MACH_CHUD 10

#define DBG_MACH_EXCP_ALNG 6

#define DBG_MACH_EXCP_DECI 9

#define DBG_MACH_EXCP_DFLT 3

#define DBG_MACH_EXCP_EMUL 14

#define DBG_MACH_EXCP_FP 8

#define DBG_MACH_EXCP_IFLT 4

#define DBG_MACH_EXCP_INTR 5

#define DBG_MACH_EXCP_KTRAP_x86 2

#define DBG_MACH_EXCP_SC 12

#define DBG_MACH_EXCP_TRACE 13

#define DBG_MACH_EXCP_UTRAP_x86 7

#define DBG_MACH_IHDLR 16

#define DBG_MACH_IPC 32

#define DBG_MACH_LEAKS 49

#define DBG_MACH_LOCKS 96

#define DBG_MACH_MP 144

#define DBG_MACH_MSGID_INVALID 80

#define DBG_MACH_PMAP 112

#define DBG_MACH_SCHED 64

#define DBG_MACH_STACKSHOT 161

#define DBG_MACH_VM 48

#define DBG_MACH_VM_PRESSURE 160

#define DBG_MIG 255

#define DBG_MISC 20

#define DBG_MSDOS 15

#define DBG_NETAARP 100

#define DBG_NETADSP 104

#define DBG_NETAFP 107

#define DBG_NETARP 2

#define DBG_NETASP 106

#define DBG_NETATP 105

#define DBG_NETAURP 109

#define DBG_NETDDP 101

#define DBG_NETICMP 5

#define DBG_NETIGMP 6

#define DBG_NETIP 1

#define DBG_NETIPSEC 128

#define DBG_NETISIS 9

#define DBG_NETNBP 102

#define DBG_NETOSPF 8

#define DBG_NETRIP 7

#define DBG_NETRTMP 108

#define DBG_NETSNMP 10

#define DBG_NETSOCK 11

#define DBG_NETTCP 4

#define DBG_NETUDP 3

#define DBG_NETWORK 2

#define DBG_NETZIP 103

#define DBG_NZF_PAGE_FAULT 5

#define DBG_PAGEIN_FAULT 2

#define DBG_PAGEIND_FAULT 8

#define DBG_PAGEINV_FAULT 7

#define DBG_PERF 37

#define DBG_QT 32

#define DBG_SECURITY 9

#define DBG_SSD 21

#define DBG_THROTTLE 17

#define DBG_TRACE 7

#define DBG_TRACE_DATA 0

#define DBG_TRACE_INFO 2

#define DBG_TRACE_STRING 1

#define DBG_ZERO_FILL_FAULT 1

#define DKIO_ASYNC 4

#define DKIO_DONE 1

#define DKIO_META 8

#define DKIO_NOCACHE 128

#define DKIO_PAGING 16

#define DKIO_PASSIVE 64

#define DKIO_READ 2

#define DKIO_THROTTLE 32

#define DKIO_TIER_MASK 3840

#define DKIO_TIER_SHIFT 8

#define IMP_ASSERTION 16

#define IMP_BOOST 17

#define IMP_BOOSTED 1

#define IMP_DROP 4

#define IMP_EXTERN 8

#define IMP_HOLD 2

#define IMP_MSG 18

#define IMP_MSG_DELV 2

#define IMP_MSG_SEND 1

#define IMP_TASK_APPTYPE 24

#define IMP_TASK_SUPPRESSION 23

#define IMP_UNBOOSTED 2

#define IMP_UPDATE 25

#define IMP_UPDATE_TASK_CREATE 1

#define IMP_WATCHPORT 19

#define IO_THROTTLE_DISABLE 3

#define KDEBUG_COMMON 15

#define KDEBUG_ENABLE_CHUD 4

#define KDEBUG_ENABLE_ENTROPY 2

#define KDEBUG_ENABLE_PPT 8

#define KDEBUG_ENABLE_TRACE 1

#define KDEBUG_LEVEL 2

#define KDEBUG_LEVEL_FULL 3

#define KDEBUG_LEVEL_IST 1

#define KDEBUG_LEVEL_NONE 0

#define KDEBUG_LEVEL_STANDARD 2

#define KDEBUG_PPT 8

#define KDEBUG_TRACE 7

#define KMEM_ALLOC_CODE 19988480

#define KMEM_ALLOC_CODE_2 19988484

#define KMEM_FREE_CODE 19988488

#define KMEM_FREE_CODE_2 19988492

#define MACH_BLOCK 15

#define MACH_CALL_CONT 3

#define MACH_CALLOUT 4

#define MACH_CPU_THROTTLE_DISABLE 27

#define MACH_DEEP_IDLE 25

#define MACH_DEMOTE 8

#define MACH_FAILSAFE 14

#define MACH_FAIRSHARE_ENTER 12

#define MACH_FAIRSHARE_EXIT 13

#define MACH_GET_URGENCY 20

#define MACH_IDLE 9

#define MACH_MAKE_RUNNABLE 6

#define MACH_MOVED 11

#define MACH_PROMOTE 7

#define MACH_REDISPATCH 22

#define MACH_REMOTE_AST 23

#define MACH_RW_DEMOTE 29

#define MACH_RW_PROMOTE 28

#define MACH_SCHED 0

#define MACH_SCHED_CHOOSE_PROCESSOR 24

#define MACH_SCHED_DECAY_PRIORITY 26

#define MACH_STACK_ATTACH 1

#define MACH_STACK_DEPTH 10

#define MACH_STACK_DETACH 5

#define MACH_STACK_HANDOFF 2

#define MACH_TASK_RESUME 1

#define MACH_TASK_SUSPEND 0

#define MACH_URGENCY 21

#define MACH_WAIT 16

#define MICROSTACKSHOT_GATHER 1

#define MICROSTACKSHOT_RECORD 0

#define OPEN_THROTTLE_WINDOW 1

#define PMAP__ATTRIBUTE_CLEAR 10

#define PMAP__CREATE 0

#define PMAP__DESTROY 1

#define PMAP__ENTER 4

#define PMAP__FLUSH_DELAYED_TLBS 14

#define PMAP__FLUSH_KERN_TLBS 13

#define PMAP__FLUSH_TLBS 8

#define PMAP__NEST 6

#define PMAP__PAGE_PROTECT 3

#define PMAP__PROTECT 2

#define PMAP__QUERY_RESIDENT 12

#define PMAP__REMOVE 5

#define PMAP__REUSABLE 11

#define PMAP__UNNEST 7

#define PMAP__UPDATE_INTERRUPT 9

#define PROCESS_THROTTLED 2

#define ZALLOC_CODE 19988496

#define ZALLOC_CODE_2 19988500

#define ZFREE_CODE 19988504

#define ZFREE_CODE_2 19988508

typedef enum enum_4118 {
    KD_CALLBACK_KDEBUG_DISABLED=1,
    KD_CALLBACK_KDEBUG_ENABLED=0,
    KD_CALLBACK_SYNC_FLUSH=2,
    KD_CALLBACK_TYPEFILTER_CHANGED=3
} enum_4118;

typedef struct kd_callback kd_callback, *Pkd_callback;

typedef enum enum_4118 kd_callback_type;

typedef void (* kd_callback_fn)(void *, kd_callback_type, void *);

struct kd_callback {
    kd_callback_fn func;
    void * context;
    char iop_name[8];
};

typedef struct kd_callback kd_callback_t;

#define KEV_CTL_DEREGISTERED 2

#define KEV_CTL_REGISTERED 1

#define KEV_CTL_SUBCLASS 2

#define MAX_KCTL_NAME 96

typedef struct ctl_event_data ctl_event_data, *Pctl_event_data;

struct ctl_event_data {
    u_int32_t ctl_id;
    u_int32_t ctl_unit;
};

typedef struct ctl_info ctl_info, *Pctl_info;

struct ctl_info {
    u_int32_t ctl_id;
    char ctl_name[96];
};

typedef struct sockaddr_ctl sockaddr_ctl, *Psockaddr_ctl;

struct sockaddr_ctl {
    u_char sc_len;
    u_char sc_family;
    u_int16_t ss_sysaddr;
    u_int32_t sc_id;
    u_int32_t sc_unit;
    u_int32_t sc_reserved[5];
};

#define KEV_ANY_CLASS 0

#define KEV_ANY_SUBCLASS 0

#define KEV_ANY_VENDOR 0

#define KEV_APPLESHARE_CLASS 4

#define KEV_FIREWALL_CLASS 5

#define KEV_IEEE80211_CLASS 6

#define KEV_IOKIT_CLASS 2

#define KEV_NETWORK_CLASS 1

#define KEV_RECVSPACE 32768

#define KEV_SNDSPACE 4096

#define KEV_SYSTEM_CLASS 3

#define KEV_VENDOR_APPLE 1

#define KEV_VENDOR_CODE_MAX_STR_LEN 200

typedef struct kern_event_msg kern_event_msg, *Pkern_event_msg;

struct kern_event_msg {
    u_int32_t total_size;
    u_int32_t vendor_code;
    u_int32_t kev_class;
    u_int32_t kev_subclass;
    u_int32_t id;
    u_int32_t event_code;
    u_int32_t event_data[1];
};

typedef struct kev_request kev_request, *Pkev_request;

struct kev_request {
    u_int32_t vendor_code;
    u_int32_t kev_class;
    u_int32_t kev_subclass;
};

typedef struct kev_vendor_code kev_vendor_code, *Pkev_vendor_code;

struct kev_vendor_code {
    u_int32_t vendor_code;
    char vendor_string[200];
};

#define DEFAULT_JETSAM_PRIORITY 18

#define DEFERRED_IDLE_EXIT_TIME_SECS 10

#define JETSAM_PRIORITY_AUDIO_AND_ACCESSORY 12

#define JETSAM_PRIORITY_BACKGROUND 3

#define JETSAM_PRIORITY_BACKGROUND_OPPORTUNISTIC 2

#define JETSAM_PRIORITY_CONDUCTOR 13

#define JETSAM_PRIORITY_CRITICAL 19

#define JETSAM_PRIORITY_DEFAULT 18

#define JETSAM_PRIORITY_EXECUTIVE 17

#define JETSAM_PRIORITY_FOREGROUND 10

#define JETSAM_PRIORITY_FOREGROUND_SUPPORT 9

#define JETSAM_PRIORITY_HOME 16

#define JETSAM_PRIORITY_IDLE 0

#define JETSAM_PRIORITY_IDLE_DEFERRED 1

#define JETSAM_PRIORITY_IMPORTANT 18

#define JETSAM_PRIORITY_MAIL 4

#define JETSAM_PRIORITY_MAX 21

#define JETSAM_PRIORITY_PHONE 5

#define JETSAM_PRIORITY_REVISION 2

#define JETSAM_PRIORITY_TELEPHONY 19

#define JETSAM_PRIORITY_UI_SUPPORT 8

#define KEV_MEMORYSTATUS_SUBCLASS 3

#define kMaxSnapshotEntries 192

#define kMemorystatusDirty 32

#define kMemorystatusFrozen 2

#define kMemorystatusSupportsIdleExit 16

#define kMemorystatusSuspended 1

#define kMemorystatusTracked 8

#define kMemorystatusWasThawed 4

#define MEMORYSTATUS_BUFFERSIZE_MAX 65536

#define MEMORYSTATUS_CMD_GET_JETSAM_SNAPSHOT 3

#define MEMORYSTATUS_CMD_GET_PRESSURE_STATUS 4

#define MEMORYSTATUS_CMD_GET_PRIORITY_LIST 1

#define MEMORYSTATUS_CMD_SET_JETSAM_HIGH_WATER_MARK 5

#define MEMORYSTATUS_CMD_SET_PRIORITY_PROPERTIES 2

typedef enum enum_4121 {
    kMemorystatusFreezeNote=3,
    kMemorystatusLevelNote=1,
    kMemorystatusPressureNote=4,
    kMemorystatusSnapshotNote=2
} enum_4121;

typedef enum enum_4122 {
    kMemorystatusLevelAny=0,
    kMemorystatusLevelCritical=3,
    kMemorystatusLevelNormal=0,
    kMemorystatusLevelUrgent=2,
    kMemorystatusLevelWarning=1
} enum_4122;

typedef enum enum_4128 {
    kMemorystatusKilled=1,
    kMemorystatusKilledDiagnostic=7,
    kMemorystatusKilledHiwat=2,
    kMemorystatusKilledIdleExit=8,
    kMemorystatusKilledPerProcessLimit=6,
    kMemorystatusKilledVMPageShortage=4,
    kMemorystatusKilledVMThrashing=5,
    kMemorystatusKilledVnodes=3
} enum_4128;

typedef enum enum_4129 {
    kMemorystatusKilledVM=0
} enum_4129;

typedef struct jetsam_snapshot jetsam_snapshot, *Pjetsam_snapshot;

typedef struct memorystatus_kernel_stats memorystatus_kernel_stats, *Pmemorystatus_kernel_stats;

typedef struct memorystatus_kernel_stats memorystatus_kernel_stats_t;

typedef struct jetsam_snapshot_entry jetsam_snapshot_entry, *Pjetsam_snapshot_entry;

typedef struct jetsam_snapshot_entry memorystatus_jetsam_snapshot_entry_t;

struct jetsam_snapshot_entry {
    pid_t pid;
    char name[17];
    int32_t priority;
    uint32_t pages;
    uint32_t max_pages;
    uint32_t state;
    uint32_t killed;
    uint64_t user_data;
    uint8_t uuid[16];
    uint32_t fds;
};

struct memorystatus_kernel_stats {
    uint32_t free_pages;
    uint32_t active_pages;
    uint32_t inactive_pages;
    uint32_t throttled_pages;
    uint32_t purgeable_pages;
    uint32_t wired_pages;
    uint32_t speculative_pages;
    uint32_t filebacked_pages;
    uint32_t anonymous_pages;
    uint32_t compressor_pages;
    uint64_t compressions;
    uint64_t decompressions;
    uint64_t total_uncompressed_pages_in_compressor;
};

struct jetsam_snapshot {
    uint64_t snapshot_time;
    uint64_t notification_time;
    memorystatus_kernel_stats_t stats;
    size_t entry_count;
    memorystatus_jetsam_snapshot_entry_t[0] entries;
};

typedef struct memorystatus_freeze_entry memorystatus_freeze_entry, *Pmemorystatus_freeze_entry;

struct memorystatus_freeze_entry {
    int32_t pid;
    uint32_t flags;
    uint32_t pages;
};

typedef struct memorystatus_freeze_entry memorystatus_freeze_entry_t;

typedef struct jetsam_snapshot memorystatus_jetsam_snapshot_t;

typedef struct memorystatus_priority_entry memorystatus_priority_entry, *Pmemorystatus_priority_entry;

struct memorystatus_priority_entry {
    pid_t pid;
    int32_t priority;
    uint64_t user_data;
    int32_t limit;
    uint32_t state;
};

typedef struct memorystatus_priority_entry memorystatus_priority_entry_t;

typedef struct memorystatus_priority_properties memorystatus_priority_properties, *Pmemorystatus_priority_properties;

struct memorystatus_priority_properties {
    int32_t priority;
    uint64_t user_data;
};

typedef struct memorystatus_priority_properties memorystatus_priority_properties_t;

#define KERN_ABORTED 14

#define KERN_ALREADY_IN_SET 11

#define KERN_ALREADY_WAITING 30

#define KERN_CODESIGN_ERROR 50

#define KERN_DEFAULT_SET 31

#define KERN_EXCEPTION_PROTECTED 32

#define KERN_FAILURE 5

#define KERN_INVALID_ADDRESS 1

#define KERN_INVALID_ARGUMENT 4

#define KERN_INVALID_CAPABILITY 20

#define KERN_INVALID_HOST 22

#define KERN_INVALID_LEDGER 33

#define KERN_INVALID_MEMORY_CONTROL 34

#define KERN_INVALID_NAME 15

#define KERN_INVALID_OBJECT 29

#define KERN_INVALID_POLICY 28

#define KERN_INVALID_PROCESSOR_SET 26

#define KERN_INVALID_RIGHT 17

#define KERN_INVALID_SECURITY 35

#define KERN_INVALID_TASK 16

#define KERN_INVALID_VALUE 18

#define KERN_LOCK_OWNED 40

#define KERN_LOCK_OWNED_SELF 41

#define KERN_LOCK_SET_DESTROYED 38

#define KERN_LOCK_UNSTABLE 39

#define KERN_MEMORY_DATA_MOVED 24

#define KERN_MEMORY_ERROR 10

#define KERN_MEMORY_FAILURE 9

#define KERN_MEMORY_PRESENT 23

#define KERN_MEMORY_RESTART_COPY 25

#define KERN_NAME_EXISTS 13

#define KERN_NO_ACCESS 8

#define KERN_NO_SPACE 3

#define KERN_NODE_DOWN 47

#define KERN_NOT_DEPRESSED 36

#define KERN_NOT_IN_SET 12

#define KERN_NOT_RECEIVER 7

#define KERN_NOT_SUPPORTED 46

#define KERN_NOT_WAITING 48

#define KERN_OPERATION_TIMED_OUT 49

#define KERN_POLICY_LIMIT 27

#define KERN_PROTECTION_FAILURE 2

#define KERN_RESOURCE_SHORTAGE 6

#define KERN_RETURN_MAX 256

#define KERN_RIGHT_EXISTS 21

#define KERN_RPC_CONTINUE_ORPHAN 45

#define KERN_RPC_SERVER_TERMINATED 43

#define KERN_RPC_TERMINATE_ORPHAN 44

#define KERN_SEMAPHORE_DESTROYED 42

#define KERN_SUCCESS 0

#define KERN_TERMINATED 37

#define KERN_UREFS_OVERFLOW 19

typedef struct __bufattr __bufattr, *P__bufattr;

struct __bufattr {
};

typedef struct __if_clone __if_clone, *P__if_clone;

struct __if_clone {
};

typedef struct __ifaddr __ifaddr, *P__ifaddr;

struct __ifaddr {
};

typedef struct __ifmultiaddr __ifmultiaddr, *P__ifmultiaddr;

struct __ifmultiaddr {
};

typedef struct __ifnet __ifnet, *P__ifnet;

struct __ifnet {
};

typedef struct __ifnet_filter __ifnet_filter, *P__ifnet_filter;

struct __ifnet_filter {
};

typedef struct __mbuf __mbuf, *P__mbuf;

struct __mbuf {
};

typedef struct __pkthdr __pkthdr, *P__pkthdr;

struct __pkthdr {
};

typedef struct __rtentry __rtentry, *P__rtentry;

struct __rtentry {
};

typedef struct __socket __socket, *P__socket;

struct __socket {
};

typedef struct __sockopt __sockopt, *P__sockopt;

struct __sockopt {
};

typedef struct buf * buf_t;

typedef struct __bufattr * bufattr_t;

typedef int64_t daddr64_t;

typedef struct file file, *Pfile;

struct file {
};

typedef struct file * file_t;

typedef struct __if_clone * if_clone_t;

typedef struct __ifaddr * ifaddr_t;

typedef struct __ifmultiaddr * ifmultiaddr_t;

typedef struct __ifnet * ifnet_t;

typedef struct __ifnet_filter * interface_filter_t;

typedef struct kauth_ace kauth_ace, *Pkauth_ace;

struct kauth_ace {
    struct guid_t ace_applicable;
    u_int32_t ace_flags;
    kauth_ace_rights_t ace_rights;
};

typedef struct kauth_ace * kauth_ace_t;

typedef struct kauth_acl kauth_acl, *Pkauth_acl;

struct kauth_acl {
    u_int32_t acl_entrycount;
    u_int32_t acl_flags;
    struct kauth_ace acl_ace[1];
};

typedef struct kauth_acl * kauth_acl_t;

typedef struct kauth_filesec kauth_filesec, *Pkauth_filesec;

struct kauth_filesec {
    u_int32_t fsec_magic;
    struct guid_t fsec_owner;
    struct guid_t fsec_group;
    struct kauth_acl fsec_acl;
};

typedef struct kauth_filesec * kauth_filesec_t;

typedef struct __mbuf * mbuf_t;

typedef struct __pkthdr * pkthdr_t;

typedef struct proc proc, *Pproc;

typedef struct proc * proc_t;

struct proc {
};

typedef struct __rtentry * route_t;

typedef struct __socket * socket_t;

typedef struct __sockopt * sockopt_t;

typedef struct uio * uio_t;

typedef struct vfs_context vfs_context, *Pvfs_context;

struct vfs_context {
};

typedef struct vfs_context * vfs_context_t;

typedef struct vfstable vfstable, *Pvfstable;

struct vfstable {
};

typedef struct vfstable * vfstable_t;

#define NFF_AFTER 2

#define NFF_BEFORE 1

#define NKE_OK 0

#define NKE_REMOVE -1

typedef struct so_nke so_nke, *Pso_nke;

struct so_nke {
    uint nke_handle;
    uint nke_where;
    int nke_flags;
    u_int32_t reserved[4];
};

#define KEY_SENDUP_ALL 1

#define KEY_SENDUP_ONE 0

#define KEY_SENDUP_REGISTERED 2

typedef struct pfkeystat pfkeystat, *Ppfkeystat;

struct pfkeystat {
    u_quad_t out_total;
    u_quad_t out_bytes;
    u_quad_t out_msgtype[256];
    u_quad_t out_invlen;
    u_quad_t out_invver;
    u_quad_t out_invmsgtype;
    u_quad_t out_tooshort;
    u_quad_t out_nomem;
    u_quad_t out_dupext;
    u_quad_t out_invexttype;
    u_quad_t out_invsatype;
    u_quad_t out_invaddr;
    u_quad_t in_total;
    u_quad_t in_bytes;
    u_quad_t in_msgtype[256];
    u_quad_t in_msgtarget[3];
    u_quad_t in_nomem;
    u_quad_t sockerr;
};

#define KLM_CANCEL 3

#define KLM_LOCK 2

#define KLM_PROG 100020

#define KLM_TEST 1

#define KLM_UNLOCK 4

#define KLM_VERS 1

#define LM_MAXSTRLEN 1024

typedef union _union_3504 _union_3504, *P_union_3504;

typedef struct klm_holder klm_holder, *Pklm_holder;

struct klm_holder {
    boolean_t exclusive;
    int svid;
    u_int l_offset;
    u_int l_len;
};

union _union_3504 {
    struct klm_holder holder;
};

typedef struct klm_lock klm_lock, *Pklm_lock;

typedef struct netobj netobj, *Pnetobj;

struct netobj {
    uint n_len;
    char * n_bytes;
};

struct klm_lock {
    char * server_name;
    struct netobj fh;
    int pid;
    u_int l_offset;
    u_int l_len;
};

typedef struct klm_lockargs klm_lockargs, *Pklm_lockargs;

struct klm_lockargs {
    boolean_t block;
    boolean_t exclusive;
    struct klm_lock alock;
};

typedef struct klm_stat klm_stat, *Pklm_stat;

typedef enum klm_stats {
    klm_denied=1,
    klm_denied_nolocks=2,
    klm_granted=0,
    klm_working=3
} klm_stats;

struct klm_stat {
    enum klm_stats stat;
};

typedef struct klm_testargs klm_testargs, *Pklm_testargs;

struct klm_testargs {
    boolean_t exclusive;
    struct klm_lock alock;
};

typedef struct klm_testrply klm_testrply, *Pklm_testrply;

struct klm_testrply {
    enum klm_stats stat;
    union _union_3504 klm_testrply_u;
};

typedef struct klm_unlockargs klm_unlockargs, *Pklm_unlockargs;

struct klm_unlockargs {
    struct klm_lock alock;
};

#define KMOD_INFO_VERSION 1

#define KMOD_MAX_NAME 64

#define KMOD_RETURN_FAILURE 5

#define KMOD_RETURN_SUCCESS 0

typedef void * kmod_args_t;

typedef struct kmod_info kmod_info, *Pkmod_info;

typedef struct kmod_reference kmod_reference, *Pkmod_reference;

typedef struct kmod_reference kmod_reference_t;

typedef kern_return_t (kmod_start_func_t)(struct kmod_info *, void *);

typedef kern_return_t (kmod_stop_func_t)(struct kmod_info *, void *);

struct kmod_info {
    struct kmod_info * next;
    int32_t info_version;
    uint32_t id;
    char name[64];
    char version[64];
    int32_t reference_count;
    kmod_reference_t * reference_list;
    vm_address_t address;
    vm_size_t size;
    vm_size_t hdr_size;
    kmod_start_func_t * start;
    kmod_stop_func_t * stop;
};

struct kmod_reference {
    struct kmod_reference * next;
    struct kmod_info * info;
};

typedef struct kmod_info_32_v1 kmod_info_32_v1, *Pkmod_info_32_v1;

struct kmod_info_32_v1 {
    uint32_t next_addr;
    int32_t info_version;
    uint32_t id;
    uint8_t name[64];
    uint8_t version[64];
    int32_t reference_count;
    uint32_t reference_list_addr;
    uint32_t address;
    uint32_t size;
    uint32_t hdr_size;
    uint32_t start_addr;
    uint32_t stop_addr;
};

typedef struct kmod_info_32_v1 kmod_info_32_v1_t;

typedef struct kmod_info_64_v1 kmod_info_64_v1, *Pkmod_info_64_v1;

struct kmod_info_64_v1 {
    uint64_t next_addr;
    int32_t info_version;
    uint32_t id;
    uint8_t name[64];
    uint8_t version[64];
    int32_t reference_count;
    uint64_t reference_list_addr;
    uint64_t address;
    uint64_t size;
    uint64_t hdr_size;
    uint64_t start_addr;
    uint64_t stop_addr;
};

typedef struct kmod_info_64_v1 kmod_info_64_v1_t;

typedef struct kmod_info kmod_info_t;

typedef kmod_info_t * kmod_info_array_t;

#define AD_TYPE_EXTERNAL 16384

#define AD_TYPE_FIELD_TYPE_MASK 8191

#define AD_TYPE_INTERNAL_MASK 16383

#define AD_TYPE_REGISTERED 8192

#define AD_TYPE_RESERVED 32768

#define ADDRTYPE_ADDRPORT 256

#define ADDRTYPE_CHAOS 5

#define ADDRTYPE_DDP 16

#define ADDRTYPE_INET 2

#define ADDRTYPE_INET6 24

#define ADDRTYPE_IPPORT 257

#define ADDRTYPE_ISO 7

#define ADDRTYPE_XNS 6

#define AP_OPTS_MUTUAL_REQUIRED 536870912

#define AP_OPTS_RESERVED 2147483648

#define AP_OPTS_USE_SESSION_KEY 1073741824

#define AP_OPTS_USE_SUBKEY 1

#define AP_OPTS_WIRE_MASK 4294967280

#define ASN1_BAD_FORMAT 1859794440

#define ASN1_BAD_GMTIME 1859794442

#define ASN1_BAD_ID 1859794438

#define ASN1_BAD_LENGTH 1859794439

#define ASN1_BAD_TIMEFORMAT 1859794432

#define asn1_err_base 1859794432

#define ASN1_MISMATCH_INDEF 1859794443

#define ASN1_MISPLACED_FIELD 1859794434

#define ASN1_MISSING_EOC 1859794444

#define ASN1_MISSING_FIELD 1859794433

#define ASN1_OVERFLOW 1859794436

#define ASN1_OVERRUN 1859794437

#define ASN1_PARSE_ERROR 1859794441

#define ASN1_TYPE_MISMATCH 1859794435

#define CKSUMTYPE_CRC32 1

#define CKSUMTYPE_DESCBC 4

#define CKSUMTYPE_HMAC_MD5_ARCFOUR -138

#define CKSUMTYPE_HMAC_SHA1_96_AES128 15

#define CKSUMTYPE_HMAC_SHA1_96_AES256 16

#define CKSUMTYPE_HMAC_SHA1_DES3 12

#define CKSUMTYPE_NIST_SHA 9

#define CKSUMTYPE_RSA_MD4 2

#define CKSUMTYPE_RSA_MD4_DES 3

#define CKSUMTYPE_RSA_MD5 7

#define CKSUMTYPE_RSA_MD5_DES 8

#define ENCTYPE_AES128_CTS_HMAC_SHA1_96 17

#define ENCTYPE_AES256_CTS_HMAC_SHA1_96 18

#define ENCTYPE_ARCFOUR_HMAC 23

#define ENCTYPE_ARCFOUR_HMAC_EXP 24

#define ENCTYPE_DES3_CBC_ENV 15

#define ENCTYPE_DES3_CBC_RAW 6

#define ENCTYPE_DES3_CBC_SHA 5

#define ENCTYPE_DES3_CBC_SHA1 16

#define ENCTYPE_DES_CBC_CRC 1

#define ENCTYPE_DES_CBC_MD4 2

#define ENCTYPE_DES_CBC_MD5 3

#define ENCTYPE_DES_CBC_RAW 4

#define ENCTYPE_DES_HMAC_SHA1 8

#define ENCTYPE_DSA_SHA1_CMS 9

#define ENCTYPE_MD5_RSA_CMS 10

#define ENCTYPE_NULL 0

#define ENCTYPE_RC2_CBC_ENV 12

#define ENCTYPE_RSA_ENV 13

#define ENCTYPE_RSA_ES_OAEP_ENV 14

#define ENCTYPE_SHA1_RSA_CMS 11

#define ENCTYPE_UNKNOWN 511

#define ERROR_TABLE_BASE_asn1 1859794432

#define ERROR_TABLE_BASE_k524 -1750206208

#define ERROR_TABLE_BASE_kdb5 -1780008448

#define ERROR_TABLE_BASE_krb5 -1765328384

#define ERROR_TABLE_BASE_kv5m -1760647424

#define k524_err_base -1750206208

#define kdb5_err_base -1780008448

#define KDC_OPT_ALLOW_POSTDATE 67108864

#define KDC_OPT_CANONICALIZE 65536

#define KDC_OPT_DISABLE_TRANSITED_CHECK 32

#define KDC_OPT_ENC_TKT_IN_SKEY 8

#define KDC_OPT_FORWARDABLE 1073741824

#define KDC_OPT_FORWARDED 536870912

#define KDC_OPT_POSTDATED 33554432

#define KDC_OPT_PROXIABLE 268435456

#define KDC_OPT_PROXY 134217728

#define KDC_OPT_RENEW 2

#define KDC_OPT_RENEWABLE 8388608

#define KDC_OPT_RENEWABLE_OK 16

#define KDC_OPT_REQUEST_ANONYMOUS 131072

#define KDC_OPT_VALIDATE 1

#define KDC_TKT_COMMON_MASK 1417674752

#define KRB524_BADADDR -1750206207

#define KRB524_BADKEY -1750206208

#define KRB524_BADPRINC -1750206206

#define KRB524_BADREALM -1750206205

#define KRB524_DECEMPTY -1750206202

#define KRB524_ENCFULL -1750206203

#define KRB524_KRB4_DISABLED -1750206200

#define KRB524_NOTRESP -1750206201

#define KRB524_V4ERR -1750206204

#define KRB5_ALTAUTH_ATT_CHALLENGE_RESPONSE 64

#define KRB5_AP_REP 15

#define KRB5_AP_REQ 14

#define KRB5_APPL_EXPIRED -1765328153

#define KRB5_AS_REP 11

#define KRB5_AS_REQ 10

#define KRB5_AUTH_CONTEXT_DO_SEQUENCE 4

#define KRB5_AUTH_CONTEXT_DO_TIME 1

#define KRB5_AUTH_CONTEXT_GENERATE_LOCAL_ADDR 1

#define KRB5_AUTH_CONTEXT_GENERATE_LOCAL_FULL_ADDR 4

#define KRB5_AUTH_CONTEXT_GENERATE_REMOTE_ADDR 2

#define KRB5_AUTH_CONTEXT_GENERATE_REMOTE_FULL_ADDR 8

#define KRB5_AUTH_CONTEXT_PERMIT_ALL 16

#define KRB5_AUTH_CONTEXT_RET_SEQUENCE 8

#define KRB5_AUTH_CONTEXT_RET_TIME 2

#define KRB5_AUTH_CONTEXT_USE_SUBKEY 32

#define KRB5_AUTHDATA_AND_OR 5

#define KRB5_AUTHDATA_IF_RELEVANT 1

#define KRB5_AUTHDATA_INITIAL_VERIFIED_CAS 9

#define KRB5_AUTHDATA_KDC_ISSUED 4

#define KRB5_AUTHDATA_MANDATORY_FOR_KDC 8

#define KRB5_AUTHDATA_OSF_DCE 64

#define KRB5_AUTHDATA_SESAME 65

#define KRB5_BAD_ENCTYPE -1765328196

#define KRB5_BAD_KEYSIZE -1765328195

#define KRB5_BAD_MSIZE -1765328194

#define KRB5_BADMSGTYPE -1765328246

#define KRB5_CC_BADNAME -1765328245

#define KRB5_CC_END -1765328242

#define KRB5_CC_FORMAT -1765328185

#define KRB5_CC_IO -1765328191

#define KRB5_CC_NOMEM -1765328186

#define KRB5_CC_NOSUPP -1765328137

#define KRB5_CC_NOT_KTYPE -1765328184

#define KRB5_CC_NOTFOUND -1765328243

#define KRB5_CC_READONLY -1765328138

#define KRB5_CC_TYPE_EXISTS -1765328193

#define KRB5_CC_UNKNOWN_TYPE -1765328244

#define KRB5_CC_WRITE -1765328187

#define KRB5_CCACHE_BADVNO -1765328172

#define KRB5_CHPW_FAIL -1765328150

#define KRB5_CHPW_PWDNULL -1765328151

#define KRB5_CONFIG_BADFORMAT -1765328248

#define KRB5_CONFIG_CANTOPEN -1765328249

#define KRB5_CONFIG_ETYPE_NOSUPP -1765328147

#define KRB5_CONFIG_NODEFREALM -1765328160

#define KRB5_CONFIG_NOTENUFSPACE -1765328247

#define KRB5_CRED 22

#define KRB5_CRYPTO_INTERNAL -1765328206

#define KRB5_CYBERSAFE_SECUREID 9

#define KRB5_DELTAT_BADFORMAT -1765328136

#define KRB5_DEPRECATED 0

#define KRB5_DOMAIN_X500_COMPRESS 1

#define KRB5_EAI_FAIL -1765328145

#define KRB5_EAI_NODATA -1765328144

#define KRB5_EAI_NONAME -1765328143

#define KRB5_EAI_SERVICE -1765328142

#define KRB5_ERR_BAD_HOSTNAME -1765328168

#define KRB5_ERR_BAD_S2K_PARAMS -1765328140

#define krb5_err_base -1765328384

#define KRB5_ERR_HOST_REALM_UNKNOWN -1765328167

#define KRB5_ERR_NO_SERVICE -1765328139

#define KRB5_ERR_NUMERIC_REALM -1765328141

#define KRB5_ERR_RCSID -1765328256

#define KRB5_ERROR 30

#define KRB5_FCC_INTERNAL -1765328188

#define KRB5_FCC_NOFILE -1765328189

#define KRB5_FCC_PERM -1765328190

#define KRB5_FWD_BAD_PRINCIPAL -1765328162

#define KRB5_GC_CACHED 2

#define KRB5_GC_USER_USER 1

#define KRB5_GET_IN_TKT_LOOP -1765328161

#define KRB5_GET_INIT_CREDS_OPT_ADDRESS_LIST 32

#define KRB5_GET_INIT_CREDS_OPT_CANONICALIZE 512

#define KRB5_GET_INIT_CREDS_OPT_CHG_PWD_PRMPT 256

#define KRB5_GET_INIT_CREDS_OPT_ETYPE_LIST 16

#define KRB5_GET_INIT_CREDS_OPT_FORWARDABLE 4

#define KRB5_GET_INIT_CREDS_OPT_PREAUTH_LIST 64

#define KRB5_GET_INIT_CREDS_OPT_PROXIABLE 8

#define KRB5_GET_INIT_CREDS_OPT_RENEW_LIFE 2

#define KRB5_GET_INIT_CREDS_OPT_SALT 128

#define KRB5_GET_INIT_CREDS_OPT_TKT_LIFE 1

#define KRB5_IN_TKT_REALM_MISMATCH -1765328235

#define KRB5_INT16_MAX 65535

#define KRB5_INT16_MIN -65536

#define KRB5_INT32_MAX 2147483647

#define KRB5_INT32_MIN -2147483648

#define KRB5_INVALID_FLAGS -1765328183

#define KRB5_KDB_ACCESS_ERROR -1780008415

#define KRB5_KDB_BAD_CREATEFLAGS -1780008422

#define KRB5_KDB_BAD_ENCTYPE -1780008423

#define KRB5_KDB_BAD_SALTTYPE -1780008424

#define KRB5_KDB_BAD_VERSION -1780008425

#define KRB5_KDB_BADLOCKMODE -1780008436

#define KRB5_KDB_BADMASTERKEY -1780008431

#define KRB5_KDB_BADSTORED_MKEY -1780008428

#define KRB5_KDB_CANTLOCK_DB -1780008427

#define KRB5_KDB_CANTREAD_STORED -1780008429

#define KRB5_KDB_CONSTRAINT_VIOLATION -1780008413

#define KRB5_KDB_DB_CHANGED -1780008440

#define KRB5_KDB_DB_CORRUPT -1780008426

#define KRB5_KDB_DB_INUSE -1780008441

#define KRB5_KDB_DBINITED -1780008434

#define KRB5_KDB_DBNOTINITED -1780008435

#define KRB5_KDB_DBTYPE_INIT -1780008417

#define KRB5_KDB_DBTYPE_NOSUP -1780008418

#define KRB5_KDB_DBTYPE_NOTFOUND -1780008419

#define KRB5_KDB_ILL_WILDCARD -1780008442

#define KRB5_KDB_ILLDIRECTION -1780008433

#define KRB5_KDB_INTERNAL_ERROR -1780008414

#define KRB5_KDB_INUSE -1780008447

#define KRB5_KDB_INVALIDKEYSIZE -1780008430

#define KRB5_KDB_NO_MATCHING_KEY -1780008420

#define KRB5_KDB_NO_PERMITTED_KEY -1780008421

#define KRB5_KDB_NOENTRY -1780008443

#define KRB5_KDB_NOMASTERKEY -1780008432

#define KRB5_KDB_NOTLOCKED -1780008437

#define KRB5_KDB_RCSID -1780008448

#define KRB5_KDB_RECURSIVELOCK -1780008438

#define KRB5_KDB_SERVER_INTERNAL_ERR -1780008416

#define KRB5_KDB_TRUNCATED_RECORD -1780008439

#define KRB5_KDB_UK_RERROR -1780008445

#define KRB5_KDB_UK_SERROR -1780008446

#define KRB5_KDB_UNAUTH -1780008444

#define KRB5_KDC_UNREACH -1765328228

#define KRB5_KDCREP_MODIFIED -1765328237

#define KRB5_KDCREP_SKEW -1765328236

#define KRB5_KEYTAB_BADVNO -1765328171

#define KRB5_KEYUSAGE_AD_ITE 21

#define KRB5_KEYUSAGE_AD_KDCISSUED_CKSUM 19

#define KRB5_KEYUSAGE_AD_MTE 20

#define KRB5_KEYUSAGE_AP_REP_ENCPART 12

#define KRB5_KEYUSAGE_AP_REQ_AUTH 11

#define KRB5_KEYUSAGE_AP_REQ_AUTH_CKSUM 10

#define KRB5_KEYUSAGE_APP_DATA_CKSUM 17

#define KRB5_KEYUSAGE_APP_DATA_ENCRYPT 16

#define KRB5_KEYUSAGE_AS_REP_ENCPART 3

#define KRB5_KEYUSAGE_AS_REQ_PA_ENC_TS 1

#define KRB5_KEYUSAGE_GSS_TOK_MIC 22

#define KRB5_KEYUSAGE_GSS_TOK_WRAP_INTEG 23

#define KRB5_KEYUSAGE_GSS_TOK_WRAP_PRIV 24

#define KRB5_KEYUSAGE_KDC_REP_TICKET 2

#define KRB5_KEYUSAGE_KRB_CRED_ENCPART 14

#define KRB5_KEYUSAGE_KRB_ERROR_CKSUM 18

#define KRB5_KEYUSAGE_KRB_PRIV_ENCPART 13

#define KRB5_KEYUSAGE_KRB_SAFE_CKSUM 15

#define KRB5_KEYUSAGE_PA_REFERRAL 26

#define KRB5_KEYUSAGE_PA_SAM_CHALLENGE_CKSUM 25

#define KRB5_KEYUSAGE_PA_SAM_CHALLENGE_TRACKID 26

#define KRB5_KEYUSAGE_PA_SAM_RESPONSE 27

#define KRB5_KEYUSAGE_TGS_REP_ENCPART_SESSKEY 8

#define KRB5_KEYUSAGE_TGS_REP_ENCPART_SUBKEY 9

#define KRB5_KEYUSAGE_TGS_REQ_AD_SESSKEY 4

#define KRB5_KEYUSAGE_TGS_REQ_AD_SUBKEY 5

#define KRB5_KEYUSAGE_TGS_REQ_AUTH 7

#define KRB5_KEYUSAGE_TGS_REQ_AUTH_CKSUM 6

#define KRB5_KPASSWD_ACCESSDENIED 5

#define KRB5_KPASSWD_AUTHERROR 3

#define KRB5_KPASSWD_BAD_VERSION 6

#define KRB5_KPASSWD_HARDERROR 2

#define KRB5_KPASSWD_INITIAL_FLAG_NEEDED 7

#define KRB5_KPASSWD_MALFORMED 1

#define KRB5_KPASSWD_SOFTERROR 4

#define KRB5_KPASSWD_SUCCESS 0

#define KRB5_KT_BADNAME -1765328205

#define KRB5_KT_END -1765328202

#define KRB5_KT_FORMAT -1765328149

#define KRB5_KT_IOERR -1765328200

#define KRB5_KT_KVNONOTFOUND -1765328154

#define KRB5_KT_NAME_TOOLONG -1765328155

#define KRB5_KT_NOTFOUND -1765328203

#define KRB5_KT_NOWRITE -1765328201

#define KRB5_KT_TYPE_EXISTS -1765328192

#define KRB5_KT_UNKNOWN_TYPE -1765328204

#define KRB5_LIB_EXPIRED -1765328152

#define KRB5_LIBOS_BADLOCKFLAG -1765328255

#define KRB5_LIBOS_BADPWDMATCH -1765328253

#define KRB5_LIBOS_CANTREADPWD -1765328254

#define KRB5_LIBOS_PWDINTR -1765328252

#define KRB5_LNAME_BADFORMAT -1765328207

#define KRB5_LNAME_CANTOPEN -1765328209

#define KRB5_LNAME_NOTRANS -1765328208

#define KRB5_LOG_CONV -1780008412

#define KRB5_LOG_CORRUPT -1780008410

#define KRB5_LOG_ERROR -1780008409

#define KRB5_LOG_UNSTABLE -1780008411

#define KRB5_LRQ_ALL_LAST_INITIAL 2

#define KRB5_LRQ_ALL_LAST_RENEWAL 4

#define KRB5_LRQ_ALL_LAST_REQ 5

#define KRB5_LRQ_ALL_LAST_TGT 1

#define KRB5_LRQ_ALL_LAST_TGT_ISSUED 3

#define KRB5_LRQ_ALL_PW_EXPTIME 6

#define KRB5_LRQ_NONE 0

#define KRB5_LRQ_ONE_LAST_INITIAL -2

#define KRB5_LRQ_ONE_LAST_RENEWAL -4

#define KRB5_LRQ_ONE_LAST_REQ -5

#define KRB5_LRQ_ONE_LAST_TGT -1

#define KRB5_LRQ_ONE_LAST_TGT_ISSUED -3

#define KRB5_LRQ_ONE_PW_EXPTIME -6

#define KRB5_MUTUAL_FAILED -1765328226

#define KRB5_NO_2ND_TKT -1765328182

#define KRB5_NO_LOCALNAME -1765328227

#define KRB5_NO_TKT_IN_RLM -1765328199

#define KRB5_NO_TKT_SUPPLIED -1765328241

#define KRB5_NOCREDS_SUPPLIED -1765328181

#define KRB5_NOPERM_ETYPE -1765328148

#define KRB5_NT_ENT_PRINCIPAL_AND_ID -130

#define KRB5_NT_ENTERPRISE_PRINCIPAL 10

#define KRB5_NT_MS_PRINCIPAL -128

#define KRB5_NT_MS_PRINCIPAL_AND_ID -129

#define KRB5_NT_PRINCIPAL 1

#define KRB5_NT_SMTP_NAME 7

#define KRB5_NT_SRV_HST 3

#define KRB5_NT_SRV_INST 2

#define KRB5_NT_SRV_XHST 4

#define KRB5_NT_UID 5

#define KRB5_NT_UNKNOWN 0

#define KRB5_NT_X500_PRINCIPAL 6

#define KRB5_OBSOLETE_FN -1765328146

#define KRB5_PADATA_AFS3_SALT 10

#define KRB5_PADATA_AP_REQ 1

#define KRB5_PADATA_DASS 16

#define KRB5_PADATA_ENC_SANDIA_SECURID 6

#define KRB5_PADATA_ENC_TIMESTAMP 2

#define KRB5_PADATA_ENC_UNIX_TIME 5

#define KRB5_PADATA_ETYPE_INFO 11

#define KRB5_PADATA_ETYPE_INFO2 19

#define KRB5_PADATA_GET_FROM_TYPED_DATA 22

#define KRB5_PADATA_NONE 0

#define KRB5_PADATA_OSF_DCE 8

#define KRB5_PADATA_PK_AS_09_BINDING 132

#define KRB5_PADATA_PK_AS_REP 17

#define KRB5_PADATA_PK_AS_REP_OLD 15

#define KRB5_PADATA_PK_AS_REQ 16

#define KRB5_PADATA_PK_AS_REQ_OLD 14

#define KRB5_PADATA_PW_SALT 3

#define KRB5_PADATA_REFERRAL 25

#define KRB5_PADATA_SAM_CHALLENGE 12

#define KRB5_PADATA_SAM_CHALLENGE_2 30

#define KRB5_PADATA_SAM_REDIRECT 21

#define KRB5_PADATA_SAM_RESPONSE 13

#define KRB5_PADATA_SAM_RESPONSE_2 31

#define KRB5_PADATA_SESAME 7

#define KRB5_PADATA_TGS_REQ 1

#define KRB5_PADATA_USE_SPECIFIED_KVNO 20

#define KRB5_PARSE_ILLCHAR -1765328251

#define KRB5_PARSE_MALFORMED -1765328250

#define KRB5_PLUGIN_NO_HANDLE -1765328135

#define KRB5_PLUGIN_OP_NOTSUPP -1765328134

#define KRB5_PREAUTH_BAD_TYPE -1765328176

#define KRB5_PREAUTH_FAILED -1765328174

#define KRB5_PREAUTH_NO_KEY -1765328175

#define KRB5_PRINC_NOMATCH -1765328238

#define KRB5_PRINCIPAL_PARSE_ENTERPRISE 4

#define KRB5_PRINCIPAL_PARSE_NO_REALM 1

#define KRB5_PRINCIPAL_PARSE_REQUIRE_REALM 2

#define KRB5_PRINCIPAL_UNPARSE_DISPLAY 4

#define KRB5_PRINCIPAL_UNPARSE_NO_REALM 2

#define KRB5_PRINCIPAL_UNPARSE_SHORT 1

#define KRB5_PRIV 21

#define KRB5_PROG_ATYPE_NOSUPP -1765328170

#define KRB5_PROG_ETYPE_NOSUPP -1765328234

#define KRB5_PROG_KEYTYPE_NOSUPP -1765328233

#define KRB5_PROG_SUMTYPE_NOSUPP -1765328231

#define KRB5_PROMPT_TYPE_NEW_PASSWORD 2

#define KRB5_PROMPT_TYPE_NEW_PASSWORD_AGAIN 3

#define KRB5_PROMPT_TYPE_PASSWORD 1

#define KRB5_PROMPT_TYPE_PREAUTH 4

#define KRB5_PVNO 5

#define KRB5_RC_IO -1765328220

#define KRB5_RC_IO_EOF -1765328217

#define KRB5_RC_IO_IO -1765328214

#define KRB5_RC_IO_MALLOC -1765328216

#define KRB5_RC_IO_PERM -1765328215

#define KRB5_RC_IO_SPACE -1765328212

#define KRB5_RC_IO_UNKNOWN -1765328213

#define KRB5_RC_MALLOC -1765328224

#define KRB5_RC_NOIO -1765328219

#define KRB5_RC_PARSE -1765328218

#define KRB5_RC_REPLAY -1765328221

#define KRB5_RC_REQUIRED -1765328169

#define KRB5_RC_TYPE_EXISTS -1765328225

#define KRB5_RC_TYPE_NOTFOUND -1765328223

#define KRB5_RC_UNKNOWN -1765328222

#define KRB5_RCACHE_BADVNO -1765328173

#define KRB5_REALM_CANT_RESOLVE -1765328164

#define KRB5_REALM_UNKNOWN -1765328230

#define KRB5_RECVAUTH_BADAUTHVERS 2

#define KRB5_RECVAUTH_SKIP_VERSION 1

#define KRB5_SAFE 20

#define KRB5_SAM_BAD_CHECKSUM -1765328156

#define KRB5_SAM_INVALID_ETYPE -1765328158

#define KRB5_SAM_MUST_PK_ENCRYPT_SAD 536870912

#define KRB5_SAM_NO_CHECKSUM -1765328157

#define KRB5_SAM_SEND_ENCRYPTED_SAD 1073741824

#define KRB5_SAM_UNSUPPORTED -1765328159

#define KRB5_SAM_USE_SAD_AS_KEY 2147483648

#define KRB5_SENDAUTH_BADAPPLVERS -1765328179

#define KRB5_SENDAUTH_BADAUTHVERS -1765328180

#define KRB5_SENDAUTH_BADRESPONSE -1765328178

#define KRB5_SENDAUTH_REJECTED -1765328177

#define KRB5_SERVICE_UNKNOWN -1765328229

#define KRB5_SNAME_UNSUPP_NAMETYPE -1765328166

#define KRB5_TC_MATCH_2ND_TKT 128

#define KRB5_TC_MATCH_AUTHDATA 32

#define KRB5_TC_MATCH_FLAGS 4

#define KRB5_TC_MATCH_FLAGS_EXACT 16

#define KRB5_TC_MATCH_IS_SKEY 2

#define KRB5_TC_MATCH_KTYPE 256

#define KRB5_TC_MATCH_SRV_NAMEONLY 64

#define KRB5_TC_MATCH_TIMES 1

#define KRB5_TC_MATCH_TIMES_EXACT 8

#define KRB5_TC_NOTICKET 2

#define KRB5_TC_OPENCLOSE 1

#define KRB5_TC_SUPPORTED_KTYPES 512

#define KRB5_TGS_NAME_SIZE 6

#define KRB5_TGS_REP 13

#define KRB5_TGS_REQ 12

#define KRB5_TKT_NOT_FORWARDABLE -1765328163

#define KRB5_TRANS_BADFORMAT -1765328210

#define KRB5_TRANS_CANTOPEN -1765328211

#define KRB5_VERIFY_INIT_CREDS_OPT_AP_REQ_NOFAIL 1

#define KRB5_WRONG_ETYPE -1765328232

#define KRB5DES_BAD_KEYPAR -1765328198

#define KRB5DES_WEAK_KEY -1765328197

#define KRB5KDC_ERR_BAD_PVNO -1765328381

#define KRB5KDC_ERR_BADOPTION -1765328371

#define KRB5KDC_ERR_C_OLD_MAST_KVNO -1765328380

#define KRB5KDC_ERR_C_PRINCIPAL_UNKNOWN -1765328378

#define KRB5KDC_ERR_CANNOT_POSTDATE -1765328374

#define KRB5KDC_ERR_CANT_VERIFY_CERTIFICATE -1765328314

#define KRB5KDC_ERR_CERTIFICATE_MISMATCH -1765328318

#define KRB5KDC_ERR_CLIENT_NAME_MISMATCH -1765328309

#define KRB5KDC_ERR_CLIENT_NOT_TRUSTED -1765328322

#define KRB5KDC_ERR_CLIENT_NOTYET -1765328363

#define KRB5KDC_ERR_CLIENT_REVOKED -1765328366

#define KRB5KDC_ERR_DH_KEY_PARAMETERS_NOT_ACCEPTED -1765328319

#define KRB5KDC_ERR_DIGEST_IN_CERT_NOT_ACCEPTED -1765328306

#define KRB5KDC_ERR_DIGEST_IN_SIGNED_DATA_NOT_ACCEPTED -1765328304

#define KRB5KDC_ERR_ETYPE_NOSUPP -1765328370

#define KRB5KDC_ERR_INCONSISTENT_KEY_PURPOSE -1765328307

#define KRB5KDC_ERR_INVALID_CERTIFICATE -1765328313

#define KRB5KDC_ERR_INVALID_SIG -1765328320

#define KRB5KDC_ERR_KDC_NAME_MISMATCH -1765328308

#define KRB5KDC_ERR_KDC_NOT_TRUSTED -1765328321

#define KRB5KDC_ERR_KEY_EXP -1765328361

#define KRB5KDC_ERR_MUST_USE_USER2USER -1765328357

#define KRB5KDC_ERR_NAME_EXP -1765328383

#define KRB5KDC_ERR_NEVER_VALID -1765328373

#define KRB5KDC_ERR_NONE -1765328384

#define KRB5KDC_ERR_NULL_KEY -1765328375

#define KRB5KDC_ERR_PA_CHECKSUM_MUST_BE_INCLUDED -1765328305

#define KRB5KDC_ERR_PADATA_TYPE_NOSUPP -1765328368

#define KRB5KDC_ERR_PATH_NOT_ACCEPTED -1765328356

#define KRB5KDC_ERR_POLICY -1765328372

#define KRB5KDC_ERR_PREAUTH_FAILED -1765328360

#define KRB5KDC_ERR_PREAUTH_REQUIRED -1765328359

#define KRB5KDC_ERR_PRINCIPAL_NOT_UNIQUE -1765328376

#define KRB5KDC_ERR_PUBLIC_KEY_ENCRYPTION_NOT_SUPPORTED -1765328303

#define KRB5KDC_ERR_REVOCATION_STATUS_UNAVAILABLE -1765328310

#define KRB5KDC_ERR_REVOCATION_STATUS_UNKNOWN -1765328311

#define KRB5KDC_ERR_REVOKED_CERTIFICATE -1765328312

#define KRB5KDC_ERR_S_OLD_MAST_KVNO -1765328379

#define KRB5KDC_ERR_S_PRINCIPAL_UNKNOWN -1765328377

#define KRB5KDC_ERR_SERVER_NOMATCH -1765328358

#define KRB5KDC_ERR_SERVICE_EXP -1765328382

#define KRB5KDC_ERR_SERVICE_NOTYET -1765328362

#define KRB5KDC_ERR_SERVICE_REVOKED -1765328365

#define KRB5KDC_ERR_SUMTYPE_NOSUPP -1765328369

#define KRB5KDC_ERR_SVC_UNAVAILABLE -1765328355

#define KRB5KDC_ERR_TGT_REVOKED -1765328364

#define KRB5KDC_ERR_TRTYPE_NOSUPP -1765328367

#define KRB5KDC_ERR_WRONG_REALM -1765328316

#define KRB5KRB_AP_ERR_BAD_INTEGRITY -1765328353

#define KRB5KRB_AP_ERR_BADADDR -1765328346

#define KRB5KRB_AP_ERR_BADDIRECTION -1765328337

#define KRB5KRB_AP_ERR_BADKEYVER -1765328340

#define KRB5KRB_AP_ERR_BADMATCH -1765328348

#define KRB5KRB_AP_ERR_BADORDER -1765328342

#define KRB5KRB_AP_ERR_BADSEQ -1765328335

#define KRB5KRB_AP_ERR_BADVERSION -1765328345

#define KRB5KRB_AP_ERR_ILL_CR_TKT -1765328341

#define KRB5KRB_AP_ERR_INAPP_CKSUM -1765328334

#define KRB5KRB_AP_ERR_METHOD -1765328336

#define KRB5KRB_AP_ERR_MODIFIED -1765328343

#define KRB5KRB_AP_ERR_MSG_TYPE -1765328344

#define KRB5KRB_AP_ERR_MUT_FAIL -1765328338

#define KRB5KRB_AP_ERR_NO_TGT -1765328317

#define KRB5KRB_AP_ERR_NOKEY -1765328339

#define KRB5KRB_AP_ERR_NOT_US -1765328349

#define KRB5KRB_AP_ERR_REPEAT -1765328350

#define KRB5KRB_AP_ERR_SKEW -1765328347

#define KRB5KRB_AP_ERR_TKT_EXPIRED -1765328352

#define KRB5KRB_AP_ERR_TKT_INVALID -1765328239

#define KRB5KRB_AP_ERR_TKT_NYV -1765328351

#define KRB5KRB_AP_ERR_USER_TO_USER_REQUIRED -1765328315

#define KRB5KRB_AP_ERR_V4_REPLY -1765328165

#define KRB5KRB_AP_PATH_NOT_ACCEPTED -1765328333

#define KRB5KRB_AP_WRONG_PRINC -1765328240

#define KRB5KRB_ERR_FIELD_TOOLONG -1765328323

#define KRB5KRB_ERR_GENERIC -1765328324

#define KRB5KRB_ERR_RESPONSE_TOO_BIG -1765328332

#define KRB5PLACEHOLD_100 -1765328284

#define KRB5PLACEHOLD_101 -1765328283

#define KRB5PLACEHOLD_102 -1765328282

#define KRB5PLACEHOLD_103 -1765328281

#define KRB5PLACEHOLD_104 -1765328280

#define KRB5PLACEHOLD_105 -1765328279

#define KRB5PLACEHOLD_106 -1765328278

#define KRB5PLACEHOLD_107 -1765328277

#define KRB5PLACEHOLD_108 -1765328276

#define KRB5PLACEHOLD_109 -1765328275

#define KRB5PLACEHOLD_110 -1765328274

#define KRB5PLACEHOLD_111 -1765328273

#define KRB5PLACEHOLD_112 -1765328272

#define KRB5PLACEHOLD_113 -1765328271

#define KRB5PLACEHOLD_114 -1765328270

#define KRB5PLACEHOLD_115 -1765328269

#define KRB5PLACEHOLD_116 -1765328268

#define KRB5PLACEHOLD_117 -1765328267

#define KRB5PLACEHOLD_118 -1765328266

#define KRB5PLACEHOLD_119 -1765328265

#define KRB5PLACEHOLD_120 -1765328264

#define KRB5PLACEHOLD_121 -1765328263

#define KRB5PLACEHOLD_122 -1765328262

#define KRB5PLACEHOLD_123 -1765328261

#define KRB5PLACEHOLD_124 -1765328260

#define KRB5PLACEHOLD_125 -1765328259

#define KRB5PLACEHOLD_126 -1765328258

#define KRB5PLACEHOLD_127 -1765328257

#define KRB5PLACEHOLD_30 -1765328354

#define KRB5PLACEHOLD_53 -1765328331

#define KRB5PLACEHOLD_54 -1765328330

#define KRB5PLACEHOLD_55 -1765328329

#define KRB5PLACEHOLD_56 -1765328328

#define KRB5PLACEHOLD_57 -1765328327

#define KRB5PLACEHOLD_58 -1765328326

#define KRB5PLACEHOLD_59 -1765328325

#define KRB5PLACEHOLD_82 -1765328302

#define KRB5PLACEHOLD_83 -1765328301

#define KRB5PLACEHOLD_84 -1765328300

#define KRB5PLACEHOLD_85 -1765328299

#define KRB5PLACEHOLD_86 -1765328298

#define KRB5PLACEHOLD_87 -1765328297

#define KRB5PLACEHOLD_88 -1765328296

#define KRB5PLACEHOLD_89 -1765328295

#define KRB5PLACEHOLD_90 -1765328294

#define KRB5PLACEHOLD_91 -1765328293

#define KRB5PLACEHOLD_92 -1765328292

#define KRB5PLACEHOLD_93 -1765328291

#define KRB5PLACEHOLD_94 -1765328290

#define KRB5PLACEHOLD_95 -1765328289

#define KRB5PLACEHOLD_96 -1765328288

#define KRB5PLACEHOLD_97 -1765328287

#define KRB5PLACEHOLD_98 -1765328286

#define KRB5PLACEHOLD_99 -1765328285

#define KV5M_ADDRESS -1760647390

#define KV5M_ALT_METHOD -1760647386

#define KV5M_AP_REP -1760647400

#define KV5M_AP_REP_ENC_PART -1760647399

#define KV5M_AP_REQ -1760647401

#define KV5M_AUTH_CONTEXT -1760647383

#define KV5M_AUTHDATA -1760647414

#define KV5M_AUTHENTICATOR -1760647410

#define KV5M_CCACHE -1760647380

#define KV5M_CHECKSUM -1760647420

#define KV5M_CHECKSUM_ENTRY -1760647415

#define KV5M_CONTEXT -1760647388

#define KV5M_CRED -1760647394

#define KV5M_CRED_ENC_PART -1760647392

#define KV5M_CRED_INFO -1760647393

#define KV5M_CREDS -1760647408

#define KV5M_CRYPTOSYSTEM_ENTRY -1760647417

#define KV5M_CS_TABLE_ENTRY -1760647416

#define KV5M_DATA -1760647422

#define KV5M_DB_CONTEXT -1760647384

#define KV5M_ENC_DATA -1760647418

#define KV5M_ENC_KDC_REP_PART -1760647404

#define KV5M_ENC_SAM_RESPONSE_ENC -1760647375

#define KV5M_ENC_SAM_RESPONSE_ENC_2 -1760647374

#define KV5M_ENC_TKT_PART -1760647412

#define KV5M_ENCRYPT_BLOCK -1760647419

#define kv5m_err_base -1760647424

#define KV5M_ERROR -1760647402

#define KV5M_ETYPE_INFO_ENTRY -1760647385

#define KV5M_GSS_OID -1760647369

#define KV5M_GSS_QUEUE -1760647368

#define KV5M_KDC_REP -1760647403

#define KV5M_KDC_REQ -1760647405

#define KV5M_KEYBLOCK -1760647421

#define KV5M_KEYTAB -1760647382

#define KV5M_KEYTAB_ENTRY -1760647389

#define KV5M_LAST_REQ_ENTRY -1760647407

#define KV5M_NONE -1760647424

#define KV5M_OS_CONTEXT -1760647387

#define KV5M_PA_DATA -1760647406

#define KV5M_PASSWD_PHRASE_ELEMENT -1760647370

#define KV5M_PREAUTH_OPS -1760647379

#define KV5M_PREDICTED_SAM_RESPONSE -1760647371

#define KV5M_PRINCIPAL -1760647423

#define KV5M_PRIV -1760647396

#define KV5M_PRIV_ENC_PART -1760647395

#define KV5M_PWD_DATA -1760647391

#define KV5M_RCACHE -1760647381

#define KV5M_RESPONSE -1760647398

#define KV5M_SAFE -1760647397

#define KV5M_SAM_CHALLENGE -1760647378

#define KV5M_SAM_CHALLENGE_2 -1760647377

#define KV5M_SAM_KEY -1760647376

#define KV5M_SAM_RESPONSE -1760647373

#define KV5M_SAM_RESPONSE_2 -1760647372

#define KV5M_TICKET -1760647411

#define KV5M_TKT_AUTHENT -1760647409

#define KV5M_TRANSITED -1760647413

#define LR_TYPE_INTERPRETATION_MASK 32767

#define LR_TYPE_THIS_SERVER_ONLY 32768

#define MAX_KEYTAB_NAME_LEN 1100

#define MSEC_DIRBIT 32768

#define MSEC_VAL_MASK 32767

#define SALT_TYPE_AFS_LENGTH 4294967295

#define SALT_TYPE_NO_LENGTH 4294967295

#define TKT_FLG_ANONYMOUS 131072

#define TKT_FLG_FORWARDABLE 1073741824

#define TKT_FLG_FORWARDED 536870912

#define TKT_FLG_HW_AUTH 1048576

#define TKT_FLG_INITIAL 4194304

#define TKT_FLG_INVALID 16777216

#define TKT_FLG_MAY_POSTDATE 67108864

#define TKT_FLG_OK_AS_DELEGATE 262144

#define TKT_FLG_POSTDATED 33554432

#define TKT_FLG_PRE_AUTH 2097152

#define TKT_FLG_PROXIABLE 268435456

#define TKT_FLG_PROXY 134217728

#define TKT_FLG_RENEWABLE 8388608

#define TKT_FLG_TRANSIT_POLICY_CHECKED 524288

#define VALID_INT_BITS 2147483647

#define VALID_UINT_BITS 4294967295

typedef struct _krb5_address _krb5_address, *P_krb5_address;

typedef int krb5_int32;

typedef krb5_int32 krb5_error_code;

typedef krb5_error_code krb5_magic;

typedef krb5_int32 krb5_addrtype;

typedef uchar krb5_octet;

struct _krb5_address {
    krb5_magic magic;
    krb5_addrtype addrtype;
    uint length;
    krb5_octet * contents;
};

typedef struct _krb5_ap_rep _krb5_ap_rep, *P_krb5_ap_rep;

typedef struct _krb5_enc_data _krb5_enc_data, *P_krb5_enc_data;

typedef struct _krb5_enc_data krb5_enc_data;

typedef krb5_int32 krb5_enctype;

typedef uint krb5_kvno;

typedef struct _krb5_data _krb5_data, *P_krb5_data;

typedef struct _krb5_data krb5_data;

struct _krb5_data {
    krb5_magic magic;
    uint length;
    char * data;
};

struct _krb5_enc_data {
    krb5_magic magic;
    krb5_enctype enctype;
    krb5_kvno kvno;
    krb5_data ciphertext;
};

struct _krb5_ap_rep {
    krb5_magic magic;
    krb5_enc_data enc_part;
};

typedef struct _krb5_ap_rep_enc_part _krb5_ap_rep_enc_part, *P_krb5_ap_rep_enc_part;

typedef krb5_int32 krb5_timestamp;

typedef struct _krb5_keyblock _krb5_keyblock, *P_krb5_keyblock;

typedef struct _krb5_keyblock krb5_keyblock;

typedef uint krb5_ui_4;

struct _krb5_keyblock {
    krb5_magic magic;
    krb5_enctype enctype;
    uint length;
    krb5_octet * contents;
};

struct _krb5_ap_rep_enc_part {
    krb5_magic magic;
    krb5_timestamp ctime;
    krb5_int32 cusec;
    krb5_keyblock * subkey;
    krb5_ui_4 seq_number;
};

typedef struct _krb5_ap_req _krb5_ap_req, *P_krb5_ap_req;

typedef krb5_int32 krb5_flags;

typedef struct _krb5_ticket _krb5_ticket, *P_krb5_ticket;

typedef struct _krb5_ticket krb5_ticket;

typedef struct krb5_principal_data krb5_principal_data, *Pkrb5_principal_data;

typedef struct krb5_principal_data * krb5_principal;

typedef struct _krb5_enc_tkt_part _krb5_enc_tkt_part, *P_krb5_enc_tkt_part;

typedef struct _krb5_enc_tkt_part krb5_enc_tkt_part;

typedef struct _krb5_transited _krb5_transited, *P_krb5_transited;

typedef struct _krb5_transited krb5_transited;

typedef struct _krb5_ticket_times _krb5_ticket_times, *P_krb5_ticket_times;

typedef struct _krb5_ticket_times krb5_ticket_times;

typedef struct _krb5_address krb5_address;

typedef struct _krb5_authdata _krb5_authdata, *P_krb5_authdata;

typedef struct _krb5_authdata krb5_authdata;

typedef krb5_int32 krb5_authdatatype;

struct _krb5_authdata {
    krb5_magic magic;
    krb5_authdatatype ad_type;
    uint length;
    krb5_octet * contents;
};

struct _krb5_ap_req {
    krb5_magic magic;
    krb5_flags ap_options;
    krb5_ticket * ticket;
    krb5_enc_data authenticator;
};

struct krb5_principal_data {
    krb5_magic magic;
    krb5_data realm;
    krb5_data * data;
    krb5_int32 length;
    krb5_int32 type;
};

struct _krb5_transited {
    krb5_magic magic;
    krb5_octet tr_type;
    krb5_data tr_contents;
};

struct _krb5_ticket_times {
    krb5_timestamp authtime;
    krb5_timestamp starttime;
    krb5_timestamp endtime;
    krb5_timestamp renew_till;
};

struct _krb5_enc_tkt_part {
    krb5_magic magic;
    krb5_flags flags;
    krb5_keyblock * session;
    krb5_principal client;
    krb5_transited transited;
    krb5_ticket_times times;
    krb5_address * * caddrs;
    krb5_authdata * * authorization_data;
};

struct _krb5_ticket {
    krb5_magic magic;
    krb5_principal server;
    krb5_enc_data enc_part;
    krb5_enc_tkt_part * enc_part2;
};

typedef struct _krb5_auth_context _krb5_auth_context, *P_krb5_auth_context;

struct _krb5_auth_context {
};

typedef struct _krb5_authenticator _krb5_authenticator, *P_krb5_authenticator;

typedef struct _krb5_checksum _krb5_checksum, *P_krb5_checksum;

typedef struct _krb5_checksum krb5_checksum;

typedef krb5_int32 krb5_cksumtype;

struct _krb5_checksum {
    krb5_magic magic;
    krb5_cksumtype checksum_type;
    uint length;
    krb5_octet * contents;
};

struct _krb5_authenticator {
    krb5_magic magic;
    krb5_principal client;
    krb5_checksum * checksum;
    krb5_int32 cusec;
    krb5_timestamp ctime;
    krb5_keyblock * subkey;
    krb5_ui_4 seq_number;
    krb5_authdata * * authorization_data;
};

typedef struct _krb5_cc_ops _krb5_cc_ops, *P_krb5_cc_ops;

struct _krb5_cc_ops {
};

typedef struct _krb5_ccache _krb5_ccache, *P_krb5_ccache;

struct _krb5_ccache {
};

typedef struct _krb5_cccol_cursor _krb5_cccol_cursor, *P_krb5_cccol_cursor;

struct _krb5_cccol_cursor {
};

typedef struct _krb5_context _krb5_context, *P_krb5_context;

struct _krb5_context {
};

typedef struct _krb5_cred _krb5_cred, *P_krb5_cred;

typedef struct _krb5_cred_enc_part _krb5_cred_enc_part, *P_krb5_cred_enc_part;

typedef struct _krb5_cred_enc_part krb5_cred_enc_part;

typedef struct _krb5_cred_info _krb5_cred_info, *P_krb5_cred_info;

typedef struct _krb5_cred_info krb5_cred_info;

struct _krb5_cred_enc_part {
    krb5_magic magic;
    krb5_int32 nonce;
    krb5_timestamp timestamp;
    krb5_int32 usec;
    krb5_address * s_address;
    krb5_address * r_address;
    krb5_cred_info * * ticket_info;
};

struct _krb5_cred {
    krb5_magic magic;
    krb5_ticket * * tickets;
    krb5_enc_data enc_part;
    krb5_cred_enc_part * enc_part2;
};

struct _krb5_cred_info {
    krb5_magic magic;
    krb5_keyblock * session;
    krb5_principal client;
    krb5_principal server;
    krb5_flags flags;
    krb5_ticket_times times;
    krb5_address * * caddrs;
};

typedef struct _krb5_creds _krb5_creds, *P_krb5_creds;

typedef uint krb5_boolean;

struct _krb5_creds {
    krb5_magic magic;
    krb5_principal client;
    krb5_principal server;
    krb5_keyblock keyblock;
    krb5_ticket_times times;
    krb5_boolean is_skey;
    krb5_flags ticket_flags;
    krb5_address * * addresses;
    krb5_data ticket;
    krb5_data second_ticket;
    krb5_authdata * * authdata;
};

typedef struct _krb5_cryptosystem_entry _krb5_cryptosystem_entry, *P_krb5_cryptosystem_entry;

struct _krb5_cryptosystem_entry {
};

typedef struct _krb5_enc_kdc_rep_part _krb5_enc_kdc_rep_part, *P_krb5_enc_kdc_rep_part;

typedef uint krb5_msgtype;

typedef struct _krb5_last_req_entry _krb5_last_req_entry, *P_krb5_last_req_entry;

typedef struct _krb5_last_req_entry krb5_last_req_entry;

struct _krb5_enc_kdc_rep_part {
    krb5_magic magic;
    krb5_msgtype msg_type;
    krb5_keyblock * session;
    krb5_last_req_entry * * last_req;
    krb5_int32 nonce;
    krb5_timestamp key_exp;
    krb5_flags flags;
    krb5_ticket_times times;
    krb5_principal server;
    krb5_address * * caddrs;
};

struct _krb5_last_req_entry {
    krb5_magic magic;
    krb5_int32 lr_type;
    krb5_timestamp value;
};

typedef struct _krb5_encrypt_block _krb5_encrypt_block, *P_krb5_encrypt_block;

struct _krb5_encrypt_block {
    krb5_magic magic;
    krb5_enctype crypto_entry;
    krb5_keyblock * key;
};

typedef struct _krb5_error _krb5_error, *P_krb5_error;

struct _krb5_error {
    krb5_magic magic;
    krb5_timestamp ctime;
    krb5_int32 cusec;
    krb5_int32 susec;
    krb5_timestamp stime;
    krb5_ui_4 error;
    krb5_principal client;
    krb5_principal server;
    krb5_data text;
    krb5_data e_data;
};

typedef struct _krb5_get_init_creds_opt _krb5_get_init_creds_opt, *P_krb5_get_init_creds_opt;

typedef krb5_int32 krb5_deltat;

typedef krb5_int32 krb5_preauthtype;

struct _krb5_get_init_creds_opt {
    krb5_flags flags;
    krb5_deltat tkt_life;
    krb5_deltat renew_life;
    int forwardable;
    int proxiable;
    krb5_enctype * etype_list;
    int etype_list_length;
    krb5_address * * address_list;
    krb5_preauthtype * preauth_list;
    int preauth_list_length;
    krb5_data * salt;
};

typedef struct _krb5_gic_opt_pa_data _krb5_gic_opt_pa_data, *P_krb5_gic_opt_pa_data;

struct _krb5_gic_opt_pa_data {
    char * attr;
    char * value;
};

typedef struct _krb5_kdc_rep _krb5_kdc_rep, *P_krb5_kdc_rep;

typedef struct _krb5_pa_data _krb5_pa_data, *P_krb5_pa_data;

typedef struct _krb5_pa_data krb5_pa_data;

typedef struct _krb5_enc_kdc_rep_part krb5_enc_kdc_rep_part;

struct _krb5_pa_data {
    krb5_magic magic;
    krb5_preauthtype pa_type;
    uint length;
    krb5_octet * contents;
};

struct _krb5_kdc_rep {
    krb5_magic magic;
    krb5_msgtype msg_type;
    krb5_pa_data * * padata;
    krb5_principal client;
    krb5_ticket * ticket;
    krb5_enc_data enc_part;
    krb5_enc_kdc_rep_part * enc_part2;
};

typedef struct _krb5_kdc_req _krb5_kdc_req, *P_krb5_kdc_req;

struct _krb5_kdc_req {
    krb5_magic magic;
    krb5_msgtype msg_type;
    krb5_pa_data * * padata;
    krb5_flags kdc_options;
    krb5_principal client;
    krb5_principal server;
    krb5_timestamp from;
    krb5_timestamp till;
    krb5_timestamp rtime;
    krb5_int32 nonce;
    int nktypes;
    krb5_enctype * ktype;
    krb5_address * * addresses;
    krb5_enc_data authorization_data;
    krb5_authdata * * unenc_authdata;
    krb5_ticket * * second_ticket;
};

typedef struct _krb5_kt _krb5_kt, *P_krb5_kt;

struct _krb5_kt {
};

typedef struct _krb5_octet_data _krb5_octet_data, *P_krb5_octet_data;

struct _krb5_octet_data {
    krb5_magic magic;
    uint length;
    krb5_octet * data;
};

typedef struct _krb5_prompt _krb5_prompt, *P_krb5_prompt;

struct _krb5_prompt {
    char * prompt;
    int hidden;
    krb5_data * reply;
};

typedef struct _krb5_pwd_data _krb5_pwd_data, *P_krb5_pwd_data;

typedef struct _passwd_phrase_element _passwd_phrase_element, *P_passwd_phrase_element;

typedef struct _passwd_phrase_element passwd_phrase_element;

struct _krb5_pwd_data {
    krb5_magic magic;
    int sequence_count;
    passwd_phrase_element * * element;
};

struct _passwd_phrase_element {
    krb5_magic magic;
    krb5_data * passwd;
    krb5_data * phrase;
};

typedef struct _krb5_response _krb5_response, *P_krb5_response;

struct _krb5_response {
    krb5_magic magic;
    krb5_octet message_type;
    krb5_data response;
    krb5_int32 expected_nonce;
    krb5_timestamp request_time;
};

typedef struct _krb5_tkt_authent _krb5_tkt_authent, *P_krb5_tkt_authent;

typedef struct _krb5_authenticator krb5_authenticator;

struct _krb5_tkt_authent {
    krb5_magic magic;
    krb5_ticket * ticket;
    krb5_authenticator * authenticator;
    krb5_flags ap_options;
};

typedef struct _krb5_verify_init_creds_opt _krb5_verify_init_creds_opt, *P_krb5_verify_init_creds_opt;

struct _krb5_verify_init_creds_opt {
    krb5_flags flags;
    int ap_req_nofail;
};

typedef struct _profile_t _profile_t, *P_profile_t;

struct _profile_t {
};

typedef struct credentials credentials, *Pcredentials;

struct credentials {
};

typedef enum enum_1571 {
    KRB5_C_RANDSOURCE_EXTERNAL_PROTOCOL=4,
    KRB5_C_RANDSOURCE_MAX=5,
    KRB5_C_RANDSOURCE_OLDAPI=0,
    KRB5_C_RANDSOURCE_OSRAND=1,
    KRB5_C_RANDSOURCE_TIMING=3,
    KRB5_C_RANDSOURCE_TRUSTEDPARTY=2
} enum_1571;

typedef struct _krb5_ap_rep krb5_ap_rep;

typedef struct _krb5_ap_rep_enc_part krb5_ap_rep_enc_part;

typedef struct _krb5_ap_req krb5_ap_req;

typedef struct _krb5_auth_context * krb5_auth_context;

typedef void * krb5_pointer;

typedef krb5_pointer krb5_cc_cursor;

typedef struct _krb5_cc_ops krb5_cc_ops;

typedef struct _krb5_ccache * krb5_ccache;

typedef struct _krb5_cccol_cursor * krb5_cccol_cursor;

typedef void * krb5_const_pointer;

typedef struct krb5_principal_data * krb5_const_principal;

typedef struct _krb5_context * krb5_context;

typedef struct _krb5_cred krb5_cred;

typedef struct _krb5_creds krb5_creds;

typedef struct _krb5_encrypt_block krb5_encrypt_block;

typedef struct _krb5_error krb5_error;

typedef struct _krb5_get_init_creds_opt krb5_get_init_creds_opt;

typedef struct _krb5_gic_opt_pa_data krb5_gic_opt_pa_data;

typedef krb5_error_code (* krb5_gic_process_last_req)(krb5_context, krb5_last_req_entry * *, void *);

typedef short krb5_int16;

typedef struct _krb5_kdc_rep krb5_kdc_rep;

typedef struct _krb5_kdc_req krb5_kdc_req;

typedef struct _krb5_kt * krb5_keytab;

typedef struct krb5_keytab_entry_st krb5_keytab_entry_st, *Pkrb5_keytab_entry_st;

typedef struct krb5_keytab_entry_st krb5_keytab_entry;

struct krb5_keytab_entry_st {
    krb5_magic magic;
    krb5_principal principal;
    krb5_timestamp timestamp;
    krb5_kvno vno;
    krb5_keyblock key;
};

typedef krb5_int32 krb5_keyusage;

typedef krb5_pointer krb5_kt_cursor;

typedef krb5_error_code (* krb5_mk_req_checksum_func)(krb5_context, krb5_auth_context, void *, krb5_data * *);

typedef struct _krb5_octet_data krb5_octet_data;

typedef struct _krb5_prompt krb5_prompt;

typedef krb5_int32 krb5_prompt_type;

typedef krb5_error_code (* krb5_prompter_fct)(krb5_context, void *, char *, char *, int, krb5_prompt *);

typedef struct _krb5_pwd_data krb5_pwd_data;

typedef struct krb5_rc_st krb5_rc_st, *Pkrb5_rc_st;

struct krb5_rc_st {
};

typedef struct krb5_rc_st * krb5_rcache;

typedef struct krb5_replay_data krb5_replay_data, *Pkrb5_replay_data;

struct krb5_replay_data {
    krb5_timestamp timestamp;
    krb5_int32 usec;
    krb5_ui_4 seq;
};

typedef struct _krb5_response krb5_response;

typedef struct _krb5_tkt_authent krb5_tkt_authent;

typedef ushort krb5_ui_2;

typedef struct _krb5_verify_init_creds_opt krb5_verify_init_creds_opt;

typedef struct krb5_ap_req_st krb5_ap_req_st, *Pkrb5_ap_req_st;

typedef STACK KRB5_TICKET;

typedef struct krb5_encdata_st krb5_encdata_st, *Pkrb5_encdata_st;

typedef struct krb5_encdata_st KRB5_ENCDATA;

struct krb5_encdata_st {
    ASN1_INTEGER * etype;
    ASN1_INTEGER * kvno;
    ASN1_OCTET_STRING * cipher;
};

struct krb5_ap_req_st {
    ASN1_INTEGER * pvno;
    ASN1_INTEGER * msgtype;
    ASN1_BIT_STRING * apoptions;
    KRB5_TICKET * ticket;
    KRB5_ENCDATA * authenticator;
};

typedef STACK KRB5_APREQ;

typedef struct krb5_ap_req_st KRB5_APREQBODY;

typedef struct krb5_authorization_st krb5_authorization_st, *Pkrb5_authorization_st;

typedef struct krb5_authorization_st KRB5_AUTHDATA;

struct krb5_authorization_st {
    ASN1_INTEGER * adtype;
    ASN1_OCTET_STRING * addata;
};

typedef STACK KRB5_AUTHENT;

typedef struct krb5_authenticator_st krb5_authenticator_st, *Pkrb5_authenticator_st;

typedef struct krb5_authenticator_st KRB5_AUTHENTBODY;

typedef struct krb5_princname_st krb5_princname_st, *Pkrb5_princname_st;

typedef struct krb5_princname_st KRB5_PRINCNAME;

typedef struct krb5_checksum_st krb5_checksum_st, *Pkrb5_checksum_st;

typedef struct krb5_checksum_st KRB5_CHECKSUM;

typedef struct krb5_encryptionkey_st krb5_encryptionkey_st, *Pkrb5_encryptionkey_st;

typedef struct krb5_encryptionkey_st KRB5_ENCKEY;

struct krb5_checksum_st {
    ASN1_INTEGER * ctype;
    ASN1_OCTET_STRING * checksum;
};

struct krb5_princname_st {
    ASN1_INTEGER * nametype;
    STACK * namestring;
};

struct krb5_authenticator_st {
    ASN1_INTEGER * avno;
    ASN1_GENERALSTRING * crealm;
    KRB5_PRINCNAME * cname;
    KRB5_CHECKSUM * cksum;
    ASN1_INTEGER * cusec;
    ASN1_GENERALIZEDTIME * ctime;
    KRB5_ENCKEY * subkey;
    ASN1_INTEGER * seqnum;
    KRB5_AUTHDATA * authorization;
};

struct krb5_encryptionkey_st {
    ASN1_INTEGER * ktype;
    ASN1_OCTET_STRING * keyvalue;
};

typedef struct krb5_tktbody_st krb5_tktbody_st, *Pkrb5_tktbody_st;

typedef struct krb5_tktbody_st KRB5_TKTBODY;

struct krb5_tktbody_st {
    ASN1_INTEGER * tktvno;
    ASN1_GENERALSTRING * realm;
    KRB5_PRINCNAME * sname;
    KRB5_ENCDATA * encdata;
};

#define BOOTPARAM_GETFILE 2

#define BOOTPARAM_PROG 100026

#define BOOTPARAM_VERS 1

#define BOOTPARAM_WHOAMI 1

#define PMAPPORT 111

#define PMAPPROC_CALLIT 5

#define PMAPPROC_DUMP 4

#define PMAPPROC_GETPORT 3

#define PMAPPROC_NULL 0

#define PMAPPROC_SET 1

#define PMAPPROC_UNSET 2

#define PMAPPROG 100000

#define PMAPVERS 2

#define RPCBPROC_BCAST 5

#define RPCBPROC_CALLIT 5

#define RPCBPROC_DUMP 4

#define RPCBPROC_GETADDR 3

#define RPCBPROC_GETADDRLIST 11

#define RPCBPROC_GETSTAT 12

#define RPCBPROC_GETTIME 6

#define RPCBPROC_GETVERSADDR 9

#define RPCBPROC_INDIRECT 10

#define RPCBPROC_NULL 0

#define RPCBPROC_SET 1

#define RPCBPROC_TADDR2UADDR 8

#define RPCBPROC_UADDR2TADDR 7

#define RPCBPROC_UNSET 2

#define RPCBPROG 100000

#define RPCBVERS3 3

#define RPCBVERS4 4

typedef struct _launch_data _launch_data, *P_launch_data;

struct _launch_data {
};

typedef enum enum_1672 {
    LAUNCH_DATA_ARRAY=2,
    LAUNCH_DATA_BOOL=6,
    LAUNCH_DATA_DICTIONARY=1,
    LAUNCH_DATA_ERRNO=9,
    LAUNCH_DATA_FD=3,
    LAUNCH_DATA_INTEGER=4,
    LAUNCH_DATA_MACHPORT=10,
    LAUNCH_DATA_OPAQUE=8,
    LAUNCH_DATA_REAL=5,
    LAUNCH_DATA_STRING=7
} enum_1672;

typedef struct _launch_data * launch_data_t;

typedef enum enum_1672 launch_data_type_t;

#define LBER_BIG_TAG_MASK 31

#define LBER_BITSTRING 3

#define LBER_BOOLEAN 1

#define LBER_BV_ALLOC 1

#define LBER_BV_NOTERM 2

#define LBER_BV_STRING 4

#define LBER_CLASS_APPLICATION 64

#define LBER_CLASS_CONTEXT 128

#define LBER_CLASS_MASK 192

#define LBER_CLASS_PRIVATE 192

#define LBER_CLASS_UNIVERSAL 0

#define LBER_CONSTRUCTED 32

#define LBER_DEFAULT -1

#define LBER_ENCODING_MASK 32

#define LBER_ENUMERATED 10

#define LBER_ERROR -1

#define LBER_ERROR_MEMORY 2

#define LBER_ERROR_NONE 0

#define LBER_ERROR_PARAM 1

#define LBER_FLUSH_FREE_ALWAYS 3

#define LBER_FLUSH_FREE_NEVER 0

#define LBER_FLUSH_FREE_ON_ERROR 2

#define LBER_FLUSH_FREE_ON_SUCCESS 1

#define LBER_INTEGER 2

#define LBER_MORE_TAG_MASK 128

#define LBER_NULL 5

#define LBER_OCTETSTRING 4

#define LBER_OPT_BER_BYTES_TO_WRITE 5

#define LBER_OPT_BER_DEBUG 2

#define LBER_OPT_BER_MEMCTX 6

#define LBER_OPT_BER_OPTIONS 1

#define LBER_OPT_BER_REMAINING_BYTES 3

#define LBER_OPT_BER_TOTAL_BYTES 4

#define LBER_OPT_BYTES_TO_WRITE 5

#define LBER_OPT_DEBUG_LEVEL 2

#define LBER_OPT_ERROR -1

#define LBER_OPT_ERROR_FN 32771

#define LBER_OPT_LOG_PRINT_FILE 32772

#define LBER_OPT_LOG_PRINT_FN 32769

#define LBER_OPT_LOG_PROC 32774

#define LBER_OPT_MEMORY_FNS 32770

#define LBER_OPT_MEMORY_INUSE 32773

#define LBER_OPT_OFF 0

#define LBER_OPT_REMAINING_BYTES 3

#define LBER_OPT_SOCKBUF_DEBUG 4098

#define LBER_OPT_SOCKBUF_DESC 4096

#define LBER_OPT_SOCKBUF_OPTIONS 4097

#define LBER_OPT_SUCCESS 0

#define LBER_OPT_TOTAL_BYTES 4

#define LBER_PRIMITIVE 0

#define LBER_SB_OPT_DATA_READY 8

#define LBER_SB_OPT_DRAIN 10

#define LBER_SB_OPT_GET_FD 1

#define LBER_SB_OPT_GET_MAX_INCOMING 13

#define LBER_SB_OPT_GET_SSL 7

#define LBER_SB_OPT_HAS_IO 3

#define LBER_SB_OPT_NEEDS_READ 11

#define LBER_SB_OPT_NEEDS_WRITE 12

#define LBER_SB_OPT_OPT_MAX 15

#define LBER_SB_OPT_SET_FD 2

#define LBER_SB_OPT_SET_MAX_INCOMING 14

#define LBER_SB_OPT_SET_NONBLOCK 4

#define LBER_SB_OPT_SET_READAHEAD 9

#define LBER_SB_OPT_UNGET_BUF 15

#define LBER_SBIOD_LEVEL_APPLICATION 30

#define LBER_SBIOD_LEVEL_PROVIDER 10

#define LBER_SBIOD_LEVEL_TRANSPORT 20

#define LBER_SEQUENCE 48

#define LBER_SET 49

#define LBER_USE_DER 1

typedef int * (* BER_ERRNO_FN)(void);

typedef void (* BER_LOG_PRINT_FN)(void);

typedef void * (BER_MEMALLOC_FN)(void);

typedef void * (BER_MEMCALLOC_FN)(void);

typedef void (BER_MEMFREE_FN)(void);

typedef void * (BER_MEMREALLOC_FN)(void);

typedef int (* BERDecodeCallback)(void);

typedef struct berelement berelement, *Pberelement;

struct berelement {
};

typedef struct berelement BerElement;

typedef int (* BEREncodeCallback)(void);

typedef struct lber_memory_fns lber_memory_fns, *Plber_memory_fns;

typedef struct lber_memory_fns BerMemoryFunctions;

struct lber_memory_fns {
    BER_MEMALLOC_FN * bmf_malloc;
    BER_MEMCALLOC_FN * bmf_calloc;
    BER_MEMREALLOC_FN * bmf_realloc;
    BER_MEMFREE_FN * bmf_free;
};

typedef struct berval berval, *Pberval;

typedef struct berval BerValue;

typedef ulong ber_len_t;

struct berval {
    ber_len_t bv_len;
    char * bv_val;
};

typedef BerValue * BerVarray;

typedef struct sockbuf sockbuf, *Psockbuf;

typedef struct sockbuf Sockbuf;

struct sockbuf {
};

typedef struct sockbuf_io sockbuf_io, *Psockbuf_io;

typedef struct sockbuf_io_desc sockbuf_io_desc, *Psockbuf_io_desc;

typedef struct sockbuf_io_desc Sockbuf_IO_Desc;

typedef long ber_slen_t;

typedef struct sockbuf_io Sockbuf_IO;

struct sockbuf_io {
    int (* sbi_setup)(Sockbuf_IO_Desc *, void *);
    int (* sbi_remove)(Sockbuf_IO_Desc *);
    int (* sbi_ctrl)(Sockbuf_IO_Desc *, int, void *);
    ber_slen_t (* sbi_read)(Sockbuf_IO_Desc *, void *, ber_len_t);
    ber_slen_t (* sbi_write)(Sockbuf_IO_Desc *, void *, ber_len_t);
    int (* sbi_close)(Sockbuf_IO_Desc *);
};

struct sockbuf_io_desc {
    int sbiod_level;
    Sockbuf * sbiod_sb;
    Sockbuf_IO * sbiod_io;
    void * sbiod_pvt;
    struct sockbuf_io_desc * sbiod_next;
};

typedef int ber_int_t;

typedef int ber_sint_t;

typedef int ber_socket_t;

typedef ulong ber_tag_t;

typedef uint ber_uint_t;

#define LCID_CREATE 0

#define LCID_PROC_SELF 0

#define LCID_REMOVE -1

#define LDAP_ADMINLIMIT_EXCEEDED 11

#define LDAP_AFFECTS_MULTIPLE_DSAS 71

#define LDAP_ALIAS_DEREF_PROBLEM 36

#define LDAP_ALIAS_PROBLEM 33

#define LDAP_ALREADY_EXISTS 68

#define LDAP_API_FEATURE_CANCEL 1000

#define LDAP_API_FEATURE_PAGED_RESULTS 2000

#define LDAP_API_FEATURE_PASSWD_MODIFY 1000

#define LDAP_API_FEATURE_PASSWORD_POLICY 1000

#define LDAP_API_FEATURE_REFRESH 1000

#define LDAP_API_FEATURE_SERVER_SIDE_SORT 2000

#define LDAP_API_FEATURE_TURN 1000

#define LDAP_API_FEATURE_VIRTUAL_LIST_VIEW 2000

#define LDAP_API_FEATURE_WHOAMI 1000

#define LDAP_API_FEATURE_X_OPENLDAP 20428

#define LDAP_API_INFO_VERSION 1

#define LDAP_API_VERSION 3001

#define LDAP_ASSERTION_FAILED 122

#define LDAP_AUTH_KRBV4 255

#define LDAP_AUTH_KRBV41 129

#define LDAP_AUTH_KRBV42 130

#define LDAP_AUTH_METHOD_NOT_SUPPORTED 7

#define LDAP_AUTH_NEGOTIATE 1279

#define LDAP_AUTH_NONE 0

#define LDAP_AUTH_SASL 163

#define LDAP_AUTH_SIMPLE 128

#define LDAP_AUTH_UNKNOWN -6

#define LDAP_AVA_BINARY 2

#define LDAP_AVA_FREE_ATTR 16

#define LDAP_AVA_FREE_VALUE 32

#define LDAP_AVA_NONPRINTABLE 4

#define LDAP_AVA_NULL 0

#define LDAP_AVA_STRING 1

#define LDAP_BUSY 51

#define LDAP_CANCELLED 118

#define LDAP_CANNOT_CANCEL 121

#define LDAP_CHAINING_PREFERRED 0

#define LDAP_CHAINING_REQUIRED 1

#define LDAP_CLIENT_LOOP -16

#define LDAP_COMPARE_FALSE 5

#define LDAP_COMPARE_TRUE 6

#define LDAP_CONFIDENTIALITY_REQUIRED 13

#define LDAP_CONNECT_ERROR -11

#define LDAP_CONSTRAINT_VIOLATION 19

#define LDAP_CONTROL_NOT_FOUND -13

#define LDAP_CONTROL_PERSIST_ENTRY_CHANGE_ADD 1

#define LDAP_CONTROL_PERSIST_ENTRY_CHANGE_DELETE 2

#define LDAP_CONTROL_PERSIST_ENTRY_CHANGE_MODIFY 4

#define LDAP_CONTROL_PERSIST_ENTRY_CHANGE_RENAME 8

#define LDAP_CUP_INVALID_DATA 115

#define LDAP_CUP_RELOAD_REQUIRED 117

#define LDAP_CUP_RESOURCES_EXHAUSTED 113

#define LDAP_CUP_SECURITY_VIOLATION 114

#define LDAP_CUP_UNSUPPORTED_SCHEME 116

#define LDAP_DECODING_ERROR -4

#define LDAP_DEPRECATED 1

#define LDAP_DEREF_ALWAYS 3

#define LDAP_DEREF_FINDING 2

#define LDAP_DEREF_NEVER 0

#define LDAP_DEREF_SEARCHING 1

#define LDAP_DN_FORMAT_AD_CANONICAL 80

#define LDAP_DN_FORMAT_DCE 48

#define LDAP_DN_FORMAT_LBER 240

#define LDAP_DN_FORMAT_LDAP 0

#define LDAP_DN_FORMAT_LDAPV2 32

#define LDAP_DN_FORMAT_LDAPV3 16

#define LDAP_DN_FORMAT_MASK 240

#define LDAP_DN_FORMAT_UFN 64

#define LDAP_DN_P_NOLEADTRAILSPACES 4096

#define LDAP_DN_P_NOSPACEAFTERRDN 8192

#define LDAP_DN_PEDANTIC 61440

#define LDAP_DN_PRETTY 256

#define LDAP_DN_SKIP 512

#define LDAP_ENCODING_ERROR -3

#define LDAP_FEATURE_INFO_VERSION 1

#define LDAP_FILTER_AND 160

#define LDAP_FILTER_APPROX 168

#define LDAP_FILTER_EQUALITY 163

#define LDAP_FILTER_ERROR -7

#define LDAP_FILTER_EXT 169

#define LDAP_FILTER_EXT_DNATTRS 132

#define LDAP_FILTER_EXT_OID 129

#define LDAP_FILTER_EXT_TYPE 130

#define LDAP_FILTER_EXT_VALUE 131

#define LDAP_FILTER_GE 165

#define LDAP_FILTER_LE 166

#define LDAP_FILTER_NOT 162

#define LDAP_FILTER_OR 161

#define LDAP_FILTER_PRESENT 135

#define LDAP_FILTER_SUBSTRINGS 164

#define LDAP_INAPPROPRIATE_AUTH 48

#define LDAP_INAPPROPRIATE_MATCHING 18

#define LDAP_INSUFFICIENT_ACCESS 50

#define LDAP_INVALID_CREDENTIALS 49

#define LDAP_INVALID_DN_SYNTAX 34

#define LDAP_INVALID_SYNTAX 21

#define LDAP_IS_LEAF 35

#define LDAP_LOCAL_ERROR -2

#define LDAP_LOOP_DETECT 54

#define LDAP_MAXINT 2147483647

#define LDAP_MOD_ADD 0

#define LDAP_MOD_BVALUES 128

#define LDAP_MOD_DELETE 1

#define LDAP_MOD_INCREMENT 3

#define LDAP_MOD_OP 7

#define LDAP_MOD_REPLACE 2

#define LDAP_MORE_RESULTS_TO_RETURN -15

#define LDAP_MSG_ALL 1

#define LDAP_MSG_ONE 0

#define LDAP_MSG_RECEIVED 2

#define LDAP_NAMING_VIOLATION 64

#define LDAP_NO_LIMIT 0

#define LDAP_NO_MEMORY -10

#define LDAP_NO_OBJECT_CLASS_MODS 69

#define LDAP_NO_RESULTS_RETURNED -14

#define LDAP_NO_SUCH_ATTRIBUTE 16

#define LDAP_NO_SUCH_OBJECT 32

#define LDAP_NO_SUCH_OPERATION 119

#define LDAP_NOT_ALLOWED_ON_NONLEAF 66

#define LDAP_NOT_ALLOWED_ON_RDN 67

#define LDAP_NOT_SUPPORTED -12

#define LDAP_OBJECT_CLASS_VIOLATION 65

#define LDAP_OPERATIONS_ERROR 1

#define LDAP_OPT_API_EXTENSION_BASE 16384

#define LDAP_OPT_API_FEATURE_INFO 21

#define LDAP_OPT_API_INFO 0

#define LDAP_OPT_CLIENT_CONTROLS 19

#define LDAP_OPT_CONNECT_ASYNC 20496

#define LDAP_OPT_CONNECT_CB 20497

#define LDAP_OPT_DEBUG_LEVEL 20481

#define LDAP_OPT_DEFBASE 20489

#define LDAP_OPT_DEREF 2

#define LDAP_OPT_DESC 1

#define LDAP_OPT_DIAGNOSTIC_MESSAGE 50

#define LDAP_OPT_ENCRYPT 150

#define LDAP_OPT_ERROR -1

#define LDAP_OPT_ERROR_NUMBER 49

#define LDAP_OPT_ERROR_STRING 50

#define LDAP_OPT_HOST_NAME 48

#define LDAP_OPT_MATCHED_DN 51

#define LDAP_OPT_NETWORK_TIMEOUT 20485

#define LDAP_OPT_NOREVERSE_LOOKUP 24843

#define LDAP_OPT_OFF 0

#define LDAP_OPT_PRIVATE_EXTENSION_BASE 28672

#define LDAP_OPT_PROTOCOL_VERSION 17

#define LDAP_OPT_REFERRAL_URLS 20487

#define LDAP_OPT_REFERRALS 8

#define LDAP_OPT_REFHOPLIMIT 20483

#define LDAP_OPT_RESTART 9

#define LDAP_OPT_RESULT_CODE 49

#define LDAP_OPT_SASL_METHOD 151

#define LDAP_OPT_SECURITY_CONTEXT 153

#define LDAP_OPT_SERVER_CONTROLS 18

#define LDAP_OPT_SESSION_REFCNT 20498

#define LDAP_OPT_SIGN 149

#define LDAP_OPT_SIZELIMIT 3

#define LDAP_OPT_SOCKBUF 20488

#define LDAP_OPT_SSPI_FLAGS 146

#define LDAP_OPT_SUCCESS 0

#define LDAP_OPT_TIMELIMIT 4

#define LDAP_OPT_TIMEOUT 20482

#define LDAP_OPT_URI 20486

#define LDAP_OPT_X_GSSAPI_ALLOW_REMOTE_PRINCIPAL 25089

#define LDAP_OPT_X_GSSAPI_DO_NOT_FREE_CONTEXT 25088

#define LDAP_OPT_X_KEEPALIVE_IDLE 25344

#define LDAP_OPT_X_KEEPALIVE_INTERVAL 25346

#define LDAP_OPT_X_KEEPALIVE_PROBES 25345

#define LDAP_OPT_X_SASL_AUTHCID 24834

#define LDAP_OPT_X_SASL_AUTHZID 24835

#define LDAP_OPT_X_SASL_GSS_CREDS 24845

#define LDAP_OPT_X_SASL_MAXBUFSIZE 24841

#define LDAP_OPT_X_SASL_MECH 24832

#define LDAP_OPT_X_SASL_MECHLIST 24842

#define LDAP_OPT_X_SASL_NOCANON 24843

#define LDAP_OPT_X_SASL_REALM 24833

#define LDAP_OPT_X_SASL_SECPROPS 24838

#define LDAP_OPT_X_SASL_SSF 24836

#define LDAP_OPT_X_SASL_SSF_EXTERNAL 24837

#define LDAP_OPT_X_SASL_SSF_MAX 24840

#define LDAP_OPT_X_SASL_SSF_MIN 24839

#define LDAP_OPT_X_SASL_USERNAME 24844

#define LDAP_OPT_X_TLS 24576

#define LDAP_OPT_X_TLS_ALLOW 3

#define LDAP_OPT_X_TLS_CACERTDIR 24579

#define LDAP_OPT_X_TLS_CACERTFILE 24578

#define LDAP_OPT_X_TLS_CERT_IDENTITY 24830

#define LDAP_OPT_X_TLS_CERTFILE 24580

#define LDAP_OPT_X_TLS_CIPHER_SUITE 24584

#define LDAP_OPT_X_TLS_CONNECT_ARG 24589

#define LDAP_OPT_X_TLS_CONNECT_CB 24588

#define LDAP_OPT_X_TLS_CRL_ALL 2

#define LDAP_OPT_X_TLS_CRL_NONE 0

#define LDAP_OPT_X_TLS_CRL_PEER 1

#define LDAP_OPT_X_TLS_CRLCHECK 24587

#define LDAP_OPT_X_TLS_CRLFILE 24592

#define LDAP_OPT_X_TLS_CTX 24577

#define LDAP_OPT_X_TLS_DEMAND 2

#define LDAP_OPT_X_TLS_DHFILE 24590

#define LDAP_OPT_X_TLS_HARD 1

#define LDAP_OPT_X_TLS_KEYFILE 24581

#define LDAP_OPT_X_TLS_NEVER 0

#define LDAP_OPT_X_TLS_NEWCTX 24591

#define LDAP_OPT_X_TLS_PACKAGE 24593

#define LDAP_OPT_X_TLS_PASSPHRASE 24831

#define LDAP_OPT_X_TLS_PROTOCOL_MIN 24583

#define LDAP_OPT_X_TLS_PROTOCOL_SSL2 512

#define LDAP_OPT_X_TLS_PROTOCOL_SSL3 768

#define LDAP_OPT_X_TLS_PROTOCOL_TLS1_0 769

#define LDAP_OPT_X_TLS_PROTOCOL_TLS1_1 770

#define LDAP_OPT_X_TLS_PROTOCOL_TLS1_2 771

#define LDAP_OPT_X_TLS_RANDOM_FILE 24585

#define LDAP_OPT_X_TLS_REQUIRE_CERT 24582

#define LDAP_OPT_X_TLS_SSL_CTX 24586

#define LDAP_OPT_X_TLS_TRY 4

#define LDAP_OTHER 80

#define LDAP_PARAM_ERROR -9

#define LDAP_PARTIAL_RESULTS 9

#define LDAP_PORT 389

#define LDAP_PROTOCOL_ERROR 2

#define LDAP_PROXIED_AUTHORIZATION_DENIED 123

#define LDAP_REFERRAL 10

#define LDAP_REFERRAL_LIMIT_EXCEEDED -17

#define LDAP_REFERRALS_PREFERRED 2

#define LDAP_REFERRALS_REQUIRED 3

#define LDAP_REQ_ABANDON 80

#define LDAP_REQ_ADD 104

#define LDAP_REQ_BIND 96

#define LDAP_REQ_COMPARE 110

#define LDAP_REQ_DELETE 74

#define LDAP_REQ_EXTENDED 119

#define LDAP_REQ_MODDN 108

#define LDAP_REQ_MODIFY 102

#define LDAP_REQ_MODRDN 108

#define LDAP_REQ_RENAME 108

#define LDAP_REQ_SEARCH 99

#define LDAP_REQ_UNBIND 66

#define LDAP_RES_ADD 105

#define LDAP_RES_ANY -1

#define LDAP_RES_BIND 97

#define LDAP_RES_COMPARE 111

#define LDAP_RES_DELETE 107

#define LDAP_RES_EXTENDED 120

#define LDAP_RES_INTERMEDIATE 121

#define LDAP_RES_MODDN 109

#define LDAP_RES_MODIFY 103

#define LDAP_RES_MODRDN 109

#define LDAP_RES_RENAME 109

#define LDAP_RES_SEARCH_ENTRY 100

#define LDAP_RES_SEARCH_REFERENCE 115

#define LDAP_RES_SEARCH_RESULT 101

#define LDAP_RES_UNSOLICITED 0

#define LDAP_RESULTS_TOO_LARGE 70

#define LDAP_SASL_AUTOMATIC 0

#define LDAP_SASL_BIND_IN_PROGRESS 14

#define LDAP_SASL_INTERACTIVE 1

#define LDAP_SASL_QUIET 2

#define LDAP_SASL_SIMPLE 0

#define LDAP_SCOPE_BASE 0

#define LDAP_SCOPE_BASEOBJECT 0

#define LDAP_SCOPE_CHILDREN 3

#define LDAP_SCOPE_DEFAULT -1

#define LDAP_SCOPE_ONE 1

#define LDAP_SCOPE_ONELEVEL 1

#define LDAP_SCOPE_SUB 2

#define LDAP_SCOPE_SUBORDINATE 3

#define LDAP_SCOPE_SUBTREE 2

#define LDAP_SEARCH_FLAG_DOMAIN_SCOPE 1

#define LDAP_SEARCH_FLAG_PHANTOM_ROOT 2

#define LDAP_SERVER_DOWN -1

#define LDAP_SIZELIMIT_EXCEEDED 4

#define LDAP_STRONG_AUTH_NOT_SUPPORTED 7

#define LDAP_STRONG_AUTH_REQUIRED 8

#define LDAP_STRONGER_AUTH_REQUIRED 8

#define LDAP_SUBSTRING_ANY 129

#define LDAP_SUBSTRING_FINAL 130

#define LDAP_SUBSTRING_INITIAL 128

#define LDAP_SUCCESS 0

#define LDAP_SYNC_ADD 1

#define LDAP_SYNC_DELETE 3

#define LDAP_SYNC_MODIFY 2

#define LDAP_SYNC_NEW_COOKIE 4

#define LDAP_SYNC_NONE 0

#define LDAP_SYNC_PRESENT 0

#define LDAP_SYNC_REFRESH_AND_PERSIST 3

#define LDAP_SYNC_REFRESH_DELETES 1

#define LDAP_SYNC_REFRESH_ONLY 1

#define LDAP_SYNC_REFRESH_PRESENTS 0

#define LDAP_SYNC_REFRESH_REQUIRED 4096

#define LDAP_SYNC_RESERVED 2

#define LDAP_TAG_CONTROLS 160

#define LDAP_TAG_EXOP_MODIFY_PASSWD_GEN 128

#define LDAP_TAG_EXOP_MODIFY_PASSWD_ID 128

#define LDAP_TAG_EXOP_MODIFY_PASSWD_NEW 130

#define LDAP_TAG_EXOP_MODIFY_PASSWD_OLD 129

#define LDAP_TAG_EXOP_REFRESH_REQ_DN 128

#define LDAP_TAG_EXOP_REFRESH_REQ_TTL 129

#define LDAP_TAG_EXOP_REFRESH_RES_TTL 129

#define LDAP_TAG_EXOP_REQ_OID 128

#define LDAP_TAG_EXOP_REQ_VALUE 129

#define LDAP_TAG_EXOP_RES_OID 138

#define LDAP_TAG_EXOP_RES_VALUE 139

#define LDAP_TAG_IM_RES_OID 128

#define LDAP_TAG_IM_RES_VALUE 129

#define LDAP_TAG_LDAPCRED 4

#define LDAP_TAG_LDAPDN 4

#define LDAP_TAG_MESSAGE 48

#define LDAP_TAG_MSGID 2

#define LDAP_TAG_NEWSUPERIOR 128

#define LDAP_TAG_REFERRAL 163

#define LDAP_TAG_REFRESHDELETES 1

#define LDAP_TAG_REFRESHDONE 1

#define LDAP_TAG_RELOAD_HINT 1

#define LDAP_TAG_SASL_RES_CREDS 135

#define LDAP_TAG_SYNC_COOKIE 4

#define LDAP_TAG_SYNC_ID_SET 163

#define LDAP_TAG_SYNC_NEW_COOKIE 128

#define LDAP_TAG_SYNC_REFRESH_DELETE 161

#define LDAP_TAG_SYNC_REFRESH_PRESENT 162

#define LDAP_TIMELIMIT_EXCEEDED 3

#define LDAP_TIMEOUT -5

#define LDAP_TOO_LATE 120

#define LDAP_TYPE_OR_VALUE_EXISTS 20

#define LDAP_UNAVAILABLE 52

#define LDAP_UNAVAILABLE_CRITICAL_EXTENSION 12

#define LDAP_UNDEFINED_TYPE 17

#define LDAP_UNWILLING_TO_PERFORM 53

#define LDAP_URL_ERR_BADATTRS 7

#define LDAP_URL_ERR_BADENCLOSURE 4

#define LDAP_URL_ERR_BADEXTS 10

#define LDAP_URL_ERR_BADFILTER 9

#define LDAP_URL_ERR_BADHOST 6

#define LDAP_URL_ERR_BADSCHEME 3

#define LDAP_URL_ERR_BADSCOPE 8

#define LDAP_URL_ERR_BADURL 5

#define LDAP_URL_ERR_MEM 1

#define LDAP_URL_ERR_PARAM 2

#define LDAP_URL_SUCCESS 0

#define LDAP_USER_CANCELLED -8

#define LDAP_VERSION 2

#define LDAP_VERSION1 1

#define LDAP_VERSION2 2

#define LDAP_VERSION3 3

#define LDAP_VERSION_MAX 3

#define LDAP_VERSION_MIN 2

#define LDAP_VLV_ERROR 76

#define LDAP_X_ASSERTION_FAILED 16655

#define LDAP_X_CANNOT_CHAIN 16657

#define LDAP_X_CONNECTING -18

#define LDAP_X_INVALIDREFERENCE 16658

#define LDAP_X_NO_OPERATION 16654

#define LDAP_X_NO_REFERRALS_FOUND 16656

#define LDAP_X_PROXY_AUTHZ_FAILURE 47

#define LDAP_X_SYNC_REFRESH_REQUIRED 16640

#define LDAPS_PORT 636

typedef enum enum_3921 {
    LDAP_SYNC_CAPI_ADD=1,
    LDAP_SYNC_CAPI_DELETE=3,
    LDAP_SYNC_CAPI_DELETES=5,
    LDAP_SYNC_CAPI_DELETES_IDSET=7,
    LDAP_SYNC_CAPI_DONE=8,
    LDAP_SYNC_CAPI_DONE_FLAG=64,
    LDAP_SYNC_CAPI_IDSET_FLAG=32,
    LDAP_SYNC_CAPI_MODIFY=2,
    LDAP_SYNC_CAPI_NONE=0,
    LDAP_SYNC_CAPI_PHASE_FLAG=16,
    LDAP_SYNC_CAPI_PRESENT=0,
    LDAP_SYNC_CAPI_PRESENTS=4,
    LDAP_SYNC_CAPI_PRESENTS_IDSET=6
} enum_3921;

typedef struct ldap ldap, *Pldap;

typedef struct ldap LDAP;

struct ldap {
};

typedef struct ldap_apifeature_info ldap_apifeature_info, *Pldap_apifeature_info;

struct ldap_apifeature_info {
    int ldapaif_info_version;
    char * ldapaif_name;
    int ldapaif_version;
};

typedef struct ldap_ava ldap_ava, *Pldap_ava;

struct ldap_ava {
    struct berval la_attr;
    struct berval la_value;
    uint la_flags;
    void * la_private;
};

typedef int (ldap_conn_add_f)(void);

typedef void (ldap_conn_del_f)(void);

typedef struct ldap_conncb ldap_conncb, *Pldap_conncb;

struct ldap_conncb {
    ldap_conn_add_f * lc_add;
    ldap_conn_del_f * lc_del;
    void * lc_arg;
};

typedef int (LDAP_NEXTREF_PROC)(void);

typedef int (LDAP_REBIND_PROC)(void);

typedef int (LDAP_SASL_INTERACT_PROC)(void);

typedef int (LDAP_SORT_AD_CMP_PROC)(void);

typedef int (LDAP_SORT_AV_CMP_PROC)(void);

typedef int (* ldap_sync_intermediate_f)(void);

typedef enum enum_3921 ldap_sync_refresh_t;

typedef int (* ldap_sync_search_entry_f)(void);

typedef int (* ldap_sync_search_reference_f)(void);

typedef int (* ldap_sync_search_result_f)(void);

typedef struct ldap_sync_t ldap_sync_t, *Pldap_sync_t;

struct ldap_sync_t {
    char * ls_base;
    int ls_scope;
    char * ls_filter;
    char * * ls_attrs;
    int ls_timelimit;
    int ls_sizelimit;
    int ls_timeout;
    ldap_sync_search_entry_f ls_search_entry;
    ldap_sync_search_reference_f ls_search_reference;
    ldap_sync_intermediate_f ls_intermediate;
    ldap_sync_search_result_f ls_search_result;
    void * ls_private;
    LDAP * ls_ld;
    int ls_msgid;
    int ls_reloadHint;
    struct berval ls_cookie;
    ldap_sync_refresh_t ls_refreshPhase;
};

typedef struct ldap_url_desc ldap_url_desc, *Pldap_url_desc;

struct ldap_url_desc {
    struct ldap_url_desc * lud_next;
    char * lud_scheme;
    char * lud_host;
    int lud_port;
    char * lud_dn;
    char * * lud_attrs;
    int lud_scope;
    char * lud_filter;
    char * * lud_exts;
    int lud_crit_exts;
};

typedef int (LDAP_URLLIST_PROC)(void);

typedef struct ldap_apifeature_info LDAPAPIFeatureInfo;

typedef struct ldapapiinfo ldapapiinfo, *Pldapapiinfo;

typedef struct ldapapiinfo LDAPAPIInfo;

struct ldapapiinfo {
    int ldapai_info_version;
    int ldapai_api_version;
    int ldapai_protocol_version;
    char * * ldapai_extensions;
    char * ldapai_vendor_name;
    int ldapai_vendor_version;
};

typedef struct ldap_ava LDAPAVA;

typedef struct ldapcontrol ldapcontrol, *Pldapcontrol;

struct ldapcontrol {
    char * ldctl_oid;
    struct berval ldctl_value;
    char ldctl_iscritical;
};

typedef struct ldapcontrol LDAPControl;

typedef struct LDAPDerefRes LDAPDerefRes, *PLDAPDerefRes;

typedef struct LDAPDerefVal LDAPDerefVal, *PLDAPDerefVal;

struct LDAPDerefRes {
    char * derefAttr;
    struct berval derefVal;
    struct LDAPDerefVal * attrVals;
    struct LDAPDerefRes * next;
};

struct LDAPDerefVal {
    char * type;
    BerVarray vals;
    struct LDAPDerefVal * next;
};

typedef struct LDAPDerefSpec LDAPDerefSpec, *PLDAPDerefSpec;

struct LDAPDerefSpec {
    char * derefAttr;
    char * * attributes;
};

typedef LDAPAVA * * LDAPRDN;

typedef LDAPRDN * LDAPDN;

typedef int (LDAPDN_rewrite_func)(void);

typedef struct ldapmsg ldapmsg, *Pldapmsg;

typedef struct ldapmsg LDAPMessage;

struct ldapmsg {
};

typedef struct ldapmod ldapmod, *Pldapmod;

typedef union mod_vals_u mod_vals_u, *Pmod_vals_u;

union mod_vals_u {
    char * * modv_strvals;
    struct berval * * modv_bvals;
};

struct ldapmod {
    int mod_op;
    char * mod_type;
    union mod_vals_u mod_vals;
};

typedef struct ldapmod LDAPMod;

typedef enum passpolicyerror_enum {
    PP_accountLocked=1,
    PP_changeAfterReset=2,
    PP_insufficientPasswordQuality=5,
    PP_mustSupplyOldPassword=4,
    PP_noError=65535,
    PP_passwordExpired=0,
    PP_passwordInHistory=8,
    PP_passwordModNotAllowed=3,
    PP_passwordTooShort=6,
    PP_passwordTooYoung=7
} passpolicyerror_enum;

typedef enum passpolicyerror_enum LDAPPasswordPolicyError;

typedef struct ldapsortkey ldapsortkey, *Pldapsortkey;

typedef struct ldapsortkey LDAPSortKey;

struct ldapsortkey {
    char * attributeType;
    char * orderingRule;
    int reverseOrder;
};

typedef struct ldap_url_desc LDAPURLDesc;

typedef struct ldapvlvinfo ldapvlvinfo, *Pldapvlvinfo;

struct ldapvlvinfo {
    ber_int_t ldvlv_version;
    ber_int_t ldvlv_before_count;
    ber_int_t ldvlv_after_count;
    ber_int_t ldvlv_offset;
    ber_int_t ldvlv_count;
    struct berval * ldvlv_attrvalue;
    struct berval * ldvlv_context;
    void * ldvlv_extradata;
};

typedef struct ldapvlvinfo LDAPVLVInfo;

#define _LDAP_FEATURES_H 1

#define LDAP_API_FEATURE_X_OPENLDAP_THREAD_SAFE 1

#define LDAP_VENDOR_VERSION 20428

#define LDAP_VENDOR_VERSION_MAJOR 2

#define LDAP_VENDOR_VERSION_MINOR 4

#define LDAP_VENDOR_VERSION_PATCH 28

#define _LDAP_SCHEMA_H 1

#define LDAP_SCHEMA_ABSTRACT 0

#define LDAP_SCHEMA_ALLOW_ALL 63

#define LDAP_SCHEMA_ALLOW_DESCR 4

#define LDAP_SCHEMA_ALLOW_DESCR_PREFIX 8

#define LDAP_SCHEMA_ALLOW_NO_OID 1

#define LDAP_SCHEMA_ALLOW_NONE 0

#define LDAP_SCHEMA_ALLOW_OID_MACRO 16

#define LDAP_SCHEMA_ALLOW_OUT_OF_ORDER_FIELDS 32

#define LDAP_SCHEMA_ALLOW_QUOTED 2

#define LDAP_SCHEMA_AUXILIARY 2

#define LDAP_SCHEMA_DIRECTORY_OPERATION 1

#define LDAP_SCHEMA_DISTRIBUTED_OPERATION 2

#define LDAP_SCHEMA_DSA_OPERATION 3

#define LDAP_SCHEMA_NO 0

#define LDAP_SCHEMA_SKIP 128

#define LDAP_SCHEMA_STRUCTURAL 1

#define LDAP_SCHEMA_USER_APPLICATIONS 0

#define LDAP_SCHEMA_YES 1

#define LDAP_SCHERR_BADDESC 7

#define LDAP_SCHERR_BADNAME 6

#define LDAP_SCHERR_BADSUP 8

#define LDAP_SCHERR_DUPOPT 9

#define LDAP_SCHERR_EMPTY 10

#define LDAP_SCHERR_MISSING 11

#define LDAP_SCHERR_NODIGIT 5

#define LDAP_SCHERR_NOLEFTPAREN 3

#define LDAP_SCHERR_NORIGHTPAREN 4

#define LDAP_SCHERR_OUT_OF_ORDER 12

#define LDAP_SCHERR_OUTOFMEM 1

#define LDAP_SCHERR_UNEXPTOKEN 2

typedef struct ldap_attributetype ldap_attributetype, *Pldap_attributetype;

typedef struct ldap_schema_extension_item ldap_schema_extension_item, *Pldap_schema_extension_item;

typedef struct ldap_schema_extension_item LDAPSchemaExtensionItem;

struct ldap_schema_extension_item {
    char * lsei_name;
    char * * lsei_values;
};

struct ldap_attributetype {
    char * at_oid;
    char * * at_names;
    char * at_desc;
    int at_obsolete;
    char * at_sup_oid;
    char * at_equality_oid;
    char * at_ordering_oid;
    char * at_substr_oid;
    char * at_syntax_oid;
    int at_syntax_len;
    int at_single_value;
    int at_collective;
    int at_no_user_mod;
    int at_usage;
    LDAPSchemaExtensionItem * * at_extensions;
};

typedef struct ldap_contentrule ldap_contentrule, *Pldap_contentrule;

struct ldap_contentrule {
    char * cr_oid;
    char * * cr_names;
    char * cr_desc;
    char * * cr_sup_oids;
    int cr_obsolete;
    char * * cr_oc_oids_aux;
    char * * cr_at_oids_must;
    char * * cr_at_oids_may;
    char * * cr_at_oids_not;
    LDAPSchemaExtensionItem * * cr_extensions;
};

typedef struct ldap_matchingrule ldap_matchingrule, *Pldap_matchingrule;

struct ldap_matchingrule {
    char * mr_oid;
    char * * mr_names;
    char * mr_desc;
    int mr_obsolete;
    char * mr_syntax_oid;
    LDAPSchemaExtensionItem * * mr_extensions;
};

typedef struct ldap_matchingruleuse ldap_matchingruleuse, *Pldap_matchingruleuse;

struct ldap_matchingruleuse {
    char * mru_oid;
    char * * mru_names;
    char * mru_desc;
    int mru_obsolete;
    char * * mru_applies_oids;
    LDAPSchemaExtensionItem * * mru_extensions;
};

typedef struct ldap_nameform ldap_nameform, *Pldap_nameform;

struct ldap_nameform {
    char * nf_oid;
    char * * nf_names;
    char * nf_desc;
    int nf_obsolete;
    char * nf_objectclass;
    char * * nf_at_oids_must;
    char * * nf_at_oids_may;
    LDAPSchemaExtensionItem * * nf_extensions;
};

typedef struct ldap_objectclass ldap_objectclass, *Pldap_objectclass;

struct ldap_objectclass {
    char * oc_oid;
    char * * oc_names;
    char * oc_desc;
    int oc_obsolete;
    char * * oc_sup_oids;
    int oc_kind;
    char * * oc_at_oids_must;
    char * * oc_at_oids_may;
    LDAPSchemaExtensionItem * * oc_extensions;
};

typedef struct ldap_structurerule ldap_structurerule, *Pldap_structurerule;

struct ldap_structurerule {
    int sr_ruleid;
    char * * sr_names;
    char * sr_desc;
    int sr_obsolete;
    char * sr_nameform;
    int sr_nsup_ruleids;
    int * sr_sup_ruleids;
    LDAPSchemaExtensionItem * * sr_extensions;
};

typedef struct ldap_syntax ldap_syntax, *Pldap_syntax;

struct ldap_syntax {
    char * syn_oid;
    char * * syn_names;
    char * syn_desc;
    LDAPSchemaExtensionItem * * syn_extensions;
};

typedef struct ldap_attributetype LDAPAttributeType;

typedef struct ldap_contentrule LDAPContentRule;

typedef struct ldap_matchingrule LDAPMatchingRule;

typedef struct ldap_matchingruleuse LDAPMatchingRuleUse;

typedef struct ldap_nameform LDAPNameForm;

typedef struct ldap_objectclass LDAPObjectClass;

typedef struct ldap_structurerule LDAPStructureRule;

typedef struct ldap_syntax LDAPSyntax;

#define LDAP_UCS4_INVALID 2147483648

typedef ber_int_t ldap_ucs4_t;

#define LDIF_LINE_WIDTH 76

#define LDIF_LINE_WIDTH_MAX -1

#define LDIF_PUT_B64 8

#define LDIF_PUT_BINARY 4

#define LDIF_PUT_COMMENT 16

#define LDIF_PUT_NOVALUE 0

#define LDIF_PUT_SEP 64

#define LDIF_PUT_TEXT 2

#define LDIF_PUT_URL 32

#define LDIF_PUT_VALUE 1

typedef struct LDIFFP LDIFFP, *PLDIFFP;

struct LDIFFP {
    FILE * fp;
    struct LDIFFP * prev;
};

#define LH_LOAD_MULT 256

typedef void (* LHASH_DOALL_ARG_FN_TYPE)(void *, void *);

typedef void (* LHASH_DOALL_FN_TYPE)(void *);

#define AU_CLASS_DESC_MAX 72

#define AU_CLASS_NAME_MAX 8

#define AU_EVENT_DESC_MAX 50

#define AU_EVENT_NAME_MAX 30

#define AU_LINE_MAX 256

#define AU_OFLAG_NONE 0

#define AU_OFLAG_NORESOLVE 8

#define AU_OFLAG_RAW 1

#define AU_OFLAG_SHORT 2

#define AU_OFLAG_XML 4

#define AU_PRS_BOTH 3

#define AU_PRS_FAILURE 2

#define AU_PRS_REREAD 1

#define AU_PRS_SUCCESS 1

#define AU_PRS_USECACHE 0

#define AU_TO_NO_WRITE 0

#define AU_TO_WRITE 1

#define AU_USER_NAME_MAX 50

#define AUDIT_MAX_ARGS 128

#define AUDIT_MAX_ENV 128

#define AUDIT_OFF 2

#define AUDIT_ON 1

#define BSM_TEXTBUFSZ 256

#define MAX_AUDITSTRING_LEN 256

typedef union _union_1373 _union_1373, *P_union_1373;

typedef struct au_arg32_t au_arg32_t, *Pau_arg32_t;

typedef struct au_arg64_t au_arg64_t, *Pau_arg64_t;

typedef struct au_arb_t au_arb_t, *Pau_arb_t;

typedef struct au_attr32_t au_attr32_t, *Pau_attr32_t;

typedef struct au_attr64_t au_attr64_t, *Pau_attr64_t;

typedef struct au_execarg_t au_execarg_t, *Pau_execarg_t;

typedef struct au_execenv_t au_execenv_t, *Pau_execenv_t;

typedef struct au_exit_t au_exit_t, *Pau_exit_t;

typedef struct au_file_t au_file_t, *Pau_file_t;

typedef struct au_groups_t au_groups_t, *Pau_groups_t;

typedef struct au_header32_t au_header32_t, *Pau_header32_t;

typedef struct au_header32_ex_t au_header32_ex_t, *Pau_header32_ex_t;

typedef struct au_header64_t au_header64_t, *Pau_header64_t;

typedef struct au_header64_ex_t au_header64_ex_t, *Pau_header64_ex_t;

typedef struct au_inaddr_t au_inaddr_t, *Pau_inaddr_t;

typedef struct au_inaddr_ex_t au_inaddr_ex_t, *Pau_inaddr_ex_t;

typedef struct au_ip_t au_ip_t, *Pau_ip_t;

typedef struct au_ipc_t au_ipc_t, *Pau_ipc_t;

typedef struct au_ipcperm_t au_ipcperm_t, *Pau_ipcperm_t;

typedef struct au_iport_t au_iport_t, *Pau_iport_t;

typedef struct au_opaque_t au_opaque_t, *Pau_opaque_t;

typedef struct au_path_t au_path_t, *Pau_path_t;

typedef struct au_proc32_t au_proc32_t, *Pau_proc32_t;

typedef struct au_proc32ex_t au_proc32ex_t, *Pau_proc32ex_t;

typedef struct au_proc64_t au_proc64_t, *Pau_proc64_t;

typedef struct au_proc64ex_t au_proc64ex_t, *Pau_proc64ex_t;

typedef struct au_ret32_t au_ret32_t, *Pau_ret32_t;

typedef struct au_ret64_t au_ret64_t, *Pau_ret64_t;

typedef struct au_seq_t au_seq_t, *Pau_seq_t;

typedef struct au_socket_t au_socket_t, *Pau_socket_t;

typedef struct au_socket_ex32_t au_socket_ex32_t, *Pau_socket_ex32_t;

typedef struct au_socketinet_ex32_t au_socketinet_ex32_t, *Pau_socketinet_ex32_t;

typedef struct au_socketunix_t au_socketunix_t, *Pau_socketunix_t;

typedef struct au_subject32_t au_subject32_t, *Pau_subject32_t;

typedef struct au_subject32ex_t au_subject32ex_t, *Pau_subject32ex_t;

typedef struct au_subject64_t au_subject64_t, *Pau_subject64_t;

typedef struct au_subject64ex_t au_subject64ex_t, *Pau_subject64ex_t;

typedef struct au_text_t au_text_t, *Pau_text_t;

typedef struct au_kevent_t au_kevent_t, *Pau_kevent_t;

typedef struct au_invalid_t au_invalid_t, *Pau_invalid_t;

typedef struct au_trailer_t au_trailer_t, *Pau_trailer_t;

typedef struct au_zonename_t au_zonename_t, *Pau_zonename_t;

typedef struct au_tid32 au_tid32, *Pau_tid32;

typedef struct au_tid32 au_tid32_t;

typedef struct au_tidaddr32 au_tidaddr32, *Pau_tidaddr32;

typedef struct au_tidaddr32 au_tidaddr32_t;

typedef struct au_tid64 au_tid64, *Pau_tid64;

typedef struct au_tid64 au_tid64_t;

typedef struct au_tidaddr64 au_tidaddr64, *Pau_tidaddr64;

typedef struct au_tidaddr64 au_tidaddr64_t;

struct au_tid64 {
    u_int64_t port;
    u_int32_t addr;
};

struct au_subject64_t {
    u_int32_t auid;
    u_int32_t euid;
    u_int32_t egid;
    u_int32_t ruid;
    u_int32_t rgid;
    u_int32_t pid;
    u_int32_t sid;
    au_tid64_t tid;
};

struct au_kevent_t {
    u_int32_t ident;
    u_int16_t filter;
    u_int16_t flags;
    u_int32_t fflags;
    u_int32_t data;
};

struct au_socketunix_t {
    u_int16_t family;
    char path[104];
};

struct au_tidaddr32 {
    u_int32_t port;
    u_int32_t type;
    u_int32_t addr[4];
};

struct au_proc32ex_t {
    u_int32_t auid;
    u_int32_t euid;
    u_int32_t egid;
    u_int32_t ruid;
    u_int32_t rgid;
    u_int32_t pid;
    u_int32_t sid;
    au_tidaddr32_t tid;
};

struct au_groups_t {
    u_int16_t no;
    u_int32_t list[16];
};

struct au_trailer_t {
    u_int16_t magic;
    u_int32_t count;
};

struct au_header32_ex_t {
    u_int32_t size;
    u_char version;
    u_int16_t e_type;
    u_int16_t e_mod;
    u_int32_t ad_type;
    u_int32_t addr[4];
    u_int32_t s;
    u_int32_t ms;
};

struct au_header64_t {
    u_int32_t size;
    u_char version;
    u_int16_t e_type;
    u_int16_t e_mod;
    u_int64_t s;
    u_int64_t ms;
};

struct au_opaque_t {
    u_int16_t size;
    char * data;
};

struct au_socket_ex32_t {
    u_int16_t domain;
    u_int16_t type;
    u_int16_t atype;
    u_int16_t l_port;
    u_int32_t l_addr[4];
    u_int32_t r_port;
    u_int32_t r_addr[4];
};

struct au_inaddr_t {
    u_int32_t addr;
};

struct au_ipc_t {
    u_char type;
    u_int32_t id;
};

struct au_seq_t {
    u_int32_t seqno;
};

struct au_ipcperm_t {
    u_int32_t uid;
    u_int32_t gid;
    u_int32_t puid;
    u_int32_t pgid;
    u_int32_t mode;
    u_int32_t seq;
    u_int32_t key;
};

struct au_iport_t {
    u_int16_t port;
};

struct au_subject32ex_t {
    u_int32_t auid;
    u_int32_t euid;
    u_int32_t egid;
    u_int32_t ruid;
    u_int32_t rgid;
    u_int32_t pid;
    u_int32_t sid;
    au_tidaddr32_t tid;
};

struct au_ret64_t {
    u_char err;
    u_int64_t val;
};

struct au_arg64_t {
    u_char no;
    u_int64_t val;
    u_int16_t len;
    char * text;
};

struct au_file_t {
    u_int32_t s;
    u_int32_t ms;
    u_int16_t len;
    char * name;
};

struct au_tid32 {
    u_int32_t port;
    u_int32_t addr;
};

struct au_proc32_t {
    u_int32_t auid;
    u_int32_t euid;
    u_int32_t egid;
    u_int32_t ruid;
    u_int32_t rgid;
    u_int32_t pid;
    u_int32_t sid;
    au_tid32_t tid;
};

struct au_socket_t {
    u_int16_t type;
    u_int16_t l_port;
    u_int32_t l_addr;
    u_int16_t r_port;
    u_int32_t r_addr;
};

struct au_arb_t {
    u_char howtopr;
    u_char bu;
    u_char uc;
    u_char * data;
};

struct au_execarg_t {
    u_int32_t count;
    char * text[128];
};

struct au_path_t {
    u_int16_t len;
    char * path;
};

struct au_tidaddr64 {
    u_int64_t port;
    u_int32_t type;
    u_int32_t addr[4];
};

struct au_subject64ex_t {
    u_int32_t auid;
    u_int32_t euid;
    u_int32_t egid;
    u_int32_t ruid;
    u_int32_t rgid;
    u_int32_t pid;
    u_int32_t sid;
    au_tidaddr64_t tid;
};

struct au_header64_ex_t {
    u_int32_t size;
    u_char version;
    u_int16_t e_type;
    u_int16_t e_mod;
    u_int32_t ad_type;
    u_int32_t addr[4];
    u_int64_t s;
    u_int64_t ms;
};

struct au_proc64_t {
    u_int32_t auid;
    u_int32_t euid;
    u_int32_t egid;
    u_int32_t ruid;
    u_int32_t rgid;
    u_int32_t pid;
    u_int32_t sid;
    au_tid64_t tid;
};

struct au_attr32_t {
    u_int32_t mode;
    u_int32_t uid;
    u_int32_t gid;
    u_int32_t fsid;
    u_int64_t nid;
    u_int32_t dev;
};

struct au_inaddr_ex_t {
    u_int32_t type;
    u_int32_t addr[4];
};

struct au_exit_t {
    u_int32_t status;
    u_int32_t ret;
};

struct au_header32_t {
    u_int32_t size;
    u_char version;
    u_int16_t e_type;
    u_int16_t e_mod;
    u_int32_t s;
    u_int32_t ms;
};

struct au_text_t {
    u_int16_t len;
    char * text;
};

struct au_ip_t {
    u_char version;
    u_char tos;
    u_int16_t len;
    u_int16_t id;
    u_int16_t offset;
    u_char ttl;
    u_char prot;
    u_int16_t chksm;
    u_int32_t src;
    u_int32_t dest;
};

struct au_ret32_t {
    u_char status;
    u_int32_t ret;
};

struct au_subject32_t {
    u_int32_t auid;
    u_int32_t euid;
    u_int32_t egid;
    u_int32_t ruid;
    u_int32_t rgid;
    u_int32_t pid;
    u_int32_t sid;
    au_tid32_t tid;
};

struct au_attr64_t {
    u_int32_t mode;
    u_int32_t uid;
    u_int32_t gid;
    u_int32_t fsid;
    u_int64_t nid;
    u_int64_t dev;
};

struct au_execenv_t {
    u_int32_t count;
    char * text[128];
};

struct au_socketinet_ex32_t {
    u_int16_t family;
    u_int16_t port;
    u_int32_t addr[4];
};

struct au_zonename_t {
    u_int16_t len;
    char * zonename;
};

struct au_proc64ex_t {
    u_int32_t auid;
    u_int32_t euid;
    u_int32_t egid;
    u_int32_t ruid;
    u_int32_t rgid;
    u_int32_t pid;
    u_int32_t sid;
    au_tidaddr64_t tid;
};

struct au_arg32_t {
    u_char no;
    u_int32_t val;
    u_int16_t len;
    char * text;
};

struct au_invalid_t {
    u_int16_t length;
    char * data;
};

union _union_1373 {
    struct au_arg32_t arg32;
    struct au_arg64_t arg64;
    struct au_arb_t arb;
    struct au_attr32_t attr32;
    struct au_attr64_t attr64;
    struct au_execarg_t execarg;
    struct au_execenv_t execenv;
    struct au_exit_t exit;
    struct au_file_t file;
    struct au_groups_t grps;
    struct au_header32_t hdr32;
    struct au_header32_ex_t hdr32_ex;
    struct au_header64_t hdr64;
    struct au_header64_ex_t hdr64_ex;
    struct au_inaddr_t inaddr;
    struct au_inaddr_ex_t inaddr_ex;
    struct au_ip_t ip;
    struct au_ipc_t ipc;
    struct au_ipcperm_t ipcperm;
    struct au_iport_t iport;
    struct au_opaque_t opaque;
    struct au_path_t path;
    struct au_proc32_t proc32;
    struct au_proc32ex_t proc32_ex;
    struct au_proc64_t proc64;
    struct au_proc64ex_t proc64_ex;
    struct au_ret32_t ret32;
    struct au_ret64_t ret64;
    struct au_seq_t seq;
    struct au_socket_t socket;
    struct au_socket_ex32_t socket_ex32;
    struct au_socketinet_ex32_t sockinet_ex32;
    struct au_socketunix_t sockunix;
    struct au_subject32_t subj32;
    struct au_subject32ex_t subj32_ex;
    struct au_subject64_t subj64;
    struct au_subject64ex_t subj64_ex;
    struct au_text_t text;
    struct au_kevent_t kevent;
    struct au_invalid_t invalid;
    struct au_trailer_t trail;
    struct au_zonename_t zonename;
};

typedef struct au_class_ent au_class_ent, *Pau_class_ent;

struct au_class_ent {
    char * ac_name;
    au_class_t ac_class;
    char * ac_desc;
};

typedef struct au_class_ent au_class_ent_t;

typedef struct au_event_ent au_event_ent, *Pau_event_ent;

struct au_event_ent {
    au_event_t ae_number;
    char * ae_name;
    char * ae_desc;
    au_class_t ae_class;
};

typedef struct au_event_ent au_event_ent_t;

typedef struct au_socketinet32_t au_socketinet32_t, *Pau_socketinet32_t;

struct au_socketinet32_t {
    u_int16_t family;
    u_int16_t port;
    u_int32_t addr;
};

typedef struct au_user_ent au_user_ent, *Pau_user_ent;

struct au_user_ent {
    char * au_name;
    au_mask_t au_always;
    au_mask_t au_never;
};

typedef struct au_user_ent au_user_ent_t;

typedef enum enum_1396 {
    kAUBadParamErr=1,
    kAUCloseErr=10,
    kAULastErr=12,
    kAUMakeReturnTokErr=8,
    kAUMakeSubjectTokErr=5,
    kAUMakeTextTokErr=11,
    kAUNoErr=0,
    kAUOpenErr=4,
    kAUStatErr=2,
    kAUSysctlErr=3,
    kAUWriteCallerTokErr=7,
    kAUWriteReturnTokErr=9,
    kAUWriteSubjectTokErr=6
} enum_1396;

typedef struct tokenstr tokenstr, *Ptokenstr;

struct tokenstr {
    u_char id;
    u_char * data;
    size_t len;
    union _union_1373 tt;
};

typedef struct tokenstr tokenstr_t;

typedef struct qelem qelem, *Pqelem;

struct qelem {
    struct qelem * q_forw;
    struct qelem * q_back;
    char * q_data;
};

#define PROC_LISTPIDSPATH_EXCLUDE_EVTONLY 2

#define PROC_LISTPIDSPATH_PATH_IS_VOLUME 1

#define PROC_SETPC_NONE 0

#define PROC_SETPC_SUSPEND 2

#define PROC_SETPC_TERMINATE 3

#define PROC_SETPC_THROTTLEMEM 1

typedef enum enum_1880 {
    UNW_EBADFRAME=7,
    UNW_EBADREG=3,
    UNW_EBADVERSION=9,
    UNW_EINVAL=8,
    UNW_EINVALIDIP=6,
    UNW_ENOINFO=10,
    UNW_ENOMEM=2,
    UNW_EREADONLYREG=4,
    UNW_ESTOPUNWIND=5,
    UNW_ESUCCESS=0,
    UNW_EUNSPEC=1
} enum_1880;

typedef enum enum_1888 {
    UNW_REG_IP=0,
    UNW_REG_SP=1
} enum_1888;

typedef enum enum_1889 {
    UNW_X86_EAX=0,
    UNW_X86_EBP=4,
    UNW_X86_EBX=3,
    UNW_X86_ECX=1,
    UNW_X86_EDI=7,
    UNW_X86_EDX=2,
    UNW_X86_ESI=6,
    UNW_X86_ESP=5
} enum_1889;

typedef enum enum_1890 {
    UNW_X86_64_R10=10,
    UNW_X86_64_R11=11,
    UNW_X86_64_R12=12,
    UNW_X86_64_R13=13,
    UNW_X86_64_R14=14,
    UNW_X86_64_R15=15,
    UNW_X86_64_R8=8,
    UNW_X86_64_R9=9,
    UNW_X86_64_RAX=0,
    UNW_X86_64_RBP=6,
    UNW_X86_64_RBX=3,
    UNW_X86_64_RCX=2,
    UNW_X86_64_RDI=5,
    UNW_X86_64_RDX=1,
    UNW_X86_64_RSI=4,
    UNW_X86_64_RSP=7
} enum_1890;

typedef enum enum_1891 {
    UNW_PPC_AP=67,
    UNW_PPC_CR0=68,
    UNW_PPC_CR1=69,
    UNW_PPC_CR2=70,
    UNW_PPC_CR3=71,
    UNW_PPC_CR4=72,
    UNW_PPC_CR5=73,
    UNW_PPC_CR6=74,
    UNW_PPC_CR7=75,
    UNW_PPC_CTR=66,
    UNW_PPC_F0=32,
    UNW_PPC_F1=33,
    UNW_PPC_F10=42,
    UNW_PPC_F11=43,
    UNW_PPC_F12=44,
    UNW_PPC_F13=45,
    UNW_PPC_F14=46,
    UNW_PPC_F15=47,
    UNW_PPC_F16=48,
    UNW_PPC_F17=49,
    UNW_PPC_F18=50,
    UNW_PPC_F19=51,
    UNW_PPC_F2=34,
    UNW_PPC_F20=52,
    UNW_PPC_F21=53,
    UNW_PPC_F22=54,
    UNW_PPC_F23=55,
    UNW_PPC_F24=56,
    UNW_PPC_F25=57,
    UNW_PPC_F26=58,
    UNW_PPC_F27=59,
    UNW_PPC_F28=60,
    UNW_PPC_F29=61,
    UNW_PPC_F3=35,
    UNW_PPC_F30=62,
    UNW_PPC_F31=63,
    UNW_PPC_F4=36,
    UNW_PPC_F5=37,
    UNW_PPC_F6=38,
    UNW_PPC_F7=39,
    UNW_PPC_F8=40,
    UNW_PPC_F9=41,
    UNW_PPC_LR=65,
    UNW_PPC_MQ=64,
    UNW_PPC_R0=0,
    UNW_PPC_R1=1,
    UNW_PPC_R10=10,
    UNW_PPC_R11=11,
    UNW_PPC_R12=12,
    UNW_PPC_R13=13,
    UNW_PPC_R14=14,
    UNW_PPC_R15=15,
    UNW_PPC_R16=16,
    UNW_PPC_R17=17,
    UNW_PPC_R18=18,
    UNW_PPC_R19=19,
    UNW_PPC_R2=2,
    UNW_PPC_R20=20,
    UNW_PPC_R21=21,
    UNW_PPC_R22=22,
    UNW_PPC_R23=23,
    UNW_PPC_R24=24,
    UNW_PPC_R25=25,
    UNW_PPC_R26=26,
    UNW_PPC_R27=27,
    UNW_PPC_R28=28,
    UNW_PPC_R29=29,
    UNW_PPC_R3=3,
    UNW_PPC_R30=30,
    UNW_PPC_R31=31,
    UNW_PPC_R4=4,
    UNW_PPC_R5=5,
    UNW_PPC_R6=6,
    UNW_PPC_R7=7,
    UNW_PPC_R8=8,
    UNW_PPC_R9=9,
    UNW_PPC_SPEFSCR=112,
    UNW_PPC_SPE_ACC=111,
    UNW_PPC_V0=77,
    UNW_PPC_V1=78,
    UNW_PPC_V10=87,
    UNW_PPC_V11=88,
    UNW_PPC_V12=89,
    UNW_PPC_V13=90,
    UNW_PPC_V14=91,
    UNW_PPC_V15=92,
    UNW_PPC_V16=93,
    UNW_PPC_V17=94,
    UNW_PPC_V18=95,
    UNW_PPC_V19=96,
    UNW_PPC_V2=79,
    UNW_PPC_V20=97,
    UNW_PPC_V21=98,
    UNW_PPC_V22=99,
    UNW_PPC_V23=100,
    UNW_PPC_V24=101,
    UNW_PPC_V25=102,
    UNW_PPC_V26=103,
    UNW_PPC_V27=104,
    UNW_PPC_V28=105,
    UNW_PPC_V29=106,
    UNW_PPC_V3=80,
    UNW_PPC_V30=107,
    UNW_PPC_V31=108,
    UNW_PPC_V4=81,
    UNW_PPC_V5=82,
    UNW_PPC_V6=83,
    UNW_PPC_V7=84,
    UNW_PPC_V8=85,
    UNW_PPC_V9=86,
    UNW_PPC_VRSAVE=109,
    UNW_PPC_VSCR=110,
    UNW_PPC_XER=76
} enum_1891;

typedef struct unw_addr_space unw_addr_space, *Punw_addr_space;

struct unw_addr_space {
};

typedef struct unw_addr_space * unw_addr_space_t;

typedef struct unw_context_t unw_context_t, *Punw_context_t;

struct unw_context_t {
    uint64_t data[128];
};

typedef struct unw_cursor_t unw_cursor_t, *Punw_cursor_t;

struct unw_cursor_t {
    uint64_t data[140];
};

typedef double unw_fpreg_t;

typedef struct unw_proc_info_t unw_proc_info_t, *Punw_proc_info_t;

typedef uint64_t unw_word_t;

struct unw_proc_info_t {
    unw_word_t start_ip;
    unw_word_t end_ip;
    unw_word_t lsda;
    unw_word_t handler;
    unw_word_t gp;
    unw_word_t flags;
    uint32_t format;
    uint32_t unwind_info_size;
    unw_word_t unwind_info;
    unw_word_t extra;
};

typedef int unw_regnum_t;

#define _POSIX2_BC_BASE_MAX 99

#define _POSIX2_BC_DIM_MAX 2048

#define _POSIX2_BC_SCALE_MAX 99

#define _POSIX2_BC_STRING_MAX 1000

#define _POSIX2_CHARCLASS_NAME_MAX 14

#define _POSIX2_COLL_WEIGHTS_MAX 2

#define _POSIX2_EQUIV_CLASS_MAX 2

#define _POSIX2_EXPR_NEST_MAX 32

#define _POSIX2_LINE_MAX 2048

#define _POSIX2_RE_DUP_MAX 255

#define _POSIX_AIO_LISTIO_MAX 2

#define _POSIX_AIO_MAX 1

#define _POSIX_ARG_MAX 4096

#define _POSIX_CHILD_MAX 25

#define _POSIX_DELAYTIMER_MAX 32

#define _POSIX_HOST_NAME_MAX 255

#define _POSIX_LINK_MAX 8

#define _POSIX_LOGIN_NAME_MAX 9

#define _POSIX_MAX_CANON 255

#define _POSIX_MAX_INPUT 255

#define _POSIX_MQ_OPEN_MAX 8

#define _POSIX_MQ_PRIO_MAX 32

#define _POSIX_NAME_MAX 14

#define _POSIX_NGROUPS_MAX 8

#define _POSIX_OPEN_MAX 20

#define _POSIX_PATH_MAX 256

#define _POSIX_PIPE_BUF 512

#define _POSIX_RE_DUP_MAX 255

#define _POSIX_RTSIG_MAX 8

#define _POSIX_SEM_NSEMS_MAX 256

#define _POSIX_SEM_VALUE_MAX 32767

#define _POSIX_SIGQUEUE_MAX 32

#define _POSIX_SS_REPL_MAX 4

#define _POSIX_SSIZE_MAX 32767

#define _POSIX_STREAM_MAX 8

#define _POSIX_SYMLINK_MAX 255

#define _POSIX_SYMLOOP_MAX 8

#define _POSIX_THREAD_DESTRUCTOR_ITERATIONS 4

#define _POSIX_THREAD_THREADS_MAX 64

#define _POSIX_TIMER_MAX 32

#define _POSIX_TRACE_EVENT_NAME_MAX 30

#define _POSIX_TRACE_NAME_MAX 8

#define _POSIX_TRACE_SYS_MAX 8

#define _POSIX_TRACE_USER_EVENT_MAX 32

#define _POSIX_TTY_NAME_MAX 9

#define _POSIX_TZNAME_MAX 6

#define _XOPEN_IOV_MAX 16

#define _XOPEN_NAME_MAX 255

#define _XOPEN_PATH_MAX 1024

#define CHAR_BIT 8

#define CHAR_MAX 127

#define CHAR_MIN -128

#define CLK_TCK 100

#define INT_MAX 2147483647

#define INT_MIN -2147483648

#define IOV_MAX 1024

#define LLONG_MAX 9223372036854775807

#define LONG_BIT 64

#define LONG_MAX 9223372036854775807

#define LONG_MIN -9223372036854775808

#define MB_LEN_MAX 6

#define NL_ARGMAX 9

#define NL_LANGMAX 14

#define NL_MSGMAX 32767

#define NL_NMAX 1

#define NL_SETMAX 255

#define NL_TEXTMAX 2048

#define OFF_MAX 9223372036854775807

#define PASS_MAX 128

#define PTHREAD_DESTRUCTOR_ITERATIONS 4

#define PTHREAD_KEYS_MAX 512

#define PTHREAD_STACK_MIN 8192

#define QUAD_MAX 9223372036854775807

#define SCHAR_MAX 127

#define SCHAR_MIN -128

#define SHRT_MAX 32767

#define SHRT_MIN -32768

#define SIZE_T_MAX -1

#define SSIZE_MAX 9223372036854775807

#define UCHAR_MAX 255

#define UINT_MAX 4294967295

#define ULONG_MAX -1

#define USHRT_MAX 65535

#define WORD_BIT 32

typedef struct _xmlLink _xmlLink, *P_xmlLink;

struct _xmlLink {
};

typedef struct _xmlList _xmlList, *P_xmlList;

struct _xmlList {
};

typedef struct _xmlLink xmlLink;

typedef xmlLink * xmlLinkPtr;

typedef struct _xmlList xmlList;

typedef int (* xmlListDataCompare)(void *, void *);

typedef void (* xmlListDeallocator)(xmlLinkPtr);

typedef xmlList * xmlListPtr;

typedef int (* xmlListWalker)(void *, void *);

#define BIND_IMMEDIATE_MASK 15

#define BIND_OPCODE_ADD_ADDR_ULEB 128

#define BIND_OPCODE_DO_BIND 144

#define BIND_OPCODE_DO_BIND_ADD_ADDR_IMM_SCALED 176

#define BIND_OPCODE_DO_BIND_ADD_ADDR_ULEB 160

#define BIND_OPCODE_DO_BIND_ULEB_TIMES_SKIPPING_ULEB 192

#define BIND_OPCODE_DONE 0

#define BIND_OPCODE_MASK 240

#define BIND_OPCODE_SET_ADDEND_SLEB 96

#define BIND_OPCODE_SET_DYLIB_ORDINAL_IMM 16

#define BIND_OPCODE_SET_DYLIB_ORDINAL_ULEB 32

#define BIND_OPCODE_SET_DYLIB_SPECIAL_IMM 48

#define BIND_OPCODE_SET_SEGMENT_AND_OFFSET_ULEB 112

#define BIND_OPCODE_SET_SYMBOL_TRAILING_FLAGS_IMM 64

#define BIND_OPCODE_SET_TYPE_IMM 80

#define BIND_SPECIAL_DYLIB_FLAT_LOOKUP -2

#define BIND_SPECIAL_DYLIB_MAIN_EXECUTABLE -1

#define BIND_SPECIAL_DYLIB_SELF 0

#define BIND_SYMBOL_FLAGS_NON_WEAK_DEFINITION 8

#define BIND_SYMBOL_FLAGS_WEAK_IMPORT 1

#define BIND_TYPE_POINTER 1

#define BIND_TYPE_TEXT_ABSOLUTE32 2

#define BIND_TYPE_TEXT_PCREL32 3

#define DICE_KIND_ABS_JUMP_TABLE32 5

#define DICE_KIND_DATA 1

#define DICE_KIND_JUMP_TABLE16 3

#define DICE_KIND_JUMP_TABLE32 4

#define DICE_KIND_JUMP_TABLE8 2

#define EXPORT_SYMBOL_FLAGS_KIND_MASK 3

#define EXPORT_SYMBOL_FLAGS_KIND_REGULAR 0

#define EXPORT_SYMBOL_FLAGS_KIND_THREAD_LOCAL 1

#define EXPORT_SYMBOL_FLAGS_REEXPORT 8

#define EXPORT_SYMBOL_FLAGS_STUB_AND_RESOLVER 16

#define EXPORT_SYMBOL_FLAGS_WEAK_DEFINITION 4

#define INDIRECT_SYMBOL_ABS 1073741824

#define INDIRECT_SYMBOL_LOCAL 2147483648

#define LC_CODE_SIGNATURE 29

#define LC_DATA_IN_CODE 41

#define LC_DYLD_ENVIRONMENT 39

#define LC_DYLD_INFO 34

#define LC_DYLD_INFO_ONLY 2147483682

#define LC_DYLIB_CODE_SIGN_DRS 43

#define LC_DYSYMTAB 11

#define LC_ENCRYPTION_INFO 33

#define LC_ENCRYPTION_INFO_64 44

#define LC_FUNCTION_STARTS 38

#define LC_FVMFILE 9

#define LC_ID_DYLIB 13

#define LC_ID_DYLINKER 15

#define LC_IDENT 8

#define LC_IDFVMLIB 7

#define LC_LAZY_LOAD_DYLIB 32

#define LC_LINKER_OPTION 45

#define LC_LOAD_DYLIB 12

#define LC_LOAD_DYLINKER 14

#define LC_LOAD_UPWARD_DYLIB 2147483683

#define LC_LOAD_WEAK_DYLIB 2147483672

#define LC_LOADFVMLIB 6

#define LC_MAIN 2147483688

#define LC_PREBIND_CKSUM 23

#define LC_PREBOUND_DYLIB 16

#define LC_PREPAGE 10

#define LC_REEXPORT_DYLIB 2147483679

#define LC_REQ_DYLD 2147483648

#define LC_ROUTINES 17

#define LC_ROUTINES_64 26

#define LC_RPATH 2147483676

#define LC_SEGMENT 1

#define LC_SEGMENT_64 25

#define LC_SEGMENT_SPLIT_INFO 30

#define LC_SOURCE_VERSION 42

#define LC_SUB_CLIENT 20

#define LC_SUB_FRAMEWORK 18

#define LC_SUB_LIBRARY 21

#define LC_SUB_UMBRELLA 19

#define LC_SYMSEG 3

#define LC_SYMTAB 2

#define LC_THREAD 4

#define LC_TWOLEVEL_HINTS 22

#define LC_UNIXTHREAD 5

#define LC_UUID 27

#define LC_VERSION_MIN_IPHONEOS 37

#define LC_VERSION_MIN_MACOSX 36

#define MH_ALLMODSBOUND 4096

#define MH_ALLOW_STACK_EXECUTION 131072

#define MH_BINDATLOAD 8

#define MH_BINDS_TO_WEAK 65536

#define MH_BUNDLE 8

#define MH_CANONICAL 16384

#define MH_CIGAM 3472551422

#define MH_CIGAM_64 3489328638

#define MH_CORE 4

#define MH_DEAD_STRIPPABLE_DYLIB 4194304

#define MH_DSYM 10

#define MH_DYLDLINK 4

#define MH_DYLIB 6

#define MH_DYLIB_STUB 9

#define MH_DYLINKER 7

#define MH_EXECUTE 2

#define MH_FORCE_FLAT 256

#define MH_FVMLIB 3

#define MH_HAS_TLV_DESCRIPTORS 8388608

#define MH_INCRLINK 2

#define MH_KEXT_BUNDLE 11

#define MH_LAZY_INIT 64

#define MH_MAGIC 4277009102

#define MH_MAGIC_64 4277009103

#define MH_NO_HEAP_EXECUTION 16777216

#define MH_NO_REEXPORTED_DYLIBS 1048576

#define MH_NOFIXPREBINDING 1024

#define MH_NOMULTIDEFS 512

#define MH_NOUNDEFS 1

#define MH_OBJECT 1

#define MH_PIE 2097152

#define MH_PREBINDABLE 2048

#define MH_PREBOUND 16

#define MH_PRELOAD 5

#define MH_ROOT_SAFE 262144

#define MH_SETUID_SAFE 524288

#define MH_SPLIT_SEGS 32

#define MH_SUBSECTIONS_VIA_SYMBOLS 8192

#define MH_TWOLEVEL 128

#define MH_WEAK_DEFINES 32768

#define REBASE_IMMEDIATE_MASK 15

#define REBASE_OPCODE_ADD_ADDR_IMM_SCALED 64

#define REBASE_OPCODE_ADD_ADDR_ULEB 48

#define REBASE_OPCODE_DO_REBASE_ADD_ADDR_ULEB 112

#define REBASE_OPCODE_DO_REBASE_IMM_TIMES 80

#define REBASE_OPCODE_DO_REBASE_ULEB_TIMES 96

#define REBASE_OPCODE_DO_REBASE_ULEB_TIMES_SKIPPING_ULEB 128

#define REBASE_OPCODE_DONE 0

#define REBASE_OPCODE_MASK 240

#define REBASE_OPCODE_SET_SEGMENT_AND_OFFSET_ULEB 32

#define REBASE_OPCODE_SET_TYPE_IMM 16

#define REBASE_TYPE_POINTER 1

#define REBASE_TYPE_TEXT_ABSOLUTE32 2

#define REBASE_TYPE_TEXT_PCREL32 3

#define S_16BYTE_LITERALS 14

#define S_4BYTE_LITERALS 3

#define S_8BYTE_LITERALS 4

#define S_ATTR_DEBUG 33554432

#define S_ATTR_EXT_RELOC 512

#define S_ATTR_LIVE_SUPPORT 134217728

#define S_ATTR_LOC_RELOC 256

#define S_ATTR_NO_DEAD_STRIP 268435456

#define S_ATTR_NO_TOC 1073741824

#define S_ATTR_PURE_INSTRUCTIONS 2147483648

#define S_ATTR_SELF_MODIFYING_CODE 67108864

#define S_ATTR_SOME_INSTRUCTIONS 1024

#define S_ATTR_STRIP_STATIC_SYMS 536870912

#define S_COALESCED 11

#define S_CSTRING_LITERALS 2

#define S_DTRACE_DOF 15

#define S_GB_ZEROFILL 12

#define S_INTERPOSING 13

#define S_LAZY_DYLIB_SYMBOL_POINTERS 16

#define S_LAZY_SYMBOL_POINTERS 7

#define S_LITERAL_POINTERS 5

#define S_MOD_INIT_FUNC_POINTERS 9

#define S_MOD_TERM_FUNC_POINTERS 10

#define S_NON_LAZY_SYMBOL_POINTERS 6

#define S_REGULAR 0

#define S_SYMBOL_STUBS 8

#define S_THREAD_LOCAL_INIT_FUNCTION_POINTERS 21

#define S_THREAD_LOCAL_REGULAR 17

#define S_THREAD_LOCAL_VARIABLE_POINTERS 20

#define S_THREAD_LOCAL_VARIABLES 19

#define S_THREAD_LOCAL_ZEROFILL 18

#define S_ZEROFILL 1

#define SECTION_ATTRIBUTES 4294967040

#define SECTION_ATTRIBUTES_SYS 16776960

#define SECTION_ATTRIBUTES_USR 4278190080

#define SECTION_TYPE 255

#define SG_FVMLIB 2

#define SG_HIGHVM 1

#define SG_NORELOC 4

#define SG_PROTECTED_VERSION_1 8

typedef union anon__struct_2210_bitfield_1 anon__struct_2210_bitfield_1, *Panon__struct_2210_bitfield_1;

union anon__struct_2210_bitfield_1 {
    uint32_t isym:24; /* : bits 0-23 */
    uint32_t flags:8; /* : bits 24-31 */
};

typedef union anon__struct_2212_bitfield_1 anon__struct_2212_bitfield_1, *Panon__struct_2212_bitfield_1;

union anon__struct_2212_bitfield_1 {
    uint32_t isub_image:8; /* : bits 0-7 */
    uint32_t itoc:24; /* : bits 8-31 */
};

typedef struct data_in_code_entry data_in_code_entry, *Pdata_in_code_entry;

struct data_in_code_entry {
    uint32_t offset;
    uint16_t length;
    uint16_t kind;
};

typedef struct dyld_info_command dyld_info_command, *Pdyld_info_command;

struct dyld_info_command {
    uint32_t cmd;
    uint32_t cmdsize;
    uint32_t rebase_off;
    uint32_t rebase_size;
    uint32_t bind_off;
    uint32_t bind_size;
    uint32_t weak_bind_off;
    uint32_t weak_bind_size;
    uint32_t lazy_bind_off;
    uint32_t lazy_bind_size;
    uint32_t export_off;
    uint32_t export_size;
};

typedef struct dylib dylib, *Pdylib;

typedef union lc_str lc_str, *Plc_str;

union lc_str {
    uint32_t offset;
};

struct dylib {
    union lc_str name;
    uint32_t timestamp;
    uint32_t current_version;
    uint32_t compatibility_version;
};

typedef struct dylib_command dylib_command, *Pdylib_command;

struct dylib_command {
    uint32_t cmd;
    uint32_t cmdsize;
    struct dylib dylib;
};

typedef struct dylib_module dylib_module, *Pdylib_module;

struct dylib_module {
    uint32_t module_name;
    uint32_t iextdefsym;
    uint32_t nextdefsym;
    uint32_t irefsym;
    uint32_t nrefsym;
    uint32_t ilocalsym;
    uint32_t nlocalsym;
    uint32_t iextrel;
    uint32_t nextrel;
    uint32_t iinit_iterm;
    uint32_t ninit_nterm;
    uint32_t objc_module_info_addr;
    uint32_t objc_module_info_size;
};

typedef struct dylib_module_64 dylib_module_64, *Pdylib_module_64;

struct dylib_module_64 {
    uint32_t module_name;
    uint32_t iextdefsym;
    uint32_t nextdefsym;
    uint32_t irefsym;
    uint32_t nrefsym;
    uint32_t ilocalsym;
    uint32_t nlocalsym;
    uint32_t iextrel;
    uint32_t nextrel;
    uint32_t iinit_iterm;
    uint32_t ninit_nterm;
    uint32_t objc_module_info_size;
    uint64_t objc_module_info_addr;
};

typedef struct dylib_reference dylib_reference, *Pdylib_reference;

struct dylib_reference {
    union anon__struct_2210_bitfield_1 field_0x0;
};

typedef struct dylib_table_of_contents dylib_table_of_contents, *Pdylib_table_of_contents;

struct dylib_table_of_contents {
    uint32_t symbol_index;
    uint32_t module_index;
};

typedef struct dylinker_command dylinker_command, *Pdylinker_command;

struct dylinker_command {
    uint32_t cmd;
    uint32_t cmdsize;
    union lc_str name;
};

typedef struct dysymtab_command dysymtab_command, *Pdysymtab_command;

struct dysymtab_command {
    uint32_t cmd;
    uint32_t cmdsize;
    uint32_t ilocalsym;
    uint32_t nlocalsym;
    uint32_t iextdefsym;
    uint32_t nextdefsym;
    uint32_t iundefsym;
    uint32_t nundefsym;
    uint32_t tocoff;
    uint32_t ntoc;
    uint32_t modtaboff;
    uint32_t nmodtab;
    uint32_t extrefsymoff;
    uint32_t nextrefsyms;
    uint32_t indirectsymoff;
    uint32_t nindirectsyms;
    uint32_t extreloff;
    uint32_t nextrel;
    uint32_t locreloff;
    uint32_t nlocrel;
};

typedef struct encryption_info_command encryption_info_command, *Pencryption_info_command;

struct encryption_info_command {
    uint32_t cmd;
    uint32_t cmdsize;
    uint32_t cryptoff;
    uint32_t cryptsize;
    uint32_t cryptid;
};

typedef struct encryption_info_command_64 encryption_info_command_64, *Pencryption_info_command_64;

struct encryption_info_command_64 {
    uint32_t cmd;
    uint32_t cmdsize;
    uint32_t cryptoff;
    uint32_t cryptsize;
    uint32_t cryptid;
    uint32_t pad;
};

typedef struct entry_point_command entry_point_command, *Pentry_point_command;

struct entry_point_command {
    uint32_t cmd;
    uint32_t cmdsize;
    uint64_t entryoff;
    uint64_t stacksize;
};

typedef struct fvmfile_command fvmfile_command, *Pfvmfile_command;

struct fvmfile_command {
    uint32_t cmd;
    uint32_t cmdsize;
    union lc_str name;
    uint32_t header_addr;
};

typedef struct fvmlib fvmlib, *Pfvmlib;

struct fvmlib {
    union lc_str name;
    uint32_t minor_version;
    uint32_t header_addr;
};

typedef struct fvmlib_command fvmlib_command, *Pfvmlib_command;

struct fvmlib_command {
    uint32_t cmd;
    uint32_t cmdsize;
    struct fvmlib fvmlib;
};

typedef struct ident_command ident_command, *Pident_command;

struct ident_command {
    uint32_t cmd;
    uint32_t cmdsize;
};

typedef struct linkedit_data_command linkedit_data_command, *Plinkedit_data_command;

struct linkedit_data_command {
    uint32_t cmd;
    uint32_t cmdsize;
    uint32_t dataoff;
    uint32_t datasize;
};

typedef struct linker_option_command linker_option_command, *Plinker_option_command;

struct linker_option_command {
    uint32_t cmd;
    uint32_t cmdsize;
    uint32_t count;
};

typedef struct load_command load_command, *Pload_command;

struct load_command {
    uint32_t cmd;
    uint32_t cmdsize;
};

typedef struct mach_header_64 mach_header_64, *Pmach_header_64;

struct mach_header_64 {
    uint32_t magic;
    cpu_type_t cputype;
    cpu_subtype_t cpusubtype;
    uint32_t filetype;
    uint32_t ncmds;
    uint32_t sizeofcmds;
    uint32_t flags;
    uint32_t reserved;
};

typedef struct prebind_cksum_command prebind_cksum_command, *Pprebind_cksum_command;

struct prebind_cksum_command {
    uint32_t cmd;
    uint32_t cmdsize;
    uint32_t cksum;
};

typedef struct prebound_dylib_command prebound_dylib_command, *Pprebound_dylib_command;

struct prebound_dylib_command {
    uint32_t cmd;
    uint32_t cmdsize;
    union lc_str name;
    uint32_t nmodules;
    union lc_str linked_modules;
};

typedef struct routines_command routines_command, *Proutines_command;

struct routines_command {
    uint32_t cmd;
    uint32_t cmdsize;
    uint32_t init_address;
    uint32_t init_module;
    uint32_t reserved1;
    uint32_t reserved2;
    uint32_t reserved3;
    uint32_t reserved4;
    uint32_t reserved5;
    uint32_t reserved6;
};

typedef struct routines_command_64 routines_command_64, *Proutines_command_64;

struct routines_command_64 {
    uint32_t cmd;
    uint32_t cmdsize;
    uint64_t init_address;
    uint64_t init_module;
    uint64_t reserved1;
    uint64_t reserved2;
    uint64_t reserved3;
    uint64_t reserved4;
    uint64_t reserved5;
    uint64_t reserved6;
};

typedef struct rpath_command rpath_command, *Prpath_command;

struct rpath_command {
    uint32_t cmd;
    uint32_t cmdsize;
    union lc_str path;
};

typedef struct section section, *Psection;

struct section {
    char sectname[16];
    char segname[16];
    uint32_t addr;
    uint32_t size;
    uint32_t offset;
    uint32_t align;
    uint32_t reloff;
    uint32_t nreloc;
    uint32_t flags;
    uint32_t reserved1;
    uint32_t reserved2;
};

typedef struct section_64 section_64, *Psection_64;

struct section_64 {
    char sectname[16];
    char segname[16];
    uint64_t addr;
    uint64_t size;
    uint32_t offset;
    uint32_t align;
    uint32_t reloff;
    uint32_t nreloc;
    uint32_t flags;
    uint32_t reserved1;
    uint32_t reserved2;
    uint32_t reserved3;
};

typedef struct segment_command segment_command, *Psegment_command;

struct segment_command {
    uint32_t cmd;
    uint32_t cmdsize;
    char segname[16];
    uint32_t vmaddr;
    uint32_t vmsize;
    uint32_t fileoff;
    uint32_t filesize;
    vm_prot_t maxprot;
    vm_prot_t initprot;
    uint32_t nsects;
    uint32_t flags;
};

typedef struct segment_command_64 segment_command_64, *Psegment_command_64;

struct segment_command_64 {
    uint32_t cmd;
    uint32_t cmdsize;
    char segname[16];
    uint64_t vmaddr;
    uint64_t vmsize;
    uint64_t fileoff;
    uint64_t filesize;
    vm_prot_t maxprot;
    vm_prot_t initprot;
    uint32_t nsects;
    uint32_t flags;
};

typedef struct source_version_command source_version_command, *Psource_version_command;

struct source_version_command {
    uint32_t cmd;
    uint32_t cmdsize;
    uint64_t version;
};

typedef struct sub_client_command sub_client_command, *Psub_client_command;

struct sub_client_command {
    uint32_t cmd;
    uint32_t cmdsize;
    union lc_str client;
};

typedef struct sub_framework_command sub_framework_command, *Psub_framework_command;

struct sub_framework_command {
    uint32_t cmd;
    uint32_t cmdsize;
    union lc_str umbrella;
};

typedef struct sub_library_command sub_library_command, *Psub_library_command;

struct sub_library_command {
    uint32_t cmd;
    uint32_t cmdsize;
    union lc_str sub_library;
};

typedef struct sub_umbrella_command sub_umbrella_command, *Psub_umbrella_command;

struct sub_umbrella_command {
    uint32_t cmd;
    uint32_t cmdsize;
    union lc_str sub_umbrella;
};

typedef struct symseg_command symseg_command, *Psymseg_command;

struct symseg_command {
    uint32_t cmd;
    uint32_t cmdsize;
    uint32_t offset;
    uint32_t size;
};

typedef struct symtab_command symtab_command, *Psymtab_command;

struct symtab_command {
    uint32_t cmd;
    uint32_t cmdsize;
    uint32_t symoff;
    uint32_t nsyms;
    uint32_t stroff;
    uint32_t strsize;
};

typedef struct thread_command thread_command, *Pthread_command;

struct thread_command {
    uint32_t cmd;
    uint32_t cmdsize;
};

typedef struct tlv_descriptor tlv_descriptor, *Ptlv_descriptor;

struct tlv_descriptor {
    void * (* thunk)(struct tlv_descriptor *);
    ulong key;
    ulong offset;
};

typedef struct twolevel_hint twolevel_hint, *Ptwolevel_hint;

struct twolevel_hint {
    union anon__struct_2212_bitfield_1 field_0x0;
};

typedef struct twolevel_hints_command twolevel_hints_command, *Ptwolevel_hints_command;

struct twolevel_hints_command {
    uint32_t cmd;
    uint32_t cmdsize;
    uint32_t offset;
    uint32_t nhints;
};

typedef struct uuid_command uuid_command, *Puuid_command;

struct uuid_command {
    uint32_t cmd;
    uint32_t cmdsize;
    uint8_t uuid[16];
};

typedef struct version_min_command version_min_command, *Pversion_min_command;

struct version_min_command {
    uint32_t cmd;
    uint32_t cmdsize;
    uint32_t version;
    uint32_t sdk;
};

typedef struct krb5plugin_service_locate_ftable krb5plugin_service_locate_ftable, *Pkrb5plugin_service_locate_ftable;

typedef enum locate_service_type {
    locate_service_kadmin=3,
    locate_service_kdc=1,
    locate_service_kpasswd=5,
    locate_service_krb524=4,
    locate_service_master_kdc=2
} locate_service_type;

struct krb5plugin_service_locate_ftable {
    int minor_version;
    krb5_error_code (* init)(krb5_context, void * *);
    void (* fini)(void *);
    krb5_error_code (* lookup)(void *, enum locate_service_type, char *, int, int, int (* )(void *, int, struct sockaddr *), void *);
};

#define lock_set_MSG_COUNT 6

typedef struct __Reply__lock_acquire_t __Reply__lock_acquire_t, *P__Reply__lock_acquire_t;

struct __Reply__lock_acquire_t {
    struct mach_msg_header_t Head;
    struct NDR_record_t NDR;
    kern_return_t RetCode;
};

typedef struct __Reply__lock_handoff_accept_t __Reply__lock_handoff_accept_t, *P__Reply__lock_handoff_accept_t;

struct __Reply__lock_handoff_accept_t {
    struct mach_msg_header_t Head;
    struct NDR_record_t NDR;
    kern_return_t RetCode;
};

typedef struct __Reply__lock_handoff_t __Reply__lock_handoff_t, *P__Reply__lock_handoff_t;

struct __Reply__lock_handoff_t {
    struct mach_msg_header_t Head;
    struct NDR_record_t NDR;
    kern_return_t RetCode;
};

typedef struct __Reply__lock_make_stable_t __Reply__lock_make_stable_t, *P__Reply__lock_make_stable_t;

struct __Reply__lock_make_stable_t {
    struct mach_msg_header_t Head;
    struct NDR_record_t NDR;
    kern_return_t RetCode;
};

typedef struct __Reply__lock_release_t __Reply__lock_release_t, *P__Reply__lock_release_t;

struct __Reply__lock_release_t {
    struct mach_msg_header_t Head;
    struct NDR_record_t NDR;
    kern_return_t RetCode;
};

typedef struct __Reply__lock_try_t __Reply__lock_try_t, *P__Reply__lock_try_t;

struct __Reply__lock_try_t {
    struct mach_msg_header_t Head;
    struct NDR_record_t NDR;
    kern_return_t RetCode;
};

typedef union __ReplyUnion__lock_set_subsystem __ReplyUnion__lock_set_subsystem, *P__ReplyUnion__lock_set_subsystem;

union __ReplyUnion__lock_set_subsystem {
    struct __Reply__lock_acquire_t Reply_lock_acquire;
    struct __Reply__lock_release_t Reply_lock_release;
    struct __Reply__lock_try_t Reply_lock_try;
    struct __Reply__lock_make_stable_t Reply_lock_make_stable;
    struct __Reply__lock_handoff_t Reply_lock_handoff;
    struct __Reply__lock_handoff_accept_t Reply_lock_handoff_accept;
};

typedef struct __Request__lock_acquire_t __Request__lock_acquire_t, *P__Request__lock_acquire_t;

struct __Request__lock_acquire_t {
    struct mach_msg_header_t Head;
    struct NDR_record_t NDR;
    int lock_id;
};

typedef struct __Request__lock_handoff_accept_t __Request__lock_handoff_accept_t, *P__Request__lock_handoff_accept_t;

struct __Request__lock_handoff_accept_t {
    struct mach_msg_header_t Head;
    struct NDR_record_t NDR;
    int lock_id;
};

typedef struct __Request__lock_handoff_t __Request__lock_handoff_t, *P__Request__lock_handoff_t;

struct __Request__lock_handoff_t {
    struct mach_msg_header_t Head;
    struct NDR_record_t NDR;
    int lock_id;
};

typedef struct __Request__lock_make_stable_t __Request__lock_make_stable_t, *P__Request__lock_make_stable_t;

struct __Request__lock_make_stable_t {
    struct mach_msg_header_t Head;
    struct NDR_record_t NDR;
    int lock_id;
};

typedef struct __Request__lock_release_t __Request__lock_release_t, *P__Request__lock_release_t;

struct __Request__lock_release_t {
    struct mach_msg_header_t Head;
    struct NDR_record_t NDR;
    int lock_id;
};

typedef struct __Request__lock_try_t __Request__lock_try_t, *P__Request__lock_try_t;

struct __Request__lock_try_t {
    struct mach_msg_header_t Head;
    struct NDR_record_t NDR;
    int lock_id;
};

typedef union __RequestUnion__lock_set_subsystem __RequestUnion__lock_set_subsystem, *P__RequestUnion__lock_set_subsystem;

union __RequestUnion__lock_set_subsystem {
    struct __Request__lock_acquire_t Request_lock_acquire;
    struct __Request__lock_release_t Request_lock_release;
    struct __Request__lock_try_t Request_lock_try;
    struct __Request__lock_make_stable_t Request_lock_make_stable;
    struct __Request__lock_handoff_t Request_lock_handoff;
    struct __Request__lock_handoff_accept_t Request_lock_handoff_accept;
};

#define MAXDEPTH 50

typedef struct _struct_4141 _struct_4141, *P_struct_4141;

typedef struct lockf lockf, *Plockf;

typedef struct vnode vnode, *Pvnode;

typedef struct locklist locklist, *Plocklist;

struct _struct_4141 {
    struct lockf * tqe_next;
    struct lockf * * tqe_prev;
};

struct vnode {
};

struct locklist {
    struct lockf * tqh_first;
    struct lockf * * tqh_last;
};

struct lockf {
    short lf_flags;
    short lf_type;
    off_t lf_start;
    off_t lf_end;
    caddr_t lf_id;
    struct lockf * * lf_head;
    struct vnode * lf_vnode;
    struct lockf * lf_next;
    struct locklist lf_blkhd;
    struct _struct_4141 lf_block;
};

#define LOCKGROUP_MAX_NAME 64

typedef struct lockgroup_info lockgroup_info, *Plockgroup_info;

struct lockgroup_info {
    char lockgroup_name[64];
    uint64_t lockgroup_attr;
    uint64_t lock_spin_cnt;
    uint64_t lock_spin_util_cnt;
    uint64_t lock_spin_held_cnt;
    uint64_t lock_spin_miss_cnt;
    uint64_t lock_spin_held_max;
    uint64_t lock_spin_held_cum;
    uint64_t lock_mtx_cnt;
    uint64_t lock_mtx_util_cnt;
    uint64_t lock_mtx_held_cnt;
    uint64_t lock_mtx_miss_cnt;
    uint64_t lock_mtx_wait_cnt;
    uint64_t lock_mtx_held_max;
    uint64_t lock_mtx_held_cum;
    uint64_t lock_mtx_wait_max;
    uint64_t lock_mtx_wait_cum;
    uint64_t lock_rw_cnt;
    uint64_t lock_rw_util_cnt;
    uint64_t lock_rw_held_cnt;
    uint64_t lock_rw_miss_cnt;
    uint64_t lock_rw_wait_cnt;
    uint64_t lock_rw_held_max;
    uint64_t lock_rw_held_cum;
    uint64_t lock_rw_wait_max;
    uint64_t lock_rw_wait_cum;
};

typedef struct lockgroup_info lockgroup_info_t;

typedef lockgroup_info_t * lockgroup_info_array_t;

#define LS_PRINT_ALWAYS 0

#define LS_PRINT_LOG 3

#define LS_PRINT_NEVER 5

typedef struct debug_t debug_t, *Pdebug_t;

typedef struct debug_t * debug_ptr_t;

struct debug_t {
    int print_level;
    int ipc_in;
    int ipc_out;
    int tracing;
    int vmtp;
    int netname;
    int deltat;
    int tcp;
    int mem;
};

typedef struct log_rec_t log_rec_t, *Plog_rec_t;

typedef struct log_rec_t * log_ptr_t;

struct log_rec_t {
    long code;
    long thread;
    long a1;
    long a2;
    long a3;
    long a4;
    long a5;
    long a6;
};

typedef int * mem_bucket_ptr_t;

typedef char * mem_class_ptr_t;

typedef char * mem_nam_ptr_t;

typedef struct mutex mutex, *Pmutex;

struct mutex {
};

typedef struct param_t param_t, *Pparam_t;

typedef struct param_t * param_ptr_t;

struct param_t {
    int srr_max_tries;
    int srr_retry_sec;
    int srr_retry_usec;
    int deltat_max_tries;
    int deltat_retry_sec;
    int deltat_retry_usec;
    int deltat_msg_life;
    int pc_checkup_interval;
    int crypt_algorithm;
    int transport_default;
    int conf_network;
    int conf_netport;
    int timer_quantum;
    int tcp_conn_steady;
    int tcp_conn_opening;
    int tcp_conn_max;
    int compat;
    int syslog;
    int old_nmmonitor;
};

typedef struct port_stat_t port_stat_t, *Pport_stat_t;

typedef struct port_stat_t * port_stat_ptr_t;

struct port_stat_t {
    u_int port_id;
    u_int alive;
    u_int nport_id_high;
    u_int nport_id_low;
    u_int nport_receiver;
    u_int nport_owner;
    u_int messages_sent;
    u_int messages_rcvd;
    u_int send_rights_sent;
    u_int send_rights_rcvd_sender;
    u_int send_rights_rcvd_recown;
    u_int rcv_rights_xferd;
    u_int own_rights_xferd;
    u_int all_rights_xferd;
    u_int tokens_sent;
    u_int tokens_requested;
    u_int xfer_hints_sent;
    u_int xfer_hints_rcvd;
};

typedef struct stat_t stat_t, *Pstat_t;

typedef struct stat_t * stat_ptr_t;

struct stat_t {
    int datagram_pkts_sent;
    int datagram_pkts_rcvd;
    int srr_requests_sent;
    int srr_bcasts_sent;
    int srr_requests_rcvd;
    int srr_bcasts_rcvd;
    int srr_replies_sent;
    int srr_replies_rcvd;
    int srr_retries_sent;
    int srr_retries_rcvd;
    int srr_cfailures_sent;
    int srr_cfailures_rcvd;
    int deltat_dpkts_sent;
    int deltat_acks_rcvd;
    int deltat_dpkts_rcvd;
    int deltat_acks_sent;
    int deltat_oldpkts_rcvd;
    int deltat_oospkts_rcvd;
    int deltat_retries_sent;
    int deltat_retries_rcvd;
    int deltat_cfailures_sent;
    int deltat_cfailures_rcvd;
    int deltat_aborts_sent;
    int deltat_aborts_rcvd;
    int vmtp_requests_sent;
    int vmtp_requests_rcvd;
    int vmtp_replies_sent;
    int vmtp_replies_rcvd;
    int ipc_in_messages;
    int ipc_out_messages;
    int ipc_unblocks_sent;
    int ipc_unblocks_rcvd;
    int pc_requests_sent;
    int pc_requests_rcvd;
    int pc_replies_rcvd;
    int pc_startups_rcvd;
    int nn_requests_sent;
    int nn_requests_rcvd;
    int nn_replies_rcvd;
    int po_ro_hints_sent;
    int po_ro_hints_rcvd;
    int po_token_requests_sent;
    int po_token_requests_rcvd;
    int po_token_replies_rcvd;
    int po_xfer_requests_sent;
    int po_xfer_requests_rcvd;
    int po_xfer_replies_rcvd;
    int po_deaths_sent;
    int po_deaths_rcvd;
    int ps_requests_sent;
    int ps_requests_rcvd;
    int ps_replies_rcvd;
    int ps_auth_requests_sent;
    int ps_auth_requests_rcvd;
    int ps_auth_replies_rcvd;
    int mallocs_or_vm_allocates;
    int mem_allocs;
    int mem_deallocs;
    int mem_allocobjs;
    int mem_deallocobjs;
    int pkts_encrypted;
    int pkts_decrypted;
    int vmtp_segs_encrypted;
    int vmtp_segs_decrypted;
    int tcp_requests_sent;
    int tcp_replies_sent;
    int tcp_requests_rcvd;
    int tcp_replies_rcvd;
    int tcp_send;
    int tcp_recv;
    int tcp_connect;
    int tcp_accept;
    int tcp_close;
};

#define MAC_ALL_ENFORCE 32767

#define MAC_FILE_ENFORCE 16

#define MAC_MACH_ENFORCE 4

#define MAC_MAX_LABEL_BUF_LEN 8192

#define MAC_MAX_LABEL_ELEMENT_DATA 4096

#define MAC_MAX_LABEL_ELEMENT_NAME 32

#define MAC_MAX_MANAGED_NAMESPACES 4

#define MAC_MAX_POLICY_NAME 32

#define MAC_MBUF_ENFORCE 512

#define MAC_NET_ENFORCE 256

#define MAC_PIPE_ENFORCE 64

#define MAC_POSIXSEM_ENFORCE 1024

#define MAC_POSIXSHM_ENFORCE 2048

#define MAC_PROC_CHECK_HIBERNATE 2

#define MAC_PROC_CHECK_PIDBIND 4

#define MAC_PROC_CHECK_RESUME 1

#define MAC_PROC_CHECK_SHUTDOWN_SOCKETS 3

#define MAC_PROC_CHECK_SUSPEND 0

#define MAC_PROC_ENFORCE 2

#define MAC_SOCKET_ENFORCE 32

#define MAC_SYSTEM_ENFORCE 1

#define MAC_SYSVMSG_ENFORCE 4096

#define MAC_SYSVSEM_ENFORCE 8192

#define MAC_SYSVSHM_ENFORCE 16384

#define MAC_VM_ENFORCE 8

#define MAC_VNODE_ENFORCE 128

typedef struct mac mac, *Pmac;

struct mac {
    size_t m_buflen;
    char * m_string;
};

typedef struct mac * mac_t;

typedef char symtab_name_t[32];

#define _MACH_ERROR_ 1

#define mach_host_MSG_COUNT 22

typedef struct __Reply___host_page_size_t __Reply___host_page_size_t, *P__Reply___host_page_size_t;

struct __Reply___host_page_size_t {
    struct mach_msg_header_t Head;
    struct NDR_record_t NDR;
    kern_return_t RetCode;
    vm_size_t out_page_size;
};

typedef struct __Reply__host_get_clock_service_t __Reply__host_get_clock_service_t, *P__Reply__host_get_clock_service_t;

struct __Reply__host_get_clock_service_t {
    struct mach_msg_header_t Head;
    struct mach_msg_body_t msgh_body;
    struct mach_msg_port_descriptor_t clock_serv;
};

typedef struct __Reply__host_get_io_master_t __Reply__host_get_io_master_t, *P__Reply__host_get_io_master_t;

struct __Reply__host_get_io_master_t {
    struct mach_msg_header_t Head;
    struct mach_msg_body_t msgh_body;
    struct mach_msg_port_descriptor_t io_master;
};

typedef struct __Reply__host_info_t __Reply__host_info_t, *P__Reply__host_info_t;

struct __Reply__host_info_t {
    struct mach_msg_header_t Head;
    struct NDR_record_t NDR;
    kern_return_t RetCode;
    mach_msg_type_number_t host_info_outCnt;
    integer_t host_info_out[68];
};

typedef struct __Reply__host_kernel_version_t __Reply__host_kernel_version_t, *P__Reply__host_kernel_version_t;

struct __Reply__host_kernel_version_t {
    struct mach_msg_header_t Head;
    struct NDR_record_t NDR;
    kern_return_t RetCode;
    mach_msg_type_number_t kernel_versionOffset;
    mach_msg_type_number_t kernel_versionCnt;
    char kernel_version[512];
};

typedef struct __Reply__host_lockgroup_info_t __Reply__host_lockgroup_info_t, *P__Reply__host_lockgroup_info_t;

struct __Reply__host_lockgroup_info_t {
    struct mach_msg_header_t Head;
    struct mach_msg_body_t msgh_body;
    struct mach_msg_ool_descriptor_t lockgroup_info;
    struct NDR_record_t NDR;
    mach_msg_type_number_t lockgroup_infoCnt;
};

typedef struct __Reply__host_processor_info_t __Reply__host_processor_info_t, *P__Reply__host_processor_info_t;

struct __Reply__host_processor_info_t {
    struct mach_msg_header_t Head;
    struct mach_msg_body_t msgh_body;
    struct mach_msg_ool_descriptor_t out_processor_info;
    struct NDR_record_t NDR;
    natural_t out_processor_count;
    mach_msg_type_number_t out_processor_infoCnt;
};

typedef struct __Reply__host_request_notification_t __Reply__host_request_notification_t, *P__Reply__host_request_notification_t;

struct __Reply__host_request_notification_t {
    struct mach_msg_header_t Head;
    struct NDR_record_t NDR;
    kern_return_t RetCode;
};

typedef struct __Reply__host_statistics64_t __Reply__host_statistics64_t, *P__Reply__host_statistics64_t;

struct __Reply__host_statistics64_t {
    struct mach_msg_header_t Head;
    struct NDR_record_t NDR;
    kern_return_t RetCode;
    mach_msg_type_number_t host_info64_outCnt;
    integer_t host_info64_out[256];
};

typedef struct __Reply__host_statistics_t __Reply__host_statistics_t, *P__Reply__host_statistics_t;

struct __Reply__host_statistics_t {
    struct mach_msg_header_t Head;
    struct NDR_record_t NDR;
    kern_return_t RetCode;
    mach_msg_type_number_t host_info_outCnt;
    integer_t host_info_out[68];
};

typedef struct __Reply__host_virtual_physical_table_info_t __Reply__host_virtual_physical_table_info_t, *P__Reply__host_virtual_physical_table_info_t;

struct __Reply__host_virtual_physical_table_info_t {
    struct mach_msg_header_t Head;
    struct mach_msg_body_t msgh_body;
    struct mach_msg_ool_descriptor_t info;
    struct NDR_record_t NDR;
    mach_msg_type_number_t infoCnt;
};

typedef struct __Reply__host_zone_info_t __Reply__host_zone_info_t, *P__Reply__host_zone_info_t;

struct __Reply__host_zone_info_t {
    struct mach_msg_header_t Head;
    struct mach_msg_body_t msgh_body;
    struct mach_msg_ool_descriptor_t names;
    struct mach_msg_ool_descriptor_t info;
    struct NDR_record_t NDR;
    mach_msg_type_number_t namesCnt;
    mach_msg_type_number_t infoCnt;
};

typedef struct __Reply__kmod_get_info_t __Reply__kmod_get_info_t, *P__Reply__kmod_get_info_t;

struct __Reply__kmod_get_info_t {
    struct mach_msg_header_t Head;
    struct mach_msg_body_t msgh_body;
    struct mach_msg_ool_descriptor_t modules;
    struct NDR_record_t NDR;
    mach_msg_type_number_t modulesCnt;
};

typedef struct __Reply__mach_memory_object_memory_entry_64_t __Reply__mach_memory_object_memory_entry_64_t, *P__Reply__mach_memory_object_memory_entry_64_t;

struct __Reply__mach_memory_object_memory_entry_64_t {
    struct mach_msg_header_t Head;
    struct mach_msg_body_t msgh_body;
    struct mach_msg_port_descriptor_t entry_handle;
};

typedef struct __Reply__mach_memory_object_memory_entry_t __Reply__mach_memory_object_memory_entry_t, *P__Reply__mach_memory_object_memory_entry_t;

struct __Reply__mach_memory_object_memory_entry_t {
    struct mach_msg_header_t Head;
    struct mach_msg_body_t msgh_body;
    struct mach_msg_port_descriptor_t entry_handle;
};

typedef struct __Reply__mach_zone_info_t __Reply__mach_zone_info_t, *P__Reply__mach_zone_info_t;

struct __Reply__mach_zone_info_t {
    struct mach_msg_header_t Head;
    struct mach_msg_body_t msgh_body;
    struct mach_msg_ool_descriptor_t names;
    struct mach_msg_ool_descriptor_t info;
    struct NDR_record_t NDR;
    mach_msg_type_number_t namesCnt;
    mach_msg_type_number_t infoCnt;
};

typedef struct __Reply__processor_set_create_t __Reply__processor_set_create_t, *P__Reply__processor_set_create_t;

struct __Reply__processor_set_create_t {
    struct mach_msg_header_t Head;
    struct mach_msg_body_t msgh_body;
    struct mach_msg_port_descriptor_t new_set;
    struct mach_msg_port_descriptor_t new_name;
};

typedef struct __Reply__processor_set_default_t __Reply__processor_set_default_t, *P__Reply__processor_set_default_t;

struct __Reply__processor_set_default_t {
    struct mach_msg_header_t Head;
    struct mach_msg_body_t msgh_body;
    struct mach_msg_port_descriptor_t default_set;
};

typedef union __ReplyUnion__mach_host_subsystem __ReplyUnion__mach_host_subsystem, *P__ReplyUnion__mach_host_subsystem;

union __ReplyUnion__mach_host_subsystem {
    struct __Reply__host_info_t Reply_host_info;
    struct __Reply__host_kernel_version_t Reply_host_kernel_version;
    struct __Reply___host_page_size_t Reply__host_page_size;
    struct __Reply__mach_memory_object_memory_entry_t Reply_mach_memory_object_memory_entry;
    struct __Reply__host_processor_info_t Reply_host_processor_info;
    struct __Reply__host_get_io_master_t Reply_host_get_io_master;
    struct __Reply__host_get_clock_service_t Reply_host_get_clock_service;
    struct __Reply__kmod_get_info_t Reply_kmod_get_info;
    struct __Reply__host_zone_info_t Reply_host_zone_info;
    struct __Reply__host_virtual_physical_table_info_t Reply_host_virtual_physical_table_info;
    struct __Reply__processor_set_default_t Reply_processor_set_default;
    struct __Reply__processor_set_create_t Reply_processor_set_create;
    struct __Reply__mach_memory_object_memory_entry_64_t Reply_mach_memory_object_memory_entry_64;
    struct __Reply__host_statistics_t Reply_host_statistics;
    struct __Reply__host_request_notification_t Reply_host_request_notification;
    struct __Reply__host_lockgroup_info_t Reply_host_lockgroup_info;
    struct __Reply__host_statistics64_t Reply_host_statistics64;
    struct __Reply__mach_zone_info_t Reply_mach_zone_info;
};

typedef struct __Request___host_page_size_t __Request___host_page_size_t, *P__Request___host_page_size_t;

struct __Request___host_page_size_t {
    struct mach_msg_header_t Head;
};

typedef struct __Request__host_get_clock_service_t __Request__host_get_clock_service_t, *P__Request__host_get_clock_service_t;

struct __Request__host_get_clock_service_t {
    struct mach_msg_header_t Head;
    struct NDR_record_t NDR;
    clock_id_t clock_id;
};

typedef struct __Request__host_get_io_master_t __Request__host_get_io_master_t, *P__Request__host_get_io_master_t;

struct __Request__host_get_io_master_t {
    struct mach_msg_header_t Head;
};

typedef struct __Request__host_info_t __Request__host_info_t, *P__Request__host_info_t;

struct __Request__host_info_t {
    struct mach_msg_header_t Head;
    struct NDR_record_t NDR;
    host_flavor_t flavor;
    mach_msg_type_number_t host_info_outCnt;
};

typedef struct __Request__host_kernel_version_t __Request__host_kernel_version_t, *P__Request__host_kernel_version_t;

struct __Request__host_kernel_version_t {
    struct mach_msg_header_t Head;
};

typedef struct __Request__host_lockgroup_info_t __Request__host_lockgroup_info_t, *P__Request__host_lockgroup_info_t;

struct __Request__host_lockgroup_info_t {
    struct mach_msg_header_t Head;
};

typedef struct __Request__host_processor_info_t __Request__host_processor_info_t, *P__Request__host_processor_info_t;

typedef int processor_flavor_t;

struct __Request__host_processor_info_t {
    struct mach_msg_header_t Head;
    struct NDR_record_t NDR;
    processor_flavor_t flavor;
};

typedef struct __Request__host_request_notification_t __Request__host_request_notification_t, *P__Request__host_request_notification_t;

struct __Request__host_request_notification_t {
    struct mach_msg_header_t Head;
    struct mach_msg_body_t msgh_body;
    struct mach_msg_port_descriptor_t notify_port;
    struct NDR_record_t NDR;
    host_flavor_t notify_type;
};

typedef struct __Request__host_statistics64_t __Request__host_statistics64_t, *P__Request__host_statistics64_t;

struct __Request__host_statistics64_t {
    struct mach_msg_header_t Head;
    struct NDR_record_t NDR;
    host_flavor_t flavor;
    mach_msg_type_number_t host_info64_outCnt;
};

typedef struct __Request__host_statistics_t __Request__host_statistics_t, *P__Request__host_statistics_t;

struct __Request__host_statistics_t {
    struct mach_msg_header_t Head;
    struct NDR_record_t NDR;
    host_flavor_t flavor;
    mach_msg_type_number_t host_info_outCnt;
};

typedef struct __Request__host_virtual_physical_table_info_t __Request__host_virtual_physical_table_info_t, *P__Request__host_virtual_physical_table_info_t;

struct __Request__host_virtual_physical_table_info_t {
    struct mach_msg_header_t Head;
};

typedef struct __Request__host_zone_info_t __Request__host_zone_info_t, *P__Request__host_zone_info_t;

struct __Request__host_zone_info_t {
    struct mach_msg_header_t Head;
};

typedef struct __Request__kmod_get_info_t __Request__kmod_get_info_t, *P__Request__kmod_get_info_t;

struct __Request__kmod_get_info_t {
    struct mach_msg_header_t Head;
};

typedef struct __Request__mach_memory_object_memory_entry_64_t __Request__mach_memory_object_memory_entry_64_t, *P__Request__mach_memory_object_memory_entry_64_t;

struct __Request__mach_memory_object_memory_entry_64_t {
    struct mach_msg_header_t Head;
    struct mach_msg_body_t msgh_body;
    struct mach_msg_port_descriptor_t pager;
    struct NDR_record_t NDR;
    boolean_t internal;
    memory_object_size_t size;
    vm_prot_t permission;
};

typedef struct __Request__mach_memory_object_memory_entry_t __Request__mach_memory_object_memory_entry_t, *P__Request__mach_memory_object_memory_entry_t;

struct __Request__mach_memory_object_memory_entry_t {
    struct mach_msg_header_t Head;
    struct mach_msg_body_t msgh_body;
    struct mach_msg_port_descriptor_t pager;
    struct NDR_record_t NDR;
    boolean_t internal;
    vm_size_t size;
    vm_prot_t permission;
};

typedef struct __Request__mach_zone_info_t __Request__mach_zone_info_t, *P__Request__mach_zone_info_t;

struct __Request__mach_zone_info_t {
    struct mach_msg_header_t Head;
};

typedef struct __Request__processor_set_create_t __Request__processor_set_create_t, *P__Request__processor_set_create_t;

struct __Request__processor_set_create_t {
    struct mach_msg_header_t Head;
};

typedef struct __Request__processor_set_default_t __Request__processor_set_default_t, *P__Request__processor_set_default_t;

struct __Request__processor_set_default_t {
    struct mach_msg_header_t Head;
};

typedef union __RequestUnion__mach_host_subsystem __RequestUnion__mach_host_subsystem, *P__RequestUnion__mach_host_subsystem;

union __RequestUnion__mach_host_subsystem {
    struct __Request__host_info_t Request_host_info;
    struct __Request__host_kernel_version_t Request_host_kernel_version;
    struct __Request___host_page_size_t Request__host_page_size;
    struct __Request__mach_memory_object_memory_entry_t Request_mach_memory_object_memory_entry;
    struct __Request__host_processor_info_t Request_host_processor_info;
    struct __Request__host_get_io_master_t Request_host_get_io_master;
    struct __Request__host_get_clock_service_t Request_host_get_clock_service;
    struct __Request__kmod_get_info_t Request_kmod_get_info;
    struct __Request__host_zone_info_t Request_host_zone_info;
    struct __Request__host_virtual_physical_table_info_t Request_host_virtual_physical_table_info;
    struct __Request__processor_set_default_t Request_processor_set_default;
    struct __Request__processor_set_create_t Request_processor_set_create;
    struct __Request__mach_memory_object_memory_entry_64_t Request_mach_memory_object_memory_entry_64;
    struct __Request__host_statistics_t Request_host_statistics;
    struct __Request__host_request_notification_t Request_host_request_notification;
    struct __Request__host_lockgroup_info_t Request_host_lockgroup_info;
    struct __Request__host_statistics64_t Request_host_statistics64;
    struct __Request__mach_zone_info_t Request_mach_zone_info;
};

#define _MACH_INIT_ 1

#define ENVIRONMENT_SLOT 1

#define MACH_PORTS_SLOTS_USED 3

#define NAME_SERVER_SLOT 0

#define SERVICE_SLOT 2

#define mach_port_MSG_COUNT 35

typedef struct __Reply__mach_port_allocate_full_t __Reply__mach_port_allocate_full_t, *P__Reply__mach_port_allocate_full_t;

typedef struct mach_port_qos mach_port_qos, *Pmach_port_qos;

typedef struct mach_port_qos mach_port_qos_t;

typedef union anon__struct_289_bitfield_1 anon__struct_289_bitfield_1, *Panon__struct_289_bitfield_1;

typedef union anon__struct_289_bitfield_2 anon__struct_289_bitfield_2, *Panon__struct_289_bitfield_2;

union anon__struct_289_bitfield_2 {
    boolean_t pad1:30; /* : bits 0-29 */
};

union anon__struct_289_bitfield_1 {
    uint name:1; /* : bits 0 */
    uint prealloc:1; /* : bits 1 */
};

struct mach_port_qos {
    union anon__struct_289_bitfield_1 field_0x0;
    union anon__struct_289_bitfield_2 field_0x4;
    natural_t len;
};

struct __Reply__mach_port_allocate_full_t {
    struct mach_msg_header_t Head;
    struct NDR_record_t NDR;
    kern_return_t RetCode;
    mach_port_qos_t qos;
    mach_port_name_t name;
};

typedef struct __Reply__mach_port_allocate_name_t __Reply__mach_port_allocate_name_t, *P__Reply__mach_port_allocate_name_t;

struct __Reply__mach_port_allocate_name_t {
    struct mach_msg_header_t Head;
    struct NDR_record_t NDR;
    kern_return_t RetCode;
};

typedef struct __Reply__mach_port_allocate_qos_t __Reply__mach_port_allocate_qos_t, *P__Reply__mach_port_allocate_qos_t;

struct __Reply__mach_port_allocate_qos_t {
    struct mach_msg_header_t Head;
    struct NDR_record_t NDR;
    kern_return_t RetCode;
    mach_port_qos_t qos;
    mach_port_name_t name;
};

typedef struct __Reply__mach_port_allocate_t __Reply__mach_port_allocate_t, *P__Reply__mach_port_allocate_t;

struct __Reply__mach_port_allocate_t {
    struct mach_msg_header_t Head;
    struct NDR_record_t NDR;
    kern_return_t RetCode;
    mach_port_name_t name;
};

typedef struct __Reply__mach_port_construct_t __Reply__mach_port_construct_t, *P__Reply__mach_port_construct_t;

struct __Reply__mach_port_construct_t {
    struct mach_msg_header_t Head;
    struct NDR_record_t NDR;
    kern_return_t RetCode;
    mach_port_name_t name;
};

typedef struct __Reply__mach_port_deallocate_t __Reply__mach_port_deallocate_t, *P__Reply__mach_port_deallocate_t;

struct __Reply__mach_port_deallocate_t {
    struct mach_msg_header_t Head;
    struct NDR_record_t NDR;
    kern_return_t RetCode;
};

typedef struct __Reply__mach_port_destroy_t __Reply__mach_port_destroy_t, *P__Reply__mach_port_destroy_t;

struct __Reply__mach_port_destroy_t {
    struct mach_msg_header_t Head;
    struct NDR_record_t NDR;
    kern_return_t RetCode;
};

typedef struct __Reply__mach_port_destruct_t __Reply__mach_port_destruct_t, *P__Reply__mach_port_destruct_t;

struct __Reply__mach_port_destruct_t {
    struct mach_msg_header_t Head;
    struct NDR_record_t NDR;
    kern_return_t RetCode;
};

typedef struct __Reply__mach_port_dnrequest_info_t __Reply__mach_port_dnrequest_info_t, *P__Reply__mach_port_dnrequest_info_t;

struct __Reply__mach_port_dnrequest_info_t {
    struct mach_msg_header_t Head;
    struct NDR_record_t NDR;
    kern_return_t RetCode;
    uint dnr_total;
    uint dnr_used;
};

typedef struct __Reply__mach_port_extract_member_t __Reply__mach_port_extract_member_t, *P__Reply__mach_port_extract_member_t;

struct __Reply__mach_port_extract_member_t {
    struct mach_msg_header_t Head;
    struct NDR_record_t NDR;
    kern_return_t RetCode;
};

typedef struct __Reply__mach_port_extract_right_t __Reply__mach_port_extract_right_t, *P__Reply__mach_port_extract_right_t;

struct __Reply__mach_port_extract_right_t {
    struct mach_msg_header_t Head;
    struct mach_msg_body_t msgh_body;
    struct mach_msg_port_descriptor_t poly;
};

typedef struct __Reply__mach_port_get_attributes_t __Reply__mach_port_get_attributes_t, *P__Reply__mach_port_get_attributes_t;

struct __Reply__mach_port_get_attributes_t {
    struct mach_msg_header_t Head;
    struct NDR_record_t NDR;
    kern_return_t RetCode;
    mach_msg_type_number_t port_info_outCnt;
    integer_t port_info_out[17];
};

typedef struct __Reply__mach_port_get_context_t __Reply__mach_port_get_context_t, *P__Reply__mach_port_get_context_t;

typedef mach_vm_address_t mach_port_context_t;

struct __Reply__mach_port_get_context_t {
    struct mach_msg_header_t Head;
    struct NDR_record_t NDR;
    kern_return_t RetCode;
    mach_port_context_t context;
};

typedef struct __Reply__mach_port_get_refs_t __Reply__mach_port_get_refs_t, *P__Reply__mach_port_get_refs_t;

struct __Reply__mach_port_get_refs_t {
    struct mach_msg_header_t Head;
    struct NDR_record_t NDR;
    kern_return_t RetCode;
    mach_port_urefs_t refs;
};

typedef struct __Reply__mach_port_get_set_status_t __Reply__mach_port_get_set_status_t, *P__Reply__mach_port_get_set_status_t;

struct __Reply__mach_port_get_set_status_t {
    struct mach_msg_header_t Head;
    struct mach_msg_body_t msgh_body;
    struct mach_msg_ool_descriptor_t members;
    struct NDR_record_t NDR;
    mach_msg_type_number_t membersCnt;
};

typedef struct __Reply__mach_port_get_srights_t __Reply__mach_port_get_srights_t, *P__Reply__mach_port_get_srights_t;

typedef natural_t mach_port_rights_t;

struct __Reply__mach_port_get_srights_t {
    struct mach_msg_header_t Head;
    struct NDR_record_t NDR;
    kern_return_t RetCode;
    mach_port_rights_t srights;
};

typedef struct __Reply__mach_port_guard_t __Reply__mach_port_guard_t, *P__Reply__mach_port_guard_t;

struct __Reply__mach_port_guard_t {
    struct mach_msg_header_t Head;
    struct NDR_record_t NDR;
    kern_return_t RetCode;
};

typedef struct __Reply__mach_port_insert_member_t __Reply__mach_port_insert_member_t, *P__Reply__mach_port_insert_member_t;

struct __Reply__mach_port_insert_member_t {
    struct mach_msg_header_t Head;
    struct NDR_record_t NDR;
    kern_return_t RetCode;
};

typedef struct __Reply__mach_port_insert_right_t __Reply__mach_port_insert_right_t, *P__Reply__mach_port_insert_right_t;

struct __Reply__mach_port_insert_right_t {
    struct mach_msg_header_t Head;
    struct NDR_record_t NDR;
    kern_return_t RetCode;
};

typedef struct __Reply__mach_port_kernel_object_t __Reply__mach_port_kernel_object_t, *P__Reply__mach_port_kernel_object_t;

struct __Reply__mach_port_kernel_object_t {
    struct mach_msg_header_t Head;
    struct NDR_record_t NDR;
    kern_return_t RetCode;
    uint object_type;
    uint object_addr;
};

typedef struct __Reply__mach_port_kobject_t __Reply__mach_port_kobject_t, *P__Reply__mach_port_kobject_t;

struct __Reply__mach_port_kobject_t {
    struct mach_msg_header_t Head;
    struct NDR_record_t NDR;
    kern_return_t RetCode;
    natural_t object_type;
    mach_vm_address_t object_addr;
};

typedef struct __Reply__mach_port_mod_refs_t __Reply__mach_port_mod_refs_t, *P__Reply__mach_port_mod_refs_t;

struct __Reply__mach_port_mod_refs_t {
    struct mach_msg_header_t Head;
    struct NDR_record_t NDR;
    kern_return_t RetCode;
};

typedef struct __Reply__mach_port_move_member_t __Reply__mach_port_move_member_t, *P__Reply__mach_port_move_member_t;

struct __Reply__mach_port_move_member_t {
    struct mach_msg_header_t Head;
    struct NDR_record_t NDR;
    kern_return_t RetCode;
};

typedef struct __Reply__mach_port_names_t __Reply__mach_port_names_t, *P__Reply__mach_port_names_t;

struct __Reply__mach_port_names_t {
    struct mach_msg_header_t Head;
    struct mach_msg_body_t msgh_body;
    struct mach_msg_ool_descriptor_t names;
    struct mach_msg_ool_descriptor_t types;
    struct NDR_record_t NDR;
    mach_msg_type_number_t namesCnt;
    mach_msg_type_number_t typesCnt;
};

typedef struct __Reply__mach_port_peek_t __Reply__mach_port_peek_t, *P__Reply__mach_port_peek_t;

typedef natural_t mach_port_seqno_t;

struct __Reply__mach_port_peek_t {
    struct mach_msg_header_t Head;
    struct NDR_record_t NDR;
    kern_return_t RetCode;
    mach_port_seqno_t request_seqnop;
    mach_msg_size_t msg_sizep;
    mach_msg_id_t msg_idp;
    mach_msg_type_number_t trailer_infopCnt;
    char trailer_infop[68];
};

typedef struct __Reply__mach_port_rename_t __Reply__mach_port_rename_t, *P__Reply__mach_port_rename_t;

struct __Reply__mach_port_rename_t {
    struct mach_msg_header_t Head;
    struct NDR_record_t NDR;
    kern_return_t RetCode;
};

typedef struct __Reply__mach_port_request_notification_t __Reply__mach_port_request_notification_t, *P__Reply__mach_port_request_notification_t;

struct __Reply__mach_port_request_notification_t {
    struct mach_msg_header_t Head;
    struct mach_msg_body_t msgh_body;
    struct mach_msg_port_descriptor_t previous;
};

typedef struct __Reply__mach_port_set_attributes_t __Reply__mach_port_set_attributes_t, *P__Reply__mach_port_set_attributes_t;

struct __Reply__mach_port_set_attributes_t {
    struct mach_msg_header_t Head;
    struct NDR_record_t NDR;
    kern_return_t RetCode;
};

typedef struct __Reply__mach_port_set_context_t __Reply__mach_port_set_context_t, *P__Reply__mach_port_set_context_t;

struct __Reply__mach_port_set_context_t {
    struct mach_msg_header_t Head;
    struct NDR_record_t NDR;
    kern_return_t RetCode;
};

typedef struct __Reply__mach_port_set_mscount_t __Reply__mach_port_set_mscount_t, *P__Reply__mach_port_set_mscount_t;

struct __Reply__mach_port_set_mscount_t {
    struct mach_msg_header_t Head;
    struct NDR_record_t NDR;
    kern_return_t RetCode;
};

typedef struct __Reply__mach_port_set_seqno_t __Reply__mach_port_set_seqno_t, *P__Reply__mach_port_set_seqno_t;

struct __Reply__mach_port_set_seqno_t {
    struct mach_msg_header_t Head;
    struct NDR_record_t NDR;
    kern_return_t RetCode;
};

typedef struct __Reply__mach_port_space_info_t __Reply__mach_port_space_info_t, *P__Reply__mach_port_space_info_t;

struct __Reply__mach_port_space_info_t {
    struct mach_msg_header_t Head;
    struct mach_msg_body_t msgh_body;
    struct mach_msg_ool_descriptor_t table_info;
    struct mach_msg_ool_descriptor_t tree_info;
    struct NDR_record_t NDR;
    ipc_info_space_t space_info;
    mach_msg_type_number_t table_infoCnt;
    mach_msg_type_number_t tree_infoCnt;
};

typedef struct __Reply__mach_port_type_t __Reply__mach_port_type_t, *P__Reply__mach_port_type_t;

struct __Reply__mach_port_type_t {
    struct mach_msg_header_t Head;
    struct NDR_record_t NDR;
    kern_return_t RetCode;
    mach_port_type_t ptype;
};

typedef struct __Reply__mach_port_unguard_t __Reply__mach_port_unguard_t, *P__Reply__mach_port_unguard_t;

struct __Reply__mach_port_unguard_t {
    struct mach_msg_header_t Head;
    struct NDR_record_t NDR;
    kern_return_t RetCode;
};

typedef struct __Reply__task_set_port_space_t __Reply__task_set_port_space_t, *P__Reply__task_set_port_space_t;

struct __Reply__task_set_port_space_t {
    struct mach_msg_header_t Head;
    struct NDR_record_t NDR;
    kern_return_t RetCode;
};

typedef union __ReplyUnion__mach_port_subsystem __ReplyUnion__mach_port_subsystem, *P__ReplyUnion__mach_port_subsystem;

union __ReplyUnion__mach_port_subsystem {
    struct __Reply__mach_port_names_t Reply_mach_port_names;
    struct __Reply__mach_port_type_t Reply_mach_port_type;
    struct __Reply__mach_port_rename_t Reply_mach_port_rename;
    struct __Reply__mach_port_allocate_name_t Reply_mach_port_allocate_name;
    struct __Reply__mach_port_allocate_t Reply_mach_port_allocate;
    struct __Reply__mach_port_destroy_t Reply_mach_port_destroy;
    struct __Reply__mach_port_deallocate_t Reply_mach_port_deallocate;
    struct __Reply__mach_port_get_refs_t Reply_mach_port_get_refs;
    struct __Reply__mach_port_mod_refs_t Reply_mach_port_mod_refs;
    struct __Reply__mach_port_peek_t Reply_mach_port_peek;
    struct __Reply__mach_port_set_mscount_t Reply_mach_port_set_mscount;
    struct __Reply__mach_port_get_set_status_t Reply_mach_port_get_set_status;
    struct __Reply__mach_port_move_member_t Reply_mach_port_move_member;
    struct __Reply__mach_port_request_notification_t Reply_mach_port_request_notification;
    struct __Reply__mach_port_insert_right_t Reply_mach_port_insert_right;
    struct __Reply__mach_port_extract_right_t Reply_mach_port_extract_right;
    struct __Reply__mach_port_set_seqno_t Reply_mach_port_set_seqno;
    struct __Reply__mach_port_get_attributes_t Reply_mach_port_get_attributes;
    struct __Reply__mach_port_set_attributes_t Reply_mach_port_set_attributes;
    struct __Reply__mach_port_allocate_qos_t Reply_mach_port_allocate_qos;
    struct __Reply__mach_port_allocate_full_t Reply_mach_port_allocate_full;
    struct __Reply__task_set_port_space_t Reply_task_set_port_space;
    struct __Reply__mach_port_get_srights_t Reply_mach_port_get_srights;
    struct __Reply__mach_port_space_info_t Reply_mach_port_space_info;
    struct __Reply__mach_port_dnrequest_info_t Reply_mach_port_dnrequest_info;
    struct __Reply__mach_port_kernel_object_t Reply_mach_port_kernel_object;
    struct __Reply__mach_port_insert_member_t Reply_mach_port_insert_member;
    struct __Reply__mach_port_extract_member_t Reply_mach_port_extract_member;
    struct __Reply__mach_port_get_context_t Reply_mach_port_get_context;
    struct __Reply__mach_port_set_context_t Reply_mach_port_set_context;
    struct __Reply__mach_port_kobject_t Reply_mach_port_kobject;
    struct __Reply__mach_port_construct_t Reply_mach_port_construct;
    struct __Reply__mach_port_destruct_t Reply_mach_port_destruct;
    struct __Reply__mach_port_guard_t Reply_mach_port_guard;
    struct __Reply__mach_port_unguard_t Reply_mach_port_unguard;
};

typedef struct __Request__mach_port_allocate_full_t __Request__mach_port_allocate_full_t, *P__Request__mach_port_allocate_full_t;

typedef natural_t mach_port_right_t;

struct __Request__mach_port_allocate_full_t {
    struct mach_msg_header_t Head;
    struct mach_msg_body_t msgh_body;
    struct mach_msg_port_descriptor_t proto;
    struct NDR_record_t NDR;
    mach_port_right_t right;
    mach_port_qos_t qos;
    mach_port_name_t name;
};

typedef struct __Request__mach_port_allocate_name_t __Request__mach_port_allocate_name_t, *P__Request__mach_port_allocate_name_t;

struct __Request__mach_port_allocate_name_t {
    struct mach_msg_header_t Head;
    struct NDR_record_t NDR;
    mach_port_right_t right;
    mach_port_name_t name;
};

typedef struct __Request__mach_port_allocate_qos_t __Request__mach_port_allocate_qos_t, *P__Request__mach_port_allocate_qos_t;

struct __Request__mach_port_allocate_qos_t {
    struct mach_msg_header_t Head;
    struct NDR_record_t NDR;
    mach_port_right_t right;
    mach_port_qos_t qos;
};

typedef struct __Request__mach_port_allocate_t __Request__mach_port_allocate_t, *P__Request__mach_port_allocate_t;

struct __Request__mach_port_allocate_t {
    struct mach_msg_header_t Head;
    struct NDR_record_t NDR;
    mach_port_right_t right;
};

typedef struct __Request__mach_port_construct_t __Request__mach_port_construct_t, *P__Request__mach_port_construct_t;

struct __Request__mach_port_construct_t {
    struct mach_msg_header_t Head;
    struct mach_msg_body_t msgh_body;
    struct mach_msg_ool_descriptor_t options;
    struct NDR_record_t NDR;
    mach_port_context_t context;
};

typedef struct __Request__mach_port_deallocate_t __Request__mach_port_deallocate_t, *P__Request__mach_port_deallocate_t;

struct __Request__mach_port_deallocate_t {
    struct mach_msg_header_t Head;
    struct NDR_record_t NDR;
    mach_port_name_t name;
};

typedef struct __Request__mach_port_destroy_t __Request__mach_port_destroy_t, *P__Request__mach_port_destroy_t;

struct __Request__mach_port_destroy_t {
    struct mach_msg_header_t Head;
    struct NDR_record_t NDR;
    mach_port_name_t name;
};

typedef struct __Request__mach_port_destruct_t __Request__mach_port_destruct_t, *P__Request__mach_port_destruct_t;

typedef integer_t mach_port_delta_t;

struct __Request__mach_port_destruct_t {
    struct mach_msg_header_t Head;
    struct NDR_record_t NDR;
    mach_port_name_t name;
    mach_port_delta_t srdelta;
    mach_port_context_t guard;
};

typedef struct __Request__mach_port_dnrequest_info_t __Request__mach_port_dnrequest_info_t, *P__Request__mach_port_dnrequest_info_t;

struct __Request__mach_port_dnrequest_info_t {
    struct mach_msg_header_t Head;
    struct NDR_record_t NDR;
    mach_port_name_t name;
};

typedef struct __Request__mach_port_extract_member_t __Request__mach_port_extract_member_t, *P__Request__mach_port_extract_member_t;

struct __Request__mach_port_extract_member_t {
    struct mach_msg_header_t Head;
    struct NDR_record_t NDR;
    mach_port_name_t name;
    mach_port_name_t pset;
};

typedef struct __Request__mach_port_extract_right_t __Request__mach_port_extract_right_t, *P__Request__mach_port_extract_right_t;

struct __Request__mach_port_extract_right_t {
    struct mach_msg_header_t Head;
    struct NDR_record_t NDR;
    mach_port_name_t name;
    mach_msg_type_name_t msgt_name;
};

typedef struct __Request__mach_port_get_attributes_t __Request__mach_port_get_attributes_t, *P__Request__mach_port_get_attributes_t;

typedef int mach_port_flavor_t;

struct __Request__mach_port_get_attributes_t {
    struct mach_msg_header_t Head;
    struct NDR_record_t NDR;
    mach_port_name_t name;
    mach_port_flavor_t flavor;
    mach_msg_type_number_t port_info_outCnt;
};

typedef struct __Request__mach_port_get_context_t __Request__mach_port_get_context_t, *P__Request__mach_port_get_context_t;

struct __Request__mach_port_get_context_t {
    struct mach_msg_header_t Head;
    struct NDR_record_t NDR;
    mach_port_name_t name;
};

typedef struct __Request__mach_port_get_refs_t __Request__mach_port_get_refs_t, *P__Request__mach_port_get_refs_t;

struct __Request__mach_port_get_refs_t {
    struct mach_msg_header_t Head;
    struct NDR_record_t NDR;
    mach_port_name_t name;
    mach_port_right_t right;
};

typedef struct __Request__mach_port_get_set_status_t __Request__mach_port_get_set_status_t, *P__Request__mach_port_get_set_status_t;

struct __Request__mach_port_get_set_status_t {
    struct mach_msg_header_t Head;
    struct NDR_record_t NDR;
    mach_port_name_t name;
};

typedef struct __Request__mach_port_get_srights_t __Request__mach_port_get_srights_t, *P__Request__mach_port_get_srights_t;

struct __Request__mach_port_get_srights_t {
    struct mach_msg_header_t Head;
    struct NDR_record_t NDR;
    mach_port_name_t name;
};

typedef struct __Request__mach_port_guard_t __Request__mach_port_guard_t, *P__Request__mach_port_guard_t;

struct __Request__mach_port_guard_t {
    struct mach_msg_header_t Head;
    struct NDR_record_t NDR;
    mach_port_name_t name;
    mach_port_context_t guard;
    boolean_t strict;
};

typedef struct __Request__mach_port_insert_member_t __Request__mach_port_insert_member_t, *P__Request__mach_port_insert_member_t;

struct __Request__mach_port_insert_member_t {
    struct mach_msg_header_t Head;
    struct NDR_record_t NDR;
    mach_port_name_t name;
    mach_port_name_t pset;
};

typedef struct __Request__mach_port_insert_right_t __Request__mach_port_insert_right_t, *P__Request__mach_port_insert_right_t;

struct __Request__mach_port_insert_right_t {
    struct mach_msg_header_t Head;
    struct mach_msg_body_t msgh_body;
    struct mach_msg_port_descriptor_t poly;
    struct NDR_record_t NDR;
    mach_port_name_t name;
};

typedef struct __Request__mach_port_kernel_object_t __Request__mach_port_kernel_object_t, *P__Request__mach_port_kernel_object_t;

struct __Request__mach_port_kernel_object_t {
    struct mach_msg_header_t Head;
    struct NDR_record_t NDR;
    mach_port_name_t name;
};

typedef struct __Request__mach_port_kobject_t __Request__mach_port_kobject_t, *P__Request__mach_port_kobject_t;

struct __Request__mach_port_kobject_t {
    struct mach_msg_header_t Head;
    struct NDR_record_t NDR;
    mach_port_name_t name;
};

typedef struct __Request__mach_port_mod_refs_t __Request__mach_port_mod_refs_t, *P__Request__mach_port_mod_refs_t;

struct __Request__mach_port_mod_refs_t {
    struct mach_msg_header_t Head;
    struct NDR_record_t NDR;
    mach_port_name_t name;
    mach_port_right_t right;
    mach_port_delta_t delta;
};

typedef struct __Request__mach_port_move_member_t __Request__mach_port_move_member_t, *P__Request__mach_port_move_member_t;

struct __Request__mach_port_move_member_t {
    struct mach_msg_header_t Head;
    struct NDR_record_t NDR;
    mach_port_name_t member;
    mach_port_name_t after;
};

typedef struct __Request__mach_port_names_t __Request__mach_port_names_t, *P__Request__mach_port_names_t;

struct __Request__mach_port_names_t {
    struct mach_msg_header_t Head;
};

typedef struct __Request__mach_port_peek_t __Request__mach_port_peek_t, *P__Request__mach_port_peek_t;

typedef uint mach_msg_trailer_type_t;

struct __Request__mach_port_peek_t {
    struct mach_msg_header_t Head;
    struct NDR_record_t NDR;
    mach_port_name_t name;
    mach_msg_trailer_type_t trailer_type;
    mach_port_seqno_t request_seqnop;
    mach_msg_type_number_t trailer_infopCnt;
};

typedef struct __Request__mach_port_rename_t __Request__mach_port_rename_t, *P__Request__mach_port_rename_t;

struct __Request__mach_port_rename_t {
    struct mach_msg_header_t Head;
    struct NDR_record_t NDR;
    mach_port_name_t old_name;
    mach_port_name_t new_name;
};

typedef struct __Request__mach_port_request_notification_t __Request__mach_port_request_notification_t, *P__Request__mach_port_request_notification_t;

typedef natural_t mach_port_mscount_t;

struct __Request__mach_port_request_notification_t {
    struct mach_msg_header_t Head;
    struct mach_msg_body_t msgh_body;
    struct mach_msg_port_descriptor_t notify;
    struct NDR_record_t NDR;
    mach_port_name_t name;
    mach_msg_id_t msgid;
    mach_port_mscount_t sync;
};

typedef struct __Request__mach_port_set_attributes_t __Request__mach_port_set_attributes_t, *P__Request__mach_port_set_attributes_t;

struct __Request__mach_port_set_attributes_t {
    struct mach_msg_header_t Head;
    struct NDR_record_t NDR;
    mach_port_name_t name;
    mach_port_flavor_t flavor;
    mach_msg_type_number_t port_infoCnt;
    integer_t port_info[17];
};

typedef struct __Request__mach_port_set_context_t __Request__mach_port_set_context_t, *P__Request__mach_port_set_context_t;

struct __Request__mach_port_set_context_t {
    struct mach_msg_header_t Head;
    struct NDR_record_t NDR;
    mach_port_name_t name;
    mach_port_context_t context;
};

typedef struct __Request__mach_port_set_mscount_t __Request__mach_port_set_mscount_t, *P__Request__mach_port_set_mscount_t;

struct __Request__mach_port_set_mscount_t {
    struct mach_msg_header_t Head;
    struct NDR_record_t NDR;
    mach_port_name_t name;
    mach_port_mscount_t mscount;
};

typedef struct __Request__mach_port_set_seqno_t __Request__mach_port_set_seqno_t, *P__Request__mach_port_set_seqno_t;

struct __Request__mach_port_set_seqno_t {
    struct mach_msg_header_t Head;
    struct NDR_record_t NDR;
    mach_port_name_t name;
    mach_port_seqno_t seqno;
};

typedef struct __Request__mach_port_space_info_t __Request__mach_port_space_info_t, *P__Request__mach_port_space_info_t;

struct __Request__mach_port_space_info_t {
    struct mach_msg_header_t Head;
};

typedef struct __Request__mach_port_type_t __Request__mach_port_type_t, *P__Request__mach_port_type_t;

struct __Request__mach_port_type_t {
    struct mach_msg_header_t Head;
    struct NDR_record_t NDR;
    mach_port_name_t name;
};

typedef struct __Request__mach_port_unguard_t __Request__mach_port_unguard_t, *P__Request__mach_port_unguard_t;

struct __Request__mach_port_unguard_t {
    struct mach_msg_header_t Head;
    struct NDR_record_t NDR;
    mach_port_name_t name;
    mach_port_context_t guard;
};

typedef struct __Request__task_set_port_space_t __Request__task_set_port_space_t, *P__Request__task_set_port_space_t;

struct __Request__task_set_port_space_t {
    struct mach_msg_header_t Head;
    struct NDR_record_t NDR;
    int table_entries;
};

typedef union __RequestUnion__mach_port_subsystem __RequestUnion__mach_port_subsystem, *P__RequestUnion__mach_port_subsystem;

union __RequestUnion__mach_port_subsystem {
    struct __Request__mach_port_names_t Request_mach_port_names;
    struct __Request__mach_port_type_t Request_mach_port_type;
    struct __Request__mach_port_rename_t Request_mach_port_rename;
    struct __Request__mach_port_allocate_name_t Request_mach_port_allocate_name;
    struct __Request__mach_port_allocate_t Request_mach_port_allocate;
    struct __Request__mach_port_destroy_t Request_mach_port_destroy;
    struct __Request__mach_port_deallocate_t Request_mach_port_deallocate;
    struct __Request__mach_port_get_refs_t Request_mach_port_get_refs;
    struct __Request__mach_port_mod_refs_t Request_mach_port_mod_refs;
    struct __Request__mach_port_peek_t Request_mach_port_peek;
    struct __Request__mach_port_set_mscount_t Request_mach_port_set_mscount;
    struct __Request__mach_port_get_set_status_t Request_mach_port_get_set_status;
    struct __Request__mach_port_move_member_t Request_mach_port_move_member;
    struct __Request__mach_port_request_notification_t Request_mach_port_request_notification;
    struct __Request__mach_port_insert_right_t Request_mach_port_insert_right;
    struct __Request__mach_port_extract_right_t Request_mach_port_extract_right;
    struct __Request__mach_port_set_seqno_t Request_mach_port_set_seqno;
    struct __Request__mach_port_get_attributes_t Request_mach_port_get_attributes;
    struct __Request__mach_port_set_attributes_t Request_mach_port_set_attributes;
    struct __Request__mach_port_allocate_qos_t Request_mach_port_allocate_qos;
    struct __Request__mach_port_allocate_full_t Request_mach_port_allocate_full;
    struct __Request__task_set_port_space_t Request_task_set_port_space;
    struct __Request__mach_port_get_srights_t Request_mach_port_get_srights;
    struct __Request__mach_port_space_info_t Request_mach_port_space_info;
    struct __Request__mach_port_dnrequest_info_t Request_mach_port_dnrequest_info;
    struct __Request__mach_port_kernel_object_t Request_mach_port_kernel_object;
    struct __Request__mach_port_insert_member_t Request_mach_port_insert_member;
    struct __Request__mach_port_extract_member_t Request_mach_port_extract_member;
    struct __Request__mach_port_get_context_t Request_mach_port_get_context;
    struct __Request__mach_port_set_context_t Request_mach_port_set_context;
    struct __Request__mach_port_kobject_t Request_mach_port_kobject;
    struct __Request__mach_port_construct_t Request_mach_port_construct;
    struct __Request__mach_port_destruct_t Request_mach_port_destruct;
    struct __Request__mach_port_guard_t Request_mach_port_guard;
    struct __Request__mach_port_unguard_t Request_mach_port_unguard;
};

typedef struct mach_timebase_info mach_timebase_info, *Pmach_timebase_info;

struct mach_timebase_info {
    uint32_t numer;
    uint32_t denom;
};

typedef struct mach_timebase_info mach_timebase_info_data_t;

typedef struct mach_timebase_info * mach_timebase_info_t;

#define ALARM_NULL 0

#define CLOCK_NULL 0

#define HOST_NULL 0

#define HOST_PRIV_NULL 0

#define HOST_SECURITY_NULL 0

#define IPC_SPACE_NULL 0

#define LEDGER_ITEM_INFINITY -1

#define LEDGER_NULL 0

#define LOCK_SET_NULL 0

#define PROCESSOR_NULL 0

#define PROCESSOR_SET_NULL 0

#define SEMAPHORE_NULL 0

#define TASK_NAME_NULL 0

#define TASK_NULL 0

#define THR_ACT_NULL 0

#define THREAD_NULL 0

#define TID_NULL 0

#define UND_SERVER_NULL 0

typedef mach_port_t alarm_t;

typedef alarm_t alarm_port_t;

typedef mach_port_t bootstrap_t;

typedef mach_port_t clock_ctrl_t;

typedef clock_ctrl_t clock_ctrl_port_t;

typedef mach_port_t clock_reply_t;

typedef mach_port_t clock_serv_t;

typedef clock_serv_t clock_serv_port_t;

typedef uint64_t mach_vm_offset_t;

typedef mach_vm_offset_t * emulation_vector_t;

typedef mach_port_t exception_handler_t;

typedef exception_handler_t * exception_handler_array_t;

typedef exception_handler_array_t exception_port_arrary_t;

typedef exception_handler_t exception_port_t;

typedef mach_port_t host_t;

typedef host_t host_name_port_t;

typedef host_t host_name_t;

typedef mach_port_t host_priv_t;

typedef mach_port_t host_security_t;

typedef mach_port_t io_master_t;

typedef mach_port_t ipc_space_t;

typedef ipc_space_t ipc_space_port_t;

typedef char * labelstr_t;

typedef int64_t ledger_amount_t;

typedef mach_port_t ledger_t;

typedef ledger_t * ledger_array_t;

typedef natural_t ledger_item_t;

typedef ledger_array_t ledger_port_array_t;

typedef ledger_t ledger_port_t;

typedef mach_port_t lock_set_t;

typedef lock_set_t lock_set_port_t;

typedef mach_port_t mem_entry_name_port_t;

typedef mach_port_t processor_t;

typedef processor_t * processor_array_t;

typedef processor_array_t processor_port_array_t;

typedef processor_t processor_port_t;

typedef mach_port_t processor_set_t;

typedef processor_set_t * processor_set_array_t;

typedef processor_set_t processor_set_control_port_t;

typedef mach_port_t processor_set_control_t;

typedef processor_set_t * processor_set_name_array_t;

typedef processor_set_array_t processor_set_name_port_array_t;

typedef processor_set_t processor_set_name_port_t;

typedef processor_set_t processor_set_name_t;

typedef processor_set_t processor_set_port_t;

typedef mach_port_t semaphore_t;

typedef semaphore_t semaphore_port_t;

typedef mach_port_t task_t;

typedef task_t * task_array_t;

typedef mach_port_t task_name_t;

typedef task_array_t task_port_array_t;

typedef task_t task_port_t;

typedef mach_port_t task_suspension_token_t;

typedef mach_port_t thread_act_t;

typedef thread_act_t * thread_act_array_t;

typedef thread_act_array_t thread_act_port_array_t;

typedef thread_act_t thread_act_port_t;

typedef mach_port_t thread_t;

typedef thread_t * thread_array_t;

typedef thread_array_t thread_port_array_t;

typedef thread_t thread_port_t;

typedef mach_port_t UNDServerRef;

typedef char * user_subsystem_t;

typedef mach_port_t vm_task_entry_t;

#define mach_vm_MSG_COUNT 20

typedef struct __Reply___mach_make_memory_entry_t __Reply___mach_make_memory_entry_t, *P__Reply___mach_make_memory_entry_t;

struct __Reply___mach_make_memory_entry_t {
    struct mach_msg_header_t Head;
    struct mach_msg_body_t msgh_body;
    struct mach_msg_port_descriptor_t object_handle;
    struct NDR_record_t NDR;
    memory_object_size_t size;
};

typedef struct __Reply__mach_vm_allocate_t __Reply__mach_vm_allocate_t, *P__Reply__mach_vm_allocate_t;

struct __Reply__mach_vm_allocate_t {
    struct mach_msg_header_t Head;
    struct NDR_record_t NDR;
    kern_return_t RetCode;
    mach_vm_address_t address;
};

typedef struct __Reply__mach_vm_behavior_set_t __Reply__mach_vm_behavior_set_t, *P__Reply__mach_vm_behavior_set_t;

struct __Reply__mach_vm_behavior_set_t {
    struct mach_msg_header_t Head;
    struct NDR_record_t NDR;
    kern_return_t RetCode;
};

typedef struct __Reply__mach_vm_copy_t __Reply__mach_vm_copy_t, *P__Reply__mach_vm_copy_t;

struct __Reply__mach_vm_copy_t {
    struct mach_msg_header_t Head;
    struct NDR_record_t NDR;
    kern_return_t RetCode;
};

typedef struct __Reply__mach_vm_deallocate_t __Reply__mach_vm_deallocate_t, *P__Reply__mach_vm_deallocate_t;

struct __Reply__mach_vm_deallocate_t {
    struct mach_msg_header_t Head;
    struct NDR_record_t NDR;
    kern_return_t RetCode;
};

typedef struct __Reply__mach_vm_inherit_t __Reply__mach_vm_inherit_t, *P__Reply__mach_vm_inherit_t;

struct __Reply__mach_vm_inherit_t {
    struct mach_msg_header_t Head;
    struct NDR_record_t NDR;
    kern_return_t RetCode;
};

typedef struct __Reply__mach_vm_machine_attribute_t __Reply__mach_vm_machine_attribute_t, *P__Reply__mach_vm_machine_attribute_t;

typedef int vm_machine_attribute_val_t;

struct __Reply__mach_vm_machine_attribute_t {
    struct mach_msg_header_t Head;
    struct NDR_record_t NDR;
    kern_return_t RetCode;
    vm_machine_attribute_val_t value;
};

typedef struct __Reply__mach_vm_map_t __Reply__mach_vm_map_t, *P__Reply__mach_vm_map_t;

struct __Reply__mach_vm_map_t {
    struct mach_msg_header_t Head;
    struct NDR_record_t NDR;
    kern_return_t RetCode;
    mach_vm_address_t address;
};

typedef struct __Reply__mach_vm_msync_t __Reply__mach_vm_msync_t, *P__Reply__mach_vm_msync_t;

struct __Reply__mach_vm_msync_t {
    struct mach_msg_header_t Head;
    struct NDR_record_t NDR;
    kern_return_t RetCode;
};

typedef struct __Reply__mach_vm_page_info_t __Reply__mach_vm_page_info_t, *P__Reply__mach_vm_page_info_t;

struct __Reply__mach_vm_page_info_t {
    struct mach_msg_header_t Head;
    struct NDR_record_t NDR;
    kern_return_t RetCode;
    mach_msg_type_number_t infoCnt;
    int info[32];
};

typedef struct __Reply__mach_vm_page_query_t __Reply__mach_vm_page_query_t, *P__Reply__mach_vm_page_query_t;

struct __Reply__mach_vm_page_query_t {
    struct mach_msg_header_t Head;
    struct NDR_record_t NDR;
    kern_return_t RetCode;
    integer_t disposition;
    integer_t ref_count;
};

typedef struct __Reply__mach_vm_protect_t __Reply__mach_vm_protect_t, *P__Reply__mach_vm_protect_t;

struct __Reply__mach_vm_protect_t {
    struct mach_msg_header_t Head;
    struct NDR_record_t NDR;
    kern_return_t RetCode;
};

typedef struct __Reply__mach_vm_purgable_control_t __Reply__mach_vm_purgable_control_t, *P__Reply__mach_vm_purgable_control_t;

struct __Reply__mach_vm_purgable_control_t {
    struct mach_msg_header_t Head;
    struct NDR_record_t NDR;
    kern_return_t RetCode;
    int state;
};

typedef struct __Reply__mach_vm_read_list_t __Reply__mach_vm_read_list_t, *P__Reply__mach_vm_read_list_t;

typedef struct mach_vm_read_entry mach_vm_read_entry, *Pmach_vm_read_entry;

struct mach_vm_read_entry {
    mach_vm_address_t address;
    mach_vm_size_t size;
};

struct __Reply__mach_vm_read_list_t {
    struct mach_msg_header_t Head;
    struct NDR_record_t NDR;
    kern_return_t RetCode;
    mach_vm_read_entry_t data_list;
};

typedef struct mach_vm_read_entry mach_vm_read_entry_t[256];

typedef struct __Reply__mach_vm_read_overwrite_t __Reply__mach_vm_read_overwrite_t, *P__Reply__mach_vm_read_overwrite_t;

struct __Reply__mach_vm_read_overwrite_t {
    struct mach_msg_header_t Head;
    struct NDR_record_t NDR;
    kern_return_t RetCode;
    mach_vm_size_t outsize;
};

typedef struct __Reply__mach_vm_read_t __Reply__mach_vm_read_t, *P__Reply__mach_vm_read_t;

struct __Reply__mach_vm_read_t {
    struct mach_msg_header_t Head;
    struct mach_msg_body_t msgh_body;
    struct mach_msg_ool_descriptor_t data;
    struct NDR_record_t NDR;
    mach_msg_type_number_t dataCnt;
};

typedef struct __Reply__mach_vm_region_recurse_t __Reply__mach_vm_region_recurse_t, *P__Reply__mach_vm_region_recurse_t;

struct __Reply__mach_vm_region_recurse_t {
    struct mach_msg_header_t Head;
    struct NDR_record_t NDR;
    kern_return_t RetCode;
    mach_vm_address_t address;
    mach_vm_size_t size;
    natural_t nesting_depth;
    mach_msg_type_number_t infoCnt;
    int info[19];
};

typedef struct __Reply__mach_vm_region_t __Reply__mach_vm_region_t, *P__Reply__mach_vm_region_t;

struct __Reply__mach_vm_region_t {
    struct mach_msg_header_t Head;
    struct mach_msg_body_t msgh_body;
    struct mach_msg_port_descriptor_t object_name;
    struct NDR_record_t NDR;
    mach_vm_address_t address;
    mach_vm_size_t size;
    mach_msg_type_number_t infoCnt;
    int info[10];
};

typedef struct __Reply__mach_vm_remap_t __Reply__mach_vm_remap_t, *P__Reply__mach_vm_remap_t;

struct __Reply__mach_vm_remap_t {
    struct mach_msg_header_t Head;
    struct NDR_record_t NDR;
    kern_return_t RetCode;
    mach_vm_address_t target_address;
    vm_prot_t cur_protection;
    vm_prot_t max_protection;
};

typedef struct __Reply__mach_vm_write_t __Reply__mach_vm_write_t, *P__Reply__mach_vm_write_t;

struct __Reply__mach_vm_write_t {
    struct mach_msg_header_t Head;
    struct NDR_record_t NDR;
    kern_return_t RetCode;
};

typedef union __ReplyUnion__mach_vm_subsystem __ReplyUnion__mach_vm_subsystem, *P__ReplyUnion__mach_vm_subsystem;

union __ReplyUnion__mach_vm_subsystem {
    struct __Reply__mach_vm_allocate_t Reply_mach_vm_allocate;
    struct __Reply__mach_vm_deallocate_t Reply_mach_vm_deallocate;
    struct __Reply__mach_vm_protect_t Reply_mach_vm_protect;
    struct __Reply__mach_vm_inherit_t Reply_mach_vm_inherit;
    struct __Reply__mach_vm_read_t Reply_mach_vm_read;
    struct __Reply__mach_vm_read_list_t Reply_mach_vm_read_list;
    struct __Reply__mach_vm_write_t Reply_mach_vm_write;
    struct __Reply__mach_vm_copy_t Reply_mach_vm_copy;
    struct __Reply__mach_vm_read_overwrite_t Reply_mach_vm_read_overwrite;
    struct __Reply__mach_vm_msync_t Reply_mach_vm_msync;
    struct __Reply__mach_vm_behavior_set_t Reply_mach_vm_behavior_set;
    struct __Reply__mach_vm_map_t Reply_mach_vm_map;
    struct __Reply__mach_vm_machine_attribute_t Reply_mach_vm_machine_attribute;
    struct __Reply__mach_vm_remap_t Reply_mach_vm_remap;
    struct __Reply__mach_vm_page_query_t Reply_mach_vm_page_query;
    struct __Reply__mach_vm_region_recurse_t Reply_mach_vm_region_recurse;
    struct __Reply__mach_vm_region_t Reply_mach_vm_region;
    struct __Reply___mach_make_memory_entry_t Reply__mach_make_memory_entry;
    struct __Reply__mach_vm_purgable_control_t Reply_mach_vm_purgable_control;
    struct __Reply__mach_vm_page_info_t Reply_mach_vm_page_info;
};

typedef struct __Request___mach_make_memory_entry_t __Request___mach_make_memory_entry_t, *P__Request___mach_make_memory_entry_t;

typedef ulonglong memory_object_offset_t;

struct __Request___mach_make_memory_entry_t {
    struct mach_msg_header_t Head;
    struct mach_msg_body_t msgh_body;
    struct mach_msg_port_descriptor_t parent_handle;
    struct NDR_record_t NDR;
    memory_object_size_t size;
    memory_object_offset_t offset;
    vm_prot_t permission;
};

typedef struct __Request__mach_vm_allocate_t __Request__mach_vm_allocate_t, *P__Request__mach_vm_allocate_t;

struct __Request__mach_vm_allocate_t {
    struct mach_msg_header_t Head;
    struct NDR_record_t NDR;
    mach_vm_address_t address;
    mach_vm_size_t size;
    int flags;
};

typedef struct __Request__mach_vm_behavior_set_t __Request__mach_vm_behavior_set_t, *P__Request__mach_vm_behavior_set_t;

typedef int vm_behavior_t;

struct __Request__mach_vm_behavior_set_t {
    struct mach_msg_header_t Head;
    struct NDR_record_t NDR;
    mach_vm_address_t address;
    mach_vm_size_t size;
    vm_behavior_t new_behavior;
};

typedef struct __Request__mach_vm_copy_t __Request__mach_vm_copy_t, *P__Request__mach_vm_copy_t;

struct __Request__mach_vm_copy_t {
    struct mach_msg_header_t Head;
    struct NDR_record_t NDR;
    mach_vm_address_t source_address;
    mach_vm_size_t size;
    mach_vm_address_t dest_address;
};

typedef struct __Request__mach_vm_deallocate_t __Request__mach_vm_deallocate_t, *P__Request__mach_vm_deallocate_t;

struct __Request__mach_vm_deallocate_t {
    struct mach_msg_header_t Head;
    struct NDR_record_t NDR;
    mach_vm_address_t address;
    mach_vm_size_t size;
};

typedef struct __Request__mach_vm_inherit_t __Request__mach_vm_inherit_t, *P__Request__mach_vm_inherit_t;

typedef uint vm_inherit_t;

struct __Request__mach_vm_inherit_t {
    struct mach_msg_header_t Head;
    struct NDR_record_t NDR;
    mach_vm_address_t address;
    mach_vm_size_t size;
    vm_inherit_t new_inheritance;
};

typedef struct __Request__mach_vm_machine_attribute_t __Request__mach_vm_machine_attribute_t, *P__Request__mach_vm_machine_attribute_t;

typedef uint vm_machine_attribute_t;

struct __Request__mach_vm_machine_attribute_t {
    struct mach_msg_header_t Head;
    struct NDR_record_t NDR;
    mach_vm_address_t address;
    mach_vm_size_t size;
    vm_machine_attribute_t attribute;
    vm_machine_attribute_val_t value;
};

typedef struct __Request__mach_vm_map_t __Request__mach_vm_map_t, *P__Request__mach_vm_map_t;

struct __Request__mach_vm_map_t {
    struct mach_msg_header_t Head;
    struct mach_msg_body_t msgh_body;
    struct mach_msg_port_descriptor_t object;
    struct NDR_record_t NDR;
    mach_vm_address_t address;
    mach_vm_size_t size;
    mach_vm_offset_t mask;
    int flags;
    memory_object_offset_t offset;
    boolean_t copy;
    vm_prot_t cur_protection;
    vm_prot_t max_protection;
    vm_inherit_t inheritance;
};

typedef struct __Request__mach_vm_msync_t __Request__mach_vm_msync_t, *P__Request__mach_vm_msync_t;

typedef uint vm_sync_t;

struct __Request__mach_vm_msync_t {
    struct mach_msg_header_t Head;
    struct NDR_record_t NDR;
    mach_vm_address_t address;
    mach_vm_size_t size;
    vm_sync_t sync_flags;
};

typedef struct __Request__mach_vm_page_info_t __Request__mach_vm_page_info_t, *P__Request__mach_vm_page_info_t;

typedef int vm_page_info_flavor_t;

struct __Request__mach_vm_page_info_t {
    struct mach_msg_header_t Head;
    struct NDR_record_t NDR;
    mach_vm_address_t address;
    vm_page_info_flavor_t flavor;
    mach_msg_type_number_t infoCnt;
};

typedef struct __Request__mach_vm_page_query_t __Request__mach_vm_page_query_t, *P__Request__mach_vm_page_query_t;

struct __Request__mach_vm_page_query_t {
    struct mach_msg_header_t Head;
    struct NDR_record_t NDR;
    mach_vm_offset_t offset;
};

typedef struct __Request__mach_vm_protect_t __Request__mach_vm_protect_t, *P__Request__mach_vm_protect_t;

struct __Request__mach_vm_protect_t {
    struct mach_msg_header_t Head;
    struct NDR_record_t NDR;
    mach_vm_address_t address;
    mach_vm_size_t size;
    boolean_t set_maximum;
    vm_prot_t new_protection;
};

typedef struct __Request__mach_vm_purgable_control_t __Request__mach_vm_purgable_control_t, *P__Request__mach_vm_purgable_control_t;

typedef int vm_purgable_t;

struct __Request__mach_vm_purgable_control_t {
    struct mach_msg_header_t Head;
    struct NDR_record_t NDR;
    mach_vm_address_t address;
    vm_purgable_t control;
    int state;
};

typedef struct __Request__mach_vm_read_list_t __Request__mach_vm_read_list_t, *P__Request__mach_vm_read_list_t;

struct __Request__mach_vm_read_list_t {
    struct mach_msg_header_t Head;
    struct NDR_record_t NDR;
    mach_vm_read_entry_t data_list;
    natural_t count;
};

typedef struct __Request__mach_vm_read_overwrite_t __Request__mach_vm_read_overwrite_t, *P__Request__mach_vm_read_overwrite_t;

struct __Request__mach_vm_read_overwrite_t {
    struct mach_msg_header_t Head;
    struct NDR_record_t NDR;
    mach_vm_address_t address;
    mach_vm_size_t size;
    mach_vm_address_t data;
};

typedef struct __Request__mach_vm_read_t __Request__mach_vm_read_t, *P__Request__mach_vm_read_t;

struct __Request__mach_vm_read_t {
    struct mach_msg_header_t Head;
    struct NDR_record_t NDR;
    mach_vm_address_t address;
    mach_vm_size_t size;
};

typedef struct __Request__mach_vm_region_recurse_t __Request__mach_vm_region_recurse_t, *P__Request__mach_vm_region_recurse_t;

struct __Request__mach_vm_region_recurse_t {
    struct mach_msg_header_t Head;
    struct NDR_record_t NDR;
    mach_vm_address_t address;
    natural_t nesting_depth;
    mach_msg_type_number_t infoCnt;
};

typedef struct __Request__mach_vm_region_t __Request__mach_vm_region_t, *P__Request__mach_vm_region_t;

typedef int vm_region_flavor_t;

struct __Request__mach_vm_region_t {
    struct mach_msg_header_t Head;
    struct NDR_record_t NDR;
    mach_vm_address_t address;
    vm_region_flavor_t flavor;
    mach_msg_type_number_t infoCnt;
};

typedef struct __Request__mach_vm_remap_t __Request__mach_vm_remap_t, *P__Request__mach_vm_remap_t;

struct __Request__mach_vm_remap_t {
    struct mach_msg_header_t Head;
    struct mach_msg_body_t msgh_body;
    struct mach_msg_port_descriptor_t src_task;
    struct NDR_record_t NDR;
    mach_vm_address_t target_address;
    mach_vm_size_t size;
    mach_vm_offset_t mask;
    int flags;
    mach_vm_address_t src_address;
    boolean_t copy;
    vm_inherit_t inheritance;
};

typedef struct __Request__mach_vm_write_t __Request__mach_vm_write_t, *P__Request__mach_vm_write_t;

struct __Request__mach_vm_write_t {
    struct mach_msg_header_t Head;
    struct mach_msg_body_t msgh_body;
    struct mach_msg_ool_descriptor_t data;
    struct NDR_record_t NDR;
    mach_vm_address_t address;
    mach_msg_type_number_t dataCnt;
};

typedef union __RequestUnion__mach_vm_subsystem __RequestUnion__mach_vm_subsystem, *P__RequestUnion__mach_vm_subsystem;

union __RequestUnion__mach_vm_subsystem {
    struct __Request__mach_vm_allocate_t Request_mach_vm_allocate;
    struct __Request__mach_vm_deallocate_t Request_mach_vm_deallocate;
    struct __Request__mach_vm_protect_t Request_mach_vm_protect;
    struct __Request__mach_vm_inherit_t Request_mach_vm_inherit;
    struct __Request__mach_vm_read_t Request_mach_vm_read;
    struct __Request__mach_vm_read_list_t Request_mach_vm_read_list;
    struct __Request__mach_vm_write_t Request_mach_vm_write;
    struct __Request__mach_vm_copy_t Request_mach_vm_copy;
    struct __Request__mach_vm_read_overwrite_t Request_mach_vm_read_overwrite;
    struct __Request__mach_vm_msync_t Request_mach_vm_msync;
    struct __Request__mach_vm_behavior_set_t Request_mach_vm_behavior_set;
    struct __Request__mach_vm_map_t Request_mach_vm_map;
    struct __Request__mach_vm_machine_attribute_t Request_mach_vm_machine_attribute;
    struct __Request__mach_vm_remap_t Request_mach_vm_remap;
    struct __Request__mach_vm_page_query_t Request_mach_vm_page_query;
    struct __Request__mach_vm_region_recurse_t Request_mach_vm_region_recurse;
    struct __Request__mach_vm_region_t Request_mach_vm_region;
    struct __Request___mach_make_memory_entry_t Request__mach_make_memory_entry;
    struct __Request__mach_vm_purgable_control_t Request_mach_vm_purgable_control;
    struct __Request__mach_vm_page_info_t Request_mach_vm_page_info;
};

#define CPU_ARCH_ABI64 16777216

#define CPU_ARCH_MASK 4278190080

#define CPU_STATE_IDLE 2

#define CPU_STATE_MAX 4

#define CPU_STATE_NICE 3

#define CPU_STATE_SYSTEM 1

#define CPU_STATE_USER 0

#define CPU_SUBTYPE_386 3

#define CPU_SUBTYPE_486 4

#define CPU_SUBTYPE_486SX 132

#define CPU_SUBTYPE_586 5

#define CPU_SUBTYPE_ARM_ALL 0

#define CPU_SUBTYPE_ARM_V4T 5

#define CPU_SUBTYPE_ARM_V5TEJ 7

#define CPU_SUBTYPE_ARM_V6 6

#define CPU_SUBTYPE_ARM_V6M 14

#define CPU_SUBTYPE_ARM_V7 9

#define CPU_SUBTYPE_ARM_V7EM 16

#define CPU_SUBTYPE_ARM_V7F 10

#define CPU_SUBTYPE_ARM_V7K 12

#define CPU_SUBTYPE_ARM_V7M 15

#define CPU_SUBTYPE_ARM_V7S 11

#define CPU_SUBTYPE_ARM_XSCALE 8

#define CPU_SUBTYPE_BIG_ENDIAN 1

#define CPU_SUBTYPE_CELERON 103

#define CPU_SUBTYPE_CELERON_MOBILE 119

#define CPU_SUBTYPE_HPPA_7100 0

#define CPU_SUBTYPE_HPPA_7100LC 1

#define CPU_SUBTYPE_HPPA_ALL 0

#define CPU_SUBTYPE_I386_ALL 3

#define CPU_SUBTYPE_I860_860 1

#define CPU_SUBTYPE_I860_ALL 0

#define CPU_SUBTYPE_INTEL_FAMILY_MAX 15

#define CPU_SUBTYPE_INTEL_MODEL_ALL 0

#define CPU_SUBTYPE_ITANIUM 11

#define CPU_SUBTYPE_ITANIUM_2 27

#define CPU_SUBTYPE_LIB64 2147483648

#define CPU_SUBTYPE_LITTLE_ENDIAN 0

#define CPU_SUBTYPE_MASK 4278190080

#define CPU_SUBTYPE_MC68030 1

#define CPU_SUBTYPE_MC68030_ONLY 3

#define CPU_SUBTYPE_MC68040 2

#define CPU_SUBTYPE_MC680x0_ALL 1

#define CPU_SUBTYPE_MC88000_ALL 0

#define CPU_SUBTYPE_MC88100 1

#define CPU_SUBTYPE_MC88110 2

#define CPU_SUBTYPE_MC98000_ALL 0

#define CPU_SUBTYPE_MC98601 1

#define CPU_SUBTYPE_MIPS_ALL 0

#define CPU_SUBTYPE_MIPS_R2000 5

#define CPU_SUBTYPE_MIPS_R2000a 4

#define CPU_SUBTYPE_MIPS_R2300 1

#define CPU_SUBTYPE_MIPS_R2600 2

#define CPU_SUBTYPE_MIPS_R2800 3

#define CPU_SUBTYPE_MIPS_R3000 7

#define CPU_SUBTYPE_MIPS_R3000a 6

#define CPU_SUBTYPE_MULTIPLE -1

#define CPU_SUBTYPE_PENT 5

#define CPU_SUBTYPE_PENTII_M3 54

#define CPU_SUBTYPE_PENTII_M5 86

#define CPU_SUBTYPE_PENTIUM_3 8

#define CPU_SUBTYPE_PENTIUM_3_M 24

#define CPU_SUBTYPE_PENTIUM_3_XEON 40

#define CPU_SUBTYPE_PENTIUM_4 10

#define CPU_SUBTYPE_PENTIUM_4_M 26

#define CPU_SUBTYPE_PENTIUM_M 9

#define CPU_SUBTYPE_PENTPRO 22

#define CPU_SUBTYPE_POWERPC_601 1

#define CPU_SUBTYPE_POWERPC_602 2

#define CPU_SUBTYPE_POWERPC_603 3

#define CPU_SUBTYPE_POWERPC_603e 4

#define CPU_SUBTYPE_POWERPC_603ev 5

#define CPU_SUBTYPE_POWERPC_604 6

#define CPU_SUBTYPE_POWERPC_604e 7

#define CPU_SUBTYPE_POWERPC_620 8

#define CPU_SUBTYPE_POWERPC_7400 10

#define CPU_SUBTYPE_POWERPC_7450 11

#define CPU_SUBTYPE_POWERPC_750 9

#define CPU_SUBTYPE_POWERPC_970 100

#define CPU_SUBTYPE_POWERPC_ALL 0

#define CPU_SUBTYPE_SPARC_ALL 0

#define CPU_SUBTYPE_UVAXI 5

#define CPU_SUBTYPE_UVAXII 6

#define CPU_SUBTYPE_UVAXIII 12

#define CPU_SUBTYPE_VAX730 4

#define CPU_SUBTYPE_VAX750 3

#define CPU_SUBTYPE_VAX780 1

#define CPU_SUBTYPE_VAX785 2

#define CPU_SUBTYPE_VAX8200 7

#define CPU_SUBTYPE_VAX8500 8

#define CPU_SUBTYPE_VAX8600 9

#define CPU_SUBTYPE_VAX8650 10

#define CPU_SUBTYPE_VAX8800 11

#define CPU_SUBTYPE_VAX_ALL 0

#define CPU_SUBTYPE_X86_64_ALL 3

#define CPU_SUBTYPE_X86_ALL 3

#define CPU_SUBTYPE_X86_ARCH1 4

#define CPU_SUBTYPE_XEON 12

#define CPU_SUBTYPE_XEON_MP 28

#define CPU_THREADTYPE_INTEL_HTT 1

#define CPU_THREADTYPE_NONE 0

#define CPU_TYPE_ANY -1

#define CPU_TYPE_ARM 12

#define CPU_TYPE_HPPA 11

#define CPU_TYPE_I386 7

#define CPU_TYPE_I860 15

#define CPU_TYPE_MC680x0 6

#define CPU_TYPE_MC88000 13

#define CPU_TYPE_MC98000 10

#define CPU_TYPE_POWERPC 18

#define CPU_TYPE_POWERPC64 16777234

#define CPU_TYPE_SPARC 14

#define CPU_TYPE_VAX 1

#define CPU_TYPE_X86 7

#define CPU_TYPE_X86_64 16777223

#define CPUFAMILY_ARM_11 2415272152

#define CPUFAMILY_ARM_12 3172666089

#define CPUFAMILY_ARM_13 214503012

#define CPUFAMILY_ARM_14 2517073649

#define CPUFAMILY_ARM_9 3878847406

#define CPUFAMILY_ARM_SWIFT 506291073

#define CPUFAMILY_ARM_XSCALE 1404044789

#define CPUFAMILY_INTEL_6_13 2855483691

#define CPUFAMILY_INTEL_6_14 1943433984

#define CPUFAMILY_INTEL_6_15 1114597871

#define CPUFAMILY_INTEL_6_23 2028621756

#define CPUFAMILY_INTEL_6_26 1801080018

#define CPUFAMILY_INTEL_CORE 1943433984

#define CPUFAMILY_INTEL_CORE2 1114597871

#define CPUFAMILY_INTEL_HASWELL 280134364

#define CPUFAMILY_INTEL_IVYBRIDGE 526772277

#define CPUFAMILY_INTEL_MEROM 1114597871

#define CPUFAMILY_INTEL_NEHALEM 1801080018

#define CPUFAMILY_INTEL_PENRYN 2028621756

#define CPUFAMILY_INTEL_SANDYBRIDGE 1418770316

#define CPUFAMILY_INTEL_WESTMERE 1463508716

#define CPUFAMILY_INTEL_YONAH 1943433984

#define CPUFAMILY_POWERPC_G3 3471054153

#define CPUFAMILY_POWERPC_G4 2009171118

#define CPUFAMILY_POWERPC_G5 3983988906

#define CPUFAMILY_UNKNOWN 0

#define ALLOW_OBSOLETE_CARBON_MACMEMORY 0

#define ALLOW_OBSOLETE_CARBON_OSUTILS 0

#define kInvalidID 0

#define nil 0

typedef struct UnsignedWide UnsignedWide, *PUnsignedWide;

typedef struct UnsignedWide AbsoluteTime;

typedef ulong UInt32;

struct UnsignedWide {
    UInt32 lo;
    UInt32 hi;
};

typedef uchar Boolean;

typedef uchar UInt8;

typedef UInt8 Byte;

typedef ulong ByteCount;

typedef ulong ByteOffset;

typedef UInt8 * BytePtr;

typedef short CharParameter;

typedef struct wide wide, *Pwide;

typedef struct wide CompTimeValue;

typedef long SInt32;

struct wide {
    UInt32 lo;
    SInt32 hi;
};

typedef void * ConstLogicalAddress;

typedef uchar * ConstStr15Param;

typedef uchar * ConstStr255Param;

typedef uchar * ConstStr27Param;

typedef uchar * ConstStr31Param;

typedef uchar * ConstStr32Param;

typedef uchar * ConstStr63Param;

typedef ConstStr63Param ConstStrFileNameParam;

typedef uchar * ConstStringPtr;

typedef SInt32 Duration;

typedef enum enum_1702 {
    noErr=0
} enum_1702;

typedef enum enum_1703 {
    kNilOptions=0
} enum_1703;

typedef enum enum_1704 {
    kVariableLengthArray=1
} enum_1704;

typedef enum enum_1705 {
    kUnknownType=1061109567
} enum_1705;

typedef enum enum_1716 {
    bold=1,
    condense=32,
    extend=64,
    italic=2,
    normal=0,
    outline=8,
    shadow=16,
    underline=4
} enum_1716;

typedef enum enum_1722 {
    alphaStage=64,
    betaStage=96,
    developStage=32,
    finalStage=128
} enum_1722;

typedef struct Float80 Float80, *PFloat80;

typedef struct Float80 extended80;

typedef short SInt16;

typedef ushort UInt16;

struct Float80 {
    SInt16 exp;
    UInt16 man[4];
};

typedef struct Float96 Float96, *PFloat96;

typedef struct Float96 extended96;

struct Float96 {
    SInt16 exp[2];
    UInt16 man[4];
};

typedef SInt32 Fixed;

typedef struct FixedPoint FixedPoint, *PFixedPoint;

struct FixedPoint {
    Fixed x;
    Fixed y;
};

typedef Fixed * FixedPtr;

typedef struct FixedRect FixedRect, *PFixedRect;

struct FixedRect {
    Fixed left;
    Fixed top;
    Fixed right;
    Fixed bottom;
};

typedef float Float32;

typedef struct Float32Point Float32Point, *PFloat32Point;

struct Float32Point {
    Float32 x;
    Float32 y;
};

typedef double Float64;

typedef UInt32 FourCharCode;

typedef SInt32 Fract;

typedef Fract * FractPtr;

typedef char * Ptr;

typedef Ptr * Handle;

typedef ulong ItemCount;

typedef SInt16 LangCode;

typedef void * LogicalAddress;

typedef struct NumVersion NumVersion, *PNumVersion;

struct NumVersion {
    UInt8 nonRelRev;
    UInt8 stage;
    UInt8 minorAndBugRev;
    UInt8 majorRev;
};

typedef union NumVersionVariant NumVersionVariant, *PNumVersionVariant;

union NumVersionVariant {
    struct NumVersion parts;
    UInt32 whole;
};

typedef union NumVersionVariant * NumVersionVariantPtr;

typedef NumVersionVariantPtr * NumVersionVariantHandle;

typedef UInt32 OptionBits;

typedef SInt16 OSErr;

typedef SInt32 OSStatus;

typedef FourCharCode OSType;

typedef OSType * OSTypePtr;

typedef UInt32 PBVersion;

typedef void * PhysicalAddress;

typedef struct Point Point, *PPoint;

struct Point {
    short v;
    short h;
};

typedef struct Point * PointPtr;

typedef void * PRefCon;

typedef struct ProcessSerialNumber ProcessSerialNumber, *PProcessSerialNumber;

struct ProcessSerialNumber {
    UInt32 highLongOfPSN;
    UInt32 lowLongOfPSN;
};

typedef struct ProcessSerialNumber * ProcessSerialNumberPtr;

typedef long (* ProcPtr)(void);

typedef ProcPtr * ProcHandle;

typedef struct Rect Rect, *PRect;

struct Rect {
    short top;
    short left;
    short bottom;
    short right;
};

typedef struct Rect * RectPtr;

typedef SInt16 RegionCode;

typedef void (* Register68kProcPtr)(void);

typedef FourCharCode ResType;

typedef ResType * ResTypePtr;

typedef SInt16 ScriptCode;

typedef short ShortFixed;

typedef ShortFixed * ShortFixedPtr;

typedef char SInt8;

typedef SInt8 SignedByte;

typedef longlong SInt64;

typedef long Size;

typedef SInt32 SRefCon;

typedef uchar Str15[16];

typedef uchar Str255[256];

typedef uchar Str27[28];

typedef uchar Str31[32];

typedef uchar Str32[33];

typedef uchar Str32Field[34];

typedef uchar Str63[64];

typedef Str63 StrFileName;

typedef uchar * StringPtr;

typedef StringPtr * StringHandle;

typedef uchar Style;

typedef Style StyleField;

typedef short StyleParameter;

typedef struct TimeBaseRecord TimeBaseRecord, *PTimeBaseRecord;

typedef struct TimeBaseRecord * TimeBase;

struct TimeBaseRecord {
};

typedef struct TimeRecord TimeRecord, *PTimeRecord;

typedef SInt32 TimeScale;

struct TimeRecord {
    CompTimeValue value;
    TimeScale scale;
    TimeBase base;
};

typedef SInt32 TimeValue;

typedef SInt64 TimeValue64;

typedef ulonglong UInt64;

typedef UInt16 UniChar;

typedef ulong UniCharCount;

typedef UniCharCount * UniCharCountPtr;

typedef UniChar * UniCharPtr;

typedef UInt32 UnicodeScalarValue;

typedef ProcPtr UniversalProcPtr;

typedef UniversalProcPtr * UniversalProcHandle;

typedef UInt32 UnsignedFixed;

typedef UnsignedFixed * UnsignedFixedPtr;

typedef struct UnsignedWide * UnsignedWidePtr;

typedef UInt32 URefCon;

typedef UInt16 UTF16Char;

typedef UInt32 UTF32Char;

typedef UInt8 UTF8Char;

typedef struct VersRec VersRec, *PVersRec;

struct VersRec {
    struct NumVersion numericVersion;
    short countryCode;
    Str255 shortVersion;
    Str255 reserved;
};

typedef struct VersRec * VersRecPtr;

typedef VersRecPtr * VersRecHndl;

typedef SInt8 VHSelect;

typedef struct wide * WidePtr;

#define MAX_MBUF_CNAME 15

#define MCS_DISABLED 0

#define MCS_OFFLINE 3

#define MCS_ONLINE 1

#define MCS_PURGING 2

#define MT_ATABLE 7

#define MT_CONTROL 14

#define MT_DATA 1

#define MT_FREE 0

#define MT_FTABLE 11

#define MT_HEADER 2

#define MT_HTABLE 6

#define MT_IFADDR 13

#define MT_MAX 32

#define MT_OOBDATA 15

#define MT_PCB 4

#define MT_RIGHTS 12

#define MT_RTABLE 5

#define MT_SOCKET 3

#define MT_SONAME 8

#define MT_SOOPTS 10

#define MT_TAG 16

typedef struct mb_class_stat mb_class_stat, *Pmb_class_stat;

struct mb_class_stat {
    char mbcl_cname[16];
    u_int32_t mbcl_size;
    u_int32_t mbcl_total;
    u_int32_t mbcl_active;
    u_int32_t mbcl_infree;
    u_int32_t mbcl_slab_cnt;
    u_int32_t mbcl_pad;
    u_int64_t mbcl_alloc_cnt;
    u_int64_t mbcl_free_cnt;
    u_int64_t mbcl_notified;
    u_int64_t mbcl_purge_cnt;
    u_int64_t mbcl_fail_cnt;
    u_int32_t mbcl_ctotal;
    u_int32_t mbcl_mc_state;
    u_int32_t mbcl_mc_cached;
    u_int32_t mbcl_mc_waiter_cnt;
    u_int32_t mbcl_mc_wretry_cnt;
    u_int32_t mbcl_mc_nwretry_cnt;
    u_int64_t mbcl_reserved[4];
};

typedef struct mb_class_stat mb_class_stat_t;

typedef struct mb_stat mb_stat, *Pmb_stat;

struct mb_stat {
    u_int32_t mbs_cnt;
    u_int32_t mbs_pad;
    mb_class_stat_t mbs_class[1];
};

typedef struct mb_stat mb_stat_t;

typedef struct mbstat mbstat, *Pmbstat;

struct mbstat {
    u_int32_t m_mbufs;
    u_int32_t m_clusters;
    u_int32_t m_spare;
    u_int32_t m_clfree;
    u_int32_t m_drops;
    u_int32_t m_wait;
    u_int32_t m_drain;
    u_short m_mtypes[256];
    u_int32_t m_mcfail;
    u_int32_t m_mpfail;
    u_int32_t m_msize;
    u_int32_t m_mclbytes;
    u_int32_t m_minclsize;
    u_int32_t m_mlen;
    u_int32_t m_mhlen;
    u_int32_t m_bigclusters;
    u_int32_t m_bigclfree;
    u_int32_t m_bigmclbytes;
};

typedef struct ombstat ombstat, *Pombstat;

struct ombstat {
    u_int32_t m_mbufs;
    u_int32_t m_clusters;
    u_int32_t m_spare;
    u_int32_t m_clfree;
    u_int32_t m_drops;
    u_int32_t m_wait;
    u_int32_t m_drain;
    u_short m_mtypes[256];
    u_int32_t m_mcfail;
    u_int32_t m_mpfail;
    u_int32_t m_msize;
    u_int32_t m_mclbytes;
    u_int32_t m_minclsize;
    u_int32_t m_mlen;
    u_int32_t m_mhlen;
};

#define MD2_BLOCK 16

#define MD2_DIGEST_LENGTH 16

typedef struct MD2state_st MD2state_st, *PMD2state_st;

typedef struct MD2state_st MD2_CTX;

struct MD2state_st {
    uint num;
    uchar data[16];
    uint cksm[16];
    uint state[16];
};

#define MD4_CBLOCK 64

#define MD4_DIGEST_LENGTH 16

#define MD4_LBLOCK 16

typedef struct MD4state_st MD4state_st, *PMD4state_st;

typedef struct MD4state_st MD4_CTX;

struct MD4state_st {
    uint A;
    uint B;
    uint C;
    uint D;
    uint Nl;
    uint Nh;
    uint data[16];
    uint num;
};

#define MD5_CBLOCK 64

#define MD5_DIGEST_LENGTH 16

#define MD5_LBLOCK 16

typedef struct MD5state_st MD5state_st, *PMD5state_st;

typedef struct MD5state_st MD5_CTX;

struct MD5state_st {
    uint A;
    uint B;
    uint C;
    uint D;
    uint Nl;
    uint Nh;
    uint data[16];
    uint num;
};

#define ID_TYPE_GID 1

#define ID_TYPE_GROUP_NFS 7

#define ID_TYPE_GROUPNAME 5

#define ID_TYPE_GSS_EXPORT_NAME 10

#define ID_TYPE_KERBEROS 12

#define ID_TYPE_SID 3

#define ID_TYPE_UID 0

#define ID_TYPE_USER_NFS 8

#define ID_TYPE_USERNAME 4

#define ID_TYPE_UUID 6

#define ID_TYPE_X509_DN 11

#define MAP_MEM_COPYBACK 1

#define MAP_MEM_INNERWBACK 5

#define MAP_MEM_IO 2

#define MAP_MEM_NAMED_CREATE 131072

#define MAP_MEM_NAMED_REUSE 524288

#define MAP_MEM_NOOP 0

#define MAP_MEM_ONLY 65536

#define MAP_MEM_PURGABLE 262144

#define MAP_MEM_USE_DATA_ADDR 1048576

#define MAP_MEM_VM_COPY 2097152

#define MAP_MEM_VM_SHARE 4194304

#define MAP_MEM_WCOMB 4

#define MAP_MEM_WTHRU 3

#define MEMORY_OBJECT_ATTRIBUTE_INFO 14

#define MEMORY_OBJECT_BEHAVIOR_INFO 15

#define MEMORY_OBJECT_CONTROL_NULL 0

#define MEMORY_OBJECT_COPY_CALL 1

#define MEMORY_OBJECT_COPY_DELAY 2

#define MEMORY_OBJECT_COPY_INVALID 5

#define MEMORY_OBJECT_COPY_NONE 0

#define MEMORY_OBJECT_COPY_SYMMETRIC 4

#define MEMORY_OBJECT_COPY_SYNC 8

#define MEMORY_OBJECT_COPY_TEMPORARY 3

#define MEMORY_OBJECT_DATA_FLUSH 1

#define MEMORY_OBJECT_DATA_FLUSH_ALL 64

#define MEMORY_OBJECT_DATA_NO_CHANGE 2

#define MEMORY_OBJECT_DATA_PURGE 4

#define MEMORY_OBJECT_DATA_SYNC 16

#define MEMORY_OBJECT_DEFAULT_NULL 0

#define MEMORY_OBJECT_INFO_MAX 1024

#define MEMORY_OBJECT_IO_SYNC 32

#define MEMORY_OBJECT_NAME_NULL 0

#define MEMORY_OBJECT_NULL 0

#define MEMORY_OBJECT_PERFORMANCE_INFO 11

#define MEMORY_OBJECT_RELEASE_NO_OP 4

#define MEMORY_OBJECT_RESPECT_CACHE 2

#define MEMORY_OBJECT_RETURN_ALL 2

#define MEMORY_OBJECT_RETURN_ANYTHING 3

#define MEMORY_OBJECT_RETURN_DIRTY 1

#define MEMORY_OBJECT_RETURN_NONE 0

#define MEMORY_OBJECT_TERMINATE_IDLE 1

typedef mach_port_t memory_object_t;

typedef memory_object_t * memory_object_array_t;

typedef struct memory_object_attr_info memory_object_attr_info, *Pmemory_object_attr_info;

typedef int memory_object_copy_strategy_t;

struct memory_object_attr_info {
    memory_object_copy_strategy_t copy_strategy;
    memory_object_cluster_size_t cluster_size;
    boolean_t may_cache_object;
    boolean_t temporary;
};

typedef struct memory_object_attr_info memory_object_attr_info_data_t;

typedef struct memory_object_attr_info * memory_object_attr_info_t;

typedef struct memory_object_behave_info memory_object_behave_info, *Pmemory_object_behave_info;

struct memory_object_behave_info {
    memory_object_copy_strategy_t copy_strategy;
    boolean_t temporary;
    boolean_t invalidate;
    boolean_t silent_overwrite;
    boolean_t advisory_pageout;
};

typedef struct memory_object_behave_info memory_object_behave_info_data_t;

typedef struct memory_object_behave_info * memory_object_behave_info_t;

typedef mach_port_t memory_object_control_t;

typedef natural_t * memory_object_fault_info_t;

typedef int memory_object_flavor_t;

typedef int memory_object_info_data_t[1024];

typedef int * memory_object_info_t;

typedef mach_port_t memory_object_name_t;

typedef struct memory_object_perf_info memory_object_perf_info, *Pmemory_object_perf_info;

struct memory_object_perf_info {
    memory_object_cluster_size_t cluster_size;
    boolean_t may_cache;
};

typedef struct memory_object_perf_info memory_object_perf_info_data_t;

typedef struct memory_object_perf_info * memory_object_perf_info_t;

typedef int memory_object_return_t;

typedef ulonglong vm_object_id_t;

#define MAX_COMMAND 905

#define MAX_MENU_COMMAND 778

#define MIN_MENU_COMMAND 778

#define O_IGNORECASE 8

#define O_NONCYCLIC 32

#define O_ONEVALUE 1

#define O_ROWMAJOR 4

#define O_SELECTABLE 1

#define O_SHOWDESC 2

#define O_SHOWMATCH 16

#define REQ_BACK_PATTERN 792

#define REQ_CLEAR_PATTERN 791

#define REQ_DOWN_ITEM 781

#define REQ_FIRST_ITEM 786

#define REQ_LAST_ITEM 787

#define REQ_LEFT_ITEM 778

#define REQ_NEXT_ITEM 788

#define REQ_NEXT_MATCH 793

#define REQ_PREV_ITEM 789

#define REQ_PREV_MATCH 794

#define REQ_RIGHT_ITEM 779

#define REQ_SCR_DLINE 783

#define REQ_SCR_DPAGE 784

#define REQ_SCR_ULINE 782

#define REQ_SCR_UPAGE 785

#define REQ_TOGGLE_ITEM 790

#define REQ_UP_ITEM 780

typedef struct tagITEM tagITEM, *PtagITEM;

typedef struct tagITEM ITEM;

typedef struct TEXT TEXT, *PTEXT;

typedef struct tagMENU tagMENU, *PtagMENU;

typedef int Item_Options;

typedef void (* Menu_Hook)(struct tagMENU *);

typedef int Menu_Options;

struct TEXT {
    char * str;
    ushort length;
};

struct tagITEM {
    struct TEXT name;
    struct TEXT description;
    struct tagMENU * imenu;
    void * userptr;
    Item_Options opt;
    short index;
    short y;
    short x;
    BOOL value;
    struct tagITEM * left;
    struct tagITEM * right;
    struct tagITEM * up;
    struct tagITEM * down;
};

struct tagMENU {
    short height;
    short width;
    short rows;
    short cols;
    short frows;
    short fcols;
    short arows;
    short namelen;
    short desclen;
    short marklen;
    short itemlen;
    short spc_desc;
    short spc_cols;
    short spc_rows;
    char * pattern;
    short pindex;
    WINDOW * win;
    WINDOW * sub;
    WINDOW * userwin;
    WINDOW * usersub;
    ITEM * * items;
    short nitems;
    ITEM * curitem;
    short toprow;
    chtype fore;
    chtype back;
    chtype grey;
    uchar pad;
    Menu_Hook menuinit;
    Menu_Hook menuterm;
    Menu_Hook iteminit;
    Menu_Hook itemterm;
    void * userptr;
    char * mark;
    Menu_Options opt;
    ushort status;
};

typedef struct tagMENU MENU;

#define MACH_MSG_ALLOCATE 2

#define MACH_MSG_BODY_NULL 0

#define MACH_MSG_DESCRIPTOR_NULL 0

#define MACH_MSG_IPC_KERNEL 2048

#define MACH_MSG_IPC_SPACE 8192

#define MACH_MSG_MASK 15872

#define MACH_MSG_NULL 0

#define MACH_MSG_OOL_DESCRIPTOR 1

#define MACH_MSG_OOL_PORTS_DESCRIPTOR 2

#define MACH_MSG_OOL_VOLATILE_DESCRIPTOR 3

#define MACH_MSG_OPTION_NONE 0

#define MACH_MSG_OVERWRITE 3

#define MACH_MSG_PHYSICAL_COPY 0

#define MACH_MSG_PORT_DESCRIPTOR 0

#define MACH_MSG_SIZE_MAX -1

#define MACH_MSG_SIZE_NULL 0

#define MACH_MSG_SIZE_RELIABLE 262144

#define MACH_MSG_SUCCESS 0

#define MACH_MSG_TIMEOUT_NONE 0

#define MACH_MSG_TRAILER_FORMAT_0 0

#define MACH_MSG_TYPE_COPY_RECEIVE 22

#define MACH_MSG_TYPE_COPY_SEND 19

#define MACH_MSG_TYPE_LAST 22

#define MACH_MSG_TYPE_MAKE_SEND 20

#define MACH_MSG_TYPE_MAKE_SEND_ONCE 21

#define MACH_MSG_TYPE_MOVE_RECEIVE 16

#define MACH_MSG_TYPE_MOVE_SEND 17

#define MACH_MSG_TYPE_MOVE_SEND_ONCE 18

#define MACH_MSG_TYPE_POLYMORPHIC -1

#define MACH_MSG_TYPE_PORT_NAME 15

#define MACH_MSG_TYPE_PORT_NONE 0

#define MACH_MSG_TYPE_PORT_RECEIVE 16

#define MACH_MSG_TYPE_PORT_SEND 17

#define MACH_MSG_TYPE_PORT_SEND_ONCE 18

#define MACH_MSG_VIRTUAL_COPY 1

#define MACH_MSG_VM_KERNEL 1024

#define MACH_MSG_VM_SPACE 4096

#define MACH_MSGH_BITS_CIRCULAR 1073741824

#define MACH_MSGH_BITS_COMPLEX 2147483648

#define MACH_MSGH_BITS_IMPHOLDASRT 268435456

#define MACH_MSGH_BITS_LOCAL_MASK 65280

#define MACH_MSGH_BITS_PORTS_MASK 65535

#define MACH_MSGH_BITS_RAISEIMP 536870912

#define MACH_MSGH_BITS_REMOTE_MASK 255

#define MACH_MSGH_BITS_USED 4026597375

#define MACH_MSGH_BITS_USER 2147549183

#define MACH_MSGH_BITS_ZERO 0

#define MACH_MSGH_KIND_NORMAL 0

#define MACH_MSGH_KIND_NOTIFICATION 1

#define MACH_RCV_BODY_ERROR 268451852

#define MACH_RCV_HEADER_ERROR 268451851

#define MACH_RCV_IN_PROGRESS 268451841

#define MACH_RCV_IN_PROGRESS_TIMED 268451857

#define MACH_RCV_IN_SET 268451850

#define MACH_RCV_INTERRUPT 1024

#define MACH_RCV_INTERRUPTED 268451845

#define MACH_RCV_INVALID_DATA 268451848

#define MACH_RCV_INVALID_NAME 268451842

#define MACH_RCV_INVALID_NOTIFY 268451847

#define MACH_RCV_INVALID_TRAILER 268451855

#define MACH_RCV_INVALID_TYPE 268451853

#define MACH_RCV_LARGE 4

#define MACH_RCV_LARGE_IDENTITY 8

#define MACH_RCV_MSG 2

#define MACH_RCV_NOTIFY 512

#define MACH_RCV_OVERWRITE 4096

#define MACH_RCV_PORT_CHANGED 268451846

#define MACH_RCV_PORT_DIED 268451849

#define MACH_RCV_SCATTER_SMALL 268451854

#define MACH_RCV_TIMED_OUT 268451843

#define MACH_RCV_TIMEOUT 256

#define MACH_RCV_TOO_LARGE 268451844

#define MACH_RCV_TRAILER_AUDIT 3

#define MACH_RCV_TRAILER_AV 7

#define MACH_RCV_TRAILER_CTX 4

#define MACH_RCV_TRAILER_LABELS 8

#define MACH_RCV_TRAILER_MASK 251658240

#define MACH_RCV_TRAILER_NULL 0

#define MACH_RCV_TRAILER_SENDER 2

#define MACH_RCV_TRAILER_SEQNO 1

#define MACH_SEND_ALWAYS 65536

#define MACH_SEND_IMPORTANCE 524288

#define MACH_SEND_IN_PROGRESS 268435457

#define MACH_SEND_INTERRUPT 64

#define MACH_SEND_INTERRUPTED 268435463

#define MACH_SEND_INVALID_DATA 268435458

#define MACH_SEND_INVALID_DEST 268435459

#define MACH_SEND_INVALID_HEADER 268435472

#define MACH_SEND_INVALID_MEMORY 268435468

#define MACH_SEND_INVALID_NOTIFY 268435467

#define MACH_SEND_INVALID_REPLY 268435465

#define MACH_SEND_INVALID_RIGHT 268435466

#define MACH_SEND_INVALID_RT_OOL_SIZE 268435477

#define MACH_SEND_INVALID_TRAILER 268435473

#define MACH_SEND_INVALID_TYPE 268435471

#define MACH_SEND_MSG 1

#define MACH_SEND_MSG_TOO_SMALL 268435464

#define MACH_SEND_NO_BUFFER 268435469

#define MACH_SEND_NOIMPORTANCE 262144

#define MACH_SEND_NOTIFY 128

#define MACH_SEND_TIMED_OUT 268435460

#define MACH_SEND_TIMEOUT 16

#define MACH_SEND_TOO_LARGE 268435470

#define MACH_SEND_TRAILER 131072

typedef union anon__struct_618_bitfield_1 anon__struct_618_bitfield_1, *Panon__struct_618_bitfield_1;

union anon__struct_618_bitfield_1 {
    uint pad3:24; /* : bits 0-23 */
};

typedef union anon__struct_618_bitfield_2 anon__struct_618_bitfield_2, *Panon__struct_618_bitfield_2;

union anon__struct_618_bitfield_2 {
    mach_msg_descriptor_type_t type:8; /* : bits 0-7 */
};

typedef union anon__struct_620_bitfield_1 anon__struct_620_bitfield_1, *Panon__struct_620_bitfield_1;

union anon__struct_620_bitfield_1 {
    boolean_t deallocate:8; /* : bits 0-7 */
};

typedef union anon__struct_620_bitfield_2 anon__struct_620_bitfield_2, *Panon__struct_620_bitfield_2;

union anon__struct_620_bitfield_2 {
    mach_msg_copy_options_t copy:8; /* : bits 0-7 */
};

typedef union anon__struct_620_bitfield_3 anon__struct_620_bitfield_3, *Panon__struct_620_bitfield_3;

union anon__struct_620_bitfield_3 {
    uint pad1:8; /* : bits 0-7 */
};

typedef union anon__struct_620_bitfield_4 anon__struct_620_bitfield_4, *Panon__struct_620_bitfield_4;

union anon__struct_620_bitfield_4 {
    mach_msg_descriptor_type_t type:8; /* : bits 0-7 */
};

typedef union anon__struct_621_bitfield_1 anon__struct_621_bitfield_1, *Panon__struct_621_bitfield_1;

union anon__struct_621_bitfield_1 {
    boolean_t deallocate:8; /* : bits 0-7 */
};

typedef union anon__struct_621_bitfield_2 anon__struct_621_bitfield_2, *Panon__struct_621_bitfield_2;

union anon__struct_621_bitfield_2 {
    mach_msg_copy_options_t copy:8; /* : bits 0-7 */
};

typedef union anon__struct_621_bitfield_3 anon__struct_621_bitfield_3, *Panon__struct_621_bitfield_3;

union anon__struct_621_bitfield_3 {
    uint pad1:8; /* : bits 0-7 */
};

typedef union anon__struct_621_bitfield_4 anon__struct_621_bitfield_4, *Panon__struct_621_bitfield_4;

union anon__struct_621_bitfield_4 {
    mach_msg_descriptor_type_t type:8; /* : bits 0-7 */
};

typedef union anon__struct_623_bitfield_1 anon__struct_623_bitfield_1, *Panon__struct_623_bitfield_1;

union anon__struct_623_bitfield_1 {
    boolean_t deallocate:8; /* : bits 0-7 */
};

typedef union anon__struct_623_bitfield_2 anon__struct_623_bitfield_2, *Panon__struct_623_bitfield_2;

union anon__struct_623_bitfield_2 {
    mach_msg_copy_options_t copy:8; /* : bits 0-7 */
};

typedef union anon__struct_623_bitfield_3 anon__struct_623_bitfield_3, *Panon__struct_623_bitfield_3;

union anon__struct_623_bitfield_3 {
    mach_msg_type_name_t disposition:8; /* : bits 0-7 */
};

typedef union anon__struct_623_bitfield_4 anon__struct_623_bitfield_4, *Panon__struct_623_bitfield_4;

union anon__struct_623_bitfield_4 {
    mach_msg_descriptor_type_t type:8; /* : bits 0-7 */
};

typedef union anon__struct_624_bitfield_1 anon__struct_624_bitfield_1, *Panon__struct_624_bitfield_1;

union anon__struct_624_bitfield_1 {
    boolean_t deallocate:8; /* : bits 0-7 */
};

typedef union anon__struct_624_bitfield_2 anon__struct_624_bitfield_2, *Panon__struct_624_bitfield_2;

union anon__struct_624_bitfield_2 {
    mach_msg_copy_options_t copy:8; /* : bits 0-7 */
};

typedef union anon__struct_624_bitfield_3 anon__struct_624_bitfield_3, *Panon__struct_624_bitfield_3;

union anon__struct_624_bitfield_3 {
    mach_msg_type_name_t disposition:8; /* : bits 0-7 */
};

typedef union anon__struct_624_bitfield_4 anon__struct_624_bitfield_4, *Panon__struct_624_bitfield_4;

union anon__struct_624_bitfield_4 {
    mach_msg_descriptor_type_t type:8; /* : bits 0-7 */
};

typedef struct mach_msg_audit_trailer_t mach_msg_audit_trailer_t, *Pmach_msg_audit_trailer_t;

typedef uint mach_msg_trailer_size_t;

struct mach_msg_audit_trailer_t {
    mach_msg_trailer_type_t msgh_trailer_type;
    mach_msg_trailer_size_t msgh_trailer_size;
    mach_port_seqno_t msgh_seqno;
    struct security_token_t msgh_sender;
    struct audit_token_t msgh_audit;
};

typedef struct mach_msg_base_t mach_msg_base_t, *Pmach_msg_base_t;

struct mach_msg_base_t {
    struct mach_msg_header_t header;
    struct mach_msg_body_t body;
};

typedef struct mach_msg_context_trailer_t mach_msg_context_trailer_t, *Pmach_msg_context_trailer_t;

struct mach_msg_context_trailer_t {
    mach_msg_trailer_type_t msgh_trailer_type;
    mach_msg_trailer_size_t msgh_trailer_size;
    mach_port_seqno_t msgh_seqno;
    struct security_token_t msgh_sender;
    struct audit_token_t msgh_audit;
    mach_port_context_t msgh_context;
};

typedef union mach_msg_descriptor_t mach_msg_descriptor_t, *Pmach_msg_descriptor_t;

typedef struct mach_msg_type_descriptor_t mach_msg_type_descriptor_t, *Pmach_msg_type_descriptor_t;

struct mach_msg_type_descriptor_t {
    natural_t pad1;
    mach_msg_size_t pad2;
    union anon__struct_618_bitfield_1 field_0x8;
    union anon__struct_618_bitfield_2 field_0xc;
};

union mach_msg_descriptor_t {
    struct mach_msg_port_descriptor_t port;
    struct mach_msg_ool_descriptor_t out_of_line;
    struct mach_msg_ool_ports_descriptor_t ool_ports;
    struct mach_msg_type_descriptor_t type;
};

typedef struct mach_msg_empty_rcv_t mach_msg_empty_rcv_t, *Pmach_msg_empty_rcv_t;

typedef struct mach_msg_trailer_t mach_msg_trailer_t, *Pmach_msg_trailer_t;

struct mach_msg_trailer_t {
    mach_msg_trailer_type_t msgh_trailer_type;
    mach_msg_trailer_size_t msgh_trailer_size;
};

struct mach_msg_empty_rcv_t {
    struct mach_msg_header_t header;
    struct mach_msg_trailer_t trailer;
};

typedef struct mach_msg_empty_send_t mach_msg_empty_send_t, *Pmach_msg_empty_send_t;

struct mach_msg_empty_send_t {
    struct mach_msg_header_t header;
};

typedef union mach_msg_empty_t mach_msg_empty_t, *Pmach_msg_empty_t;

union mach_msg_empty_t {
    struct mach_msg_empty_send_t send;
    struct mach_msg_empty_rcv_t rcv;
};

typedef struct mach_msg_security_trailer_t mach_msg_security_trailer_t, *Pmach_msg_security_trailer_t;

typedef struct mach_msg_security_trailer_t mach_msg_format_0_trailer_t;

struct mach_msg_security_trailer_t {
    mach_msg_trailer_type_t msgh_trailer_type;
    mach_msg_trailer_size_t msgh_trailer_size;
    mach_port_seqno_t msgh_seqno;
    struct security_token_t msgh_sender;
};

typedef struct mach_msg_mac_trailer_t mach_msg_mac_trailer_t, *Pmach_msg_mac_trailer_t;

typedef struct msg_labels_t msg_labels_t, *Pmsg_labels_t;

struct msg_labels_t {
    mach_port_name_t sender;
};

struct mach_msg_mac_trailer_t {
    mach_msg_trailer_type_t msgh_trailer_type;
    mach_msg_trailer_size_t msgh_trailer_size;
    mach_port_seqno_t msgh_seqno;
    struct security_token_t msgh_sender;
    struct audit_token_t msgh_audit;
    mach_port_context_t msgh_context;
    int msgh_ad;
    struct msg_labels_t msgh_labels;
};

typedef struct mach_msg_mac_trailer_t mach_msg_max_trailer_t;

typedef struct mach_msg_ool_descriptor32_t mach_msg_ool_descriptor32_t, *Pmach_msg_ool_descriptor32_t;

struct mach_msg_ool_descriptor32_t {
    uint32_t address;
    mach_msg_size_t size;
    union anon__struct_620_bitfield_1 field_0x8;
    union anon__struct_620_bitfield_2 field_0xc;
    union anon__struct_620_bitfield_3 field_0x10;
    union anon__struct_620_bitfield_4 field_0x14;
};

typedef struct mach_msg_ool_descriptor64_t mach_msg_ool_descriptor64_t, *Pmach_msg_ool_descriptor64_t;

struct mach_msg_ool_descriptor64_t {
    uint64_t address;
    union anon__struct_621_bitfield_1 field_0x8;
    union anon__struct_621_bitfield_2 field_0xc;
    union anon__struct_621_bitfield_3 field_0x10;
    union anon__struct_621_bitfield_4 field_0x14;
    mach_msg_size_t size;
};

typedef struct mach_msg_ool_ports_descriptor32_t mach_msg_ool_ports_descriptor32_t, *Pmach_msg_ool_ports_descriptor32_t;

struct mach_msg_ool_ports_descriptor32_t {
    uint32_t address;
    mach_msg_size_t count;
    union anon__struct_623_bitfield_1 field_0x8;
    union anon__struct_623_bitfield_2 field_0xc;
    union anon__struct_623_bitfield_3 field_0x10;
    union anon__struct_623_bitfield_4 field_0x14;
};

typedef struct mach_msg_ool_ports_descriptor64_t mach_msg_ool_ports_descriptor64_t, *Pmach_msg_ool_ports_descriptor64_t;

struct mach_msg_ool_ports_descriptor64_t {
    uint64_t address;
    union anon__struct_624_bitfield_1 field_0x8;
    union anon__struct_624_bitfield_2 field_0xc;
    union anon__struct_624_bitfield_3 field_0x10;
    union anon__struct_624_bitfield_4 field_0x14;
    mach_msg_size_t count;
};

typedef integer_t mach_msg_option_t;

typedef integer_t mach_msg_options_t;

typedef kern_return_t mach_msg_return_t;

typedef struct mach_msg_seqno_trailer_t mach_msg_seqno_trailer_t, *Pmach_msg_seqno_trailer_t;

struct mach_msg_seqno_trailer_t {
    mach_msg_trailer_type_t msgh_trailer_type;
    mach_msg_trailer_size_t msgh_trailer_size;
    mach_port_seqno_t msgh_seqno;
};

typedef natural_t mach_msg_timeout_t;

typedef char * mach_msg_trailer_info_t;

typedef natural_t mach_msg_type_size_t;

#define __MigPackStructs 1

#define __MigTypeCheck 1

#define MIG_ROUTINE_ARG_DESCRIPTOR_NULL 0

#define MIG_ROUTINE_DESCRIPTOR_NULL 0

#define MIG_SUBSYSTEM_NULL 0

typedef kern_return_t (* mig_impl_routine_t)(void);

typedef struct mach_msg_type_descriptor_t * mig_routine_arg_descriptor_t;

typedef struct routine_descriptor routine_descriptor, *Proutine_descriptor;

typedef struct routine_descriptor mig_routine_descriptor;

typedef void (* mig_stub_routine_t)(struct mach_msg_header_t *, struct mach_msg_header_t *);

typedef struct mach_msg_type_descriptor_t * routine_arg_descriptor_t;

struct routine_descriptor {
    mig_impl_routine_t impl_routine;
    mig_stub_routine_t stub_routine;
    uint argc;
    uint descr_count;
    routine_arg_descriptor_t arg_descr;
    uint max_reply_msg;
};

typedef mig_routine_descriptor * mig_routine_descriptor_t;

typedef mig_stub_routine_t mig_routine_t;

typedef mig_routine_t (* mig_server_routine_t)(struct mach_msg_header_t *);

typedef struct mig_subsystem mig_subsystem, *Pmig_subsystem;

struct mig_subsystem {
    mig_server_routine_t server;
    mach_msg_id_t start;
    mach_msg_id_t end;
    mach_msg_size_t maxsize;
    vm_address_t reserved;
    mig_routine_descriptor routine[1];
};

typedef struct mig_subsystem * mig_subsystem_t;

typedef struct mig_symtab mig_symtab, *Pmig_symtab;

struct mig_symtab {
    char * ms_routine_name;
    int ms_routine_number;
    void (* ms_routine)(void);
};

typedef struct mig_symtab mig_symtab_t;

typedef struct mach_msg_type_descriptor_t routine_arg_descriptor;

typedef struct routine_descriptor * routine_descriptor_t;

#define MIG_ARRAY_TOO_LARGE -307

#define MIG_BAD_ARGUMENTS -304

#define MIG_BAD_ID -303

#define MIG_EXCEPTION -306

#define MIG_NO_REPLY -305

#define MIG_REMOTE_ERROR -302

#define MIG_REPLY_MISMATCH -301

#define MIG_SERVER_DIED -308

#define MIG_TRAILER_ERROR -309

#define MIG_TYPE_ERROR -300

typedef struct mig_reply_error_t mig_reply_error_t, *Pmig_reply_error_t;

struct mig_reply_error_t {
    struct mach_msg_header_t Head;
    struct NDR_record_t NDR;
    kern_return_t RetCode;
};

#define FHSIZE 32

#define MFSNAMELEN 15

#define MFSTYPENAMELEN 16

#define MNAMELEN 1024

#define MNT_ASYNC 64

#define MNT_AUTOMOUNTED 4194304

#define MNT_CMDFLAGS 983040

#define MNT_CPROTECT 128

#define MNT_DEFWRITE 33554432

#define MNT_DONTBROWSE 1048576

#define MNT_DOVOLFS 32768

#define MNT_DWAIT 4

#define MNT_EXPORTED 256

#define MNT_FORCE 524288

#define MNT_IGNORE_OWNERSHIP 2097152

#define MNT_JOURNALED 8388608

#define MNT_LOCAL 4096

#define MNT_MULTILABEL 67108864

#define MNT_NOATIME 268435456

#define MNT_NOBLOCK 131072

#define MNT_NODEV 16

#define MNT_NOEXEC 4

#define MNT_NOSUID 8

#define MNT_NOUSERXATTR 16777216

#define MNT_NOWAIT 2

#define MNT_QUARANTINE 1024

#define MNT_QUOTA 8192

#define MNT_RDONLY 1

#define MNT_RELOAD 262144

#define MNT_ROOTFS 16384

#define MNT_SYNCHRONOUS 2

#define MNT_UNION 32

#define MNT_UNKNOWNPERMISSIONS 2097152

#define MNT_UPDATE 65536

#define MNT_WAIT 1

#define MNTNAMLEN 255

#define MNTPATHLEN 1024

#define MOUNTPROC_DUMP 2

#define MOUNTPROC_EXPORT 5

#define MOUNTPROC_EXPORTALL 6

#define MOUNTPROC_MNT 1

#define MOUNTPROC_NULL 0

#define MOUNTPROC_UMNT 3

#define MOUNTPROC_UMNTALL 4

#define MOUNTPROG 100005

#define MOUNTVERS 1

#define NFS_MAX_FH_SIZE 128

#define NFSV2_MAX_FH_SIZE 32

#define NFSV3_MAX_FH_SIZE 64

#define NFSV4_MAX_FH_SIZE 128

#define VFS_CONF 2

#define VFS_CTL_DISC 65544

#define VFS_CTL_NEWADDR 65540

#define VFS_CTL_NOLOCKS 65542

#define VFS_CTL_QUERY 65539

#define VFS_CTL_SADDR 65543

#define VFS_CTL_SERVERINFO 65545

#define VFS_CTL_STATFS 65537

#define VFS_CTL_TIMEO 65541

#define VFS_CTL_UMOUNT 65538

#define VFS_CTL_VERS1 1

#define VFS_GENERIC 0

#define VFS_MAXTYPENUM 1

#define VFS_NUMMNTOPS 1

#define VFS_SET_PACKAGE_EXTS 3

#define VQ_ASSIST 64

#define VQ_DEAD 32

#define VQ_FLAG1000 4096

#define VQ_FLAG2000 8192

#define VQ_FLAG4000 16384

#define VQ_FLAG8000 32768

#define VQ_LOWDISK 4

#define VQ_MOUNT 8

#define VQ_NEEDAUTH 2

#define VQ_NOTRESP 1

#define VQ_NOTRESPLOCK 128

#define VQ_SERVEREVENT 2048

#define VQ_SYNCEVENT 1024

#define VQ_UNMOUNT 16

#define VQ_UPDATE 256

#define VQ_VERYLOWDISK 512

typedef union _union_3517 _union_3517, *P_union_3517;

typedef struct fhandle.conflict fhandle.conflict, *Pfhandle.conflict;

struct fhandle.conflict {
    int fh_len;
    uchar fh_data[128];
};

union _union_3517 {
    struct fhandle.conflict fhs_fhandle;
};

typedef char * dirpath;

typedef struct exportnode exportnode, *Pexportnode;

typedef struct groupnode groupnode, *Pgroupnode;

typedef struct groupnode * groups;

typedef struct exportnode * exports;

typedef char * name;

struct groupnode {
    name gr_name;
    groups gr_next;
};

struct exportnode {
    dirpath ex_dir;
    groups ex_groups;
    exports ex_next;
};

typedef char fhandle[32];

typedef fhandle fhandle_t;

typedef struct fhstatus fhstatus, *Pfhstatus;

struct fhstatus {
    u_int fhs_status;
    union _union_3517 fhstatus_u;
};

typedef struct fsid fsid, *Pfsid;

struct fsid {
    int32_t val[2];
};

typedef struct fsid fsid_t;

typedef struct mount mount, *Pmount;

struct mount {
};

typedef struct mount * mount_t;

typedef struct mountbody mountbody, *Pmountbody;

typedef struct mountbody * mountlist;

struct mountbody {
    name ml_hostname;
    dirpath ml_directory;
    mountlist ml_next;
};

typedef struct statfs statfs, *Pstatfs;

struct statfs {
    uint32_t f_bsize;
    int32_t f_iosize;
    uint64_t f_blocks;
    uint64_t f_bfree;
    uint64_t f_bavail;
    uint64_t f_files;
    uint64_t f_ffree;
    fsid_t f_fsid;
    uid_t f_owner;
    uint32_t f_type;
    uint32_t f_flags;
    uint32_t f_fssubtype;
    char f_fstypename[16];
    char f_mntonname[1024];
    char f_mntfromname[1024];
    uint32_t f_reserved[8];
};

typedef struct statfs64 statfs64, *Pstatfs64;

struct statfs64 {
    uint32_t f_bsize;
    int32_t f_iosize;
    uint64_t f_blocks;
    uint64_t f_bfree;
    uint64_t f_bavail;
    uint64_t f_files;
    uint64_t f_ffree;
    fsid_t f_fsid;
    uid_t f_owner;
    uint32_t f_type;
    uint32_t f_flags;
    uint32_t f_fssubtype;
    char f_fstypename[16];
    char f_mntonname[1024];
    char f_mntfromname[1024];
    uint32_t f_reserved[8];
};

typedef struct vfs_server vfs_server, *Pvfs_server;

struct vfs_server {
    int32_t vs_minutes;
    u_int8_t vs_server_name[768];
};

typedef struct vfsconf vfsconf, *Pvfsconf;

struct vfsconf {
    uint32_t vfc_reserved1;
    char vfc_name[15];
    int vfc_typenum;
    int vfc_refcount;
    int vfc_flags;
    uint32_t vfc_reserved2;
    uint32_t vfc_reserved3;
};

typedef struct vfsidctl vfsidctl, *Pvfsidctl;

struct vfsidctl {
    int vc_vers;
    fsid_t vc_fsid;
    void * vc_ptr;
    size_t vc_len;
    u_int32_t vc_spare[12];
};

typedef struct vfsquery vfsquery, *Pvfsquery;

struct vfsquery {
    u_int32_t vq_flags;
    u_int32_t vq_spare[31];
};

typedef struct vfsstatfs vfsstatfs, *Pvfsstatfs;

struct vfsstatfs {
    uint32_t f_bsize;
    size_t f_iosize;
    uint64_t f_blocks;
    uint64_t f_bfree;
    uint64_t f_bavail;
    uint64_t f_bused;
    uint64_t f_files;
    uint64_t f_ffree;
    fsid_t f_fsid;
    uid_t f_owner;
    uint64_t f_flags;
    char f_fstypename[16];
    char f_mntonname[1024];
    char f_mntfromname[1024];
    uint32_t f_fssubtype;
    void * f_reserved[2];
};

typedef struct vnode * vnode_t;

#define MSG_NOERROR 4096

typedef struct __msqid_ds_new __msqid_ds_new, *P__msqid_ds_new;

typedef ulong msglen_t;

typedef ulong msgqnum_t;

struct __msqid_ds_new {
    struct ipc_perm msg_perm;
    __int32_t msg_first;
    __int32_t msg_last;
    msglen_t msg_cbytes;
    msgqnum_t msg_qnum;
    msglen_t msg_qbytes;
    pid_t msg_lspid;
    pid_t msg_lrpid;
    time_t msg_stime;
    __int32_t msg_pad1;
    time_t msg_rtime;
    __int32_t msg_pad2;
    time_t msg_ctime;
    __int32_t msg_pad3;
    __int32_t msg_pad4[4];
};

typedef struct msg msg, *Pmsg;

typedef struct label label, *Plabel;

struct msg {
    struct msg * msg_next;
    long msg_type;
    ushort msg_ts;
    short msg_spot;
    struct label * label;
};

struct label {
};

typedef struct msginfo msginfo, *Pmsginfo;

struct msginfo {
    int msgmax;
    int msgmni;
    int msgmnb;
    int msgtql;
    int msgssz;
    int msgseg;
};

typedef struct mymsg mymsg, *Pmymsg;

struct mymsg {
    long mtype;
    char mtext[1];
};

#define MAX_MSG_BSIZE 1048576

#define MSG_MAGIC 405601

typedef struct msgbuf msgbuf, *Pmsgbuf;

struct msgbuf {
    int msg_magic;
    int msg_size;
    int msg_bufx;
    int msg_bufr;
    char * msg_bufc;
};

#define PROTO_UNDEF -1

typedef struct pcap_etherent pcap_etherent, *Ppcap_etherent;

struct pcap_etherent {
    u_char addr[6];
    char name[122];
};

#define __NAMESER 19991006

#define NS_ALG_DH 2

#define NS_ALG_DSA 3

#define NS_ALG_DSS 3

#define NS_ALG_EXPIRE_ONLY 253

#define NS_ALG_MD5RSA 1

#define NS_ALG_PRIVATE_OID 254

#define NS_CMPRSFLGS 192

#define NS_DEFAULTPORT 53

#define NS_DSA_MAX_BYTES 405

#define NS_DSA_MIN_SIZE 213

#define NS_DSA_SIG_SIZE 41

#define NS_HFIXEDSZ 12

#define NS_IN6ADDRSZ 16

#define NS_INADDRSZ 4

#define NS_INT16SZ 2

#define NS_INT32SZ 4

#define NS_INT8SZ 1

#define NS_KEY_EXTENDED_FLAGS 4096

#define NS_KEY_NAME_ENTITY 512

#define NS_KEY_NAME_RESERVED 768

#define NS_KEY_NAME_TYPE 768

#define NS_KEY_NAME_USER 0

#define NS_KEY_NAME_ZONE 256

#define NS_KEY_NO_AUTH 32768

#define NS_KEY_NO_CONF 16384

#define NS_KEY_PROT_ANY 255

#define NS_KEY_PROT_DNSSEC 3

#define NS_KEY_PROT_EMAIL 2

#define NS_KEY_PROT_IPSEC 4

#define NS_KEY_PROT_TLS 1

#define NS_KEY_RESERVED10 32

#define NS_KEY_RESERVED11 16

#define NS_KEY_RESERVED2 8192

#define NS_KEY_RESERVED4 2048

#define NS_KEY_RESERVED5 1024

#define NS_KEY_RESERVED8 128

#define NS_KEY_RESERVED9 64

#define NS_KEY_RESERVED_BITMASK2 65535

#define NS_KEY_SIGNATORYMASK 15

#define NS_KEY_TYPE_AUTH_CONF 0

#define NS_KEY_TYPE_AUTH_ONLY 16384

#define NS_KEY_TYPE_CONF_ONLY 32768

#define NS_KEY_TYPE_NO_KEY 49152

#define NS_KEY_TYPEMASK 49152

#define NS_MAXCDNAME 255

#define NS_MAXDNAME 1025

#define NS_MAXLABEL 63

#define NS_MD5RSA_MAX_BASE64 6812

#define NS_MD5RSA_MAX_BITS 2552

#define NS_MD5RSA_MAX_BYTES 5107

#define NS_MD5RSA_MAX_SIZE 319

#define NS_MD5RSA_MIN_BITS 512

#define NS_MD5RSA_MIN_SIZE 64

#define NS_NXT_BITS 8

#define NS_NXT_MAX 127

#define NS_OPT_DNSSEC_OK 32768

#define NS_PACKETSZ 512

#define NS_QFIXEDSZ 4

#define NS_RRFIXEDSZ 10

#define NS_SIG_ALG 2

#define NS_SIG_EXPIR 8

#define NS_SIG_FOOT 16

#define NS_SIG_LABELS 3

#define NS_SIG_OTTL 4

#define NS_SIG_SIGNED 12

#define NS_SIG_SIGNER 18

#define NS_SIG_TYPE 0

#define NS_TSIG_ERROR_FORMERR -12

#define NS_TSIG_ERROR_NO_SPACE -11

#define NS_TSIG_ERROR_NO_TSIG -10

#define NS_TSIG_FUDGE 300

#define NS_TSIG_TCP_COUNT 100

typedef enum __ns_cert_types {
    cert_t_oid=254,
    cert_t_pgp=3,
    cert_t_pkix=1,
    cert_t_spki=2,
    cert_t_url=253
} __ns_cert_types;

typedef enum __ns_class {
    ns_c_2=2,
    ns_c_any=255,
    ns_c_chaos=3,
    ns_c_hs=4,
    ns_c_in=1,
    ns_c_invalid=0,
    ns_c_max=65536,
    ns_c_none=254
} __ns_class;

typedef enum __ns_flag {
    ns_f_aa=2,
    ns_f_ad=7,
    ns_f_cd=8,
    ns_f_max=10,
    ns_f_opcode=1,
    ns_f_qr=0,
    ns_f_ra=5,
    ns_f_rcode=9,
    ns_f_rd=4,
    ns_f_tc=3,
    ns_f_z=6
} __ns_flag;

typedef enum __ns_key_types {
    ns_kt_dh=2,
    ns_kt_dsa=3,
    ns_kt_private=254,
    ns_kt_rsa=1
} __ns_key_types;

typedef struct __ns_msg __ns_msg, *P__ns_msg;

typedef enum __ns_sect {
    ns_s_an=1,
    ns_s_ar=3,
    ns_s_max=4,
    ns_s_ns=2,
    ns_s_pr=1,
    ns_s_qd=0,
    ns_s_ud=2,
    ns_s_zn=0
} __ns_sect;

typedef enum __ns_sect res_9_ns_sect;

struct __ns_msg {
    u_char * _msg;
    u_char * * _eom;
    u_int16_t _id;
    u_int16_t _flags;
    res_9_ns_sect _sect;
    int _rrnum;
    u_char * _msg_ptr;
};

typedef enum __ns_opcode {
    ns_o_iquery=1,
    ns_o_max=6,
    ns_o_notify=4,
    ns_o_query=0,
    ns_o_status=2,
    ns_o_update=5
} __ns_opcode;

typedef enum __ns_rcode {
    ns_r_badkey=17,
    ns_r_badsig=16,
    ns_r_badtime=18,
    ns_r_badvers=16,
    ns_r_formerr=1,
    ns_r_max=11,
    ns_r_noerror=0,
    ns_r_notauth=9,
    ns_r_notimpl=4,
    ns_r_notzone=10,
    ns_r_nxdomain=3,
    ns_r_nxrrset=8,
    ns_r_refused=5,
    ns_r_servfail=2,
    ns_r_yxdomain=6,
    ns_r_yxrrset=7
} __ns_rcode;

typedef struct __ns_rr __ns_rr, *P__ns_rr;

struct __ns_rr {
    char name[1025];
    u_int16_t type;
    u_int16_t rr_class;
    u_int32_t ttl;
    u_int16_t rdlength;
    u_char * rdata;
};

typedef enum __ns_type {
    ns_t_a=1,
    ns_t_a6=38,
    ns_t_aaaa=28,
    ns_t_afsdb=18,
    ns_t_any=255,
    ns_t_atma=34,
    ns_t_axfr=252,
    ns_t_cert=37,
    ns_t_cname=5,
    ns_t_dname=39,
    ns_t_eid=31,
    ns_t_gpos=27,
    ns_t_hinfo=13,
    ns_t_invalid=0,
    ns_t_isdn=20,
    ns_t_ixfr=251,
    ns_t_key=25,
    ns_t_kx=36,
    ns_t_loc=29,
    ns_t_maila=254,
    ns_t_mailb=253,
    ns_t_max=65536,
    ns_t_mb=7,
    ns_t_md=3,
    ns_t_mf=4,
    ns_t_mg=8,
    ns_t_minfo=14,
    ns_t_mr=9,
    ns_t_mx=15,
    ns_t_naptr=35,
    ns_t_nimloc=32,
    ns_t_ns=2,
    ns_t_nsap=22,
    ns_t_nsap_ptr=23,
    ns_t_null=10,
    ns_t_nxt=30,
    ns_t_opt=41,
    ns_t_ptr=12,
    ns_t_px=26,
    ns_t_rp=17,
    ns_t_rt=21,
    ns_t_sig=24,
    ns_t_sink=40,
    ns_t_soa=6,
    ns_t_srv=33,
    ns_t_tkey=249,
    ns_t_tsig=250,
    ns_t_txt=16,
    ns_t_wks=11,
    ns_t_x25=19,
    ns_t_zxfr=256
} __ns_type;

typedef enum __ns_update_operation {
    ns_uop_add=1,
    ns_uop_delete=0,
    ns_uop_max=2
} __ns_update_operation;

typedef struct _res_9_ns_flagdata _res_9_ns_flagdata, *P_res_9_ns_flagdata;

struct _res_9_ns_flagdata {
    int mask;
    int shift;
};

typedef struct dst_key dst_key, *Pdst_key;

struct dst_key {
};

typedef enum __ns_type ns_type;

typedef enum __ns_cert_types res_9_ns_cert_types;

typedef enum __ns_class res_9_ns_class;

typedef enum __ns_flag res_9_ns_flag;

typedef enum __ns_key_types res_9_ns_key_types;

typedef struct __ns_msg res_9_ns_msg;

typedef enum __ns_opcode res_9_ns_opcode;

typedef enum __ns_rcode res_9_ns_rcode;

typedef struct __ns_rr res_9_ns_rr;

typedef struct res_9_ns_tcp_tsig_state res_9_ns_tcp_tsig_state, *Pres_9_ns_tcp_tsig_state;

struct res_9_ns_tcp_tsig_state {
    int counter;
    struct dst_key * key;
    void * ctx;
    uchar sig[512];
    int siglen;
};

typedef struct res_9_ns_tsig_key res_9_ns_tsig_key, *Pres_9_ns_tsig_key;

struct res_9_ns_tsig_key {
    char name[1025];
    char alg[1025];
    uchar * data;
    int len;
};

typedef enum __ns_update_operation res_9_ns_update_operation;

#define NCURSES_DLL_H_incl 1

#define DRLSTSIZ 10

#define MAX_RTR_SOLICITATION_DELAY 1

#define MAX_RTR_SOLICITATIONS 3

#define ND6_IFF_IGNORE_NA 64

#define ND6_IFF_PERFORMNUD 1

#define ND6_IFF_PROXY_PREFIXES 32

#define ND6_INFINITE_LIFETIME 4294967295

#define ND6_LLINFO_DELAY 3

#define ND6_LLINFO_INCOMPLETE 0

#define ND6_LLINFO_NOSTATE -2

#define ND6_LLINFO_PROBE 4

#define ND6_LLINFO_PURGE -3

#define ND6_LLINFO_REACHABLE 1

#define ND6_LLINFO_STALE 2

#define ND6_MAX_LIFETIME 2147483647

#define NDDRF_IFSCOPE 2

#define NDDRF_INSTALLED 1

#define NDDRF_STATIC 4

#define NDPRF_DETACHED 2

#define NDPRF_IFSCOPE 4096

#define NDPRF_ONLINK 1

#define NDPRF_PRPROXY 8192

#define NDPRF_STATIC 256

#define PRLSTSIZ 10

#define RTR_SOLICITATION_INTERVAL 4

typedef struct _struct_2905 _struct_2905, *P_struct_2905;

struct _struct_2905 {
    struct in6_addr rtaddr;
    u_char flags;
    u_short rtlifetime;
    u_long expire;
    u_short if_index;
};

typedef struct _struct_2910 _struct_2910, *P_struct_2910;

struct _struct_2910 {
    struct in6_addr prefix;
    struct prf_ra raflags;
    u_char prefixlen;
    u_char origin;
    u_long vltime;
    u_long pltime;
    u_long expire;
    u_short if_index;
    u_short advrtrs;
    struct in6_addr advrtr[10];
};

typedef struct _struct_2918 _struct_2918, *P_struct_2918;

struct _struct_2918 {
    u_int32_t linkmtu;
    u_int32_t maxmtu;
    u_int32_t basereachable;
    u_int32_t reachable;
    u_int32_t retrans;
    u_int32_t flags;
    int recalctm;
    u_int8_t chlim;
    u_int8_t receivedra;
};

typedef struct in6_defrouter in6_defrouter, *Pin6_defrouter;

struct in6_defrouter {
    struct sockaddr_in6 rtaddr;
    u_char flags;
    u_char stateflags;
    u_short rtlifetime;
    u_long expire;
    u_short if_index;
};

typedef struct in6_drlist in6_drlist, *Pin6_drlist;

struct in6_drlist {
    char ifname[16];
    struct _struct_2905 defrouter[10];
};

typedef struct in6_nbrinfo in6_nbrinfo, *Pin6_nbrinfo;

struct in6_nbrinfo {
    char ifname[16];
    struct in6_addr addr;
    long asked;
    int isrouter;
    int state;
    int expire;
};

typedef struct in6_ndifreq in6_ndifreq, *Pin6_ndifreq;

struct in6_ndifreq {
    char ifname[16];
    u_long ifindex;
};

typedef struct in6_ndireq in6_ndireq, *Pin6_ndireq;

typedef struct nd_ifinfo nd_ifinfo, *Pnd_ifinfo;

struct nd_ifinfo {
    u_int32_t linkmtu;
    u_int32_t maxmtu;
    u_int32_t basereachable;
    u_int32_t reachable;
    u_int32_t retrans;
    u_int32_t flags;
    int recalctm;
    u_int8_t chlim;
    u_int8_t receivedra;
    u_int8_t randomseed0[8];
    u_int8_t randomseed1[8];
    u_int8_t randomid[8];
};

struct in6_ndireq {
    char ifname[16];
    struct nd_ifinfo ndi;
};

typedef struct in6_ondireq in6_ondireq, *Pin6_ondireq;

struct in6_ondireq {
    char ifname[16];
    struct _struct_2918 ndi;
};

typedef struct in6_prefix in6_prefix, *Pin6_prefix;

struct in6_prefix {
    struct sockaddr_in6 prefix;
    struct prf_ra raflags;
    u_char prefixlen;
    u_char origin;
    u_long vltime;
    u_long pltime;
    u_long expire;
    u_int32_t flags;
    int refcnt;
    u_short if_index;
    u_short advrtrs;
};

typedef struct in6_prlist in6_prlist, *Pin6_prlist;

struct in6_prlist {
    char ifname[16];
    struct _struct_2910 prefix[10];
};

#define DBM_INSERT 0

#define DBM_RDONLY 0

#define DBM_REPLACE 1

typedef struct datum datum, *Pdatum;

struct datum {
    void * dptr;
    size_t dsize;
};

typedef struct DBM DBM, *PDBM;

struct DBM {
    char __opaque[4];
};

#define __NDR_convert__ 0

#define __NDR_convert__char_rep__ 0

#define __NDR_convert__float_rep__ 0

#define __NDR_convert__int_rep__ 0

#define NDR_CHAR_ASCII 0

#define NDR_CHAR_EBCDIC 1

#define NDR_FLOAT_CRAY 2

#define NDR_FLOAT_IBM 3

#define NDR_FLOAT_IEEE 0

#define NDR_FLOAT_VAX 1

#define NDR_INT_BIG_ENDIAN 0

#define NDR_INT_LITTLE_ENDIAN 1

#define NDR_PROTOCOL_2_0 0

#define NDRV_ADDMULTICAST 5

#define NDRV_DELDMXSPEC 2

#define NDRV_DELMULTICAST 6

#define NDRV_DEMUXTYPE_ETHERTYPE 4

#define NDRV_DEMUXTYPE_SAP 5

#define NDRV_DEMUXTYPE_SNAP 6

#define NDRV_DMUX_MAX_DESCR 1024

#define NDRV_PROTOCOL_DESC_VERS 1

#define NDRV_SETDMXSPEC 4

#define NDRVPROTO_NDRV 0

#define NRDV_MULTICAST_ADDRS_PER_SOCK 1

#define SOL_NDRVPROTO 0

typedef union _union_2590 _union_2590, *P_union_2590;

union _union_2590 {
    u_int16_t ether_type;
    u_int8_t sap[3];
    u_int8_t snap[5];
    u_int8_t other[28];
};

typedef struct ndrv_demux_desc ndrv_demux_desc, *Pndrv_demux_desc;

struct ndrv_demux_desc {
    u_int16_t type;
    u_int16_t length;
    union _union_2590 data;
};

typedef struct ndrv_protocol_desc ndrv_protocol_desc, *Pndrv_protocol_desc;

struct ndrv_protocol_desc {
    u_int32_t version;
    u_int32_t protocol_family;
    u_int32_t demux_count;
    struct ndrv_demux_desc * demux_list;
};

typedef struct sockaddr_ndrv sockaddr_ndrv, *Psockaddr_ndrv;

struct sockaddr_ndrv {
    uchar snd_len;
    uchar snd_family;
    uchar snd_name[16];
};

#define AI_ADDRCONFIG 1024

#define AI_ALL 256

#define AI_CANONNAME 2

#define AI_DEFAULT 1536

#define AI_NUMERICHOST 4

#define AI_NUMERICSERV 4096

#define AI_PASSIVE 1

#define AI_V4MAPPED 2048

#define AI_V4MAPPED_CFG 512

#define EAI_ADDRFAMILY 1

#define EAI_AGAIN 2

#define EAI_BADFLAGS 3

#define EAI_BADHINTS 12

#define EAI_FAIL 4

#define EAI_FAMILY 5

#define EAI_MAX 15

#define EAI_MEMORY 6

#define EAI_NODATA 7

#define EAI_NONAME 8

#define EAI_OVERFLOW 14

#define EAI_PROTOCOL 13

#define EAI_SERVICE 9

#define EAI_SOCKTYPE 10

#define EAI_SYSTEM 11

#define HOST_NOT_FOUND 1

#define NETDB_INTERNAL -1

#define NETDB_SUCCESS 0

#define NI_DGRAM 16

#define NI_MAXHOST 1025

#define NI_MAXSERV 32

#define NI_NAMEREQD 4

#define NI_NOFQDN 1

#define NI_NUMERICHOST 2

#define NI_NUMERICSERV 8

#define NI_WITHSCOPEID 32

#define NO_ADDRESS 4

#define NO_DATA 4

#define NO_RECOVERY 3

#define TRY_AGAIN 2

typedef struct addrinfo addrinfo, *Paddrinfo;

struct addrinfo {
    int ai_flags;
    int ai_family;
    int ai_socktype;
    int ai_protocol;
    socklen_t ai_addrlen;
    char * ai_canonname;
    struct sockaddr * ai_addr;
    struct addrinfo * ai_next;
};

typedef struct netent netent, *Pnetent;

struct netent {
    char * n_name;
    char * * n_aliases;
    int n_addrtype;
    uint32_t n_net;
};

typedef struct protoent protoent, *Pprotoent;

struct protoent {
    char * p_name;
    char * * p_aliases;
    int p_proto;
};

typedef struct rpcent rpcent, *Prpcent;

struct rpcent {
    char * r_name;
    char * * r_aliases;
    int r_number;
};

typedef struct servent servent, *Pservent;

struct servent {
    char * s_name;
    char * * s_aliases;
    int s_port;
    char * s_proto;
};

#define netname_MSG_COUNT 4

typedef struct __Reply__netname_check_in_t __Reply__netname_check_in_t, *P__Reply__netname_check_in_t;

struct __Reply__netname_check_in_t {
    struct mach_msg_header_t Head;
    struct NDR_record_t NDR;
    kern_return_t RetCode;
};

typedef struct __Reply__netname_check_out_t __Reply__netname_check_out_t, *P__Reply__netname_check_out_t;

struct __Reply__netname_check_out_t {
    struct mach_msg_header_t Head;
    struct NDR_record_t NDR;
    kern_return_t RetCode;
};

typedef struct __Reply__netname_look_up_t __Reply__netname_look_up_t, *P__Reply__netname_look_up_t;

struct __Reply__netname_look_up_t {
    struct mach_msg_header_t Head;
    struct mach_msg_body_t msgh_body;
    struct mach_msg_port_descriptor_t port_id;
};

typedef struct __Reply__netname_version_t __Reply__netname_version_t, *P__Reply__netname_version_t;

struct __Reply__netname_version_t {
    struct mach_msg_header_t Head;
    struct NDR_record_t NDR;
    kern_return_t RetCode;
    mach_msg_type_number_t versionOffset;
    mach_msg_type_number_t versionCnt;
    char version[80];
};

typedef union __ReplyUnion__netname_subsystem __ReplyUnion__netname_subsystem, *P__ReplyUnion__netname_subsystem;

union __ReplyUnion__netname_subsystem {
    struct __Reply__netname_check_in_t Reply_netname_check_in;
    struct __Reply__netname_look_up_t Reply_netname_look_up;
    struct __Reply__netname_check_out_t Reply_netname_check_out;
    struct __Reply__netname_version_t Reply_netname_version;
};

typedef struct __Request__netname_check_in_t __Request__netname_check_in_t, *P__Request__netname_check_in_t;

struct __Request__netname_check_in_t {
    struct mach_msg_header_t Head;
    struct mach_msg_body_t msgh_body;
    struct mach_msg_port_descriptor_t signature;
    struct mach_msg_port_descriptor_t port_id;
    struct NDR_record_t NDR;
    mach_msg_type_number_t port_nameOffset;
    mach_msg_type_number_t port_nameCnt;
    char port_name[80];
};

typedef struct __Request__netname_check_out_t __Request__netname_check_out_t, *P__Request__netname_check_out_t;

struct __Request__netname_check_out_t {
    struct mach_msg_header_t Head;
    struct mach_msg_body_t msgh_body;
    struct mach_msg_port_descriptor_t signature;
    struct NDR_record_t NDR;
    mach_msg_type_number_t port_nameOffset;
    mach_msg_type_number_t port_nameCnt;
    char port_name[80];
};

typedef struct __Request__netname_look_up_t __Request__netname_look_up_t, *P__Request__netname_look_up_t;

struct __Request__netname_look_up_t {
    struct mach_msg_header_t Head;
    struct NDR_record_t NDR;
    mach_msg_type_number_t host_nameOffset;
    mach_msg_type_number_t host_nameCnt;
    char host_name[80];
    mach_msg_type_number_t port_nameOffset;
    mach_msg_type_number_t port_nameCnt;
    char port_name[80];
};

typedef struct __Request__netname_version_t __Request__netname_version_t, *P__Request__netname_version_t;

struct __Request__netname_version_t {
    struct mach_msg_header_t Head;
};

typedef union __RequestUnion__netname_subsystem __RequestUnion__netname_subsystem, *P__RequestUnion__netname_subsystem;

union __RequestUnion__netname_subsystem {
    struct __Request__netname_check_in_t Request_netname_check_in;
    struct __Request__netname_look_up_t Request_netname_look_up;
    struct __Request__netname_check_out_t Request_netname_check_out;
    struct __Request__netname_version_t Request_netname_version;
};

#define NAME_NOT_CHECKED_IN 1001

#define NAME_NOT_YOURS 1000

#define NETNAME_HOST_NOT_FOUND 1003

#define NETNAME_INVALID_PORT 1004

#define NETNAME_NO_SUCH_HOST 1002

#define NETNAME_NOT_CHECKED_IN 1001

#define NETNAME_NOT_YOURS 1000

#define NETNAME_PENDING -1

#define NETNAME_SUCCESS 0

typedef char netname_name_t[80];

typedef uint32_t netaddr_t;

typedef struct network_port_t network_port_t, *Pnetwork_port_t;

typedef struct np_uid_t np_uid_t, *Pnp_uid_t;

struct np_uid_t {
    long np_uid_high;
    long np_uid_low;
};

struct network_port_t {
    netaddr_t np_receiver;
    netaddr_t np_owner;
    struct np_uid_t np_puid;
    struct np_uid_t np_sid;
};

#define NFS_COOKIESIZE 4

#define NFS_FHSIZE 32

#define NFS_FIFO_DEV -1

#define NFS_PROGRAM 100003

#define NFS_VERSION 2

#define NFSMODE_BLK 24576

#define NFSMODE_CHR 8192

#define NFSMODE_DIR 16384

#define NFSMODE_FIFO 4096

#define NFSMODE_FMT 61440

#define NFSMODE_LNK 40960

#define NFSMODE_REG 32768

#define NFSMODE_SOCK 49152

#define NFSPROC_ROOT 3

#define NFSPROC_STATFS 17

#define NFSPROC_WRITECACHE 7

typedef struct _struct_3554 _struct_3554, *P_struct_3554;

struct _struct_3554 {
    u_int data_len;
    char * data_val;
};

typedef struct _struct_3560 _struct_3560, *P_struct_3560;

struct _struct_3560 {
    u_int data_len;
    char * data_val;
};

typedef union _union_3537 _union_3537, *P_union_3537;

typedef struct fattr fattr, *Pfattr;

typedef enum ftype {
    NFBAD=7,
    NFBLK=3,
    NFCHR=4,
    NFDIR=2,
    NFFIFO=8,
    NFLNK=5,
    NFNON=0,
    NFREG=1,
    NFSOCK=6
} ftype;

typedef struct nfstime nfstime, *Pnfstime;

struct nfstime {
    u_int seconds;
    u_int useconds;
};

struct fattr {
    enum ftype type;
    u_int mode;
    u_int nlink;
    u_int uid;
    u_int gid;
    u_int size;
    u_int blocksize;
    u_int rdev;
    u_int blocks;
    u_int fsid;
    u_int fileid;
    struct nfstime atime;
    struct nfstime mtime;
    struct nfstime ctime;
};

union _union_3537 {
    struct fattr attributes;
};

typedef union _union_3546 _union_3546, *P_union_3546;

typedef struct diropokres diropokres, *Pdiropokres;

typedef struct nfs_fh nfs_fh, *Pnfs_fh;

struct nfs_fh {
    char data[32];
};

struct diropokres {
    struct nfs_fh file;
    struct fattr attributes;
};

union _union_3546 {
    struct diropokres diropres;
};

typedef union _union_3549 _union_3549, *P_union_3549;

typedef char * nfspath;

union _union_3549 {
    nfspath data;
};

typedef union _union_3557 _union_3557, *P_union_3557;

typedef struct readokres readokres, *Preadokres;

struct readokres {
    struct fattr attributes;
    struct _struct_3554 data;
};

union _union_3557 {
    struct readokres reply;
};

typedef union _union_3578 _union_3578, *P_union_3578;

typedef struct dirlist dirlist, *Pdirlist;

typedef struct entry entry, *Pentry;

typedef struct termtype termtype, *Ptermtype;

typedef struct termtype TERMTYPE;

typedef struct _struct_4333 _struct_4333, *P_struct_4333;

struct dirlist {
    struct entry * entries;
    boolean_t eof;
};

union _union_3578 {
    struct dirlist reply;
};

struct _struct_4333 {
    char * name;
    struct entry * link;
    long line;
};

struct termtype {
    char * term_names;
    char * str_table;
    char * Booleans;
    short * Numbers;
    char * * Strings;
    char * ext_str_table;
    char * * ext_Names;
    ushort num_Booleans;
    ushort num_Numbers;
    ushort num_Strings;
    ushort ext_Booleans;
    ushort ext_Numbers;
    ushort ext_Strings;
};

struct entry {
    TERMTYPE tterm;
    uint nuses;
    struct _struct_4333 uses[32];
    int ncrosslinks;
    struct entry * crosslinks[16];
    long cstart;
    long cend;
    long startline;
    struct entry * next;
    struct entry * last;
};

typedef union _union_3583 _union_3583, *P_union_3583;

typedef struct statfsokres statfsokres, *Pstatfsokres;

struct statfsokres {
    u_int tsize;
    u_int bsize;
    u_int blocks;
    u_int bfree;
    u_int bavail;
};

union _union_3583 {
    struct statfsokres reply;
};

typedef struct attrstat attrstat, *Pattrstat;

typedef enum nfsstat {
    NFSERR_NAMETOOLONG=63
} nfsstat;

struct attrstat {
    enum nfsstat status;
    union _union_3537 attrstat_u;
};

typedef struct createargs createargs, *Pcreateargs;

typedef struct diropargs diropargs, *Pdiropargs;

typedef struct sattr sattr, *Psattr;

typedef char * filename;

struct diropargs {
    struct nfs_fh dir;
    filename name;
};

struct sattr {
    u_int mode;
    u_int uid;
    u_int gid;
    u_int size;
    struct nfstime atime;
    struct nfstime mtime;
};

struct createargs {
    struct diropargs where;
    struct sattr attributes;
};

typedef struct diropres diropres, *Pdiropres;

struct diropres {
    enum nfsstat status;
    union _union_3546 diropres_u;
};

typedef struct linkargs linkargs, *Plinkargs;

struct linkargs {
    struct nfs_fh from;
    struct diropargs to;
};

typedef char nfscookie[4];

typedef struct readargs readargs, *Preadargs;

struct readargs {
    struct nfs_fh file;
    u_int offset;
    u_int count;
    u_int totalcount;
};

typedef struct readdirargs readdirargs, *Preaddirargs;

struct readdirargs {
    struct nfs_fh dir;
    nfscookie cookie;
    u_int count;
};

typedef struct readdirres readdirres, *Preaddirres;

struct readdirres {
    enum nfsstat status;
    union _union_3578 readdirres_u;
};

typedef struct readlinkres readlinkres, *Preadlinkres;

struct readlinkres {
    enum nfsstat status;
    union _union_3549 readlinkres_u;
};

typedef struct readres readres, *Preadres;

struct readres {
    enum nfsstat status;
    union _union_3557 readres_u;
};

typedef struct renameargs renameargs, *Prenameargs;

struct renameargs {
    struct diropargs from;
    struct diropargs to;
};

typedef struct sattrargs sattrargs, *Psattrargs;

struct sattrargs {
    struct nfs_fh file;
    struct sattr attributes;
};

typedef struct statfsres statfsres, *Pstatfsres;

struct statfsres {
    enum nfsstat status;
    union _union_3583 statfsres_u;
};

typedef struct symlinkargs symlinkargs, *Psymlinkargs;

struct symlinkargs {
    struct diropargs from;
    nfspath to;
    struct sattr attributes;
};

typedef struct writeargs writeargs, *Pwriteargs;

struct writeargs {
    struct nfs_fh file;
    u_int beginoffset;
    u_int offset;
    u_int totalcount;
    struct _struct_3560 data;
};

#define NFS4_CALLBACK_PROG 1313231683

#define NFS4_CALLBACK_PROG_VERSION 1

#define NFS4_FHSIZE 128

#define NFS4_OPAQUE_LIMIT 1024

#define NFS4_TIME_SET_TO_CLIENT 1

#define NFS4_TIME_SET_TO_SERVER 0

#define NFS4_VERIFIER_SIZE 8

#define NFS_ACCESS_DELETE 16

#define NFS_ACCESS_EXECUTE 32

#define NFS_ACCESS_EXTEND 8

#define NFS_ACCESS_LOOKUP 2

#define NFS_ACCESS_MODIFY 4

#define NFS_ACCESS_READ 1

#define NFS_ACE_ACCESS_ALLOWED_ACE_TYPE 0

#define NFS_ACE_ACCESS_DENIED_ACE_TYPE 1

#define NFS_ACE_ADD_FILE 2

#define NFS_ACE_ADD_SUBDIRECTORY 4

#define NFS_ACE_APPEND_DATA 4

#define NFS_ACE_DELETE 65536

#define NFS_ACE_DELETE_CHILD 64

#define NFS_ACE_DIRECTORY_INHERIT_ACE 2

#define NFS_ACE_EXECUTE 32

#define NFS_ACE_FAILED_ACCESS_ACE_FLAG 32

#define NFS_ACE_FILE_INHERIT_ACE 1

#define NFS_ACE_GENERIC_EXECUTE 1179808

#define NFS_ACE_GENERIC_READ 1179777

#define NFS_ACE_GENERIC_WRITE 1442054

#define NFS_ACE_IDENTIFIER_GROUP 64

#define NFS_ACE_INHERIT_ONLY_ACE 8

#define NFS_ACE_INHERITED_ACE 128

#define NFS_ACE_LIST_DIRECTORY 1

#define NFS_ACE_NO_PROPAGATE_INHERIT_ACE 4

#define NFS_ACE_READ_ACL 131072

#define NFS_ACE_READ_ATTRIBUTES 128

#define NFS_ACE_READ_DATA 1

#define NFS_ACE_READ_NAMED_ATTRS 8

#define NFS_ACE_SUCCESSFUL_ACCESS_ACE_FLAG 16

#define NFS_ACE_SYNCHRONIZE 1048576

#define NFS_ACE_SYSTEM_ALARM_ACE_TYPE 3

#define NFS_ACE_SYSTEM_AUDIT_ACE_TYPE 2

#define NFS_ACE_WRITE_ACL 262144

#define NFS_ACE_WRITE_ATTRIBUTES 256

#define NFS_ACE_WRITE_DATA 2

#define NFS_ACE_WRITE_NAMED_ATTRS 16

#define NFS_ACE_WRITE_OWNER 524288

#define NFS_ACL_SUPPORT_ALARM_ACL 8

#define NFS_ACL_SUPPORT_ALLOW_ACL 1

#define NFS_ACL_SUPPORT_AUDIT_ACL 4

#define NFS_ACL_SUPPORT_DENY_ACL 2

#define NFS_ATTR_BITMAP_LEN 2

#define NFS_CLAIM_DELEGATE_CUR 2

#define NFS_CLAIM_DELEGATE_PREV 3

#define NFS_CLAIM_NULL 0

#define NFS_CLAIM_PREVIOUS 1

#define NFS_CREATE_EXCLUSIVE 2

#define NFS_CREATE_GUARDED 1

#define NFS_CREATE_UNCHECKED 0

#define NFS_FABLKSIZE 512

#define NFS_FATTR_ACL 12

#define NFS_FATTR_ACLSUPPORT 13

#define NFS_FATTR_ARCHIVE 14

#define NFS_FATTR_CANSETTIME 15

#define NFS_FATTR_CASE_INSENSITIVE 16

#define NFS_FATTR_CASE_PRESERVING 17

#define NFS_FATTR_CHANGE 3

#define NFS_FATTR_CHOWN_RESTRICTED 18

#define NFS_FATTR_FH_EXPIRE_TYPE 2

#define NFS_FATTR_FILEHANDLE 19

#define NFS_FATTR_FILEID 20

#define NFS_FATTR_FILES_AVAIL 21

#define NFS_FATTR_FILES_FREE 22

#define NFS_FATTR_FILES_TOTAL 23

#define NFS_FATTR_FS_LOCATIONS 24

#define NFS_FATTR_FSID 8

#define NFS_FATTR_HIDDEN 25

#define NFS_FATTR_HOMOGENEOUS 26

#define NFS_FATTR_LEASE_TIME 10

#define NFS_FATTR_LINK_SUPPORT 5

#define NFS_FATTR_MAXFILESIZE 27

#define NFS_FATTR_MAXLINK 28

#define NFS_FATTR_MAXNAME 29

#define NFS_FATTR_MAXREAD 30

#define NFS_FATTR_MAXWRITE 31

#define NFS_FATTR_MIMETYPE 32

#define NFS_FATTR_MODE 33

#define NFS_FATTR_MOUNTED_ON_FILEID 55

#define NFS_FATTR_NAMED_ATTR 7

#define NFS_FATTR_NO_TRUNC 34

#define NFS_FATTR_NUMLINKS 35

#define NFS_FATTR_OWNER 36

#define NFS_FATTR_OWNER_GROUP 37

#define NFS_FATTR_QUOTA_AVAIL_HARD 38

#define NFS_FATTR_QUOTA_AVAIL_SOFT 39

#define NFS_FATTR_QUOTA_USED 40

#define NFS_FATTR_RAWDEV 41

#define NFS_FATTR_RDATTR_ERROR 11

#define NFS_FATTR_SIZE 4

#define NFS_FATTR_SPACE_AVAIL 42

#define NFS_FATTR_SPACE_FREE 43

#define NFS_FATTR_SPACE_TOTAL 44

#define NFS_FATTR_SPACE_USED 45

#define NFS_FATTR_SUPPORTED_ATTRS 0

#define NFS_FATTR_SYMLINK_SUPPORT 6

#define NFS_FATTR_SYSTEM 46

#define NFS_FATTR_TIME_ACCESS 47

#define NFS_FATTR_TIME_ACCESS_SET 48

#define NFS_FATTR_TIME_BACKUP 49

#define NFS_FATTR_TIME_CREATE 50

#define NFS_FATTR_TIME_DELTA 51

#define NFS_FATTR_TIME_METADATA 52

#define NFS_FATTR_TIME_MODIFY 53

#define NFS_FATTR_TIME_MODIFY_SET 54

#define NFS_FATTR_TYPE 1

#define NFS_FATTR_UNIQUE_HANDLES 9

#define NFS_FH_NOEXPIRE_WITH_OPEN 1

#define NFS_FH_PERSISTENT 0

#define NFS_FH_VOL_MIGRATION 4

#define NFS_FH_VOL_RENAME 8

#define NFS_FH_VOLATILE_ANY 2

#define NFS_LIMIT_BLOCKS 2

#define NFS_LIMIT_SIZE 1

#define NFS_LOCK_TYPE_READ 1

#define NFS_LOCK_TYPE_READW 3

#define NFS_LOCK_TYPE_WRITE 2

#define NFS_LOCK_TYPE_WRITEW 4

#define NFS_MAXDATA 65536

#define NFS_MAXDGRAMDATA 16384

#define NFS_MAXNAMLEN 255

#define NFS_MAXPACKET 16777216

#define NFS_MAXPATHLEN 1024

#define NFS_NPROCS 23

#define NFS_OK 0

#define NFS_OP_ACCESS 3

#define NFS_OP_CB_GETATTR 3

#define NFS_OP_CB_ILLEGAL 10044

#define NFS_OP_CB_RECALL 4

#define NFS_OP_CLOSE 4

#define NFS_OP_COMMIT 5

#define NFS_OP_CREATE 6

#define NFS_OP_DELEGPURGE 7

#define NFS_OP_DELEGRETURN 8

#define NFS_OP_GETATTR 9

#define NFS_OP_GETFH 10

#define NFS_OP_ILLEGAL 10044

#define NFS_OP_LINK 11

#define NFS_OP_LOCK 12

#define NFS_OP_LOCKT 13

#define NFS_OP_LOCKU 14

#define NFS_OP_LOOKUP 15

#define NFS_OP_LOOKUPP 16

#define NFS_OP_NVERIFY 17

#define NFS_OP_OPEN 18

#define NFS_OP_OPEN_CONFIRM 20

#define NFS_OP_OPEN_DOWNGRADE 21

#define NFS_OP_OPENATTR 19

#define NFS_OP_PUTFH 22

#define NFS_OP_PUTPUBFH 23

#define NFS_OP_PUTROOTFH 24

#define NFS_OP_READ 25

#define NFS_OP_READDIR 26

#define NFS_OP_READLINK 27

#define NFS_OP_RELEASE_LOCKOWNER 39

#define NFS_OP_REMOVE 28

#define NFS_OP_RENAME 29

#define NFS_OP_RENEW 30

#define NFS_OP_RESTOREFH 31

#define NFS_OP_SAVEFH 32

#define NFS_OP_SECINFO 33

#define NFS_OP_SETATTR 34

#define NFS_OP_SETCLIENTID 35

#define NFS_OP_SETCLIENTID_CONFIRM 36

#define NFS_OP_VERIFY 37

#define NFS_OP_WRITE 38

#define NFS_OPEN_CREATE 1

#define NFS_OPEN_DELEGATE_NONE 0

#define NFS_OPEN_DELEGATE_READ 1

#define NFS_OPEN_DELEGATE_WRITE 2

#define NFS_OPEN_NOCREATE 0

#define NFS_OPEN_RESULT_CONFIRM 2

#define NFS_OPEN_RESULT_LOCKTYPE_POSIX 4

#define NFS_OPEN_SHARE_ACCESS_BOTH 3

#define NFS_OPEN_SHARE_ACCESS_NONE 0

#define NFS_OPEN_SHARE_ACCESS_READ 1

#define NFS_OPEN_SHARE_ACCESS_WRITE 2

#define NFS_OPEN_SHARE_DENY_BOTH 3

#define NFS_OPEN_SHARE_DENY_NONE 0

#define NFS_OPEN_SHARE_DENY_READ 1

#define NFS_OPEN_SHARE_DENY_WRITE 2

#define NFS_PORT 2049

#define NFS_PREFDGRAMDATA 8192

#define NFS_PROG 100003

#define NFS_SMALLFH 64

#define NFS_TIME_DONT_CHANGE 0

#define NFS_TIME_SET_TO_CLIENT 2

#define NFS_TIME_SET_TO_SERVER 1

#define NFS_UDPSOCKBUF 229376

#define NFS_V2MAXDATA 8192

#define NFS_VER2 2

#define NFS_VER3 3

#define NFS_VER4 4

#define NFS_WRITE_DATASYNC 1

#define NFS_WRITE_FILESYNC 2

#define NFS_WRITE_UNSTABLE 0

#define NFSERR_ACCES 13

#define NFSERR_ADMIN_REVOKED 10047

#define NFSERR_ATTRNOTSUPP 10032

#define NFSERR_AUTHERR 1073741824

#define NFSERR_BAD_COOKIE 10003

#define NFSERR_BAD_RANGE 10042

#define NFSERR_BAD_SEQID 10026

#define NFSERR_BAD_STATEID 10025

#define NFSERR_BADCHAR 10040

#define NFSERR_BADHANDLE 10001

#define NFSERR_BADNAME 10041

#define NFSERR_BADOWNER 10039

#define NFSERR_BADTYPE 10007

#define NFSERR_BADXDR 10036

#define NFSERR_CB_PATH_DOWN 10048

#define NFSERR_CLID_INUSE 10017

#define NFSERR_DEADLOCK 10045

#define NFSERR_DELAY 10008

#define NFSERR_DENIED 10010

#define NFSERR_DIRBUFDROPPED 30002

#define NFSERR_DQUOT 69

#define NFSERR_EAUTH 13

#define NFSERR_EXIST 17

#define NFSERR_EXPIRED 10011

#define NFSERR_FBIG 27

#define NFSERR_FHEXPIRED 10014

#define NFSERR_FILE_OPEN 10046

#define NFSERR_GRACE 10013

#define NFSERR_INVAL 22

#define NFSERR_IO 5

#define NFSERR_ISDIR 21

#define NFSERR_JUKEBOX 10008

#define NFSERR_LEASE_MOVED 10031

#define NFSERR_LOCK_NOTSUPP 10043

#define NFSERR_LOCK_RANGE 10028

#define NFSERR_LOCKED 10012

#define NFSERR_LOCKS_HELD 10037

#define NFSERR_MINOR_VERS_MISMATCH 10021

#define NFSERR_MLINK 31

#define NFSERR_MOVED 10019

#define NFSERR_NAMETOL 63

#define NFSERR_NO_GRACE 10033

#define NFSERR_NODEV 19

#define NFSERR_NOENT 2

#define NFSERR_NOFILEHANDLE 10020

#define NFSERR_NOSPC 28

#define NFSERR_NOT_SAME 10027

#define NFSERR_NOT_SYNC 10002

#define NFSERR_NOTDIR 20

#define NFSERR_NOTEMPTY 66

#define NFSERR_NOTSUPP 10004

#define NFSERR_NXIO 6

#define NFSERR_OLD_STATEID 10024

#define NFSERR_OP_ILLEGAL 10044

#define NFSERR_OPENMODE 10038

#define NFSERR_PERM 1

#define NFSERR_RECLAIM_BAD 10034

#define NFSERR_RECLAIM_CONFLICT 10035

#define NFSERR_REMOTE 71

#define NFSERR_RESOURCE 10018

#define NFSERR_RESTOREFH 10030

#define NFSERR_RETERR 2147483648

#define NFSERR_RETVOID 536870912

#define NFSERR_ROFS 30

#define NFSERR_SAME 10009

#define NFSERR_SERVERFAULT 10006

#define NFSERR_SHARE_DENIED 10015

#define NFSERR_STALE 70

#define NFSERR_STALE_CLIENTID 10022

#define NFSERR_STALE_STATEID 10023

#define NFSERR_STALEWRITEVERF 30001

#define NFSERR_SYMLINK 10029

#define NFSERR_TOOSMALL 10005

#define NFSERR_TRYLATER 10008

#define NFSERR_WFLUSH 99

#define NFSERR_WRONGSEC 10016

#define NFSERR_XDEV 18

#define NFSPROC4_CB_COMPOUND 1

#define NFSPROC4_CB_NULL 0

#define NFSPROC4_COMPOUND 1

#define NFSPROC4_NULL 0

#define NFSPROC_ACCESS 4

#define NFSPROC_COMMIT 21

#define NFSPROC_CREATE 8

#define NFSPROC_FSINFO 19

#define NFSPROC_FSSTAT 18

#define NFSPROC_GETATTR 1

#define NFSPROC_LINK 15

#define NFSPROC_LOOKUP 3

#define NFSPROC_MKDIR 9

#define NFSPROC_MKNOD 11

#define NFSPROC_NOOP 22

#define NFSPROC_NULL 0

#define NFSPROC_PATHCONF 20

#define NFSPROC_READ 6

#define NFSPROC_READDIR 16

#define NFSPROC_READDIRPLUS 17

#define NFSPROC_READLINK 5

#define NFSPROC_REMOVE 12

#define NFSPROC_RENAME 14

#define NFSPROC_RMDIR 13

#define NFSPROC_SETATTR 2

#define NFSPROC_SYMLINK 10

#define NFSPROC_WRITE 7

#define NFSRV_MAXDATA 65536

#define NFSV2PROC_CREATE 9

#define NFSV2PROC_GETATTR 1

#define NFSV2PROC_LINK 12

#define NFSV2PROC_LOOKUP 4

#define NFSV2PROC_MKDIR 14

#define NFSV2PROC_NOOP 3

#define NFSV2PROC_NULL 0

#define NFSV2PROC_READ 6

#define NFSV2PROC_READDIR 16

#define NFSV2PROC_READLINK 5

#define NFSV2PROC_REMOVE 10

#define NFSV2PROC_RENAME 11

#define NFSV2PROC_RMDIR 15

#define NFSV2PROC_ROOT 3

#define NFSV2PROC_SETATTR 2

#define NFSV2PROC_STATFS 17

#define NFSV2PROC_SYMLINK 13

#define NFSV2PROC_WRITE 8

#define NFSV2PROC_WRITECACHE 3

#define NFSV3FSINFO_CANSETTIME 16

#define NFSV3FSINFO_HOMOGENEOUS 8

#define NFSV3FSINFO_LINK 1

#define NFSV3FSINFO_SYMLINK 2

#define NFSX_UNSIGNED 4

#define NFSX_V2COOKIE 4

#define NFSX_V2FATTR 68

#define NFSX_V2FH 32

#define NFSX_V2SATTR 32

#define NFSX_V2STATFS 20

#define NFSX_V3COOKIEVERF 8

#define NFSX_V3CREATEVERF 8

#define NFSX_V3FATTR 84

#define NFSX_V3FHMAX 64

#define NFSX_V3FSINFO 48

#define NFSX_V3PATHCONF 24

#define NFSX_V3POSTOPATTR 88

#define NFSX_V3SATTR 60

#define NFSX_V3STATFS 52

#define NFSX_V3WCCDATA 120

#define NFSX_V3WRITEVERF 8

typedef enum enum_2928 {
    NFATTRDIR=8,
    NFBLK=3,
    NFCHR=4,
    NFDIR=2,
    NFFIFO=7,
    NFLNK=5,
    NFNAMEDATTR=9,
    NFNON=0,
    NFREG=1,
    NFSOCK=6
} enum_2928;

typedef struct nfs_fsid nfs_fsid, *Pnfs_fsid;

struct nfs_fsid {
    uint64_t major;
    uint64_t minor;
};

typedef union nfs_quadconvert nfs_quadconvert, *Pnfs_quadconvert;

union nfs_quadconvert {
    u_int32_t lval[2];
    u_quad_t qval;
};

typedef struct nfs_specdata nfs_specdata, *Pnfs_specdata;

struct nfs_specdata {
    uint32_t specdata1;
    uint32_t specdata2;
};

typedef struct nfs_stateid nfs_stateid, *Pnfs_stateid;

struct nfs_stateid {
    uint32_t seqid;
    uint32_t other[3];
};

typedef struct nfs_uquad nfs_uquad, *Pnfs_uquad;

struct nfs_uquad {
    u_int32_t nfsuquad[2];
};

typedef union nfs_quadconvert nfsquad_t;

typedef enum enum_2928 nfstype;

typedef struct nfs_uquad nfsuint64;

#define NL_CAT_LOCALE 1

#define NL_SETD 1

typedef struct __nl_cat_d __nl_cat_d, *P__nl_cat_d;

struct __nl_cat_d {
    void * __data;
    int __size;
};

typedef struct __nl_cat_d * nl_catd;

#define DYNAMIC_LOOKUP_ORDINAL 254

#define EXECUTABLE_ORDINAL 255

#define MAX_LIBRARY_ORDINAL 253

#define MAX_SECT 255

#define N_ABS 2

#define N_ARM_THUMB_DEF 8

#define N_DESC_DISCARDED 32

#define N_EXT 1

#define N_INDR 10

#define N_NO_DEAD_STRIP 32

#define N_PBUD 12

#define N_PEXT 16

#define N_REF_TO_WEAK 128

#define N_SECT 14

#define N_STAB 224

#define N_SYMBOL_RESOLVER 256

#define N_TYPE 14

#define N_UNDF 0

#define N_WEAK_DEF 128

#define N_WEAK_REF 64

#define NO_SECT 0

#define REFERENCE_FLAG_DEFINED 2

#define REFERENCE_FLAG_PRIVATE_DEFINED 3

#define REFERENCE_FLAG_PRIVATE_UNDEFINED_LAZY 5

#define REFERENCE_FLAG_PRIVATE_UNDEFINED_NON_LAZY 4

#define REFERENCE_FLAG_UNDEFINED_LAZY 1

#define REFERENCE_FLAG_UNDEFINED_NON_LAZY 0

#define REFERENCE_TYPE 7

#define REFERENCED_DYNAMICALLY 16

#define SELF_LIBRARY_ORDINAL 0

typedef union _union_2250 _union_2250, *P_union_2250;

union _union_2250 {
    uint32_t n_strx;
};

typedef union _union_2252 _union_2252, *P_union_2252;

union _union_2252 {
    uint32_t n_strx;
};

typedef struct nlist nlist, *Pnlist;

struct nlist {
    union _union_2250 n_un;
    uint8_t n_type;
    uint8_t n_sect;
    int16_t n_desc;
    uint32_t n_value;
};

typedef struct nlist_64 nlist_64, *Pnlist_64;

struct nlist_64 {
    union _union_2252 n_un;
    uint8_t n_type;
    uint8_t n_sect;
    uint16_t n_desc;
    uint64_t n_value;
};

#define MAXNAMELEN 1025

#define NLM4_CANCEL 3

#define NLM4_CANCEL_MSG 8

#define NLM4_CANCEL_RES 13

#define NLM4_FREE_ALL 23

#define NLM4_GRANTED 5

#define NLM4_GRANTED_MSG 10

#define NLM4_GRANTED_RES 15

#define NLM4_LOCK 2

#define NLM4_LOCK_MSG 7

#define NLM4_LOCK_RES 12

#define NLM4_NM_LOCK 22

#define NLM4_SHARE 20

#define NLM4_TEST 1

#define NLM4_TEST_MSG 6

#define NLM4_TEST_RES 11

#define NLM4_UNLOCK 4

#define NLM4_UNLOCK_MSG 9

#define NLM4_UNLOCK_RES 14

#define NLM4_UNSHARE 21

#define NLM_CANCEL 3

#define NLM_CANCEL_MSG 8

#define NLM_CANCEL_RES 13

#define NLM_FREE_ALL 23

#define NLM_GRANTED 5

#define NLM_GRANTED_MSG 10

#define NLM_GRANTED_RES 15

#define NLM_LOCK 2

#define NLM_LOCK_MSG 7

#define NLM_LOCK_RES 12

#define NLM_NM_LOCK 22

#define NLM_PROG 100021

#define NLM_SHARE 20

#define NLM_SM 0

#define NLM_SM_NOTIFY 1

#define NLM_TEST 1

#define NLM_TEST_MSG 6

#define NLM_TEST_RES 11

#define NLM_UNLOCK 4

#define NLM_UNLOCK_MSG 9

#define NLM_UNLOCK_RES 14

#define NLM_UNSHARE 21

#define NLM_VERS 1

#define NLM_VERS4 4

#define NLM_VERSX 3

typedef union _union_3588 _union_3588, *P_union_3588;

typedef struct nlm_holder nlm_holder, *Pnlm_holder;

struct nlm_holder {
    boolean_t exclusive;
    int svid;
    struct netobj oh;
    u_int l_offset;
    u_int l_len;
};

union _union_3588 {
    struct nlm_holder holder;
};

typedef union _union_3628 _union_3628, *P_union_3628;

typedef struct nlm4_holder nlm4_holder, *Pnlm4_holder;

struct nlm4_holder {
    boolean_t exclusive;
    u_int32_t svid;
    struct netobj oh;
    u_int64_t l_offset;
    u_int64_t l_len;
};

union _union_3628 {
    struct nlm4_holder holder;
};

typedef enum fsh_access {
    fsa_NONE=0,
    fsa_R=1,
    fsa_RW=3,
    fsa_W=2
} fsh_access;

typedef enum fsh_mode {
    fsm_DN=0,
    fsm_DR=1,
    fsm_DRW=3,
    fsm_DW=2
} fsh_mode;

typedef struct nlm4_cancargs nlm4_cancargs, *Pnlm4_cancargs;

typedef struct nlm4_lock nlm4_lock, *Pnlm4_lock;

struct nlm4_lock {
    char * caller_name;
    struct netobj fh;
    struct netobj oh;
    u_int32_t svid;
    u_int64_t l_offset;
    u_int64_t l_len;
};

struct nlm4_cancargs {
    struct netobj cookie;
    boolean_t block;
    boolean_t exclusive;
    struct nlm4_lock alock;
};

typedef struct nlm4_lockargs nlm4_lockargs, *Pnlm4_lockargs;

struct nlm4_lockargs {
    struct netobj cookie;
    boolean_t block;
    boolean_t exclusive;
    struct nlm4_lock alock;
    boolean_t reclaim;
    int state;
};

typedef struct nlm4_notify nlm4_notify, *Pnlm4_notify;

struct nlm4_notify {
    char * name;
    int32_t state;
};

typedef struct nlm4_res nlm4_res, *Pnlm4_res;

typedef struct nlm4_stat nlm4_stat, *Pnlm4_stat;

typedef enum nlm4_stats {
    nlm4_blocked=3,
    nlm4_deadlck=5,
    nlm4_denied=1,
    nlm4_denied_grace_period=4,
    nlm4_denied_nolocks=2,
    nlm4_failed=9,
    nlm4_fbig=8,
    nlm4_granted=0,
    nlm4_rofs=6,
    nlm4_stale_fh=7
} nlm4_stats;

struct nlm4_stat {
    enum nlm4_stats stat;
};

struct nlm4_res {
    struct netobj cookie;
    struct nlm4_stat stat;
};

typedef struct nlm4_share nlm4_share, *Pnlm4_share;

struct nlm4_share {
    char * caller_name;
    struct netobj fh;
    struct netobj oh;
    enum fsh_mode mode;
    enum fsh_access access;
};

typedef struct nlm4_shareargs nlm4_shareargs, *Pnlm4_shareargs;

struct nlm4_shareargs {
    struct netobj cookie;
    struct nlm4_share share;
    boolean_t reclaim;
};

typedef struct nlm4_shareres nlm4_shareres, *Pnlm4_shareres;

struct nlm4_shareres {
    struct netobj cookie;
    enum nlm4_stats stat;
    int sequence;
};

typedef struct nlm4_testargs nlm4_testargs, *Pnlm4_testargs;

struct nlm4_testargs {
    struct netobj cookie;
    boolean_t exclusive;
    struct nlm4_lock alock;
};

typedef struct nlm4_testres nlm4_testres, *Pnlm4_testres;

typedef struct nlm4_testrply nlm4_testrply, *Pnlm4_testrply;

struct nlm4_testrply {
    enum nlm4_stats stat;
    union _union_3628 nlm4_testrply_u;
};

struct nlm4_testres {
    struct netobj cookie;
    struct nlm4_testrply stat;
};

typedef struct nlm4_unlockargs nlm4_unlockargs, *Pnlm4_unlockargs;

struct nlm4_unlockargs {
    struct netobj cookie;
    struct nlm4_lock alock;
};

typedef struct nlm_cancargs nlm_cancargs, *Pnlm_cancargs;

typedef struct nlm_lock nlm_lock, *Pnlm_lock;

struct nlm_lock {
    char * caller_name;
    struct netobj fh;
    struct netobj oh;
    int svid;
    u_int l_offset;
    u_int l_len;
};

struct nlm_cancargs {
    struct netobj cookie;
    boolean_t block;
    boolean_t exclusive;
    struct nlm_lock alock;
};

typedef struct nlm_lockargs nlm_lockargs, *Pnlm_lockargs;

struct nlm_lockargs {
    struct netobj cookie;
    boolean_t block;
    boolean_t exclusive;
    struct nlm_lock alock;
    boolean_t reclaim;
    int state;
};

typedef struct nlm_notify nlm_notify, *Pnlm_notify;

typedef int rpc_int;

struct nlm_notify {
    char * name;
    rpc_int state;
};

typedef struct nlm_res nlm_res, *Pnlm_res;

typedef struct nlm_stat nlm_stat, *Pnlm_stat;

typedef enum nlm_stats {
    nlm_blocked=3,
    nlm_deadlck=5,
    nlm_denied=1,
    nlm_denied_grace_period=4,
    nlm_denied_nolocks=2,
    nlm_granted=0
} nlm_stats;

struct nlm_stat {
    enum nlm_stats stat;
};

struct nlm_res {
    struct netobj cookie;
    struct nlm_stat stat;
};

typedef struct nlm_share nlm_share, *Pnlm_share;

struct nlm_share {
    char * caller_name;
    struct netobj fh;
    struct netobj oh;
    enum fsh_mode mode;
    enum fsh_access access;
};

typedef struct nlm_shareargs nlm_shareargs, *Pnlm_shareargs;

struct nlm_shareargs {
    struct netobj cookie;
    struct nlm_share share;
    boolean_t reclaim;
};

typedef struct nlm_shareres nlm_shareres, *Pnlm_shareres;

struct nlm_shareres {
    struct netobj cookie;
    enum nlm_stats stat;
    int sequence;
};

typedef struct nlm_sm_status nlm_sm_status, *Pnlm_sm_status;

struct nlm_sm_status {
    char * mon_name;
    int state;
    char priv[16];
};

typedef struct nlm_testargs nlm_testargs, *Pnlm_testargs;

struct nlm_testargs {
    struct netobj cookie;
    boolean_t exclusive;
    struct nlm_lock alock;
};

typedef struct nlm_testres nlm_testres, *Pnlm_testres;

typedef struct nlm_testrply nlm_testrply, *Pnlm_testrply;

struct nlm_testrply {
    enum nlm_stats stat;
    union _union_3588 nlm_testrply_u;
};

struct nlm_testres {
    struct netobj cookie;
    struct nlm_testrply stat;
};

typedef struct nlm_unlockargs nlm_unlockargs, *Pnlm_unlockargs;

struct nlm_unlockargs {
    struct netobj cookie;
    struct nlm_lock alock;
};

typedef struct _struct_3895 _struct_3895, *P_struct_3895;

struct _struct_3895 {
    uchar ia_net_owner;
    uchar ia_net_node_type;
    uchar ia_host_high;
    uchar ia_host_low;
};


/* WARNING! conflicting data type names: /nm_defs.h/ip_addr_t - /bootparam_prot.h/ip_addr_t */

#define MACH_NOTIFY_DEAD_NAME 110

#define MACH_NOTIFY_FIRST 64

#define MACH_NOTIFY_LAST 115

#define MACH_NOTIFY_NO_SENDERS 106

#define MACH_NOTIFY_PORT_DELETED 101

#define MACH_NOTIFY_PORT_DESTROYED 105

#define MACH_NOTIFY_SEND_ONCE 107

#define MACH_NOTIFY_SEND_POSSIBLE 102

typedef struct mach_dead_name_notification_t mach_dead_name_notification_t, *Pmach_dead_name_notification_t;

struct mach_dead_name_notification_t {
    struct mach_msg_header_t not_header;
    struct NDR_record_t NDR;
    mach_port_name_t not_port;
    mach_msg_format_0_trailer_t trailer;
};

typedef struct mach_no_senders_notification_t mach_no_senders_notification_t, *Pmach_no_senders_notification_t;

struct mach_no_senders_notification_t {
    struct mach_msg_header_t not_header;
    struct NDR_record_t NDR;
    mach_msg_type_number_t not_count;
    mach_msg_format_0_trailer_t trailer;
};

typedef struct mach_port_deleted_notification_t mach_port_deleted_notification_t, *Pmach_port_deleted_notification_t;

struct mach_port_deleted_notification_t {
    struct mach_msg_header_t not_header;
    struct NDR_record_t NDR;
    mach_port_name_t not_port;
    mach_msg_format_0_trailer_t trailer;
};

typedef struct mach_port_destroyed_notification_t mach_port_destroyed_notification_t, *Pmach_port_destroyed_notification_t;

struct mach_port_destroyed_notification_t {
    struct mach_msg_header_t not_header;
    struct mach_msg_body_t not_body;
    struct mach_msg_port_descriptor_t not_port;
    mach_msg_format_0_trailer_t trailer;
};

typedef struct mach_send_once_notification_t mach_send_once_notification_t, *Pmach_send_once_notification_t;

struct mach_send_once_notification_t {
    struct mach_msg_header_t not_header;
    mach_msg_format_0_trailer_t trailer;
};

typedef struct mach_send_possible_notification_t mach_send_possible_notification_t, *Pmach_send_possible_notification_t;

struct mach_send_possible_notification_t {
    struct mach_msg_header_t not_header;
    struct NDR_record_t NDR;
    mach_port_name_t not_port;
    mach_msg_format_0_trailer_t trailer;
};

typedef mach_port_t notify_port_t;

typedef enum enum_522 {
    NSAdminApplicationDirectory=4,
    NSAllApplicationsDirectory=100,
    NSAllLibrariesDirectory=101,
    NSApplicationDirectory=1,
    NSApplicationSupportDirectory=14,
    NSAutosavedInformationDirectory=11,
    NSCachesDirectory=13,
    NSCoreServiceDirectory=10,
    NSDemoApplicationDirectory=2,
    NSDesktopDirectory=12,
    NSDeveloperApplicationDirectory=3,
    NSDeveloperDirectory=6,
    NSDocumentDirectory=9,
    NSDocumentationDirectory=8,
    NSDownloadsDirectory=15,
    NSInputMethodsDirectory=16,
    NSLibraryDirectory=5,
    NSMoviesDirectory=17,
    NSMusicDirectory=18,
    NSPicturesDirectory=19,
    NSPreferencePanesDirectory=22,
    NSPrinterDescriptionDirectory=20,
    NSSharedPublicDirectory=21,
    NSUserDirectory=7
} enum_522;

typedef enum enum_523 {
    NSAllDomainsMask=65535,
    NSLocalDomainMask=2,
    NSNetworkDomainMask=4,
    NSSystemDomainMask=8,
    NSUserDomainMask=1
} enum_523;

typedef enum enum_522 NSSearchPathDirectory;

typedef enum enum_523 NSSearchPathDomainMask;

typedef uint NSSearchPathEnumerationState;

#define NTSID_MAX_AUTHORITIES 16

typedef struct nt_sid_t nt_sid_t, *Pnt_sid_t;

struct nt_sid_t {
    u_int8_t sid_kind;
    u_int8_t sid_authcount;
    u_int8_t sid_authority[6];
    u_int32_t sid_authorities[16];
};

typedef struct _xsltCompMatch _xsltCompMatch, *P_xsltCompMatch;

struct _xsltCompMatch {
};

typedef struct _xsltFormatNumberInfo _xsltFormatNumberInfo, *P_xsltFormatNumberInfo;

struct _xsltFormatNumberInfo {
    int integer_hash;
    int integer_digits;
    int frac_digits;
    int frac_hash;
    int group;
    int multiplier;
    char add_decimal;
    char is_multiplier_set;
    char is_negative_pattern;
};

typedef struct _xsltNumberData _xsltNumberData, *P_xsltNumberData;

struct _xsltNumberData {
    xmlChar * level;
    xmlChar * count;
    xmlChar * from;
    xmlChar * value;
    xmlChar * format;
    int has_format;
    int digitsPerGroup;
    int groupingCharacter;
    int groupingCharacterLen;
    xmlDocPtr doc;
    xmlNodePtr node;
    struct _xsltCompMatch * countPat;
    struct _xsltCompMatch * fromPat;
};

typedef struct _xsltFormatNumberInfo xsltFormatNumberInfo;

typedef xsltFormatNumberInfo * xsltFormatNumberInfoPtr;

typedef struct _xsltNumberData xsltNumberData;

typedef xsltNumberData * xsltNumberDataPtr;

#define NID_aaControls 289

#define NID_ac_auditEntity 287

#define NID_ac_proxying 397

#define NID_ac_targeting 288

#define NID_account 446

#define NID_ad_ca_issuers 179

#define NID_ad_dvcs 364

#define NID_ad_OCSP 178

#define NID_ad_timeStamping 363

#define NID_aes_128_cbc 419

#define NID_aes_128_cfb1 650

#define NID_aes_128_cfb128 421

#define NID_aes_128_cfb8 653

#define NID_aes_128_ecb 418

#define NID_aes_128_ofb128 420

#define NID_aes_192_cbc 423

#define NID_aes_192_cfb1 651

#define NID_aes_192_cfb128 425

#define NID_aes_192_cfb8 654

#define NID_aes_192_ecb 422

#define NID_aes_192_ofb128 424

#define NID_aes_256_cbc 427

#define NID_aes_256_cfb1 652

#define NID_aes_256_cfb128 429

#define NID_aes_256_cfb8 655

#define NID_aes_256_ecb 426

#define NID_aes_256_ofb128 428

#define NID_algorithm 376

#define NID_ansi_X9_62 405

#define NID_any_policy 746

#define NID_aRecord 478

#define NID_associatedDomain 484

#define NID_associatedName 485

#define NID_audio 501

#define NID_authority_key_identifier 90

#define NID_authorityRevocationList 882

#define NID_basic_constraints 87

#define NID_bf_cbc 91

#define NID_bf_cfb64 93

#define NID_bf_ecb 92

#define NID_bf_ofb64 94

#define NID_biometricInfo 285

#define NID_buildingName 494

#define NID_businessCategory 860

#define NID_cACertificate 881

#define NID_camellia_128_cbc 751

#define NID_camellia_128_cfb1 760

#define NID_camellia_128_cfb128 757

#define NID_camellia_128_cfb8 763

#define NID_camellia_128_ecb 754

#define NID_camellia_128_ofb128 766

#define NID_camellia_192_cbc 752

#define NID_camellia_192_cfb1 761

#define NID_camellia_192_cfb128 758

#define NID_camellia_192_cfb8 764

#define NID_camellia_192_ecb 755

#define NID_camellia_192_ofb128 767

#define NID_camellia_256_cbc 753

#define NID_camellia_256_cfb1 762

#define NID_camellia_256_cfb128 759

#define NID_camellia_256_cfb8 765

#define NID_camellia_256_ecb 756

#define NID_camellia_256_ofb128 768

#define NID_caRepository 785

#define NID_caseIgnoreIA5StringSyntax 443

#define NID_cast5_cbc 108

#define NID_cast5_cfb64 110

#define NID_cast5_ecb 109

#define NID_cast5_ofb64 111

#define NID_ccitt 404

#define NID_certBag 152

#define NID_certicom_arc 677

#define NID_certificate_issuer 771

#define NID_certificate_policies 89

#define NID_certificateRevocationList 883

#define NID_clearance 395

#define NID_client_auth 130

#define NID_cNAMERecord 483

#define NID_code_sign 131

#define NID_commonName 13

#define NID_countryName 14

#define NID_crl_distribution_points 103

#define NID_crl_number 88

#define NID_crl_reason 141

#define NID_crlBag 153

#define NID_crossCertificatePair 884

#define NID_cryptocom 806

#define NID_cryptopro 805

#define NID_data 434

#define NID_dcObject 390

#define NID_delta_crl 140

#define NID_deltaRevocationList 891

#define NID_des_cbc 31

#define NID_des_cdmf 643

#define NID_des_cfb1 656

#define NID_des_cfb64 30

#define NID_des_cfb8 657

#define NID_des_ecb 29

#define NID_des_ede3_cbc 44

#define NID_des_ede3_cfb1 658

#define NID_des_ede3_cfb64 61

#define NID_des_ede3_cfb8 659

#define NID_des_ede3_ecb 33

#define NID_des_ede3_ofb64 63

#define NID_des_ede_cbc 43

#define NID_des_ede_cfb64 60

#define NID_des_ede_ecb 32

#define NID_des_ede_ofb64 62

#define NID_des_ofb64 45

#define NID_description 107

#define NID_destinationIndicator 871

#define NID_desx_cbc 80

#define NID_dhKeyAgreement 28

#define NID_Directory 382

#define NID_distinguishedName 887

#define NID_dITRedirect 500

#define NID_dmdName 892

#define NID_dnQualifier 174

#define NID_dNSDomain 451

#define NID_document 447

#define NID_documentAuthor 471

#define NID_documentIdentifier 468

#define NID_documentLocation 472

#define NID_documentPublisher 502

#define NID_documentSeries 449

#define NID_documentTitle 469

#define NID_documentVersion 470

#define NID_dod 380

#define NID_Domain 392

#define NID_domainComponent 391

#define NID_domainRelatedObject 452

#define NID_dsa 116

#define NID_dsa_2 67

#define NID_dsa_with_SHA224 802

#define NID_dsa_with_SHA256 803

#define NID_dSAQuality 495

#define NID_dsaWithSHA 66

#define NID_dsaWithSHA1 113

#define NID_dsaWithSHA1_2 70

#define NID_dvcs 297

#define NID_ecdsa_with_Recommended 791

#define NID_ecdsa_with_SHA1 416

#define NID_ecdsa_with_SHA224 793

#define NID_ecdsa_with_SHA256 794

#define NID_ecdsa_with_SHA384 795

#define NID_ecdsa_with_SHA512 796

#define NID_ecdsa_with_Specified 792

#define NID_email_protect 132

#define NID_enhancedSearchGuide 885

#define NID_Enterprises 389

#define NID_Experimental 384

#define NID_ext_key_usage 126

#define NID_ext_req 172

#define NID_facsimileTelephoneNumber 867

#define NID_favouriteDrink 462

#define NID_freshest_crl 857

#define NID_friendlyCountry 453

#define NID_friendlyCountryName 490

#define NID_friendlyName 156

#define NID_generationQualifier 509

#define NID_givenName 99

#define NID_gost89_cnt 814

#define NID_hmac 855

#define NID_hmac_md5 780

#define NID_hmac_sha1 781

#define NID_hmacWithMD5 797

#define NID_hmacWithSHA1 163

#define NID_hmacWithSHA224 798

#define NID_hmacWithSHA256 799

#define NID_hmacWithSHA384 800

#define NID_hmacWithSHA512 801

#define NID_hold_instruction_call_issuer 432

#define NID_hold_instruction_code 430

#define NID_hold_instruction_none 431

#define NID_hold_instruction_reject 433

#define NID_homePostalAddress 486

#define NID_homeTelephoneNumber 473

#define NID_host 466

#define NID_houseIdentifier 889

#define NID_iA5StringSyntax 442

#define NID_iana 381

#define NID_id_aca 266

#define NID_id_aca_accessIdentity 355

#define NID_id_aca_authenticationInfo 354

#define NID_id_aca_chargingIdentity 356

#define NID_id_aca_encAttrs 399

#define NID_id_aca_group 357

#define NID_id_aca_role 358

#define NID_id_ad 176

#define NID_id_aes128_wrap 788

#define NID_id_aes192_wrap 789

#define NID_id_aes256_wrap 790

#define NID_id_alg 262

#define NID_id_alg_des40 323

#define NID_id_alg_dh_pop 326

#define NID_id_alg_dh_sig_hmac_sha1 325

#define NID_id_alg_noSignature 324

#define NID_id_cct 268

#define NID_id_cct_crs 360

#define NID_id_cct_PKIData 361

#define NID_id_cct_PKIResponse 362

#define NID_id_ce 81

#define NID_id_cmc 263

#define NID_id_cmc_addExtensions 334

#define NID_id_cmc_confirmCertAcceptance 346

#define NID_id_cmc_dataReturn 330

#define NID_id_cmc_decryptedPOP 336

#define NID_id_cmc_encryptedPOP 335

#define NID_id_cmc_getCert 338

#define NID_id_cmc_getCRL 339

#define NID_id_cmc_identification 328

#define NID_id_cmc_identityProof 329

#define NID_id_cmc_lraPOPWitness 337

#define NID_id_cmc_popLinkRandom 344

#define NID_id_cmc_popLinkWitness 345

#define NID_id_cmc_queryPending 343

#define NID_id_cmc_recipientNonce 333

#define NID_id_cmc_regInfo 341

#define NID_id_cmc_responseInfo 342

#define NID_id_cmc_revokeRequest 340

#define NID_id_cmc_senderNonce 332

#define NID_id_cmc_statusInfo 327

#define NID_id_cmc_transactionId 331

#define NID_id_ct_asciiTextWithCRLF 787

#define NID_id_DHBasedMac 783

#define NID_id_Gost28147_89 813

#define NID_id_Gost28147_89_cc 849

#define NID_id_Gost28147_89_CryptoPro_A_ParamSet 824

#define NID_id_Gost28147_89_CryptoPro_B_ParamSet 825

#define NID_id_Gost28147_89_CryptoPro_C_ParamSet 826

#define NID_id_Gost28147_89_CryptoPro_D_ParamSet 827

#define NID_id_Gost28147_89_CryptoPro_KeyMeshing 819

#define NID_id_Gost28147_89_CryptoPro_Oscar_1_0_ParamSet 829

#define NID_id_Gost28147_89_CryptoPro_Oscar_1_1_ParamSet 828

#define NID_id_Gost28147_89_CryptoPro_RIC_1_ParamSet 830

#define NID_id_Gost28147_89_MAC 815

#define NID_id_Gost28147_89_None_KeyMeshing 820

#define NID_id_Gost28147_89_TestParamSet 823

#define NID_id_GostR3410_2001 811

#define NID_id_GostR3410_2001_cc 851

#define NID_id_GostR3410_2001_CryptoPro_A_ParamSet 840

#define NID_id_GostR3410_2001_CryptoPro_B_ParamSet 841

#define NID_id_GostR3410_2001_CryptoPro_C_ParamSet 842

#define NID_id_GostR3410_2001_CryptoPro_XchA_ParamSet 843

#define NID_id_GostR3410_2001_CryptoPro_XchB_ParamSet 844

#define NID_id_GostR3410_2001_ParamSet_cc 854

#define NID_id_GostR3410_2001_TestParamSet 839

#define NID_id_GostR3410_2001DH 817

#define NID_id_GostR3410_94 812

#define NID_id_GostR3410_94_a 845

#define NID_id_GostR3410_94_aBis 846

#define NID_id_GostR3410_94_b 847

#define NID_id_GostR3410_94_bBis 848

#define NID_id_GostR3410_94_cc 850

#define NID_id_GostR3410_94_CryptoPro_A_ParamSet 832

#define NID_id_GostR3410_94_CryptoPro_B_ParamSet 833

#define NID_id_GostR3410_94_CryptoPro_C_ParamSet 834

#define NID_id_GostR3410_94_CryptoPro_D_ParamSet 835

#define NID_id_GostR3410_94_CryptoPro_XchA_ParamSet 836

#define NID_id_GostR3410_94_CryptoPro_XchB_ParamSet 837

#define NID_id_GostR3410_94_CryptoPro_XchC_ParamSet 838

#define NID_id_GostR3410_94_TestParamSet 831

#define NID_id_GostR3410_94DH 818

#define NID_id_GostR3411_94 809

#define NID_id_GostR3411_94_CryptoProParamSet 822

#define NID_id_GostR3411_94_prf 816

#define NID_id_GostR3411_94_TestParamSet 821

#define NID_id_GostR3411_94_with_GostR3410_2001 807

#define NID_id_GostR3411_94_with_GostR3410_2001_cc 853

#define NID_id_GostR3411_94_with_GostR3410_94 808

#define NID_id_GostR3411_94_with_GostR3410_94_cc 852

#define NID_id_hex_multipart_message 508

#define NID_id_hex_partial_message 507

#define NID_id_HMACGostR3411_94 810

#define NID_id_it 260

#define NID_id_it_caKeyUpdateInfo 302

#define NID_id_it_caProtEncCert 298

#define NID_id_it_confirmWaitTime 311

#define NID_id_it_currentCRL 303

#define NID_id_it_encKeyPairTypes 300

#define NID_id_it_implicitConfirm 310

#define NID_id_it_keyPairParamRep 308

#define NID_id_it_keyPairParamReq 307

#define NID_id_it_origPKIMessage 312

#define NID_id_it_preferredSymmAlg 301

#define NID_id_it_revPassphrase 309

#define NID_id_it_signKeyPairTypes 299

#define NID_id_it_subscriptionRequest 305

#define NID_id_it_subscriptionResponse 306

#define NID_id_it_suppLangTags 784

#define NID_id_it_unsupportedOIDs 304

#define NID_id_kp 128

#define NID_id_mod_attribute_cert 280

#define NID_id_mod_cmc 274

#define NID_id_mod_cmp 277

#define NID_id_mod_cmp2000 284

#define NID_id_mod_crmf 273

#define NID_id_mod_dvcs 283

#define NID_id_mod_kea_profile_88 275

#define NID_id_mod_kea_profile_93 276

#define NID_id_mod_ocsp 282

#define NID_id_mod_qualified_cert_88 278

#define NID_id_mod_qualified_cert_93 279

#define NID_id_mod_timestamp_protocol 281

#define NID_id_on 264

#define NID_id_on_permanentIdentifier 858

#define NID_id_on_personalData 347

#define NID_id_PasswordBasedMAC 782

#define NID_id_pbkdf2 69

#define NID_id_pda 265

#define NID_id_pda_countryOfCitizenship 352

#define NID_id_pda_countryOfResidence 353

#define NID_id_pda_dateOfBirth 348

#define NID_id_pda_gender 351

#define NID_id_pda_placeOfBirth 349

#define NID_id_pe 175

#define NID_id_pkip 261

#define NID_id_pkix 127

#define NID_id_pkix1_explicit_88 269

#define NID_id_pkix1_explicit_93 271

#define NID_id_pkix1_implicit_88 270

#define NID_id_pkix1_implicit_93 272

#define NID_id_pkix_mod 258

#define NID_id_pkix_OCSP_acceptableResponses 368

#define NID_id_pkix_OCSP_archiveCutoff 370

#define NID_id_pkix_OCSP_basic 365

#define NID_id_pkix_OCSP_CrlID 367

#define NID_id_pkix_OCSP_extendedStatus 372

#define NID_id_pkix_OCSP_noCheck 369

#define NID_id_pkix_OCSP_Nonce 366

#define NID_id_pkix_OCSP_path 374

#define NID_id_pkix_OCSP_serviceLocator 371

#define NID_id_pkix_OCSP_trustRoot 375

#define NID_id_pkix_OCSP_valid 373

#define NID_id_ppl 662

#define NID_id_ppl_anyLanguage 664

#define NID_id_ppl_inheritAll 665

#define NID_id_qcs 267

#define NID_id_qcs_pkixQCSyntax_v1 359

#define NID_id_qt 259

#define NID_id_qt_cps 164

#define NID_id_qt_unotice 165

#define NID_id_regCtrl 313

#define NID_id_regCtrl_authenticator 316

#define NID_id_regCtrl_oldCertID 319

#define NID_id_regCtrl_pkiArchiveOptions 318

#define NID_id_regCtrl_pkiPublicationInfo 317

#define NID_id_regCtrl_protocolEncrKey 320

#define NID_id_regCtrl_regToken 315

#define NID_id_regInfo 314

#define NID_id_regInfo_certReq 322

#define NID_id_regInfo_utf8Pairs 321

#define NID_id_set 512

#define NID_id_smime_aa 191

#define NID_id_smime_aa_contentHint 215

#define NID_id_smime_aa_contentIdentifier 218

#define NID_id_smime_aa_contentReference 221

#define NID_id_smime_aa_dvcs_dvc 240

#define NID_id_smime_aa_encapContentType 217

#define NID_id_smime_aa_encrypKeyPref 222

#define NID_id_smime_aa_equivalentLabels 220

#define NID_id_smime_aa_ets_archiveTimeStamp 238

#define NID_id_smime_aa_ets_certCRLTimestamp 237

#define NID_id_smime_aa_ets_CertificateRefs 232

#define NID_id_smime_aa_ets_certValues 234

#define NID_id_smime_aa_ets_commitmentType 227

#define NID_id_smime_aa_ets_contentTimestamp 231

#define NID_id_smime_aa_ets_escTimeStamp 236

#define NID_id_smime_aa_ets_otherSigCert 230

#define NID_id_smime_aa_ets_RevocationRefs 233

#define NID_id_smime_aa_ets_revocationValues 235

#define NID_id_smime_aa_ets_signerAttr 229

#define NID_id_smime_aa_ets_signerLocation 228

#define NID_id_smime_aa_ets_sigPolicyId 226

#define NID_id_smime_aa_macValue 219

#define NID_id_smime_aa_mlExpandHistory 214

#define NID_id_smime_aa_msgSigDigest 216

#define NID_id_smime_aa_receiptRequest 212

#define NID_id_smime_aa_securityLabel 213

#define NID_id_smime_aa_signatureType 239

#define NID_id_smime_aa_signingCertificate 223

#define NID_id_smime_aa_smimeEncryptCerts 224

#define NID_id_smime_aa_timeStampToken 225

#define NID_id_smime_alg 192

#define NID_id_smime_alg_3DESwrap 243

#define NID_id_smime_alg_CMS3DESwrap 246

#define NID_id_smime_alg_CMSRC2wrap 247

#define NID_id_smime_alg_ESDH 245

#define NID_id_smime_alg_ESDHwith3DES 241

#define NID_id_smime_alg_ESDHwithRC2 242

#define NID_id_smime_alg_RC2wrap 244

#define NID_id_smime_cd 193

#define NID_id_smime_cd_ldap 248

#define NID_id_smime_ct 190

#define NID_id_smime_ct_authData 205

#define NID_id_smime_ct_compressedData 786

#define NID_id_smime_ct_contentInfo 209

#define NID_id_smime_ct_DVCSRequestData 210

#define NID_id_smime_ct_DVCSResponseData 211

#define NID_id_smime_ct_publishCert 206

#define NID_id_smime_ct_receipt 204

#define NID_id_smime_ct_TDTInfo 208

#define NID_id_smime_ct_TSTInfo 207

#define NID_id_smime_cti 195

#define NID_id_smime_cti_ets_proofOfApproval 255

#define NID_id_smime_cti_ets_proofOfCreation 256

#define NID_id_smime_cti_ets_proofOfDelivery 253

#define NID_id_smime_cti_ets_proofOfOrigin 251

#define NID_id_smime_cti_ets_proofOfReceipt 252

#define NID_id_smime_cti_ets_proofOfSender 254

#define NID_id_smime_mod 189

#define NID_id_smime_mod_cms 196

#define NID_id_smime_mod_ess 197

#define NID_id_smime_mod_ets_eSignature_88 200

#define NID_id_smime_mod_ets_eSignature_97 201

#define NID_id_smime_mod_ets_eSigPolicy_88 202

#define NID_id_smime_mod_ets_eSigPolicy_97 203

#define NID_id_smime_mod_msg_v3 199

#define NID_id_smime_mod_oid 198

#define NID_id_smime_spq 194

#define NID_id_smime_spq_ets_sqt_unotice 250

#define NID_id_smime_spq_ets_sqt_uri 249

#define NID_idea_cbc 34

#define NID_idea_cfb64 35

#define NID_idea_ecb 36

#define NID_idea_ofb64 46

#define NID_identified_organization 676

#define NID_Independent 667

#define NID_info 461

#define NID_info_access 177

#define NID_inhibit_any_policy 748

#define NID_initials 101

#define NID_international_organizations 647

#define NID_internationaliSDNNumber 869

#define NID_invalidity_date 142

#define NID_ipsec3 749

#define NID_ipsec4 750

#define NID_ipsecEndSystem 294

#define NID_ipsecTunnel 295

#define NID_ipsecUser 296

#define NID_iso 181

#define NID_ISO_US 183

#define NID_issuer_alt_name 86

#define NID_issuing_distribution_point 770

#define NID_itu_t 645

#define NID_janetMailbox 492

#define NID_joint_iso_ccitt 393

#define NID_joint_iso_itu_t 646

#define NID_key_usage 83

#define NID_keyBag 150

#define NID_kisa 773

#define NID_lastModifiedBy 477

#define NID_lastModifiedTime 476

#define NID_localityName 15

#define NID_localKeyID 157

#define NID_LocalKeySet 856

#define NID_Mail 388

#define NID_mailPreferenceOption 493

#define NID_Management 383

#define NID_manager 467

#define NID_md2 3

#define NID_md2WithRSAEncryption 7

#define NID_md4 257

#define NID_md4WithRSAEncryption 396

#define NID_md5 4

#define NID_md5_sha1 114

#define NID_md5WithRSA 104

#define NID_md5WithRSAEncryption 8

#define NID_mdc2 95

#define NID_mdc2WithRSA 96

#define NID_member 875

#define NID_member_body 182

#define NID_mime_mhs 504

#define NID_mime_mhs_bodies 506

#define NID_mime_mhs_headings 505

#define NID_mobileTelephoneNumber 488

#define NID_ms_code_com 135

#define NID_ms_code_ind 134

#define NID_ms_csp_name 417

#define NID_ms_ctl_sign 136

#define NID_ms_efs 138

#define NID_ms_ext_req 171

#define NID_ms_sgc 137

#define NID_ms_smartcard_login 648

#define NID_ms_upn 649

#define NID_mXRecord 480

#define NID_name 173

#define NID_name_constraints 666

#define NID_netscape 57

#define NID_netscape_base_url 72

#define NID_netscape_ca_policy_url 76

#define NID_netscape_ca_revocation_url 74

#define NID_netscape_cert_extension 58

#define NID_netscape_cert_sequence 79

#define NID_netscape_cert_type 71

#define NID_netscape_comment 78

#define NID_netscape_data_type 59

#define NID_netscape_renewal_url 75

#define NID_netscape_revocation_url 73

#define NID_netscape_ssl_server_name 77

#define NID_no_rev_avail 403

#define NID_ns_sgc 139

#define NID_nSRecord 481

#define NID_OCSP_sign 180

#define NID_org 379

#define NID_organizationalStatus 491

#define NID_organizationalUnitName 18

#define NID_organizationName 17

#define NID_otherMailbox 475

#define NID_owner 876

#define NID_pagerTelephoneNumber 489

#define NID_pbe_WithSHA1And128BitRC2_CBC 148

#define NID_pbe_WithSHA1And128BitRC4 144

#define NID_pbe_WithSHA1And2_Key_TripleDES_CBC 147

#define NID_pbe_WithSHA1And3_Key_TripleDES_CBC 146

#define NID_pbe_WithSHA1And40BitRC2_CBC 149

#define NID_pbe_WithSHA1And40BitRC4 145

#define NID_pbes2 161

#define NID_pbeWithMD2AndDES_CBC 9

#define NID_pbeWithMD2AndRC2_CBC 168

#define NID_pbeWithMD5AndCast5_CBC 112

#define NID_pbeWithMD5AndDES_CBC 10

#define NID_pbeWithMD5AndRC2_CBC 169

#define NID_pbeWithSHA1AndDES_CBC 170

#define NID_pbeWithSHA1AndRC2_CBC 68

#define NID_pbmac1 162

#define NID_personalSignature 499

#define NID_personalTitle 487

#define NID_photo 464

#define NID_physicalDeliveryOfficeName 863

#define NID_pilot 437

#define NID_pilotAttributeSyntax 439

#define NID_pilotAttributeType 438

#define NID_pilotAttributeType27 479

#define NID_pilotDSA 456

#define NID_pilotGroups 441

#define NID_pilotObject 444

#define NID_pilotObjectClass 440

#define NID_pilotOrganization 455

#define NID_pilotPerson 445

#define NID_pkcs 2

#define NID_pkcs1 186

#define NID_pkcs3 27

#define NID_pkcs5 187

#define NID_pkcs7 20

#define NID_pkcs7_data 21

#define NID_pkcs7_digest 25

#define NID_pkcs7_encrypted 26

#define NID_pkcs7_enveloped 23

#define NID_pkcs7_signed 22

#define NID_pkcs7_signedAndEnveloped 24

#define NID_pkcs8ShroudedKeyBag 151

#define NID_pkcs9 47

#define NID_pkcs9_challengePassword 54

#define NID_pkcs9_contentType 50

#define NID_pkcs9_countersignature 53

#define NID_pkcs9_emailAddress 48

#define NID_pkcs9_extCertAttributes 56

#define NID_pkcs9_messageDigest 51

#define NID_pkcs9_signingTime 52

#define NID_pkcs9_unstructuredAddress 55

#define NID_pkcs9_unstructuredName 49

#define NID_policy_constraints 401

#define NID_policy_mappings 747

#define NID_postalAddress 861

#define NID_postalCode 661

#define NID_postOfficeBox 862

#define NID_preferredDeliveryMethod 872

#define NID_presentationAddress 873

#define NID_Private 385

#define NID_private_key_usage_period 84

#define NID_protocolInformation 886

#define NID_proxyCertInfo 663

#define NID_pseudonym 510

#define NID_pss 435

#define NID_qcStatements 286

#define NID_qualityLabelledData 457

#define NID_rc2_40_cbc 98

#define NID_rc2_64_cbc 166

#define NID_rc2_cbc 37

#define NID_rc2_cfb64 39

#define NID_rc2_ecb 38

#define NID_rc2_ofb64 40

#define NID_rc4 5

#define NID_rc4_40 97

#define NID_rc5_cbc 120

#define NID_rc5_cfb64 122

#define NID_rc5_ecb 121

#define NID_rc5_ofb64 123

#define NID_registeredAddress 870

#define NID_rFC822localPart 450

#define NID_rfc822Mailbox 460

#define NID_ripemd160 117

#define NID_ripemd160WithRSA 119

#define NID_rle_compression 124

#define NID_role 400

#define NID_roleOccupant 877

#define NID_room 448

#define NID_roomNumber 463

#define NID_rsa 19

#define NID_rsadsi 1

#define NID_rsaEncryption 6

#define NID_rsaOAEPEncryptionSET 644

#define NID_rsaSignature 377

#define NID_safeContentsBag 155

#define NID_sbgp_autonomousSysNum 291

#define NID_sbgp_ipAddrBlock 290

#define NID_sbgp_routerIdentifier 292

#define NID_sdsiCertificate 159

#define NID_searchGuide 859

#define NID_secp112r1 704

#define NID_secp112r2 705

#define NID_secp128r1 706

#define NID_secp128r2 707

#define NID_secp160k1 708

#define NID_secp160r1 709

#define NID_secp160r2 710

#define NID_secp192k1 711

#define NID_secp224k1 712

#define NID_secp224r1 713

#define NID_secp256k1 714

#define NID_secp384r1 715

#define NID_secp521r1 716

#define NID_secretary 474

#define NID_secretBag 154

#define NID_sect113r1 717

#define NID_sect113r2 718

#define NID_sect131r1 719

#define NID_sect131r2 720

#define NID_sect163k1 721

#define NID_sect163r1 722

#define NID_sect163r2 723

#define NID_sect193r1 724

#define NID_sect193r2 725

#define NID_sect233k1 726

#define NID_sect233r1 727

#define NID_sect239k1 728

#define NID_sect283k1 729

#define NID_sect283r1 730

#define NID_sect409k1 731

#define NID_sect409r1 732

#define NID_sect571k1 733

#define NID_sect571r1 734

#define NID_Security 386

#define NID_seeAlso 878

#define NID_seed_cbc 777

#define NID_seed_cfb128 779

#define NID_seed_ecb 776

#define NID_seed_ofb128 778

#define NID_selected_attribute_types 394

#define NID_serialNumber 105

#define NID_server_auth 129

#define NID_set_addPolicy 625

#define NID_set_attr 515

#define NID_set_brand 518

#define NID_set_brand_AmericanExpress 638

#define NID_set_brand_Diners 637

#define NID_set_brand_IATA_ATA 636

#define NID_set_brand_JCB 639

#define NID_set_brand_MasterCard 641

#define NID_set_brand_Novus 642

#define NID_set_brand_Visa 640

#define NID_set_certExt 517

#define NID_set_ctype 513

#define NID_set_msgExt 514

#define NID_set_policy 516

#define NID_set_policy_root 607

#define NID_set_rootKeyThumb 624

#define NID_setAttr_Cert 620

#define NID_setAttr_GenCryptgrm 631

#define NID_setAttr_IssCap 623

#define NID_setAttr_IssCap_CVM 628

#define NID_setAttr_IssCap_Sig 630

#define NID_setAttr_IssCap_T2 629

#define NID_setAttr_PGWYcap 621

#define NID_setAttr_SecDevSig 635

#define NID_setAttr_T2cleartxt 633

#define NID_setAttr_T2Enc 632

#define NID_setAttr_Token_B0Prime 627

#define NID_setAttr_Token_EMV 626

#define NID_setAttr_TokenType 622

#define NID_setAttr_TokICCsig 634

#define NID_setCext_cCertRequired 611

#define NID_setCext_certType 609

#define NID_setCext_hashedRoot 608

#define NID_setCext_IssuerCapabilities 619

#define NID_setCext_merchData 610

#define NID_setCext_PGWYcapabilities 615

#define NID_setCext_setExt 613

#define NID_setCext_setQualf 614

#define NID_setCext_TokenIdentifier 616

#define NID_setCext_TokenType 618

#define NID_setCext_Track2Data 617

#define NID_setCext_tunneling 612

#define NID_setct_AcqCardCodeMsg 540

#define NID_setct_AcqCardCodeMsgTBE 576

#define NID_setct_AuthReqTBE 570

#define NID_setct_AuthReqTBS 534

#define NID_setct_AuthResBaggage 527

#define NID_setct_AuthResTBE 571

#define NID_setct_AuthResTBEX 572

#define NID_setct_AuthResTBS 535

#define NID_setct_AuthResTBSX 536

#define NID_setct_AuthRevReqBaggage 528

#define NID_setct_AuthRevReqTBE 577

#define NID_setct_AuthRevReqTBS 541

#define NID_setct_AuthRevResBaggage 529

#define NID_setct_AuthRevResData 542

#define NID_setct_AuthRevResTBE 578

#define NID_setct_AuthRevResTBEB 579

#define NID_setct_AuthRevResTBS 543

#define NID_setct_AuthTokenTBE 573

#define NID_setct_AuthTokenTBS 537

#define NID_setct_BatchAdminReqData 558

#define NID_setct_BatchAdminReqTBE 592

#define NID_setct_BatchAdminResData 559

#define NID_setct_BatchAdminResTBE 593

#define NID_setct_BCIDistributionTBS 600

#define NID_setct_CapReqTBE 580

#define NID_setct_CapReqTBEX 581

#define NID_setct_CapReqTBS 544

#define NID_setct_CapReqTBSX 545

#define NID_setct_CapResData 546

#define NID_setct_CapResTBE 582

#define NID_setct_CapRevReqTBE 583

#define NID_setct_CapRevReqTBEX 584

#define NID_setct_CapRevReqTBS 547

#define NID_setct_CapRevReqTBSX 548

#define NID_setct_CapRevResData 549

#define NID_setct_CapRevResTBE 585

#define NID_setct_CapTokenData 538

#define NID_setct_CapTokenSeq 530

#define NID_setct_CapTokenTBE 574

#define NID_setct_CapTokenTBEX 575

#define NID_setct_CapTokenTBS 539

#define NID_setct_CardCInitResTBS 560

#define NID_setct_CertInqReqTBS 566

#define NID_setct_CertReqData 563

#define NID_setct_CertReqTBE 595

#define NID_setct_CertReqTBEX 596

#define NID_setct_CertReqTBS 564

#define NID_setct_CertResData 565

#define NID_setct_CertResTBE 597

#define NID_setct_CredReqTBE 586

#define NID_setct_CredReqTBEX 587

#define NID_setct_CredReqTBS 550

#define NID_setct_CredReqTBSX 551

#define NID_setct_CredResData 552

#define NID_setct_CredResTBE 588

#define NID_setct_CredRevReqTBE 589

#define NID_setct_CredRevReqTBEX 590

#define NID_setct_CredRevReqTBS 553

#define NID_setct_CredRevReqTBSX 554

#define NID_setct_CredRevResData 555

#define NID_setct_CredRevResTBE 591

#define NID_setct_CRLNotificationResTBS 599

#define NID_setct_CRLNotificationTBS 598

#define NID_setct_ErrorTBS 567

#define NID_setct_HODInput 526

#define NID_setct_MeAqCInitResTBS 561

#define NID_setct_OIData 522

#define NID_setct_PANData 519

#define NID_setct_PANOnly 521

#define NID_setct_PANToken 520

#define NID_setct_PCertReqData 556

#define NID_setct_PCertResTBS 557

#define NID_setct_PI 523

#define NID_setct_PI_TBS 532

#define NID_setct_PIData 524

#define NID_setct_PIDataUnsigned 525

#define NID_setct_PIDualSignedTBE 568

#define NID_setct_PInitResData 531

#define NID_setct_PIUnsignedTBE 569

#define NID_setct_PResData 533

#define NID_setct_RegFormReqTBE 594

#define NID_setct_RegFormResTBS 562

#define NID_setext_cv 606

#define NID_setext_genCrypt 601

#define NID_setext_miAuth 602

#define NID_setext_pinAny 604

#define NID_setext_pinSecure 603

#define NID_setext_track2 605

#define NID_sha 41

#define NID_sha1 64

#define NID_sha1WithRSA 115

#define NID_sha1WithRSAEncryption 65

#define NID_sha224 675

#define NID_sha224WithRSAEncryption 671

#define NID_sha256 672

#define NID_sha256WithRSAEncryption 668

#define NID_sha384 673

#define NID_sha384WithRSAEncryption 669

#define NID_sha512 674

#define NID_sha512WithRSAEncryption 670

#define NID_shaWithRSAEncryption 42

#define NID_simpleSecurityObject 454

#define NID_sinfo_access 398

#define NID_singleLevelQuality 496

#define NID_SMIME 188

#define NID_SMIMECapabilities 167

#define NID_SNMPv2 387

#define NID_sOARecord 482

#define NID_stateOrProvinceName 16

#define NID_streetAddress 660

#define NID_subject_alt_name 85

#define NID_subject_directory_attributes 769

#define NID_subject_key_identifier 82

#define NID_subtreeMaximumQuality 498

#define NID_subtreeMinimumQuality 497

#define NID_supportedAlgorithms 890

#define NID_supportedApplicationContext 874

#define NID_surname 100

#define NID_sxnet 143

#define NID_target_information 402

#define NID_telephoneNumber 864

#define NID_teletexTerminalIdentifier 866

#define NID_telexNumber 865

#define NID_textEncodedORAddress 459

#define NID_textNotice 293

#define NID_time_stamp 133

#define NID_title 106

#define NID_ucl 436

#define NID_undef 0

#define NID_uniqueMember 888

#define NID_userCertificate 880

#define NID_userClass 465

#define NID_userId 458

#define NID_userPassword 879

#define NID_wap 678

#define NID_wap_wsg 679

#define NID_wap_wsg_idm_ecid_wtls1 735

#define NID_wap_wsg_idm_ecid_wtls10 743

#define NID_wap_wsg_idm_ecid_wtls11 744

#define NID_wap_wsg_idm_ecid_wtls12 745

#define NID_wap_wsg_idm_ecid_wtls3 736

#define NID_wap_wsg_idm_ecid_wtls4 737

#define NID_wap_wsg_idm_ecid_wtls5 738

#define NID_wap_wsg_idm_ecid_wtls6 739

#define NID_wap_wsg_idm_ecid_wtls7 740

#define NID_wap_wsg_idm_ecid_wtls8 741

#define NID_wap_wsg_idm_ecid_wtls9 742

#define NID_whirlpool 804

#define NID_x121Address 868

#define NID_X500 11

#define NID_X500algorithms 378

#define NID_x500UniqueIdentifier 503

#define NID_X509 12

#define NID_x509Certificate 158

#define NID_x509Crl 160

#define NID_X9_57 184

#define NID_X9_62_c2onb191v4 691

#define NID_X9_62_c2onb191v5 692

#define NID_X9_62_c2onb239v4 697

#define NID_X9_62_c2onb239v5 698

#define NID_X9_62_c2pnb163v1 684

#define NID_X9_62_c2pnb163v2 685

#define NID_X9_62_c2pnb163v3 686

#define NID_X9_62_c2pnb176v1 687

#define NID_X9_62_c2pnb208w1 693

#define NID_X9_62_c2pnb272w1 699

#define NID_X9_62_c2pnb304w1 700

#define NID_X9_62_c2pnb368w1 702

#define NID_X9_62_c2tnb191v1 688

#define NID_X9_62_c2tnb191v2 689

#define NID_X9_62_c2tnb191v3 690

#define NID_X9_62_c2tnb239v1 694

#define NID_X9_62_c2tnb239v2 695

#define NID_X9_62_c2tnb239v3 696

#define NID_X9_62_c2tnb359v1 701

#define NID_X9_62_c2tnb431r1 703

#define NID_X9_62_characteristic_two_field 407

#define NID_X9_62_id_characteristic_two_basis 680

#define NID_X9_62_id_ecPublicKey 408

#define NID_X9_62_onBasis 681

#define NID_X9_62_ppBasis 683

#define NID_X9_62_prime192v1 409

#define NID_X9_62_prime192v2 410

#define NID_X9_62_prime192v3 411

#define NID_X9_62_prime239v1 412

#define NID_X9_62_prime239v2 413

#define NID_X9_62_prime239v3 414

#define NID_X9_62_prime256v1 415

#define NID_X9_62_prime_field 406

#define NID_X9_62_tpBasis 682

#define NID_X9cm 185

#define NID_zlib_compression 125

#define OBJ_ccitt 0

#define OBJ_iso 1

#define OBJ_itu_t 0

#define OBJ_joint_iso_ccitt 2

#define OBJ_joint_iso_itu_t 2

#define OBJ_undef 0

#define OS_OBJECT_HAVE_OBJC_SUPPORT 0

#define OS_OBJECT_USE_OBJC 0

#define OS_OBJECT_USE_OBJC_RETAIN_RELEASE 0

typedef struct _os_object_s _os_object_s, *P_os_object_s;

struct _os_object_s {
};

typedef struct dispatch_continuation_s dispatch_continuation_s, *Pdispatch_continuation_s;

struct dispatch_continuation_s {
};

typedef struct dispatch_disk_s dispatch_disk_s, *Pdispatch_disk_s;

struct dispatch_disk_s {
};

typedef struct dispatch_mach_msg_s dispatch_mach_msg_s, *Pdispatch_mach_msg_s;

struct dispatch_mach_msg_s {
};

typedef struct dispatch_mach_s dispatch_mach_s, *Pdispatch_mach_s;

struct dispatch_mach_s {
};

typedef struct dispatch_object_s dispatch_object_s, *Pdispatch_object_s;

struct dispatch_object_s {
};

typedef union dispatch_object_t dispatch_object_t, *Pdispatch_object_t;

typedef struct dispatch_queue_s dispatch_queue_s, *Pdispatch_queue_s;

typedef struct dispatch_queue_attr_s dispatch_queue_attr_s, *Pdispatch_queue_attr_s;

typedef struct dispatch_source_s dispatch_source_s, *Pdispatch_source_s;

typedef struct dispatch_timer_aggregate_s dispatch_timer_aggregate_s, *Pdispatch_timer_aggregate_s;

typedef struct dispatch_source_attr_s dispatch_source_attr_s, *Pdispatch_source_attr_s;

typedef struct dispatch_semaphore_s dispatch_semaphore_s, *Pdispatch_semaphore_s;

typedef struct dispatch_operation_s dispatch_operation_s, *Pdispatch_operation_s;

struct dispatch_semaphore_s {
};

struct dispatch_source_attr_s {
};

struct dispatch_timer_aggregate_s {
};

struct dispatch_source_s {
};

struct dispatch_operation_s {
};

union dispatch_object_t {
    struct _os_object_s * _os_obj;
    struct dispatch_object_s * _do;
    struct dispatch_continuation_s * _dc;
    struct dispatch_queue_s * _dq;
    struct dispatch_queue_attr_s * _dqa;
    struct dispatch_group_s * _dg;
    struct dispatch_source_s * _ds;
    struct dispatch_mach_s * _dm;
    struct dispatch_mach_msg_s * _dmsg;
    struct dispatch_timer_aggregate_s * _dta;
    struct dispatch_source_attr_s * _dsa;
    struct dispatch_semaphore_s * _dsema;
    struct dispatch_data_s * _ddata;
    struct dispatch_io_s * _dchannel;
    struct dispatch_operation_s * _doperation;
    struct dispatch_disk_s * _ddisk;
};

struct dispatch_queue_attr_s {
};

struct dispatch_queue_s {
};

#define OBJ_BSEARCH_FIRST_VALUE_ON_MATCH 2

#define OBJ_BSEARCH_VALUE_ON_NOMATCH 1

#define OBJ_F_OBJ_ADD_OBJECT 105

#define OBJ_F_OBJ_CREATE 100

#define OBJ_F_OBJ_DUP 101

#define OBJ_F_OBJ_NAME_NEW_INDEX 106

#define OBJ_F_OBJ_NID2LN 102

#define OBJ_F_OBJ_NID2OBJ 103

#define OBJ_F_OBJ_NID2SN 104

#define OBJ_NAME_ALIAS 32768

#define OBJ_NAME_TYPE_CIPHER_METH 2

#define OBJ_NAME_TYPE_COMP_METH 4

#define OBJ_NAME_TYPE_MD_METH 1

#define OBJ_NAME_TYPE_NUM 5

#define OBJ_NAME_TYPE_PKEY_METH 3

#define OBJ_NAME_TYPE_UNDEF 0

#define OBJ_R_MALLOC_FAILURE 100

#define OBJ_R_UNKNOWN_NID 101

typedef struct obj_name_st obj_name_st, *Pobj_name_st;

typedef struct obj_name_st OBJ_NAME;

struct obj_name_st {
    int type;
    int alias;
    char * name;
    char * data;
};

#define OCSP_DEFAULT_NONCE_LENGTH 16

#define OCSP_F_ASN1_STRING_ENCODE 100

#define OCSP_F_D2I_OCSP_NONCE 102

#define OCSP_F_OCSP_BASIC_ADD1_STATUS 103

#define OCSP_F_OCSP_BASIC_SIGN 104

#define OCSP_F_OCSP_BASIC_VERIFY 105

#define OCSP_F_OCSP_CERT_ID_NEW 101

#define OCSP_F_OCSP_CHECK_DELEGATED 106

#define OCSP_F_OCSP_CHECK_IDS 107

#define OCSP_F_OCSP_CHECK_ISSUER 108

#define OCSP_F_OCSP_CHECK_VALIDITY 115

#define OCSP_F_OCSP_MATCH_ISSUERID 109

#define OCSP_F_OCSP_PARSE_URL 114

#define OCSP_F_OCSP_REQUEST_SIGN 110

#define OCSP_F_OCSP_REQUEST_VERIFY 116

#define OCSP_F_OCSP_RESPONSE_GET1_BASIC 111

#define OCSP_F_OCSP_SENDREQ_BIO 112

#define OCSP_F_PARSE_HTTP_LINE1 117

#define OCSP_F_REQUEST_VERIFY 113

#define OCSP_NOCASIGN 64

#define OCSP_NOCERTS 1

#define OCSP_NOCHAIN 8

#define OCSP_NOCHECKS 256

#define OCSP_NODELEGATED 128

#define OCSP_NOEXPLICIT 32

#define OCSP_NOINTERN 2

#define OCSP_NOSIGS 4

#define OCSP_NOTIME 2048

#define OCSP_NOVERIFY 16

#define OCSP_R_BAD_DATA 100

#define OCSP_R_CERTIFICATE_VERIFY_ERROR 101

#define OCSP_R_DIGEST_ERR 102

#define OCSP_R_ERROR_IN_NEXTUPDATE_FIELD 122

#define OCSP_R_ERROR_IN_THISUPDATE_FIELD 123

#define OCSP_R_ERROR_PARSING_URL 121

#define OCSP_R_MISSING_OCSPSIGNING_USAGE 103

#define OCSP_R_NEXTUPDATE_BEFORE_THISUPDATE 124

#define OCSP_R_NO_CERTIFICATES_IN_CHAIN 105

#define OCSP_R_NO_CONTENT 106

#define OCSP_R_NO_PUBLIC_KEY 107

#define OCSP_R_NO_RESPONSE_DATA 108

#define OCSP_R_NO_REVOKED_TIME 109

#define OCSP_R_NOT_BASIC_RESPONSE 104

#define OCSP_R_PRIVATE_KEY_DOES_NOT_MATCH_CERTIFICATE 110

#define OCSP_R_REQUEST_NOT_SIGNED 128

#define OCSP_R_RESPONSE_CONTAINS_NO_REVOCATION_DATA 111

#define OCSP_R_ROOT_CA_NOT_TRUSTED 112

#define OCSP_R_SERVER_READ_ERROR 113

#define OCSP_R_SERVER_RESPONSE_ERROR 114

#define OCSP_R_SERVER_RESPONSE_PARSE_ERROR 115

#define OCSP_R_SERVER_WRITE_ERROR 116

#define OCSP_R_SIGNATURE_FAILURE 117

#define OCSP_R_SIGNER_CERTIFICATE_NOT_FOUND 118

#define OCSP_R_STATUS_EXPIRED 125

#define OCSP_R_STATUS_NOT_YET_VALID 126

#define OCSP_R_STATUS_TOO_OLD 127

#define OCSP_R_UNKNOWN_MESSAGE_DIGEST 119

#define OCSP_R_UNKNOWN_NID 120

#define OCSP_R_UNSUPPORTED_REQUESTORNAME_TYPE 129

#define OCSP_RESPID_KEY 1024

#define OCSP_RESPONSE_STATUS_INTERNALERROR 2

#define OCSP_RESPONSE_STATUS_MALFORMEDREQUEST 1

#define OCSP_RESPONSE_STATUS_SIGREQUIRED 5

#define OCSP_RESPONSE_STATUS_SUCCESSFUL 0

#define OCSP_RESPONSE_STATUS_TRYLATER 3

#define OCSP_RESPONSE_STATUS_UNAUTHORIZED 6

#define OCSP_REVOKED_STATUS_AFFILIATIONCHANGED 3

#define OCSP_REVOKED_STATUS_CACOMPROMISE 2

#define OCSP_REVOKED_STATUS_CERTIFICATEHOLD 6

#define OCSP_REVOKED_STATUS_CESSATIONOFOPERATION 5

#define OCSP_REVOKED_STATUS_KEYCOMPROMISE 1

#define OCSP_REVOKED_STATUS_NOSTATUS -1

#define OCSP_REVOKED_STATUS_REMOVEFROMCRL 8

#define OCSP_REVOKED_STATUS_SUPERSEDED 4

#define OCSP_REVOKED_STATUS_UNSPECIFIED 0

#define OCSP_TRUSTOTHER 512

#define V_OCSP_CERTSTATUS_GOOD 0

#define V_OCSP_CERTSTATUS_REVOKED 1

#define V_OCSP_CERTSTATUS_UNKNOWN 2

#define V_OCSP_RESPID_KEY 1

#define V_OCSP_RESPID_NAME 0

typedef union _union_3270 _union_3270, *P_union_3270;

union _union_3270 {
    X509_NAME * byName;
    ASN1_OCTET_STRING * byKey;
};

typedef union _union_3273 _union_3273, *P_union_3273;

typedef int ASN1_NULL;

typedef struct ocsp_revoked_info_st ocsp_revoked_info_st, *Pocsp_revoked_info_st;

typedef struct ocsp_revoked_info_st OCSP_REVOKEDINFO;

union _union_3273 {
    ASN1_NULL * good;
    OCSP_REVOKEDINFO * revoked;
    ASN1_NULL * unknown;
};

struct ocsp_revoked_info_st {
    ASN1_GENERALIZEDTIME * revocationTime;
    ASN1_ENUMERATED * revocationReason;
};

typedef struct ocsp_basic_response_st ocsp_basic_response_st, *Pocsp_basic_response_st;

typedef struct ocsp_response_data_st ocsp_response_data_st, *Pocsp_response_data_st;

typedef struct ocsp_response_data_st OCSP_RESPDATA;

typedef struct ocsp_responder_id_st ocsp_responder_id_st, *Pocsp_responder_id_st;

typedef struct ocsp_responder_id_st OCSP_RESPID;

struct ocsp_response_data_st {
    ASN1_INTEGER * version;
    OCSP_RESPID * responderId;
    ASN1_GENERALIZEDTIME * producedAt;
    STACK * responses;
    STACK * responseExtensions;
};

struct ocsp_responder_id_st {
    int type;
    union _union_3270 value;
};

struct ocsp_basic_response_st {
    OCSP_RESPDATA * tbsResponseData;
    X509_ALGOR * signatureAlgorithm;
    ASN1_BIT_STRING * signature;
    STACK * certs;
};

typedef struct ocsp_basic_response_st OCSP_BASICRESP;

typedef struct ocsp_cert_id_st ocsp_cert_id_st, *Pocsp_cert_id_st;

struct ocsp_cert_id_st {
    X509_ALGOR * hashAlgorithm;
    ASN1_OCTET_STRING * issuerNameHash;
    ASN1_OCTET_STRING * issuerKeyHash;
    ASN1_INTEGER * serialNumber;
};

typedef struct ocsp_cert_status_st ocsp_cert_status_st, *Pocsp_cert_status_st;

struct ocsp_cert_status_st {
    int type;
    union _union_3273 value;
};

typedef struct ocsp_cert_id_st OCSP_CERTID;

typedef struct ocsp_cert_status_st OCSP_CERTSTATUS;

typedef struct ocsp_crl_id_st ocsp_crl_id_st, *Pocsp_crl_id_st;

struct ocsp_crl_id_st {
    ASN1_IA5STRING * crlUrl;
    ASN1_INTEGER * crlNum;
    ASN1_GENERALIZEDTIME * crlTime;
};

typedef struct ocsp_crl_id_st OCSP_CRLID;

typedef struct ocsp_one_request_st ocsp_one_request_st, *Pocsp_one_request_st;

struct ocsp_one_request_st {
    OCSP_CERTID * reqCert;
    STACK * singleRequestExtensions;
};

typedef struct ocsp_one_request_st OCSP_ONEREQ;

typedef struct ocsp_req_info_st ocsp_req_info_st, *Pocsp_req_info_st;

typedef struct GENERAL_NAME_st GENERAL_NAME_st, *PGENERAL_NAME_st;

typedef struct GENERAL_NAME_st GENERAL_NAME;

typedef union _union_3241 _union_3241, *P_union_3241;

typedef struct otherName_st otherName_st, *PotherName_st;

typedef struct otherName_st OTHERNAME;

typedef struct EDIPartyName_st EDIPartyName_st, *PEDIPartyName_st;

typedef struct EDIPartyName_st EDIPARTYNAME;

union _union_3241 {
    char * ptr;
    OTHERNAME * otherName;
    ASN1_IA5STRING * rfc822Name;
    ASN1_IA5STRING * dNSName;
    ASN1_TYPE * x400Address;
    X509_NAME * directoryName;
    EDIPARTYNAME * ediPartyName;
    ASN1_IA5STRING * uniformResourceIdentifier;
    ASN1_OCTET_STRING * iPAddress;
    ASN1_OBJECT * registeredID;
    ASN1_OCTET_STRING * ip;
    X509_NAME * dirn;
    ASN1_IA5STRING * ia5;
    ASN1_OBJECT * rid;
    ASN1_TYPE * other;
};

struct ocsp_req_info_st {
    ASN1_INTEGER * version;
    GENERAL_NAME * requestorName;
    STACK * requestList;
    STACK * requestExtensions;
};

struct EDIPartyName_st {
    ASN1_STRING * nameAssigner;
    ASN1_STRING * partyName;
};

struct GENERAL_NAME_st {
    int type;
    union _union_3241 d;
};

struct otherName_st {
    ASN1_OBJECT * type_id;
    ASN1_TYPE * value;
};

typedef struct ocsp_req_info_st OCSP_REQINFO;

typedef struct ocsp_request_st ocsp_request_st, *Pocsp_request_st;

typedef struct ocsp_request_st OCSP_REQUEST;

typedef struct ocsp_signature_st ocsp_signature_st, *Pocsp_signature_st;

typedef struct ocsp_signature_st OCSP_SIGNATURE;

struct ocsp_signature_st {
    X509_ALGOR * signatureAlgorithm;
    ASN1_BIT_STRING * signature;
    STACK * certs;
};

struct ocsp_request_st {
    OCSP_REQINFO * tbsRequest;
    OCSP_SIGNATURE * optionalSignature;
};

typedef struct ocsp_resp_bytes_st ocsp_resp_bytes_st, *Pocsp_resp_bytes_st;

struct ocsp_resp_bytes_st {
    ASN1_OBJECT * responseType;
    ASN1_OCTET_STRING * response;
};

typedef struct ocsp_resp_bytes_st OCSP_RESPBYTES;

typedef struct ocsp_service_locator_st ocsp_service_locator_st, *Pocsp_service_locator_st;

struct ocsp_service_locator_st {
    X509_NAME * issuer;
    STACK * locator;
};

typedef struct ocsp_service_locator_st OCSP_SERVICELOC;

typedef struct ocsp_single_response_st ocsp_single_response_st, *Pocsp_single_response_st;

struct ocsp_single_response_st {
    OCSP_CERTID * certId;
    OCSP_CERTSTATUS * certStatus;
    ASN1_GENERALIZEDTIME * thisUpdate;
    ASN1_GENERALIZEDTIME * nextUpdate;
    STACK * singleExtensions;
};

typedef struct ocsp_single_response_st OCSP_SINGLERESP;

typedef long dispatch_once_t;

typedef enum enum_3862 {
    PAM_LOG_DEBUG=0,
    PAM_LOG_ERROR=3,
    PAM_LOG_NOTICE=2,
    PAM_LOG_VERBOSE=1
} enum_3862;

typedef enum enum_3871 {
    PAM_NUM_PRIMITIVES=6,
    PAM_SM_ACCT_MGMT=2,
    PAM_SM_AUTHENTICATE=0,
    PAM_SM_CHAUTHTOK=5,
    PAM_SM_CLOSE_SESSION=4,
    PAM_SM_OPEN_SESSION=3,
    PAM_SM_SETCRED=1
} enum_3871;

typedef struct pam_handle pam_handle, *Ppam_handle;

typedef int (* pam_func_t)(struct pam_handle *, int, int, char * *);

struct pam_handle {
};

typedef struct pam_module pam_module, *Ppam_module;

struct pam_module {
    char * path;
    void * dlh;
};

typedef struct pam_module pam_module_t;

typedef struct passwd passwd, *Ppasswd;

struct passwd {
};

#define OPENPAM_VERSION 20071221

#define OPENSSL_VERSION_NUMBER 9470383

typedef enum enum_549 {
    OSBigEndian=2,
    OSLittleEndian=1,
    OSUnknownByteOrder=0
} enum_549;

#define kCacheFunctionFlushDcache 2

#define kCacheFunctionPrepareForExecution 1

#define kOSKextInvalidLoadTag -1

#define kOSKextReturnArchNotFound 3691020303

#define kOSKextReturnAuthentication 3691020301

#define kOSKextReturnBadData 3691020295

#define kOSKextReturnBootLevel 3691020306

#define kOSKextReturnCache 3691020304

#define kOSKextReturnDeferred 3691020305

#define kOSKextReturnDependencies 3691020302

#define kOSKextReturnDependencyLoadError 3691020309

#define kOSKextReturnDisabled 3691020298

#define kOSKextReturnInternalError 3691020289

#define kOSKextReturnInUse 3691020312

#define kOSKextReturnInvalidArgument 3691020293

#define kOSKextReturnLinkError 3691020310

#define kOSKextReturnLoadedVersionDiffers 3691020308

#define kOSKextReturnNoMemory 3691020290

#define kOSKextReturnNoResources 3691020291

#define kOSKextReturnNotAKext 3691020299

#define kOSKextReturnNotFound 3691020294

#define kOSKextReturnNotLoadable 3691020307

#define kOSKextReturnNotPrivileged 3691020292

#define kOSKextReturnSerialization 3691020296

#define kOSKextReturnStartStopError 3691020311

#define kOSKextReturnStopping 3691020314

#define kOSKextReturnTimeout 3691020313

#define kOSKextReturnUnsupported 3691020297

#define kOSKextReturnValidation 3691020300

#define sub_libkern_kext 32768

typedef uint32_t OSKextLoadTag;

#define kOSMetaClassDuplicateClass 3691003914

#define kOSMetaClassHasInstances 3691003906

#define kOSMetaClassInstNoSuper 3691003913

#define kOSMetaClassInternal 3691003905

#define kOSMetaClassNoDicts 3691003909

#define kOSMetaClassNoInit 3691003907

#define kOSMetaClassNoInsKModSet 3691003911

#define kOSMetaClassNoKext 3691003915

#define kOSMetaClassNoKModSet 3691003910

#define kOSMetaClassNoSuper 3691003912

#define kOSMetaClassNoTempData 3691003908

#define kOSReturnError 3690987521

#define kOSReturnSuccess 0

#define sub_libkern_common 0

#define sub_libkern_metaclass 16384

#define sub_libkern_reserved 67092480

#define sys_libkern 3690987520

typedef kern_return_t OSReturn;

typedef struct bn_recp_ctx_st bn_recp_ctx_st, *Pbn_recp_ctx_st;

typedef struct bn_recp_ctx_st BN_RECP_CTX;

struct bn_recp_ctx_st {
    BIGNUM N;
    BIGNUM Nr;
    int num_bits;
    int shift;
    int flags;
};

typedef struct ecdh_method ecdh_method, *Pecdh_method;

struct ecdh_method {
};

typedef struct ecdh_method ECDH_METHOD;

typedef struct ecdsa_method ecdsa_method, *Pecdsa_method;

struct ecdsa_method {
};

typedef struct ecdsa_method ECDSA_METHOD;

typedef struct ocsp_req_ctx_st ocsp_req_ctx_st, *Pocsp_req_ctx_st;

typedef struct ocsp_req_ctx_st OCSP_REQ_CTX;

struct ocsp_req_ctx_st {
};

typedef struct ocsp_response_st ocsp_response_st, *Pocsp_response_st;

typedef struct ocsp_response_st OCSP_RESPONSE;

struct ocsp_response_st {
    ASN1_ENUMERATED * responseStatus;
    OCSP_RESPBYTES * responseBytes;
};

typedef struct rand_meth_st rand_meth_st, *Prand_meth_st;

struct rand_meth_st {
    void (* seed)(void *, int);
    int (* bytes)(uchar *, int);
    void (* cleanup)(void);
    void (* add)(void *, int, double);
    int (* pseudorand)(uchar *, int);
    int (* status)(void);
};

typedef struct rand_meth_st RAND_METHOD;

typedef struct ssl_ctx_st ssl_ctx_st, *Pssl_ctx_st;

typedef struct ssl_ctx_st SSL_CTX;

struct ssl_ctx_st {
};

typedef struct store_st store_st, *Pstore_st;

typedef struct store_st STORE;

struct store_st {
};

typedef struct store_method_st store_method_st, *Pstore_method_st;

typedef struct store_method_st STORE_METHOD;

struct store_method_st {
};

typedef struct ui_st ui_st, *Pui_st;

typedef struct ui_st UI;

struct ui_st {
};

typedef struct v3_ext_ctx v3_ext_ctx, *Pv3_ext_ctx;

typedef struct X509_req_st X509_req_st, *PX509_req_st;

typedef struct X509_req_st X509_REQ;

typedef struct X509_crl_st X509_crl_st, *PX509_crl_st;

typedef struct X509_crl_st X509_CRL;

typedef struct X509V3_CONF_METHOD_st X509V3_CONF_METHOD_st, *PX509V3_CONF_METHOD_st;

typedef struct X509V3_CONF_METHOD_st X509V3_CONF_METHOD;

typedef struct X509_req_info_st X509_req_info_st, *PX509_req_info_st;

typedef struct X509_req_info_st X509_REQ_INFO;

typedef struct X509_crl_info_st X509_crl_info_st, *PX509_crl_info_st;

typedef struct X509_crl_info_st X509_CRL_INFO;

struct X509_req_info_st {
    ASN1_ENCODING enc;
    ASN1_INTEGER * version;
    X509_NAME * subject;
    X509_PUBKEY * pubkey;
    STACK * attributes;
};

struct X509_req_st {
    X509_REQ_INFO * req_info;
    X509_ALGOR * sig_alg;
    ASN1_BIT_STRING * signature;
    int references;
};

struct X509_crl_st {
    X509_CRL_INFO * crl;
    X509_ALGOR * sig_alg;
    ASN1_BIT_STRING * signature;
    int references;
};

struct X509_crl_info_st {
    ASN1_INTEGER * version;
    X509_ALGOR * sig_alg;
    X509_NAME * issuer;
    ASN1_TIME * lastUpdate;
    ASN1_TIME * nextUpdate;
    STACK * revoked;
    STACK * extensions;
    ASN1_ENCODING enc;
};

struct v3_ext_ctx {
    int flags;
    X509 * issuer_cert;
    X509 * subject_cert;
    X509_REQ * subject_req;
    X509_CRL * crl;
    X509V3_CONF_METHOD * db_meth;
    void * db;
};

struct X509V3_CONF_METHOD_st {
    char * (* get_string)(void *, char *, char *);
    STACK * (* get_section)(void *, char *);
    void (* free_string)(void *, char *);
    void (* free_section)(void *, STACK *);
};

typedef struct X509_POLICY_LEVEL_st X509_POLICY_LEVEL_st, *PX509_POLICY_LEVEL_st;

typedef struct X509_POLICY_LEVEL_st X509_POLICY_LEVEL;

struct X509_POLICY_LEVEL_st {
};

typedef struct X509_POLICY_NODE_st X509_POLICY_NODE_st, *PX509_POLICY_NODE_st;

typedef struct X509_POLICY_NODE_st X509_POLICY_NODE;

struct X509_POLICY_NODE_st {
};

typedef struct X509_POLICY_TREE_st X509_POLICY_TREE_st, *PX509_POLICY_TREE_st;

typedef struct X509_POLICY_TREE_st X509_POLICY_TREE;

struct X509_POLICY_TREE_st {
};

typedef struct x509_store_st x509_store_st, *Px509_store_st;

typedef struct x509_store_ctx_st x509_store_ctx_st, *Px509_store_ctx_st;

typedef struct x509_store_ctx_st X509_STORE_CTX;

typedef struct x509_store_st X509_STORE;

typedef struct X509_VERIFY_PARAM_st X509_VERIFY_PARAM_st, *PX509_VERIFY_PARAM_st;

typedef struct X509_VERIFY_PARAM_st X509_VERIFY_PARAM;

struct X509_VERIFY_PARAM_st {
    char * name;
    time_t check_time;
    ulong inh_flags;
    ulong flags;
    int purpose;
    int trust;
    int depth;
    STACK * policies;
};

struct x509_store_st {
    int cache;
    STACK * objs;
    STACK * get_cert_methods;
    X509_VERIFY_PARAM * param;
    int (* verify)(X509_STORE_CTX *);
    int (* verify_cb)(int, X509_STORE_CTX *);
    int (* get_issuer)(X509 * *, X509_STORE_CTX *, X509 *);
    int (* check_issued)(X509_STORE_CTX *, X509 *, X509 *);
    int (* check_revocation)(X509_STORE_CTX *);
    int (* get_crl)(X509_STORE_CTX *, X509_CRL * *, X509 *);
    int (* check_crl)(X509_STORE_CTX *, X509_CRL *);
    int (* cert_crl)(X509_STORE_CTX *, X509_CRL *, X509 *);
    int (* cleanup)(X509_STORE_CTX *);
    CRYPTO_EX_DATA ex_data;
    int references;
};

struct x509_store_ctx_st {
    X509_STORE * ctx;
    int current_method;
    X509 * cert;
    STACK * untrusted;
    STACK * crls;
    X509_VERIFY_PARAM * param;
    void * other_ctx;
    int (* verify)(X509_STORE_CTX *);
    int (* verify_cb)(int, X509_STORE_CTX *);
    int (* get_issuer)(X509 * *, X509_STORE_CTX *, X509 *);
    int (* check_issued)(X509_STORE_CTX *, X509 *, X509 *);
    int (* check_revocation)(X509_STORE_CTX *);
    int (* get_crl)(X509_STORE_CTX *, X509_CRL * *, X509 *);
    int (* check_crl)(X509_STORE_CTX *, X509_CRL *);
    int (* cert_crl)(X509_STORE_CTX *, X509_CRL *, X509 *);
    int (* check_policy)(X509_STORE_CTX *);
    int (* cleanup)(X509_STORE_CTX *);
    int valid;
    int last_untrusted;
    STACK * chain;
    X509_POLICY_TREE * tree;
    int explicit_policy;
    int error_depth;
    int error;
    X509 * current_cert;
    X509 * current_issuer;
    X509_CRL * current_crl;
    CRYPTO_EX_DATA ex_data;
};

typedef struct v3_ext_ctx X509V3_CTX;

#define OSTYPES_K64_REV 2

typedef int SInt;

typedef uint UInt;

typedef vm_offset_t * page_address_array_t;

typedef enum enum_3855 {
    PAM_ABORT=26,
    PAM_ACCT_EXPIRED=17,
    PAM_AUTHINFO_UNAVAIL=12,
    PAM_AUTHTOK_DISABLE_AGING=23,
    PAM_AUTHTOK_ERR=20,
    PAM_AUTHTOK_EXPIRED=18,
    PAM_AUTHTOK_LOCK_BUSY=22,
    PAM_AUTHTOK_RECOVERY_ERR=21,
    PAM_AUTH_ERR=9,
    PAM_BUF_ERR=5,
    PAM_CONV_ERR=6,
    PAM_CRED_ERR=16,
    PAM_CRED_EXPIRED=15,
    PAM_CRED_INSUFFICIENT=11,
    PAM_CRED_UNAVAIL=14,
    PAM_DOMAIN_UNKNOWN=29,
    PAM_IGNORE=25,
    PAM_MAXTRIES=8,
    PAM_MODULE_UNKNOWN=28,
    PAM_NEW_AUTHTOK_REQD=10,
    PAM_NO_MODULE_DATA=24,
    PAM_NUM_ERRORS=30,
    PAM_OPEN_ERR=1,
    PAM_PERM_DENIED=7,
    PAM_SERVICE_ERR=3,
    PAM_SESSION_ERR=19,
    PAM_SUCCESS=0,
    PAM_SYMBOL_ERR=2,
    PAM_SYSTEM_ERR=4,
    PAM_TRY_AGAIN=27,
    PAM_USER_UNKNOWN=13
} enum_3855;

typedef enum enum_3856 {
    PAM_ERROR_MSG=3,
    PAM_MAX_MSG_SIZE=512,
    PAM_MAX_NUM_MSG=32,
    PAM_MAX_RESP_SIZE=512,
    PAM_PROMPT_ECHO_OFF=1,
    PAM_PROMPT_ECHO_ON=2,
    PAM_TEXT_INFO=4
} enum_3856;

typedef enum enum_3857 {
    PAM_CHANGE_EXPIRED_AUTHTOK=4,
    PAM_DELETE_CRED=2,
    PAM_DISALLOW_NULL_AUTHTOK=1,
    PAM_ESTABLISH_CRED=1,
    PAM_PRELIM_CHECK=1,
    PAM_REFRESH_CRED=8,
    PAM_REINITIALIZE_CRED=4,
    PAM_SILENT=0,
    PAM_UPDATE_AUTHTOK=2
} enum_3857;

typedef enum enum_3858 {
    PAM_AUTHTOK=6,
    PAM_AUTHTOK_PROMPT=11,
    PAM_CONV=5,
    PAM_NUM_ITEMS=13,
    PAM_OLDAUTHTOK=7,
    PAM_OLDAUTHTOK_PROMPT=12,
    PAM_REPOSITORY=10,
    PAM_RHOST=4,
    PAM_RUSER=8,
    PAM_SERVICE=1,
    PAM_TTY=3,
    PAM_USER=2,
    PAM_USER_PROMPT=9
} enum_3858;

typedef struct pam_conv pam_conv, *Ppam_conv;

typedef struct pam_message pam_message, *Ppam_message;

typedef struct pam_response pam_response, *Ppam_response;

struct pam_response {
    char * resp;
    int resp_retcode;
};

struct pam_message {
    int msg_style;
    char * msg;
};

struct pam_conv {
    int (* conv)(int, struct pam_message * *, struct pam_response * *, void *);
    void * appdata_ptr;
};

typedef struct pam_handle pam_handle_t;

typedef struct pam_repository pam_repository, *Ppam_repository;

struct pam_repository {
    char * type;
    void * scope;
    size_t scope_len;
};

typedef struct pam_repository pam_repository_t;

#define NCURSES_PANEL_H_incl 1

typedef struct panel panel, *Ppanel;

typedef struct panel PANEL;

struct panel {
    WINDOW * win;
    struct panel * below;
    struct panel * above;
    void * user;
};

#define BLKDEV_IOSIZE 2048

#define BSD4_3 1

#define BSD4_4 1

#define CBLOCK 64

#define CBQSIZE 8

#define CLBYTES 4096

#define CLOFF 4095

#define CLOFSET 4095

#define CLSHIFT 12

#define CLSIZE 1

#define CLSIZELOG2 0

#define CMASK 18

#define CROUND 63

#define DEV_BSHIFT 9

#define DEV_BSIZE 512

#define FSCALE 2048

#define FSHIFT 11

#define M16KCLBYTES 16384

#define M16KCLSHIFT 14

#define MAXALLOCSAVE 8192

#define MAXBSIZE 1048576

#define MAXCOMLEN 16

#define MAXDOMNAMELEN 256

#define MAXFRAG 8

#define MAXHOSTNAMELEN 256

#define MAXINTERP 64

#define MAXLOGNAME 255

#define MAXPATHLEN 1024

#define MAXPHYS 131072

#define MAXPHYSIO 131072

#define MAXPHYSIO_WIRED 16777216

#define MAXPRI 127

#define MAXSYMLINKS 32

#define MAXUPRC 266

#define MBIGCLBYTES 4096

#define MBIGCLSHIFT 12

#define MCLBYTES 2048

#define MCLOFSET 2047

#define MCLSHIFT 11

#define MINBUCKET 4

#define MSIZE 256

#define MSIZESHIFT 8

#define NBPG 4096

#define NCARGS 262144

#define NeXTBSD 1995064

#define NeXTBSD4_0 0

#define NGROUPS 16

#define NMBCLUSTERS 512

#define NODEV -1

#define NOFILE 256

#define NOGROUP 65535

#define PCATCH 256

#define PDROP 1024

#define PGOFSET 4095

#define PGSHIFT 12

#define PINOD 8

#define PLOCK 36

#define PPAUSE 40

#define PRIBIO 16

#define PRIMASK 255

#define PSOCK 24

#define PSPIN 2048

#define PSWP 0

#define PTTYBLOCK 512

#define PUSER 50

#define PVFS 20

#define PVM 4

#define PWAIT 32

#define PZERO 22

#define XML_COMPLETE_ATTRS 4

#define XML_DETECT_IDS 2

#define XML_SAX2_MAGIC 3740122799

#define XML_SKIP_IDS 8

typedef void (* attributeSAXFunc)(void *, xmlChar *, xmlChar *);

typedef enum enum_2046 {
    XML_PARSE_BIG_LINES=4194304,
    XML_PARSE_COMPACT=65536,
    XML_PARSE_DTDATTR=8,
    XML_PARSE_DTDLOAD=4,
    XML_PARSE_DTDVALID=16,
    XML_PARSE_HUGE=524288,
    XML_PARSE_IGNORE_ENC=2097152,
    XML_PARSE_NOBASEFIX=262144,
    XML_PARSE_NOBLANKS=256,
    XML_PARSE_NOCDATA=16384,
    XML_PARSE_NODICT=4096,
    XML_PARSE_NOENT=2,
    XML_PARSE_NOERROR=32,
    XML_PARSE_NONET=2048,
    XML_PARSE_NOWARNING=64,
    XML_PARSE_NOXINCNODE=32768,
    XML_PARSE_NSCLEAN=8192,
    XML_PARSE_OLD10=131072,
    XML_PARSE_OLDSAX=1048576,
    XML_PARSE_PEDANTIC=128,
    XML_PARSE_RECOVER=1,
    XML_PARSE_SAX1=512,
    XML_PARSE_XINCLUDE=1024
} enum_2046;

typedef enum enum_2047 {
    XML_WITH_AUTOMATA=23,
    XML_WITH_C14N=14,
    XML_WITH_CATALOG=15,
    XML_WITH_DEBUG=28,
    XML_WITH_DEBUG_MEM=29,
    XML_WITH_DEBUG_RUN=30,
    XML_WITH_EXPR=24,
    XML_WITH_FTP=9,
    XML_WITH_HTML=12,
    XML_WITH_HTTP=10,
    XML_WITH_ICONV=19,
    XML_WITH_ICU=32,
    XML_WITH_ISO8859X=20,
    XML_WITH_LEGACY=13,
    XML_WITH_LZMA=33,
    XML_WITH_MODULES=27,
    XML_WITH_NONE=99999,
    XML_WITH_OUTPUT=3,
    XML_WITH_PATTERN=6,
    XML_WITH_PUSH=4,
    XML_WITH_READER=5,
    XML_WITH_REGEXP=22,
    XML_WITH_SAX1=8,
    XML_WITH_SCHEMAS=25,
    XML_WITH_SCHEMATRON=26,
    XML_WITH_THREAD=1,
    XML_WITH_TREE=2,
    XML_WITH_UNICODE=21,
    XML_WITH_VALID=11,
    XML_WITH_WRITER=7,
    XML_WITH_XINCLUDE=18,
    XML_WITH_XPATH=16,
    XML_WITH_XPTR=17,
    XML_WITH_ZLIB=31
} enum_2047;

typedef xmlParserInputPtr (* xmlExternalEntityLoader)(char *, char *, xmlParserCtxtPtr);

typedef enum enum_2047 xmlFeature;

typedef xmlParserNodeInfo * xmlParserNodeInfoPtr;

typedef xmlParserNodeInfoSeq * xmlParserNodeInfoSeqPtr;

typedef enum enum_2046 xmlParserOption;

typedef xmlSAXHandlerV1 * xmlSAXHandlerV1Ptr;

#define kPEAcquireScreen 4

#define kPEBaseAddressChange 8

#define kPEDisableScreen 7

#define kPEEnableScreen 6

#define kPEGraphicsMode 1

#define kPEReleaseScreen 5

#define kPETextMode 2

#define kPETextScreen 3

typedef struct clock_frequency_info_t clock_frequency_info_t, *Pclock_frequency_info_t;

struct clock_frequency_info_t {
    ulong bus_clock_rate_hz;
    ulong cpu_clock_rate_hz;
    ulong dec_clock_rate_hz;
    ulong bus_clock_rate_num;
    ulong bus_clock_rate_den;
    ulong bus_to_cpu_rate_num;
    ulong bus_to_cpu_rate_den;
    ulong bus_to_dec_rate_num;
    ulong bus_to_dec_rate_den;
    ulong timebase_frequency_hz;
    ulong timebase_frequency_num;
    ulong timebase_frequency_den;
    ulonglong bus_frequency_hz;
    ulonglong bus_frequency_min_hz;
    ulonglong bus_frequency_max_hz;
    ulonglong cpu_frequency_hz;
    ulonglong cpu_frequency_min_hz;
    ulonglong cpu_frequency_max_hz;
    ulonglong prf_frequency_hz;
    ulonglong prf_frequency_min_hz;
    ulonglong prf_frequency_max_hz;
    ulonglong mem_frequency_hz;
    ulonglong mem_frequency_min_hz;
    ulonglong mem_frequency_max_hz;
    ulonglong fix_frequency_hz;
};

typedef void * cpu_id_t;

typedef enum enum_3328 {
    kPEReadTOD=0,
    kPEWriteTOD=1
} enum_3328;

typedef enum enum_3329 {
    kPERawInput=2,
    kPEWaitForInput=1
} enum_3329;

typedef enum enum_3330 {
    kDebugTypeDisplay=1,
    kDebugTypeNone=0,
    kDebugTypeSerial=2
} enum_3330;

typedef enum enum_3331 {
    kPEScaleFactor1x=1,
    kPEScaleFactor2x=2,
    kPEScaleFactorUnknown=0
} enum_3331;

typedef enum enum_3335 {
    kPECommandKey=55,
    kPEControlKey=54,
    kPEOptionKey=58,
    kPEShiftKey=56
} enum_3335;

typedef struct PE_state PE_state, *PPE_state;

typedef struct PE_Video PE_Video, *PPE_Video;

struct PE_Video {
    ulong v_baseAddr;
    ulong v_rowBytes;
    ulong v_width;
    ulong v_height;
    ulong v_depth;
    ulong v_display;
    char v_pixelFormat[64];
    ulong v_offset;
    ulong v_length;
    uchar v_rotate;
    uchar v_scale;
    char reserved1[2];
    long reserved2;
};

struct PE_state {
    boolean_t initialized;
    struct PE_Video video;
    void * deviceTreeHead;
    void * bootArgs;
};

typedef struct PE_state PE_state_t;

typedef struct timebase_freq_t timebase_freq_t, *Ptimebase_freq_t;

typedef void (* timebase_callback_func)(struct timebase_freq_t *);

struct timebase_freq_t {
    ulong timebase_num;
    ulong timebase_den;
};

#define __PFKEY_V2_H 1

#define PF_KEY_V2 2

#define PFKEY_SOFT_LIFETIME_RATE 80

#define PFKEYV2_REVISION 199806

#define SADB_AALG_MAX 8

#define SADB_AALG_MD5HMAC 1

#define SADB_AALG_NONE 0

#define SADB_AALG_SHA1HMAC 2

#define SADB_ACQUIRE 6

#define SADB_ADD 3

#define SADB_DELETE 4

#define SADB_DUMP 10

#define SADB_EALG_3DESCBC 2

#define SADB_EALG_DESCBC 1

#define SADB_EALG_MAX 12

#define SADB_EALG_NONE 0

#define SADB_EALG_NULL 3

#define SADB_EXPIRE 8

#define SADB_EXT_ADDRESS_DST 6

#define SADB_EXT_ADDRESS_PROXY 7

#define SADB_EXT_ADDRESS_SRC 5

#define SADB_EXT_IDENTITY_DST 11

#define SADB_EXT_IDENTITY_SRC 10

#define SADB_EXT_KEY_AUTH 8

#define SADB_EXT_KEY_ENCRYPT 9

#define SADB_EXT_LIFETIME_CURRENT 2

#define SADB_EXT_LIFETIME_HARD 3

#define SADB_EXT_LIFETIME_SOFT 4

#define SADB_EXT_MAX 26

#define SADB_EXT_PROPOSAL 13

#define SADB_EXT_RESERVED 0

#define SADB_EXT_SA 1

#define SADB_EXT_SASTAT 21

#define SADB_EXT_SENSITIVITY 12

#define SADB_EXT_SESSION_ID 20

#define SADB_EXT_SPIRANGE 16

#define SADB_EXT_SUPPORTED_AUTH 14

#define SADB_EXT_SUPPORTED_ENCRYPT 15

#define SADB_FLUSH 9

#define SADB_GET 5

#define SADB_GETSASTAT 23

#define SADB_GETSPI 1

#define SADB_IDENTTYPE_FQDN 2

#define SADB_IDENTTYPE_MAX 4

#define SADB_IDENTTYPE_PREFIX 1

#define SADB_IDENTTYPE_RESERVED 0

#define SADB_IDENTTYPE_USERFQDN 3

#define SADB_KEY_FLAGS_MAX 4095

#define SADB_MAX 25

#define SADB_REGISTER 7

#define SADB_RESERVED 0

#define SADB_SAFLAGS_PFS 1

#define SADB_SASTATE_DEAD 3

#define SADB_SASTATE_DYING 2

#define SADB_SASTATE_LARVAL 0

#define SADB_SASTATE_MATURE 1

#define SADB_SASTATE_MAX 3

#define SADB_SATYPE_AH 2

#define SADB_SATYPE_ESP 3

#define SADB_SATYPE_MAX 11

#define SADB_SATYPE_MIP 8

#define SADB_SATYPE_OSPFV2 6

#define SADB_SATYPE_RIPV2 7

#define SADB_SATYPE_RSVP 5

#define SADB_SATYPE_UNSPEC 0

#define SADB_UPDATE 2

#define SADB_X_AALG_MD5 3

#define SADB_X_AALG_NULL 5

#define SADB_X_AALG_SHA 4

#define SADB_X_AALG_SHA2_256 6

#define SADB_X_AALG_SHA2_384 7

#define SADB_X_AALG_SHA2_512 8

#define SADB_X_CALG_DEFLATE 2

#define SADB_X_CALG_LZS 3

#define SADB_X_CALG_MAX 4

#define SADB_X_CALG_NONE 0

#define SADB_X_CALG_OUI 1

#define SADB_X_EALG_AES 12

#define SADB_X_EALG_AESCBC 12

#define SADB_X_EALG_BLOWFISHCBC 4

#define SADB_X_EALG_CAST128CBC 5

#define SADB_X_EALG_RIJNDAELCBC 12

#define SADB_X_EXT_ADDR_RANGE_DST_END 26

#define SADB_X_EXT_ADDR_RANGE_DST_START 25

#define SADB_X_EXT_ADDR_RANGE_SRC_END 24

#define SADB_X_EXT_ADDR_RANGE_SRC_START 23

#define SADB_X_EXT_CYCSEQ 64

#define SADB_X_EXT_DERIV 32

#define SADB_X_EXT_IPSECIF 22

#define SADB_X_EXT_IV4B 16

#define SADB_X_EXT_KMPRIVATE 17

#define SADB_X_EXT_NONE 0

#define SADB_X_EXT_OLD 1

#define SADB_X_EXT_PMASK 768

#define SADB_X_EXT_POLICY 18

#define SADB_X_EXT_PRAND 256

#define SADB_X_EXT_PSEQ 0

#define SADB_X_EXT_PZERO 512

#define SADB_X_EXT_RAWCPI 128

#define SADB_X_EXT_SA2 19

#define SADB_X_IDENTTYPE_ADDR 4

#define SADB_X_LIFETIME_ADDTIME 2

#define SADB_X_LIFETIME_ALLOCATIONS 0

#define SADB_X_LIFETIME_BYTES 1

#define SADB_X_LIFETIME_USETIME 3

#define SADB_X_PCHANGE 12

#define SADB_X_PROMISC 11

#define SADB_X_SATYPE_IPCOMP 9

#define SADB_X_SATYPE_POLICY 10

#define SADB_X_SPDACQUIRE 17

#define SADB_X_SPDADD 14

#define SADB_X_SPDDELETE 15

#define SADB_X_SPDDELETE2 22

#define SADB_X_SPDDISABLE 25

#define SADB_X_SPDDUMP 18

#define SADB_X_SPDENABLE 24

#define SADB_X_SPDEXPIRE 21

#define SADB_X_SPDFLUSH 19

#define SADB_X_SPDGET 16

#define SADB_X_SPDSETIDX 20

#define SADB_X_SPDUPDATE 13

typedef union _union_2790 _union_2790, *P_union_2790;

union _union_2790 {
    u_int8_t sadb_x_sa2_reserved1;
};

typedef struct sadb_address sadb_address, *Psadb_address;

struct sadb_address {
    u_int16_t sadb_address_len;
    u_int16_t sadb_address_exttype;
    u_int8_t sadb_address_proto;
    u_int8_t sadb_address_prefixlen;
    u_int16_t sadb_address_reserved;
};

typedef struct sadb_alg sadb_alg, *Psadb_alg;

struct sadb_alg {
    u_int8_t sadb_alg_id;
    u_int8_t sadb_alg_ivlen;
    u_int16_t sadb_alg_minbits;
    u_int16_t sadb_alg_maxbits;
    u_int16_t sadb_alg_reserved;
};

typedef struct sadb_comb sadb_comb, *Psadb_comb;

struct sadb_comb {
    u_int8_t sadb_comb_auth;
    u_int8_t sadb_comb_encrypt;
    u_int16_t sadb_comb_flags;
    u_int16_t sadb_comb_auth_minbits;
    u_int16_t sadb_comb_auth_maxbits;
    u_int16_t sadb_comb_encrypt_minbits;
    u_int16_t sadb_comb_encrypt_maxbits;
    u_int32_t sadb_comb_reserved;
    u_int32_t sadb_comb_soft_allocations;
    u_int32_t sadb_comb_hard_allocations;
    u_int64_t sadb_comb_soft_bytes;
    u_int64_t sadb_comb_hard_bytes;
    u_int64_t sadb_comb_soft_addtime;
    u_int64_t sadb_comb_hard_addtime;
    u_int64_t sadb_comb_soft_usetime;
    u_int64_t sadb_comb_hard_usetime;
};

typedef struct sadb_ext sadb_ext, *Psadb_ext;

struct sadb_ext {
    u_int16_t sadb_ext_len;
    u_int16_t sadb_ext_type;
};

typedef struct sadb_ident sadb_ident, *Psadb_ident;

struct sadb_ident {
    u_int16_t sadb_ident_len;
    u_int16_t sadb_ident_exttype;
    u_int16_t sadb_ident_type;
    u_int16_t sadb_ident_reserved;
    u_int64_t sadb_ident_id;
};

typedef struct sadb_key sadb_key, *Psadb_key;

struct sadb_key {
    u_int16_t sadb_key_len;
    u_int16_t sadb_key_exttype;
    u_int16_t sadb_key_bits;
    u_int16_t sadb_key_reserved;
};

typedef struct sadb_lifetime sadb_lifetime, *Psadb_lifetime;

struct sadb_lifetime {
    u_int16_t sadb_lifetime_len;
    u_int16_t sadb_lifetime_exttype;
    u_int32_t sadb_lifetime_allocations;
    u_int64_t sadb_lifetime_bytes;
    u_int64_t sadb_lifetime_addtime;
    u_int64_t sadb_lifetime_usetime;
};

typedef struct sadb_msg sadb_msg, *Psadb_msg;

struct sadb_msg {
    u_int8_t sadb_msg_version;
    u_int8_t sadb_msg_type;
    u_int8_t sadb_msg_errno;
    u_int8_t sadb_msg_satype;
    u_int16_t sadb_msg_len;
    u_int16_t sadb_msg_reserved;
    u_int32_t sadb_msg_seq;
    u_int32_t sadb_msg_pid;
};

typedef struct sadb_prop sadb_prop, *Psadb_prop;

struct sadb_prop {
    u_int16_t sadb_prop_len;
    u_int16_t sadb_prop_exttype;
    u_int8_t sadb_prop_replay;
    u_int8_t sadb_prop_reserved[3];
};

typedef struct sadb_sa sadb_sa, *Psadb_sa;

struct sadb_sa {
    u_int16_t sadb_sa_len;
    u_int16_t sadb_sa_exttype;
    u_int32_t sadb_sa_spi;
    u_int8_t sadb_sa_replay;
    u_int8_t sadb_sa_state;
    u_int8_t sadb_sa_auth;
    u_int8_t sadb_sa_encrypt;
    u_int32_t sadb_sa_flags;
};

typedef struct sadb_sastat sadb_sastat, *Psadb_sastat;

struct sadb_sastat {
    u_int16_t sadb_sastat_len;
    u_int16_t sadb_sastat_exttype;
    u_int32_t sadb_sastat_dir;
    u_int32_t sadb_sastat_reserved;
    u_int32_t sadb_sastat_list_len;
};

typedef struct sadb_sens sadb_sens, *Psadb_sens;

struct sadb_sens {
    u_int16_t sadb_sens_len;
    u_int16_t sadb_sens_exttype;
    u_int32_t sadb_sens_dpd;
    u_int8_t sadb_sens_sens_level;
    u_int8_t sadb_sens_sens_len;
    u_int8_t sadb_sens_integ_level;
    u_int8_t sadb_sens_integ_len;
    u_int32_t sadb_sens_reserved;
};

typedef struct sadb_session_id sadb_session_id, *Psadb_session_id;

struct sadb_session_id {
    u_int16_t sadb_session_id_len;
    u_int16_t sadb_session_id_exttype;
    u_int64_t sadb_session_id_v[2];
};

typedef struct sadb_spirange sadb_spirange, *Psadb_spirange;

struct sadb_spirange {
    u_int16_t sadb_spirange_len;
    u_int16_t sadb_spirange_exttype;
    u_int32_t sadb_spirange_min;
    u_int32_t sadb_spirange_max;
    u_int32_t sadb_spirange_reserved;
};

typedef struct sadb_supported sadb_supported, *Psadb_supported;

struct sadb_supported {
    u_int16_t sadb_supported_len;
    u_int16_t sadb_supported_exttype;
    u_int32_t sadb_supported_reserved;
};

typedef struct sadb_x_ipsecrequest sadb_x_ipsecrequest, *Psadb_x_ipsecrequest;

struct sadb_x_ipsecrequest {
    u_int16_t sadb_x_ipsecrequest_len;
    u_int16_t sadb_x_ipsecrequest_proto;
    u_int8_t sadb_x_ipsecrequest_mode;
    u_int8_t sadb_x_ipsecrequest_level;
    u_int16_t sadb_x_ipsecrequest_reqid;
};

typedef struct sadb_x_kmprivate sadb_x_kmprivate, *Psadb_x_kmprivate;

struct sadb_x_kmprivate {
    u_int16_t sadb_x_kmprivate_len;
    u_int16_t sadb_x_kmprivate_exttype;
    u_int32_t sadb_x_kmprivate_reserved;
};

typedef struct sadb_x_policy sadb_x_policy, *Psadb_x_policy;

struct sadb_x_policy {
    u_int16_t sadb_x_policy_len;
    u_int16_t sadb_x_policy_exttype;
    u_int16_t sadb_x_policy_type;
    u_int8_t sadb_x_policy_dir;
    u_int8_t sadb_x_policy_reserved;
    u_int32_t sadb_x_policy_id;
    u_int32_t sadb_x_policy_reserved2;
};

typedef struct sadb_x_sa2 sadb_x_sa2, *Psadb_x_sa2;

struct sadb_x_sa2 {
    u_int16_t sadb_x_sa2_len;
    u_int16_t sadb_x_sa2_exttype;
    u_int8_t sadb_x_sa2_mode;
    union _union_2790 field_0x5;
    u_int16_t sadb_x_sa2_reserved2;
    u_int32_t sadb_x_sa2_sequence;
    u_int32_t sadb_x_sa2_reqid;
};

typedef struct sastat sastat, *Psastat;

struct sastat {
    u_int32_t spi;
    u_int32_t created;
    struct sadb_lifetime lft_c;
};

#define PIM6_REG_MINLEN 48

#define PIM_MINLEN 8

#define PIM_NULL_REGISTER 1073741824

#define PIM_REGISTER 1

#define PIM_VERSION 2

typedef union anon__struct_2922_bitfield_1 anon__struct_2922_bitfield_1, *Panon__struct_2922_bitfield_1;

union anon__struct_2922_bitfield_1 {
    u_char pim_type:4; /* : bits 0-3 */
    u_char pim_ver:4; /* : bits 4-7 */
};

typedef struct pim pim, *Ppim;

struct pim {
    union anon__struct_2922_bitfield_1 field_0x0;
    u_char pim_rsv;
    u_short pim_cksum;
};

#define BIG_PIPE_SIZE 65536

#define PIPE_ASYNC 4

#define PIPE_DEAD 32768

#define PIPE_DIRECTOK 2048

#define PIPE_DIRECTW 1024

#define PIPE_DRAIN 8192

#define PIPE_EOF 128

#define PIPE_KNOTE 4096

#define PIPE_KVAMAX 16777216

#define PIPE_LOCKFL 256

#define PIPE_LWANT 512

#define PIPE_MINDIRECT 8192

#define PIPE_SEL 64

#define PIPE_SIZE 16384

#define PIPE_WANT 32

#define PIPE_WANTR 8

#define PIPE_WANTW 16

#define PIPE_WSELECT 16384

#define PIPENPAGES 17

#define SMALL_PIPE_SIZE 4096

typedef struct pipebuf pipebuf, *Ppipebuf;

struct pipebuf {
    u_int cnt;
    u_int in;
    u_int out;
    u_int size;
    caddr_t buffer;
};

#define KEY_EX 16

#define KEY_SIG 128

#define PKCS12_DEFAULT_ITER 2048

#define PKCS12_ERROR 0

#define PKCS12_F_PARSE_BAG 129

#define PKCS12_F_PARSE_BAGS 103

#define PKCS12_F_PKCS12_ADD_FRIENDLYNAME 100

#define PKCS12_F_PKCS12_ADD_FRIENDLYNAME_ASC 127

#define PKCS12_F_PKCS12_ADD_FRIENDLYNAME_UNI 102

#define PKCS12_F_PKCS12_ADD_LOCALKEYID 104

#define PKCS12_F_PKCS12_CREATE 105

#define PKCS12_F_PKCS12_GEN_MAC 107

#define PKCS12_F_PKCS12_INIT 109

#define PKCS12_F_PKCS12_ITEM_DECRYPT_D2I 106

#define PKCS12_F_PKCS12_ITEM_I2D_ENCRYPT 108

#define PKCS12_F_PKCS12_ITEM_PACK_SAFEBAG 117

#define PKCS12_F_PKCS12_KEY_GEN_ASC 110

#define PKCS12_F_PKCS12_KEY_GEN_UNI 111

#define PKCS12_F_PKCS12_MAKE_KEYBAG 112

#define PKCS12_F_PKCS12_MAKE_SHKEYBAG 113

#define PKCS12_F_PKCS12_NEWPASS 128

#define PKCS12_F_PKCS12_PACK_P7DATA 114

#define PKCS12_F_PKCS12_PACK_P7ENCDATA 115

#define PKCS12_F_PKCS12_PARSE 118

#define PKCS12_F_PKCS12_PBE_CRYPT 119

#define PKCS12_F_PKCS12_PBE_KEYIVGEN 120

#define PKCS12_F_PKCS12_SET_MAC 123

#define PKCS12_F_PKCS12_SETUP_MAC 122

#define PKCS12_F_PKCS12_UNPACK_AUTHSAFES 130

#define PKCS12_F_PKCS12_UNPACK_P7DATA 131

#define PKCS12_F_PKCS12_VERIFY_MAC 126

#define PKCS12_F_PKCS8_ADD_KEYUSAGE 124

#define PKCS12_F_PKCS8_ENCRYPT 125

#define PKCS12_IV_ID 2

#define PKCS12_KEY_ID 1

#define PKCS12_MAC_ID 3

#define PKCS12_MAC_KEY_LENGTH 20

#define PKCS12_OK 1

#define PKCS12_R_CANT_PACK_STRUCTURE 100

#define PKCS12_R_CONTENT_TYPE_NOT_DATA 121

#define PKCS12_R_DECODE_ERROR 101

#define PKCS12_R_ENCODE_ERROR 102

#define PKCS12_R_ENCRYPT_ERROR 103

#define PKCS12_R_ERROR_SETTING_ENCRYPTED_DATA_TYPE 120

#define PKCS12_R_INVALID_NULL_ARGUMENT 104

#define PKCS12_R_INVALID_NULL_PKCS12_POINTER 105

#define PKCS12_R_IV_GEN_ERROR 106

#define PKCS12_R_KEY_GEN_ERROR 107

#define PKCS12_R_MAC_ABSENT 108

#define PKCS12_R_MAC_GENERATION_ERROR 109

#define PKCS12_R_MAC_SETUP_ERROR 110

#define PKCS12_R_MAC_STRING_SET_ERROR 111

#define PKCS12_R_MAC_VERIFY_ERROR 112

#define PKCS12_R_MAC_VERIFY_FAILURE 113

#define PKCS12_R_PARSE_ERROR 114

#define PKCS12_R_PKCS12_ALGOR_CIPHERINIT_ERROR 115

#define PKCS12_R_PKCS12_CIPHERFINAL_ERROR 116

#define PKCS12_R_PKCS12_PBE_CRYPT_ERROR 117

#define PKCS12_R_UNKNOWN_DIGEST_ALGORITHM 118

#define PKCS12_R_UNSUPPORTED_PKCS12_MODE 119

#define PKCS12_SALT_LEN 8

typedef union _union_3282 _union_3282, *P_union_3282;

typedef struct pkcs12_bag_st pkcs12_bag_st, *Ppkcs12_bag_st;

typedef struct pkcs8_priv_key_info_st pkcs8_priv_key_info_st, *Ppkcs8_priv_key_info_st;

typedef struct X509_sig_st X509_sig_st, *PX509_sig_st;

typedef struct X509_sig_st X509_SIG;

typedef union _union_3286 _union_3286, *P_union_3286;

union _union_3286 {
    ASN1_OCTET_STRING * x509cert;
    ASN1_OCTET_STRING * x509crl;
    ASN1_OCTET_STRING * octet;
    ASN1_IA5STRING * sdsicert;
    ASN1_TYPE * other;
};

struct pkcs12_bag_st {
    ASN1_OBJECT * type;
    union _union_3286 value;
};

struct pkcs8_priv_key_info_st {
    int broken;
    ASN1_INTEGER * version;
    X509_ALGOR * pkeyalg;
    ASN1_TYPE * pkey;
    STACK * attributes;
};

union _union_3282 {
    struct pkcs12_bag_st * bag;
    struct pkcs8_priv_key_info_st * keybag;
    X509_SIG * shkeybag;
    STACK * safes;
    ASN1_TYPE * other;
};

struct X509_sig_st {
    X509_ALGOR * algor;
    ASN1_OCTET_STRING * digest;
};

typedef struct PKCS12 PKCS12, *PPKCS12;

typedef struct PKCS12_MAC_DATA PKCS12_MAC_DATA, *PPKCS12_MAC_DATA;

typedef struct pkcs7_st pkcs7_st, *Ppkcs7_st;

typedef struct pkcs7_st PKCS7;

typedef union _union_3192 _union_3192, *P_union_3192;

typedef struct pkcs7_signed_st pkcs7_signed_st, *Ppkcs7_signed_st;

typedef struct pkcs7_signed_st PKCS7_SIGNED;

typedef struct pkcs7_enveloped_st pkcs7_enveloped_st, *Ppkcs7_enveloped_st;

typedef struct pkcs7_enveloped_st PKCS7_ENVELOPE;

typedef struct pkcs7_signedandenveloped_st pkcs7_signedandenveloped_st, *Ppkcs7_signedandenveloped_st;

typedef struct pkcs7_signedandenveloped_st PKCS7_SIGN_ENVELOPE;

typedef struct pkcs7_digest_st pkcs7_digest_st, *Ppkcs7_digest_st;

typedef struct pkcs7_digest_st PKCS7_DIGEST;

typedef struct pkcs7_encrypted_st pkcs7_encrypted_st, *Ppkcs7_encrypted_st;

typedef struct pkcs7_encrypted_st PKCS7_ENCRYPT;

typedef struct pkcs7_enc_content_st pkcs7_enc_content_st, *Ppkcs7_enc_content_st;

typedef struct pkcs7_enc_content_st PKCS7_ENC_CONTENT;

struct pkcs7_digest_st {
    ASN1_INTEGER * version;
    X509_ALGOR * md;
    struct pkcs7_st * contents;
    ASN1_OCTET_STRING * digest;
};

struct PKCS12 {
    ASN1_INTEGER * version;
    struct PKCS12_MAC_DATA * mac;
    PKCS7 * authsafes;
};

union _union_3192 {
    char * ptr;
    ASN1_OCTET_STRING * data;
    PKCS7_SIGNED * sign;
    PKCS7_ENVELOPE * enveloped;
    PKCS7_SIGN_ENVELOPE * signed_and_enveloped;
    PKCS7_DIGEST * digest;
    PKCS7_ENCRYPT * encrypted;
    ASN1_TYPE * other;
};

struct pkcs7_st {
    uchar * asn1;
    long length;
    int state;
    int detached;
    ASN1_OBJECT * type;
    union _union_3192 d;
};

struct pkcs7_encrypted_st {
    ASN1_INTEGER * version;
    PKCS7_ENC_CONTENT * enc_data;
};

struct pkcs7_signedandenveloped_st {
    ASN1_INTEGER * version;
    STACK * md_algs;
    STACK * cert;
    STACK * crl;
    STACK * signer_info;
    PKCS7_ENC_CONTENT * enc_data;
    STACK * recipientinfo;
};

struct PKCS12_MAC_DATA {
    X509_SIG * dinfo;
    ASN1_OCTET_STRING * salt;
    ASN1_INTEGER * iter;
};

struct pkcs7_enveloped_st {
    ASN1_INTEGER * version;
    STACK * recipientinfo;
    PKCS7_ENC_CONTENT * enc_data;
};

struct pkcs7_signed_st {
    ASN1_INTEGER * version;
    STACK * md_algs;
    STACK * cert;
    STACK * crl;
    STACK * signer_info;
    struct pkcs7_st * contents;
};

struct pkcs7_enc_content_st {
    ASN1_OBJECT * content_type;
    X509_ALGOR * algorithm;
    ASN1_OCTET_STRING * enc_data;
    EVP_CIPHER * cipher;
};

typedef struct pkcs12_bag_st PKCS12_BAGS;

typedef struct PKCS12_SAFEBAG PKCS12_SAFEBAG, *PPKCS12_SAFEBAG;

struct PKCS12_SAFEBAG {
    ASN1_OBJECT * type;
    union _union_3282 value;
    STACK * attrib;
};

#define PKCS7_BINARY 128

#define PKCS7_CRLFEOL 2048

#define PKCS7_DETACHED 64

#define PKCS7_F_B64_READ_PKCS7 120

#define PKCS7_F_B64_WRITE_PKCS7 121

#define PKCS7_F_PKCS7_ADD_ATTRIB_SMIMECAP 118

#define PKCS7_F_PKCS7_ADD_CERTIFICATE 100

#define PKCS7_F_PKCS7_ADD_CRL 101

#define PKCS7_F_PKCS7_ADD_RECIPIENT_INFO 102

#define PKCS7_F_PKCS7_ADD_SIGNER 103

#define PKCS7_F_PKCS7_BIO_ADD_DIGEST 125

#define PKCS7_F_PKCS7_CTRL 104

#define PKCS7_F_PKCS7_DATADECODE 112

#define PKCS7_F_PKCS7_DATAFINAL 128

#define PKCS7_F_PKCS7_DATAINIT 105

#define PKCS7_F_PKCS7_DATASIGN 106

#define PKCS7_F_PKCS7_DATAVERIFY 107

#define PKCS7_F_PKCS7_DECRYPT 114

#define PKCS7_F_PKCS7_ENCRYPT 115

#define PKCS7_F_PKCS7_FIND_DIGEST 127

#define PKCS7_F_PKCS7_GET0_SIGNERS 124

#define PKCS7_F_PKCS7_SET_CIPHER 108

#define PKCS7_F_PKCS7_SET_CONTENT 109

#define PKCS7_F_PKCS7_SET_DIGEST 126

#define PKCS7_F_PKCS7_SET_TYPE 110

#define PKCS7_F_PKCS7_SIGN 116

#define PKCS7_F_PKCS7_SIGNATUREVERIFY 113

#define PKCS7_F_PKCS7_SIMPLE_SMIMECAP 119

#define PKCS7_F_PKCS7_VERIFY 117

#define PKCS7_F_SMIME_READ_PKCS7 122

#define PKCS7_F_SMIME_TEXT 123

#define PKCS7_NOATTR 256

#define PKCS7_NOCERTS 2

#define PKCS7_NOCHAIN 8

#define PKCS7_NOCRL 8192

#define PKCS7_NOINTERN 16

#define PKCS7_NOOLDMIMETYPE 1024

#define PKCS7_NOSIGS 4

#define PKCS7_NOSMIMECAP 512

#define PKCS7_NOVERIFY 32

#define PKCS7_OP_GET_DETACHED_SIGNATURE 2

#define PKCS7_OP_SET_DETACHED_SIGNATURE 1

#define PKCS7_R_CERTIFICATE_VERIFY_ERROR 117

#define PKCS7_R_CIPHER_HAS_NO_OBJECT_IDENTIFIER 144

#define PKCS7_R_CIPHER_NOT_INITIALIZED 116

#define PKCS7_R_CONTENT_AND_DATA_PRESENT 118

#define PKCS7_R_DECODE_ERROR 130

#define PKCS7_R_DECRYPT_ERROR 119

#define PKCS7_R_DECRYPTED_KEY_IS_WRONG_LENGTH 100

#define PKCS7_R_DIGEST_FAILURE 101

#define PKCS7_R_ERROR_ADDING_RECIPIENT 120

#define PKCS7_R_ERROR_SETTING_CIPHER 121

#define PKCS7_R_INVALID_MIME_TYPE 131

#define PKCS7_R_INVALID_NULL_POINTER 143

#define PKCS7_R_MIME_NO_CONTENT_TYPE 132

#define PKCS7_R_MIME_PARSE_ERROR 133

#define PKCS7_R_MIME_SIG_PARSE_ERROR 134

#define PKCS7_R_MISSING_CERIPEND_INFO 103

#define PKCS7_R_NO_CONTENT 122

#define PKCS7_R_NO_CONTENT_TYPE 135

#define PKCS7_R_NO_MULTIPART_BODY_FAILURE 136

#define PKCS7_R_NO_MULTIPART_BOUNDARY 137

#define PKCS7_R_NO_RECIPIENT_MATCHES_CERTIFICATE 115

#define PKCS7_R_NO_RECIPIENT_MATCHES_KEY 146

#define PKCS7_R_NO_SIG_CONTENT_TYPE 138

#define PKCS7_R_NO_SIGNATURES_ON_DATA 123

#define PKCS7_R_NO_SIGNERS 142

#define PKCS7_R_OPERATION_NOT_SUPPORTED_ON_THIS_TYPE 104

#define PKCS7_R_PKCS7_ADD_SIGNATURE_ERROR 124

#define PKCS7_R_PKCS7_DATAFINAL 126

#define PKCS7_R_PKCS7_DATAFINAL_ERROR 125

#define PKCS7_R_PKCS7_DATASIGN 145

#define PKCS7_R_PKCS7_PARSE_ERROR 139

#define PKCS7_R_PKCS7_SIG_PARSE_ERROR 140

#define PKCS7_R_PRIVATE_KEY_DOES_NOT_MATCH_CERTIFICATE 127

#define PKCS7_R_SIG_INVALID_MIME_TYPE 141

#define PKCS7_R_SIGNATURE_FAILURE 105

#define PKCS7_R_SIGNER_CERTIFICATE_NOT_FOUND 128

#define PKCS7_R_SMIME_TEXT_ERROR 129

#define PKCS7_R_UNABLE_TO_FIND_CERTIFICATE 106

#define PKCS7_R_UNABLE_TO_FIND_MEM_BIO 107

#define PKCS7_R_UNABLE_TO_FIND_MESSAGE_DIGEST 108

#define PKCS7_R_UNKNOWN_DIGEST_TYPE 109

#define PKCS7_R_UNKNOWN_OPERATION 110

#define PKCS7_R_UNSUPPORTED_CIPHER_TYPE 111

#define PKCS7_R_UNSUPPORTED_CONTENT_TYPE 112

#define PKCS7_R_WRONG_CONTENT_TYPE 113

#define PKCS7_R_WRONG_PKCS7_TYPE 114

#define PKCS7_S_BODY 1

#define PKCS7_S_HEADER 0

#define PKCS7_S_TAIL 2

#define PKCS7_STREAM 4096

#define PKCS7_TEXT 1

#define SMIME_BINARY 128

#define SMIME_DETACHED 64

#define SMIME_NOATTR 256

#define SMIME_NOCERTS 2

#define SMIME_NOCHAIN 8

#define SMIME_NOINTERN 16

#define SMIME_NOSIGS 4

#define SMIME_NOVERIFY 32

#define SMIME_TEXT 1

typedef struct pkcs7_issuer_and_serial_st pkcs7_issuer_and_serial_st, *Ppkcs7_issuer_and_serial_st;

typedef struct pkcs7_issuer_and_serial_st PKCS7_ISSUER_AND_SERIAL;

struct pkcs7_issuer_and_serial_st {
    X509_NAME * issuer;
    ASN1_INTEGER * serial;
};

typedef struct pkcs7_recip_info_st pkcs7_recip_info_st, *Ppkcs7_recip_info_st;

typedef struct pkcs7_recip_info_st PKCS7_RECIP_INFO;

struct pkcs7_recip_info_st {
    ASN1_INTEGER * version;
    PKCS7_ISSUER_AND_SERIAL * issuer_and_serial;
    X509_ALGOR * key_enc_algor;
    ASN1_OCTET_STRING * enc_key;
    X509 * cert;
};

typedef struct pkcs7_signer_info_st pkcs7_signer_info_st, *Ppkcs7_signer_info_st;

typedef struct pkcs7_signer_info_st PKCS7_SIGNER_INFO;

struct pkcs7_signer_info_st {
    ASN1_INTEGER * version;
    PKCS7_ISSUER_AND_SERIAL * issuer_and_serial;
    X509_ALGOR * digest_alg;
    STACK * auth_attr;
    X509_ALGOR * digest_enc_alg;
    ASN1_OCTET_STRING * enc_digest;
    STACK * unauth_attr;
    EVP_PKEY * pkey;
};

#define FILENAMES_CASE_SENSITIVE 0

#define HAS_FUTIME 0

#define HAS_VSNPRINTF 1

#define PRESERVE_FILE_TIMES 1

#define SUPPORT_ACCESSIBILITY_CHECKS 1

#define SUPPORT_ASIAN_ENCODINGS 1

#define SUPPORT_UTF16_ENCODINGS 1

#define TIDY_APPLE_CHANGES 1

#define UTIME_NEEDS_CLOSED_FILE 1

typedef struct _TidyIterator _TidyIterator, *P_TidyIterator;

struct _TidyIterator {
    int _opaque;
};

typedef enum enum_4340 {
    no=0,
    yes=1
} enum_4340;

typedef enum enum_4340 Bool;


/* WARNING! conflicting data type names: /platform.h/byte - /byte */

typedef char tmbchar;

typedef tmbchar * ctmbstr;


/* WARNING! conflicting data type names: /types.h/uint - /uint */

typedef uint tchar;

typedef struct _TidyIterator * TidyIterator;

typedef tmbchar * tmbstr;


/* WARNING! conflicting data type names: /platform.h/ulong - /ulong */

typedef struct pmaplist pmaplist, *Ppmaplist;

typedef struct pmap pmap, *Ppmap;

struct pmap {
    uint pm_prog;
    uint pm_vers;
    uint pm_prot;
    uint pm_port;
};

struct pmaplist {
    struct pmap pml_map;
    struct pmaplist * pml_next;
};

#define PMAPVERS_ORIG 1

#define PMAPVERS_PROTO 2

typedef struct rmtcallargs rmtcallargs, *Prmtcallargs;

struct rmtcallargs {
    uint prog;
    uint vers;
    uint proc;
    uint arglen;
    caddr_t args_ptr;
    xdrproc_t xdr_args;
};

typedef struct rmtcallres rmtcallres, *Prmtcallres;

struct rmtcallres {
    uint * port_ptr;
    uint resultslen;
    caddr_t results_ptr;
    xdrproc_t xdr_results;
};

#define POLICY_FIFO 4

#define POLICY_NULL 0

#define POLICY_RR 2

#define POLICY_TIMESHARE 1

#define POLICYCLASS_FIXEDPRI 6

typedef struct policy_bases policy_bases, *Ppolicy_bases;

typedef struct policy_bases policy_base_data_t;

typedef struct policy_timeshare_base policy_timeshare_base, *Ppolicy_timeshare_base;

typedef struct policy_timeshare_base policy_timeshare_base_data_t;

typedef struct policy_rr_base policy_rr_base, *Ppolicy_rr_base;

typedef struct policy_rr_base policy_rr_base_data_t;

typedef struct policy_fifo_base policy_fifo_base, *Ppolicy_fifo_base;

typedef struct policy_fifo_base policy_fifo_base_data_t;

struct policy_fifo_base {
    integer_t base_priority;
};

struct policy_rr_base {
    integer_t base_priority;
    integer_t quantum;
};

struct policy_timeshare_base {
    integer_t base_priority;
};

struct policy_bases {
    policy_timeshare_base_data_t ts;
    policy_rr_base_data_t rr;
    policy_fifo_base_data_t fifo;
};

typedef integer_t * policy_base_t;

typedef struct policy_fifo_base * policy_fifo_base_t;

typedef struct policy_fifo_info policy_fifo_info, *Ppolicy_fifo_info;

struct policy_fifo_info {
    integer_t max_priority;
    integer_t base_priority;
    boolean_t depressed;
    integer_t depress_priority;
};

typedef struct policy_fifo_info policy_fifo_info_data_t;

typedef struct policy_fifo_info * policy_fifo_info_t;

typedef struct policy_fifo_limit policy_fifo_limit, *Ppolicy_fifo_limit;

struct policy_fifo_limit {
    integer_t max_priority;
};

typedef struct policy_fifo_limit policy_fifo_limit_data_t;

typedef struct policy_fifo_limit * policy_fifo_limit_t;

typedef struct policy_infos policy_infos, *Ppolicy_infos;

typedef struct policy_infos policy_info_data_t;

typedef struct policy_timeshare_info policy_timeshare_info, *Ppolicy_timeshare_info;

typedef struct policy_timeshare_info policy_timeshare_info_data_t;

typedef struct policy_rr_info policy_rr_info, *Ppolicy_rr_info;

typedef struct policy_rr_info policy_rr_info_data_t;

struct policy_timeshare_info {
    integer_t max_priority;
    integer_t base_priority;
    integer_t cur_priority;
    boolean_t depressed;
    integer_t depress_priority;
};

struct policy_rr_info {
    integer_t max_priority;
    integer_t base_priority;
    integer_t quantum;
    boolean_t depressed;
    integer_t depress_priority;
};

struct policy_infos {
    policy_timeshare_info_data_t ts;
    policy_rr_info_data_t rr;
    policy_fifo_info_data_t fifo;
};

typedef integer_t * policy_info_t;

typedef struct policy_limits policy_limits, *Ppolicy_limits;

typedef struct policy_limits policy_limit_data_t;

typedef struct policy_timeshare_limit policy_timeshare_limit, *Ppolicy_timeshare_limit;

typedef struct policy_timeshare_limit policy_timeshare_limit_data_t;

typedef struct policy_rr_limit policy_rr_limit, *Ppolicy_rr_limit;

typedef struct policy_rr_limit policy_rr_limit_data_t;

struct policy_timeshare_limit {
    integer_t max_priority;
};

struct policy_rr_limit {
    integer_t max_priority;
};

struct policy_limits {
    policy_timeshare_limit_data_t ts;
    policy_rr_limit_data_t rr;
    policy_fifo_limit_data_t fifo;
};

typedef integer_t * policy_limit_t;

typedef struct policy_rr_base * policy_rr_base_t;

typedef struct policy_rr_info * policy_rr_info_t;

typedef struct policy_rr_limit * policy_rr_limit_t;

typedef int policy_t;

typedef struct policy_timeshare_base * policy_timeshare_base_t;

typedef struct policy_timeshare_info * policy_timeshare_info_t;

typedef struct policy_timeshare_limit * policy_timeshare_limit_t;

#define GUARD_TYPE_MACH_PORT 1

#define MACH_PORT_DEAD -1

#define MACH_PORT_DNREQUESTS_SIZE 3

#define MACH_PORT_DNREQUESTS_SIZE_COUNT 1

#define MACH_PORT_IMPORTANCE_RECEIVER 5

#define MACH_PORT_INFO_EXT 7

#define MACH_PORT_LIMITS_INFO 1

#define MACH_PORT_NULL 0

#define MACH_PORT_QLIMIT_BASIC 5

#define MACH_PORT_QLIMIT_DEFAULT 5

#define MACH_PORT_QLIMIT_KERNEL 65536

#define MACH_PORT_QLIMIT_LARGE 1024

#define MACH_PORT_QLIMIT_MAX 1024

#define MACH_PORT_QLIMIT_MIN 0

#define MACH_PORT_QLIMIT_SMALL 16

#define MACH_PORT_QLIMIT_ZERO 0

#define MACH_PORT_RECEIVE_STATUS 2

#define MACH_PORT_RIGHT_DEAD_NAME 4

#define MACH_PORT_RIGHT_LABELH 5

#define MACH_PORT_RIGHT_NUMBER 6

#define MACH_PORT_RIGHT_PORT_SET 3

#define MACH_PORT_RIGHT_RECEIVE 1

#define MACH_PORT_RIGHT_SEND 0

#define MACH_PORT_RIGHT_SEND_ONCE 2

#define MACH_PORT_SRIGHTS_NONE 0

#define MACH_PORT_SRIGHTS_PRESENT 1

#define MACH_PORT_STATUS_FLAG_GUARDED 2

#define MACH_PORT_STATUS_FLAG_IMP_DONATION 8

#define MACH_PORT_STATUS_FLAG_REVIVE 16

#define MACH_PORT_STATUS_FLAG_STRICT_GUARD 4

#define MACH_PORT_STATUS_FLAG_TASKPTR 32

#define MACH_PORT_STATUS_FLAG_TEMPOWNER 1

#define MACH_PORT_TEMPOWNER 4

#define MACH_PORT_TYPE_DNREQUEST 2147483648

#define MACH_PORT_TYPE_NONE 0

#define MACH_PORT_TYPE_SPREQUEST 1073741824

#define MACH_PORT_TYPE_SPREQUEST_DELAYED 536870912

#define MPO_CONTEXT_AS_GUARD 1

#define MPO_IMPORTANCE_RECEIVER 8

#define MPO_INSERT_SEND_RIGHT 16

#define MPO_QLIMIT 2

#define MPO_STRICT 32

#define MPO_TEMPOWNER 4

typedef mach_port_t * mach_port_array_t;

typedef enum mach_port_guard_exception_codes {
    kGUARD_EXC_DESTROY=1,
    kGUARD_EXC_INCORRECT_GUARD=16,
    kGUARD_EXC_MOD_REFS=2,
    kGUARD_EXC_SET_CONTEXT=4,
    kGUARD_EXC_UNGUARDED=8
} mach_port_guard_exception_codes;

typedef struct mach_port_info_ext mach_port_info_ext, *Pmach_port_info_ext;

typedef struct mach_port_status mach_port_status, *Pmach_port_status;

typedef struct mach_port_status mach_port_status_t;

typedef natural_t mach_port_msgcount_t;

struct mach_port_status {
    mach_port_rights_t mps_pset;
    mach_port_seqno_t mps_seqno;
    mach_port_mscount_t mps_mscount;
    mach_port_msgcount_t mps_qlimit;
    mach_port_msgcount_t mps_msgcount;
    mach_port_rights_t mps_sorights;
    boolean_t mps_srights;
    boolean_t mps_pdrequest;
    boolean_t mps_nsrequest;
    natural_t mps_flags;
};

struct mach_port_info_ext {
    mach_port_status_t mpie_status;
    mach_port_msgcount_t mpie_boost_cnt;
    uint32_t reserved[6];
};

typedef struct mach_port_info_ext mach_port_info_ext_t;

typedef integer_t * mach_port_info_t;

typedef struct mach_port_limits mach_port_limits, *Pmach_port_limits;

struct mach_port_limits {
    mach_port_msgcount_t mpl_qlimit;
};

typedef struct mach_port_limits mach_port_limits_t;

typedef mach_port_name_t * mach_port_name_array_t;

typedef struct mach_port_options mach_port_options, *Pmach_port_options;

struct mach_port_options {
    uint32_t flags;
    mach_port_limits_t mpl;
    uint64_t reserved[2];
};

typedef struct mach_port_options mach_port_options_t;

typedef mach_port_options_t * mach_port_options_ptr_t;

typedef uint mach_port_srights_t;

typedef mach_port_type_t * mach_port_type_array_t;

typedef struct port_obj_tentry port_obj_tentry, *Pport_obj_tentry;

struct port_obj_tentry {
    void * pos_value;
    int pos_type;
};

#define PSEM_ALLOCATED 4

#define PSEM_DEFINED 2

#define PSEM_INCREATE 64

#define PSEM_INDELETE 128

#define PSEM_INUSE 16

#define PSEM_MAPPED 8

#define PSEM_NONE 1

#define PSEM_REMOVED 32

#define PSEMINFO_NULL 0

#define PSEMNAMLEN 31

typedef struct pseminfo pseminfo, *Ppseminfo;

struct pseminfo {
    uint psem_flags;
    uint psem_usecount;
    mode_t psem_mode;
    uid_t psem_uid;
    gid_t psem_gid;
    char psem_name[32];
    void * psem_semobject;
    struct label * psem_label;
    pid_t psem_creator_pid;
    uint64_t psem_creator_uniqueid;
};

#define PSHM_ALLOCATED 4

#define PSHM_DEFINED 2

#define PSHM_INCREATE 64

#define PSHM_INDELETE 128

#define PSHM_INUSE 16

#define PSHM_MAPPED 8

#define PSHM_NONE 1

#define PSHM_REMOVED 32

#define PSHMINFO_NULL 0

#define PSHMNAMLEN 31

typedef struct pshminfo pshminfo, *Ppshminfo;

struct pshminfo {
    uint pshm_flags;
    uint pshm_usecount;
    off_t pshm_length;
    mode_t pshm_mode;
    uid_t pshm_uid;
    gid_t pshm_gid;
    char pshm_name[32];
    void * pshm_memobject;
    struct label * pshm_label;
};

#define PA_HARDWARE 4

#define PA_INFO 2

#define PA_PSEUDO 128

#define PA_REAL 1

#define PA_REPLACES_KEY 32

#define PA_REQUIRED 8

#define PA_SUFFICIENT 16

typedef struct _krb5_db_entry_new _krb5_db_entry_new, *P_krb5_db_entry_new;

struct _krb5_db_entry_new {
};

typedef struct _krb5_key_data _krb5_key_data, *P_krb5_key_data;

struct _krb5_key_data {
};

typedef struct _krb5_preauth_client_rock _krb5_preauth_client_rock, *P_krb5_preauth_client_rock;

struct _krb5_preauth_client_rock {
};

typedef struct krb5plugin_preauth_client_ftable_v1 krb5plugin_preauth_client_ftable_v1, *Pkrb5plugin_preauth_client_ftable_v1;

typedef krb5_error_code (* preauth_client_plugin_init_proc)(krb5_context, void * *);

typedef void (* preauth_client_plugin_fini_proc)(krb5_context, void *);

typedef int (* preauth_client_get_flags_proc)(krb5_context, krb5_preauthtype);

typedef void (* preauth_client_request_init_proc)(krb5_context, void *, void * *);

typedef void (* preauth_client_request_fini_proc)(krb5_context, void *, void *);

typedef krb5_error_code (* preauth_get_client_data_proc)(krb5_context, struct _krb5_preauth_client_rock *, krb5_int32, krb5_data * *);

typedef krb5_error_code (* preauth_get_as_key_proc)(krb5_context, krb5_principal, krb5_enctype, krb5_prompter_fct, void *, krb5_data *, krb5_data *, krb5_keyblock *, void *);

typedef krb5_error_code (* preauth_client_process_proc)(krb5_context, void *, void *, krb5_get_init_creds_opt *, preauth_get_client_data_proc, struct _krb5_preauth_client_rock *, krb5_kdc_req *, krb5_data *, krb5_data *, krb5_pa_data *, krb5_prompter_fct, void *, preauth_get_as_key_proc, void *, krb5_data *, krb5_data *, krb5_keyblock *, krb5_pa_data * * *);

typedef krb5_error_code (* preauth_client_tryagain_proc)(krb5_context, void *, void *, krb5_get_init_creds_opt *, preauth_get_client_data_proc, struct _krb5_preauth_client_rock *, krb5_kdc_req *, krb5_data *, krb5_data *, krb5_pa_data *, krb5_error *, krb5_prompter_fct, void *, preauth_get_as_key_proc, void *, krb5_data *, krb5_data *, krb5_keyblock *, krb5_pa_data * * *);

typedef krb5_error_code (* preauth_client_supply_gic_opts_proc)(krb5_context, void *, krb5_get_init_creds_opt *, char *, char *);

struct krb5plugin_preauth_client_ftable_v1 {
    char * name;
    krb5_preauthtype * pa_type_list;
    krb5_enctype * enctype_list;
    preauth_client_plugin_init_proc init;
    preauth_client_plugin_fini_proc fini;
    preauth_client_get_flags_proc flags;
    preauth_client_request_init_proc request_init;
    preauth_client_request_fini_proc request_fini;
    preauth_client_process_proc process;
    preauth_client_tryagain_proc tryagain;
    preauth_client_supply_gic_opts_proc gic_opts;
};

typedef enum krb5plugin_preauth_client_request_type {
    krb5plugin_preauth_client_free_etype=2,
    krb5plugin_preauth_client_get_etype=1
} krb5plugin_preauth_client_request_type;

typedef enum krb5plugin_preauth_entry_request_type {
    krb5plugin_preauth_entry_max_time_skew=2,
    krb5plugin_preauth_entry_request_certificate=1,
    krb5plugin_preauth_keys=3,
    krb5plugin_preauth_request_body=4
} krb5plugin_preauth_entry_request_type;

typedef struct krb5plugin_preauth_server_ftable_v1 krb5plugin_preauth_server_ftable_v1, *Pkrb5plugin_preauth_server_ftable_v1;

typedef krb5_error_code (* preauth_server_init_proc)(krb5_context, void * *, char * *);

typedef void (* preauth_server_fini_proc)(krb5_context, void *);

typedef int (* preauth_server_flags_proc)(krb5_context, krb5_preauthtype);

typedef krb5_error_code (* preauth_get_entry_data_proc)(krb5_context, krb5_kdc_req *, struct _krb5_db_entry_new *, krb5_int32, krb5_data * *);

typedef krb5_error_code (* preauth_server_edata_proc)(krb5_context, krb5_kdc_req *, struct _krb5_db_entry_new *, struct _krb5_db_entry_new *, preauth_get_entry_data_proc, void *, krb5_pa_data *);

typedef krb5_error_code (* preauth_server_verify_proc)(krb5_context, struct _krb5_db_entry_new *, krb5_data *, krb5_kdc_req *, krb5_enc_tkt_part *, krb5_pa_data *, preauth_get_entry_data_proc, void *, void * *, krb5_data * *, krb5_authdata * * *);

typedef krb5_error_code (* preauth_server_return_proc)(krb5_context, krb5_pa_data *, struct _krb5_db_entry_new *, krb5_data *, krb5_kdc_req *, krb5_kdc_rep *, struct _krb5_key_data *, krb5_keyblock *, krb5_pa_data * *, preauth_get_entry_data_proc, void *, void * *);

typedef krb5_error_code (* preauth_server_free_reqcontext_proc)(krb5_context, void *, void * *);

struct krb5plugin_preauth_server_ftable_v1 {
    char * name;
    krb5_preauthtype * pa_type_list;
    preauth_server_init_proc init_proc;
    preauth_server_fini_proc fini_proc;
    preauth_server_flags_proc flags_proc;
    preauth_server_edata_proc edata_proc;
    preauth_server_verify_proc verify_proc;
    preauth_server_return_proc return_proc;
    preauth_server_free_reqcontext_proc freepa_reqcontext_proc;
};

typedef struct prdb_ent prdb_ent, *Pprdb_ent;

typedef struct prdb_property prdb_property, *Pprdb_property;

struct prdb_property {
    char * pp_key;
    char * pp_value;
};

struct prdb_ent {
    char * * pe_name;
    uint pe_nprops;
    struct prdb_property * pe_prop;
};

#define P_ADVLOCK 1

#define P_AFFINITY 65536

#define P_CHECKOPENEVT 524288

#define P_CLASSIC 131072

#define P_CONTINUED 128

#define P_CONTROLT 2

#define P_DELAYIDLESLEEP 262144

#define P_DEPENDENCY_CAPABLE 1048576

#define P_DIRTY 8

#define P_DIRTY_ALLOW_IDLE_EXIT 2

#define P_DIRTY_BUSY 64

#define P_DIRTY_DEFER 4

#define P_DIRTY_DEFER_IN_PROGRESS 256

#define P_DIRTY_IDLE_EXIT_ENABLED 3

#define P_DIRTY_IS_DIRTY 24

#define P_DIRTY_MARKED 128

#define P_DIRTY_SHUTDOWN 16

#define P_DIRTY_TERMINATED 32

#define P_DIRTY_TRACK 1

#define P_DISABLE_ASLR 4096

#define P_EXEC 16384

#define P_FORCEQUOTA 536870912

#define P_FSTRACE 0

#define P_INMEM 0

#define P_LP64 4

#define P_NOCLDSTOP 8

#define P_NOCLDWAIT 1073741824

#define P_NOREMOTEHANG 2147483648

#define P_NOSHLIB 268435456

#define P_NOSWAP 0

#define P_OWEUPC 32768

#define P_PHYSIO 0

#define P_PPWAIT 16

#define P_PROFIL 32

#define P_REBOOT 2097152

#define P_RESV10 67108864

#define P_RESV11 134217728

#define P_RESV7 8388608

#define P_RESV9 33554432

#define P_SELECT 64

#define P_SSTEP 0

#define P_SUGID 256

#define P_SYSTEM 512

#define P_TBE 4194304

#define P_THCWD 16777216

#define P_TIMEOUT 1024

#define P_TRACED 2048

#define P_TRANSLATED 131072

#define P_WEXIT 8192

#define SIDL 1

#define SRUN 2

#define SSLEEP 3

#define SSTOP 4

#define SZOMB 5

typedef struct _struct_2400 _struct_2400, *P_struct_2400;

struct _struct_2400 {
    struct proc * __p_forw;
    struct proc * __p_back;
};

typedef union _union_2399 _union_2399, *P_union_2399;

union _union_2399 {
    struct _struct_2400 p_st1;
    struct timeval __p_starttime;
};

typedef struct extern_proc extern_proc, *Pextern_proc;

typedef struct vmspace vmspace, *Pvmspace;

typedef struct sigacts sigacts, *Psigacts;

typedef u_int32_t fixpt_t;

typedef struct itimerval itimerval, *Pitimerval;

typedef struct pgrp pgrp, *Ppgrp;

typedef struct user user, *Puser;

typedef struct rusage rusage, *Prusage;

struct sigacts {
};

struct pgrp {
};

struct rusage {
    struct timeval ru_utime;
    struct timeval ru_stime;
    long ru_maxrss;
    long ru_ixrss;
    long ru_idrss;
    long ru_isrss;
    long ru_minflt;
    long ru_majflt;
    long ru_nswap;
    long ru_inblock;
    long ru_oublock;
    long ru_msgsnd;
    long ru_msgrcv;
    long ru_nsignals;
    long ru_nvcsw;
    long ru_nivcsw;
};

struct vmspace {
    int32_t dummy;
    caddr_t dummy2;
    int32_t dummy3[5];
    caddr_t dummy4[3];
};

struct itimerval {
    struct timeval it_interval;
    struct timeval it_value;
};

struct user {
};

struct extern_proc {
    union _union_2399 p_un;
    struct vmspace * p_vmspace;
    struct sigacts * p_sigacts;
    int p_flag;
    char p_stat;
    pid_t p_pid;
    pid_t p_oppid;
    int p_dupfd;
    caddr_t user_stack;
    void * exit_thread;
    int p_debugger;
    boolean_t sigwait;
    u_int p_estcpu;
    int p_cpticks;
    fixpt_t p_pctcpu;
    void * p_wchan;
    char * p_wmesg;
    u_int p_swtime;
    u_int p_slptime;
    struct itimerval p_realtimer;
    struct timeval p_rtime;
    u_quad_t p_uticks;
    u_quad_t p_sticks;
    u_quad_t p_iticks;
    int p_traceflag;
    struct vnode * p_tracep;
    int p_siglist;
    struct vnode * p_textvp;
    int p_holdcnt;
    sigset_t p_sigmask;
    sigset_t p_sigignore;
    sigset_t p_sigcatch;
    u_char p_priority;
    u_char p_usrpri;
    char p_nice;
    char p_comm[17];
    struct pgrp * p_pgrp;
    struct user * p_addr;
    u_short p_xstat;
    u_short p_acflag;
    struct rusage * p_ru;
};

typedef struct session session, *Psession;

struct session {
};

#define INI_IPV4 1

#define INI_IPV6 2

#define MAXTHREADNAMESIZE 64

#define PROC_ALL_PIDS 1

#define PROC_DIRTY_ALLOW_IDLE_EXIT 2

#define PROC_DIRTY_ALLOWS_IDLE_EXIT 2

#define PROC_DIRTY_DEFER 4

#define PROC_DIRTY_IS_DIRTY 4

#define PROC_DIRTY_TRACK 1

#define PROC_DIRTY_TRACKED 1

#define PROC_DIRTYCONTROL_GET 3

#define PROC_DIRTYCONTROL_SET 2

#define PROC_DIRTYCONTROL_TRACK 1

#define PROC_FLAG_CONTROLT 128

#define PROC_FLAG_CTTY 64

#define PROC_FLAG_EXEC 16384

#define PROC_FLAG_INEXIT 4

#define PROC_FLAG_LP64 16

#define PROC_FLAG_PA_SUSP 4096

#define PROC_FLAG_PA_THROTTLE 2048

#define PROC_FLAG_PC_KILL 1536

#define PROC_FLAG_PC_MASK 1536

#define PROC_FLAG_PC_SUSP 1024

#define PROC_FLAG_PC_THROTTLE 512

#define PROC_FLAG_PPWAIT 8

#define PROC_FLAG_PSUGID 8192

#define PROC_FLAG_SLEADER 32

#define PROC_FLAG_SYSTEM 1

#define PROC_FLAG_THCWD 256

#define PROC_FLAG_TRACED 2

#define PROC_FP_CLEXEC 2

#define PROC_FP_GUARDED 4

#define PROC_FP_SHARED 1

#define PROC_KQUEUE_SELECT 1

#define PROC_KQUEUE_SLEEP 2

#define PROC_PGRP_ONLY 2

#define PROC_PID_RUSAGE 16

#define PROC_PID_RUSAGE_SIZE 0

#define PROC_PIDFDATALKINFO 8

#define PROC_PIDFDKQUEUEINFO 7

#define PROC_PIDFDPIPEINFO 6

#define PROC_PIDFDPSEMINFO 4

#define PROC_PIDFDPSHMINFO 5

#define PROC_PIDFDSOCKETINFO 3

#define PROC_PIDFDVNODEINFO 1

#define PROC_PIDFDVNODEPATHINFO 2

#define PROC_PIDFILEPORTPIPEINFO 6

#define PROC_PIDFILEPORTPSHMINFO 5

#define PROC_PIDFILEPORTSOCKETINFO 3

#define PROC_PIDFILEPORTVNODEPATHINFO 2

#define PROC_PIDLISTFDS 1

#define PROC_PIDLISTFILEPORTS 14

#define PROC_PIDLISTTHREADS 6

#define PROC_PIDPATHINFO 11

#define PROC_PIDPATHINFO_MAXSIZE 4096

#define PROC_PIDPATHINFO_SIZE 1024

#define PROC_PIDREGIONINFO 7

#define PROC_PIDREGIONPATHINFO 8

#define PROC_PIDT_SHORTBSDINFO 13

#define PROC_PIDTASKALLINFO 2

#define PROC_PIDTASKINFO 4

#define PROC_PIDTBSDINFO 3

#define PROC_PIDTHREADID64INFO 15

#define PROC_PIDTHREADINFO 5

#define PROC_PIDTHREADPATHINFO 10

#define PROC_PIDVNODEPATHINFO 9

#define PROC_PIDWORKQUEUEINFO 12

#define PROC_PPID_ONLY 6

#define PROC_REGION_SHARED 2

#define PROC_REGION_SUBMAP 1

#define PROC_RUID_ONLY 5

#define PROC_SELFSET_DELAYIDLESLEEP 4

#define PROC_SELFSET_PCONTROL 1

#define PROC_SELFSET_THREADNAME 2

#define PROC_SELFSET_THREADNAME_SIZE 63

#define PROC_SELFSET_VMRSRCOWNER 3

#define PROC_TTY_ONLY 3

#define PROC_UID_ONLY 4

#define PROX_FDTYPE_ATALK 0

#define PROX_FDTYPE_FSEVENTS 7

#define PROX_FDTYPE_KQUEUE 5

#define PROX_FDTYPE_PIPE 6

#define PROX_FDTYPE_PSEM 4

#define PROX_FDTYPE_PSHM 3

#define PROX_FDTYPE_SOCKET 2

#define PROX_FDTYPE_VNODE 1

#define SOI_S_ASYNC 512

#define SOI_S_CANTRCVMORE 32

#define SOI_S_CANTSENDMORE 16

#define SOI_S_COMP 4096

#define SOI_S_DRAINING 16384

#define SOI_S_INCOMP 2048

#define SOI_S_ISCONNECTED 2

#define SOI_S_ISCONNECTING 4

#define SOI_S_ISDISCONNECTED 8192

#define SOI_S_ISDISCONNECTING 8

#define SOI_S_NBIO 256

#define SOI_S_NOFDREF 1

#define SOI_S_PRIV 128

#define SOI_S_RCVATMARK 64

#define TSI_S__CLOSE_WAIT 5

#define TSI_S_CLOSED 0

#define TSI_S_CLOSING 7

#define TSI_S_ESTABLISHED 4

#define TSI_S_FIN_WAIT_1 6

#define TSI_S_FIN_WAIT_2 9

#define TSI_S_LAST_ACK 8

#define TSI_S_LISTEN 1

#define TSI_S_RESERVED 11

#define TSI_S_SYN_RECEIVED 3

#define TSI_S_SYN_SENT 2

#define TSI_S_TIME_WAIT 10

#define TSI_T_2MSL 3

#define TSI_T_KEEP 2

#define TSI_T_NTIMERS 4

#define TSI_T_PERSIST 1

#define TSI_T_REXMT 0

#define WQ_EXCEEDED_CONSTRAINED_THREAD_LIMIT 1

#define WQ_EXCEEDED_TOTAL_THREAD_LIMIT 2

typedef struct _struct_1825 _struct_1825, *P_struct_1825;

struct _struct_1825 {
    u_char in4_tos;
};

typedef struct _struct_1826 _struct_1826, *P_struct_1826;

struct _struct_1826 {
    uint8_t in6_hlim;
    int in6_cksum;
    u_short in6_ifindex;
    short in6_hops;
};

typedef union _union_1819 _union_1819, *P_union_1819;

typedef struct in4in6_addr in4in6_addr, *Pin4in6_addr;

struct in4in6_addr {
    u_int32_t i46a_pad32[3];
    struct in_addr i46a_addr4;
};

union _union_1819 {
    struct in4in6_addr ina_46;
    struct in6_addr ina_6;
};

typedef union _union_1822 _union_1822, *P_union_1822;

union _union_1822 {
    struct in4in6_addr ina_46;
    struct in6_addr ina_6;
};

typedef union _union_1830 _union_1830, *P_union_1830;

union _union_1830 {
    struct sockaddr_un ua_sun;
    char ua_dummy[255];
};

typedef union _union_1832 _union_1832, *P_union_1832;

union _union_1832 {
    struct sockaddr_un ua_sun;
    char ua_dummy[255];
};

typedef union _union_1843 _union_1843, *P_union_1843;

typedef struct in_sockinfo in_sockinfo, *Pin_sockinfo;

typedef struct tcp_sockinfo tcp_sockinfo, *Ptcp_sockinfo;

typedef struct un_sockinfo un_sockinfo, *Pun_sockinfo;

typedef struct ndrv_info ndrv_info, *Pndrv_info;

typedef struct kern_event_info kern_event_info, *Pkern_event_info;

typedef struct kern_ctl_info kern_ctl_info, *Pkern_ctl_info;

struct in_sockinfo {
    int insi_fport;
    int insi_lport;
    uint64_t insi_gencnt;
    uint32_t insi_flags;
    uint32_t insi_flow;
    uint8_t insi_vflag;
    uint8_t insi_ip_ttl;
    uint32_t rfu_1;
    union _union_1819 insi_faddr;
    union _union_1822 insi_laddr;
    struct _struct_1825 insi_v4;
    struct _struct_1826 insi_v6;
};

struct kern_event_info {
    uint32_t kesi_vendor_code_filter;
    uint32_t kesi_class_filter;
    uint32_t kesi_subclass_filter;
};

struct kern_ctl_info {
    uint32_t kcsi_id;
    uint32_t kcsi_reg_unit;
    uint32_t kcsi_flags;
    uint32_t kcsi_recvbufsize;
    uint32_t kcsi_sendbufsize;
    uint32_t kcsi_unit;
    char kcsi_name[96];
};

struct un_sockinfo {
    uint64_t unsi_conn_so;
    uint64_t unsi_conn_pcb;
    union _union_1830 unsi_addr;
    union _union_1832 unsi_caddr;
};

struct tcp_sockinfo {
    struct in_sockinfo tcpsi_ini;
    int tcpsi_state;
    int tcpsi_timer[4];
    int tcpsi_mss;
    uint32_t tcpsi_flags;
    uint32_t rfu_1;
    uint64_t tcpsi_tp;
};

struct ndrv_info {
    uint32_t ndrvsi_if_family;
    uint32_t ndrvsi_if_unit;
    char ndrvsi_if_name[16];
};

union _union_1843 {
    struct in_sockinfo pri_in;
    struct tcp_sockinfo pri_tcp;
    struct un_sockinfo pri_un;
    struct ndrv_info pri_ndrv;
    struct kern_event_info pri_kern_event;
    struct kern_ctl_info pri_kern_ctl;
};

typedef struct appletalk_fdinfo appletalk_fdinfo, *Pappletalk_fdinfo;

typedef struct proc_fileinfo proc_fileinfo, *Pproc_fileinfo;

typedef struct appletalk_info appletalk_info, *Pappletalk_info;

typedef struct vinfo_stat vinfo_stat, *Pvinfo_stat;

struct vinfo_stat {
    uint32_t vst_dev;
    uint16_t vst_mode;
    uint16_t vst_nlink;
    uint64_t vst_ino;
    uid_t vst_uid;
    gid_t vst_gid;
    int64_t vst_atime;
    int64_t vst_atimensec;
    int64_t vst_mtime;
    int64_t vst_mtimensec;
    int64_t vst_ctime;
    int64_t vst_ctimensec;
    int64_t vst_birthtime;
    int64_t vst_birthtimensec;
    off_t vst_size;
    int64_t vst_blocks;
    int32_t vst_blksize;
    uint32_t vst_flags;
    uint32_t vst_gen;
    uint32_t vst_rdev;
    int64_t vst_qspare[2];
};

struct appletalk_info {
    struct vinfo_stat atalk_stat;
};

struct proc_fileinfo {
    uint32_t fi_openflags;
    uint32_t fi_status;
    off_t fi_offset;
    int32_t fi_type;
    uint32_t fi_guardflags;
};

struct appletalk_fdinfo {
    struct proc_fileinfo pfi;
    struct appletalk_info appletalkinfo;
};

typedef enum enum_1838 {
    SOCKINFO_GENERIC=0,
    SOCKINFO_IN=1,
    SOCKINFO_KERN_CTL=6,
    SOCKINFO_KERN_EVENT=5,
    SOCKINFO_NDRV=4,
    SOCKINFO_TCP=2,
    SOCKINFO_UN=3
} enum_1838;

typedef struct kqueue_fdinfo kqueue_fdinfo, *Pkqueue_fdinfo;

typedef struct kqueue_info kqueue_info, *Pkqueue_info;

struct kqueue_info {
    struct vinfo_stat kq_stat;
    uint32_t kq_state;
    uint32_t rfu_1;
};

struct kqueue_fdinfo {
    struct proc_fileinfo pfi;
    struct kqueue_info kqueueinfo;
};

typedef struct pipe_fdinfo pipe_fdinfo, *Ppipe_fdinfo;

typedef struct pipe_info pipe_info, *Ppipe_info;

struct pipe_info {
    struct vinfo_stat pipe_stat;
    uint64_t pipe_handle;
    uint64_t pipe_peerhandle;
    int pipe_status;
    int rfu_1;
};

struct pipe_fdinfo {
    struct proc_fileinfo pfi;
    struct pipe_info pipeinfo;
};

typedef struct proc_bsdinfo proc_bsdinfo, *Pproc_bsdinfo;

struct proc_bsdinfo {
    uint32_t pbi_flags;
    uint32_t pbi_status;
    uint32_t pbi_xstatus;
    uint32_t pbi_pid;
    uint32_t pbi_ppid;
    uid_t pbi_uid;
    gid_t pbi_gid;
    uid_t pbi_ruid;
    gid_t pbi_rgid;
    uid_t pbi_svuid;
    gid_t pbi_svgid;
    uint32_t rfu_1;
    char pbi_comm[16];
    char pbi_name[32];
    uint32_t pbi_nfiles;
    uint32_t pbi_pgid;
    uint32_t pbi_pjobc;
    uint32_t e_tdev;
    uint32_t e_tpgid;
    int32_t pbi_nice;
    uint64_t pbi_start_tvsec;
    uint64_t pbi_start_tvusec;
};

typedef struct proc_bsdshortinfo proc_bsdshortinfo, *Pproc_bsdshortinfo;

struct proc_bsdshortinfo {
    uint32_t pbsi_pid;
    uint32_t pbsi_ppid;
    uint32_t pbsi_pgid;
    uint32_t pbsi_status;
    char pbsi_comm[16];
    uint32_t pbsi_flags;
    uid_t pbsi_uid;
    gid_t pbsi_gid;
    uid_t pbsi_ruid;
    gid_t pbsi_rgid;
    uid_t pbsi_svuid;
    gid_t pbsi_svgid;
    uint32_t pbsi_rfu;
};

typedef struct proc_fdinfo proc_fdinfo, *Pproc_fdinfo;

struct proc_fdinfo {
    int32_t proc_fd;
    uint32_t proc_fdtype;
};

typedef struct proc_fileportinfo proc_fileportinfo, *Pproc_fileportinfo;

struct proc_fileportinfo {
    uint32_t proc_fileport;
    uint32_t proc_fdtype;
};

typedef struct proc_regioninfo proc_regioninfo, *Pproc_regioninfo;

struct proc_regioninfo {
    uint32_t pri_protection;
    uint32_t pri_max_protection;
    uint32_t pri_inheritance;
    uint32_t pri_flags;
    uint64_t pri_offset;
    uint32_t pri_behavior;
    uint32_t pri_user_wired_count;
    uint32_t pri_user_tag;
    uint32_t pri_pages_resident;
    uint32_t pri_pages_shared_now_private;
    uint32_t pri_pages_swapped_out;
    uint32_t pri_pages_dirtied;
    uint32_t pri_ref_count;
    uint32_t pri_shadow_depth;
    uint32_t pri_share_mode;
    uint32_t pri_private_pages_resident;
    uint32_t pri_shared_pages_resident;
    uint32_t pri_obj_id;
    uint32_t pri_depth;
    uint64_t pri_address;
    uint64_t pri_size;
};

typedef struct proc_regionwithpathinfo proc_regionwithpathinfo, *Pproc_regionwithpathinfo;

typedef struct vnode_info_path vnode_info_path, *Pvnode_info_path;

typedef struct vnode_info vnode_info, *Pvnode_info;

struct vnode_info {
    struct vinfo_stat vi_stat;
    int vi_type;
    int vi_pad;
    fsid_t vi_fsid;
};

struct vnode_info_path {
    struct vnode_info vip_vi;
    char vip_path[1024];
};

struct proc_regionwithpathinfo {
    struct proc_regioninfo prp_prinfo;
    struct vnode_info_path prp_vip;
};

typedef struct proc_taskallinfo proc_taskallinfo, *Pproc_taskallinfo;

typedef struct proc_taskinfo proc_taskinfo, *Pproc_taskinfo;

struct proc_taskinfo {
    uint64_t pti_virtual_size;
    uint64_t pti_resident_size;
    uint64_t pti_total_user;
    uint64_t pti_total_system;
    uint64_t pti_threads_user;
    uint64_t pti_threads_system;
    int32_t pti_policy;
    int32_t pti_faults;
    int32_t pti_pageins;
    int32_t pti_cow_faults;
    int32_t pti_messages_sent;
    int32_t pti_messages_received;
    int32_t pti_syscalls_mach;
    int32_t pti_syscalls_unix;
    int32_t pti_csw;
    int32_t pti_threadnum;
    int32_t pti_numrunning;
    int32_t pti_priority;
};

struct proc_taskallinfo {
    struct proc_bsdinfo pbsd;
    struct proc_taskinfo ptinfo;
};

typedef struct proc_threadinfo proc_threadinfo, *Pproc_threadinfo;

struct proc_threadinfo {
    uint64_t pth_user_time;
    uint64_t pth_system_time;
    int32_t pth_cpu_usage;
    int32_t pth_policy;
    int32_t pth_run_state;
    int32_t pth_flags;
    int32_t pth_sleep_time;
    int32_t pth_curpri;
    int32_t pth_priority;
    int32_t pth_maxpriority;
    char pth_name[64];
};

typedef struct proc_threadwithpathinfo proc_threadwithpathinfo, *Pproc_threadwithpathinfo;

struct proc_threadwithpathinfo {
    struct proc_threadinfo pt;
    struct vnode_info_path pvip;
};

typedef struct proc_vnodepathinfo proc_vnodepathinfo, *Pproc_vnodepathinfo;

struct proc_vnodepathinfo {
    struct vnode_info_path pvi_cdir;
    struct vnode_info_path pvi_rdir;
};

typedef struct proc_workqueueinfo proc_workqueueinfo, *Pproc_workqueueinfo;

struct proc_workqueueinfo {
    uint32_t pwq_nthreads;
    uint32_t pwq_runthreads;
    uint32_t pwq_blockedthreads;
    uint32_t pwq_state;
};

typedef struct psem_fdinfo psem_fdinfo, *Ppsem_fdinfo;

typedef struct psem_info psem_info, *Ppsem_info;

struct psem_info {
    struct vinfo_stat psem_stat;
    char psem_name[1024];
};

struct psem_fdinfo {
    struct proc_fileinfo pfi;
    struct psem_info pseminfo;
};

typedef struct pshm_fdinfo pshm_fdinfo, *Ppshm_fdinfo;

typedef struct pshm_info pshm_info, *Ppshm_info;

struct pshm_info {
    struct vinfo_stat pshm_stat;
    uint64_t pshm_mappaddr;
    char pshm_name[1024];
};

struct pshm_fdinfo {
    struct proc_fileinfo pfi;
    struct pshm_info pshminfo;
};

typedef struct sockbuf_info sockbuf_info, *Psockbuf_info;

struct sockbuf_info {
    uint32_t sbi_cc;
    uint32_t sbi_hiwat;
    uint32_t sbi_mbcnt;
    uint32_t sbi_mbmax;
    uint32_t sbi_lowat;
    short sbi_flags;
    short sbi_timeo;
};

typedef struct socket_fdinfo socket_fdinfo, *Psocket_fdinfo;

typedef struct socket_info socket_info, *Psocket_info;

struct socket_info {
    struct vinfo_stat soi_stat;
    uint64_t soi_so;
    uint64_t soi_pcb;
    int soi_type;
    int soi_protocol;
    int soi_family;
    short soi_options;
    short soi_linger;
    short soi_state;
    short soi_qlen;
    short soi_incqlen;
    short soi_qlimit;
    short soi_timeo;
    u_short soi_error;
    uint32_t soi_oobmark;
    struct sockbuf_info soi_rcv;
    struct sockbuf_info soi_snd;
    int soi_kind;
    uint32_t rfu_1;
    union _union_1843 soi_proto;
};

struct socket_fdinfo {
    struct proc_fileinfo pfi;
    struct socket_info psi;
};

typedef struct vnode_fdinfo vnode_fdinfo, *Pvnode_fdinfo;

struct vnode_fdinfo {
    struct proc_fileinfo pfi;
    struct vnode_info pvi;
};

typedef struct vnode_fdinfowithpath vnode_fdinfowithpath, *Pvnode_fdinfowithpath;

struct vnode_fdinfowithpath {
    struct proc_fileinfo pfi;
    struct vnode_info_path pvip;
};

#define processor_MSG_COUNT 6

typedef struct __Reply__processor_assign_t __Reply__processor_assign_t, *P__Reply__processor_assign_t;

struct __Reply__processor_assign_t {
    struct mach_msg_header_t Head;
    struct NDR_record_t NDR;
    kern_return_t RetCode;
};

typedef struct __Reply__processor_control_t __Reply__processor_control_t, *P__Reply__processor_control_t;

struct __Reply__processor_control_t {
    struct mach_msg_header_t Head;
    struct NDR_record_t NDR;
    kern_return_t RetCode;
};

typedef struct __Reply__processor_exit_t __Reply__processor_exit_t, *P__Reply__processor_exit_t;

struct __Reply__processor_exit_t {
    struct mach_msg_header_t Head;
    struct NDR_record_t NDR;
    kern_return_t RetCode;
};

typedef struct __Reply__processor_get_assignment_t __Reply__processor_get_assignment_t, *P__Reply__processor_get_assignment_t;

struct __Reply__processor_get_assignment_t {
    struct mach_msg_header_t Head;
    struct mach_msg_body_t msgh_body;
    struct mach_msg_port_descriptor_t assigned_set;
};

typedef struct __Reply__processor_info_t __Reply__processor_info_t, *P__Reply__processor_info_t;

struct __Reply__processor_info_t {
    struct mach_msg_header_t Head;
    struct mach_msg_body_t msgh_body;
    struct mach_msg_port_descriptor_t host;
    struct NDR_record_t NDR;
    mach_msg_type_number_t processor_info_outCnt;
    integer_t processor_info_out[12];
};

typedef struct __Reply__processor_start_t __Reply__processor_start_t, *P__Reply__processor_start_t;

struct __Reply__processor_start_t {
    struct mach_msg_header_t Head;
    struct NDR_record_t NDR;
    kern_return_t RetCode;
};

typedef union __ReplyUnion__processor_subsystem __ReplyUnion__processor_subsystem, *P__ReplyUnion__processor_subsystem;

union __ReplyUnion__processor_subsystem {
    struct __Reply__processor_start_t Reply_processor_start;
    struct __Reply__processor_exit_t Reply_processor_exit;
    struct __Reply__processor_info_t Reply_processor_info;
    struct __Reply__processor_control_t Reply_processor_control;
    struct __Reply__processor_assign_t Reply_processor_assign;
    struct __Reply__processor_get_assignment_t Reply_processor_get_assignment;
};

typedef struct __Request__processor_assign_t __Request__processor_assign_t, *P__Request__processor_assign_t;

struct __Request__processor_assign_t {
    struct mach_msg_header_t Head;
    struct mach_msg_body_t msgh_body;
    struct mach_msg_port_descriptor_t new_set;
    struct NDR_record_t NDR;
    boolean_t wait;
};

typedef struct __Request__processor_control_t __Request__processor_control_t, *P__Request__processor_control_t;

struct __Request__processor_control_t {
    struct mach_msg_header_t Head;
    struct NDR_record_t NDR;
    mach_msg_type_number_t processor_cmdCnt;
    integer_t processor_cmd[12];
};

typedef struct __Request__processor_exit_t __Request__processor_exit_t, *P__Request__processor_exit_t;

struct __Request__processor_exit_t {
    struct mach_msg_header_t Head;
};

typedef struct __Request__processor_get_assignment_t __Request__processor_get_assignment_t, *P__Request__processor_get_assignment_t;

struct __Request__processor_get_assignment_t {
    struct mach_msg_header_t Head;
};

typedef struct __Request__processor_info_t __Request__processor_info_t, *P__Request__processor_info_t;

struct __Request__processor_info_t {
    struct mach_msg_header_t Head;
    struct NDR_record_t NDR;
    processor_flavor_t flavor;
    mach_msg_type_number_t processor_info_outCnt;
};

typedef struct __Request__processor_start_t __Request__processor_start_t, *P__Request__processor_start_t;

struct __Request__processor_start_t {
    struct mach_msg_header_t Head;
};

typedef union __RequestUnion__processor_subsystem __RequestUnion__processor_subsystem, *P__RequestUnion__processor_subsystem;

union __RequestUnion__processor_subsystem {
    struct __Request__processor_start_t Request_processor_start;
    struct __Request__processor_exit_t Request_processor_exit;
    struct __Request__processor_info_t Request_processor_info;
    struct __Request__processor_control_t Request_processor_control;
    struct __Request__processor_assign_t Request_processor_assign;
    struct __Request__processor_get_assignment_t Request_processor_get_assignment;
};

#define LOAD_SCALE 1000

#define PROCESSOR_BASIC_INFO 1

#define PROCESSOR_CPU_LOAD_INFO 2

#define PROCESSOR_INFO_MAX 1024

#define PROCESSOR_PM_REGS_INFO 268435457

#define PROCESSOR_SET_BASIC_INFO 5

#define PROCESSOR_SET_INFO_MAX 1024

#define PROCESSOR_SET_LOAD_INFO 4

#define PROCESSOR_TEMPERATURE 268435458

typedef struct processor_basic_info processor_basic_info, *Pprocessor_basic_info;

struct processor_basic_info {
    cpu_type_t cpu_type;
    cpu_subtype_t cpu_subtype;
    boolean_t running;
    int slot_num;
    boolean_t is_master;
};

typedef struct processor_basic_info processor_basic_info_data_t;

typedef struct processor_basic_info * processor_basic_info_t;

typedef struct processor_cpu_load_info processor_cpu_load_info, *Pprocessor_cpu_load_info;

struct processor_cpu_load_info {
    uint cpu_ticks[4];
};

typedef struct processor_cpu_load_info processor_cpu_load_info_data_t;

typedef struct processor_cpu_load_info * processor_cpu_load_info_t;

typedef integer_t * processor_info_array_t;

typedef integer_t processor_info_data_t[1024];

typedef integer_t * processor_info_t;

typedef struct processor_set_basic_info processor_set_basic_info, *Pprocessor_set_basic_info;

struct processor_set_basic_info {
    int processor_count;
    int default_policy;
};

typedef struct processor_set_basic_info processor_set_basic_info_data_t;

typedef struct processor_set_basic_info * processor_set_basic_info_t;

typedef int processor_set_flavor_t;

typedef integer_t processor_set_info_data_t[1024];

typedef integer_t * processor_set_info_t;

typedef struct processor_set_load_info processor_set_load_info, *Pprocessor_set_load_info;

struct processor_set_load_info {
    int task_count;
    int thread_count;
    integer_t load_average;
    integer_t mach_factor;
};

typedef struct processor_set_load_info processor_set_load_info_data_t;

typedef struct processor_set_load_info * processor_set_load_info_t;

#define processor_set_MSG_COUNT 10

typedef struct __Reply__processor_set_destroy_t __Reply__processor_set_destroy_t, *P__Reply__processor_set_destroy_t;

struct __Reply__processor_set_destroy_t {
    struct mach_msg_header_t Head;
    struct NDR_record_t NDR;
    kern_return_t RetCode;
};

typedef struct __Reply__processor_set_info_t __Reply__processor_set_info_t, *P__Reply__processor_set_info_t;

struct __Reply__processor_set_info_t {
    struct mach_msg_header_t Head;
    struct mach_msg_body_t msgh_body;
    struct mach_msg_port_descriptor_t host;
    struct NDR_record_t NDR;
    mach_msg_type_number_t info_outCnt;
    integer_t info_out[5];
};

typedef struct __Reply__processor_set_max_priority_t __Reply__processor_set_max_priority_t, *P__Reply__processor_set_max_priority_t;

struct __Reply__processor_set_max_priority_t {
    struct mach_msg_header_t Head;
    struct NDR_record_t NDR;
    kern_return_t RetCode;
};

typedef struct __Reply__processor_set_policy_control_t __Reply__processor_set_policy_control_t, *P__Reply__processor_set_policy_control_t;

struct __Reply__processor_set_policy_control_t {
    struct mach_msg_header_t Head;
    struct NDR_record_t NDR;
    kern_return_t RetCode;
};

typedef struct __Reply__processor_set_policy_disable_t __Reply__processor_set_policy_disable_t, *P__Reply__processor_set_policy_disable_t;

struct __Reply__processor_set_policy_disable_t {
    struct mach_msg_header_t Head;
    struct NDR_record_t NDR;
    kern_return_t RetCode;
};

typedef struct __Reply__processor_set_policy_enable_t __Reply__processor_set_policy_enable_t, *P__Reply__processor_set_policy_enable_t;

struct __Reply__processor_set_policy_enable_t {
    struct mach_msg_header_t Head;
    struct NDR_record_t NDR;
    kern_return_t RetCode;
};

typedef struct __Reply__processor_set_stack_usage_t __Reply__processor_set_stack_usage_t, *P__Reply__processor_set_stack_usage_t;

struct __Reply__processor_set_stack_usage_t {
    struct mach_msg_header_t Head;
    struct NDR_record_t NDR;
    kern_return_t RetCode;
    uint ltotal;
    vm_size_t space;
    vm_size_t resident;
    vm_size_t maxusage;
    vm_offset_t maxstack;
};

typedef struct __Reply__processor_set_statistics_t __Reply__processor_set_statistics_t, *P__Reply__processor_set_statistics_t;

struct __Reply__processor_set_statistics_t {
    struct mach_msg_header_t Head;
    struct NDR_record_t NDR;
    kern_return_t RetCode;
    mach_msg_type_number_t info_outCnt;
    integer_t info_out[5];
};

typedef struct __Reply__processor_set_tasks_t __Reply__processor_set_tasks_t, *P__Reply__processor_set_tasks_t;

struct __Reply__processor_set_tasks_t {
    struct mach_msg_header_t Head;
    struct mach_msg_body_t msgh_body;
    struct mach_msg_ool_ports_descriptor_t task_list;
    struct NDR_record_t NDR;
    mach_msg_type_number_t task_listCnt;
};

typedef struct __Reply__processor_set_threads_t __Reply__processor_set_threads_t, *P__Reply__processor_set_threads_t;

struct __Reply__processor_set_threads_t {
    struct mach_msg_header_t Head;
    struct mach_msg_body_t msgh_body;
    struct mach_msg_ool_ports_descriptor_t thread_list;
    struct NDR_record_t NDR;
    mach_msg_type_number_t thread_listCnt;
};

typedef union __ReplyUnion__processor_set_subsystem __ReplyUnion__processor_set_subsystem, *P__ReplyUnion__processor_set_subsystem;

union __ReplyUnion__processor_set_subsystem {
    struct __Reply__processor_set_statistics_t Reply_processor_set_statistics;
    struct __Reply__processor_set_destroy_t Reply_processor_set_destroy;
    struct __Reply__processor_set_max_priority_t Reply_processor_set_max_priority;
    struct __Reply__processor_set_policy_enable_t Reply_processor_set_policy_enable;
    struct __Reply__processor_set_policy_disable_t Reply_processor_set_policy_disable;
    struct __Reply__processor_set_tasks_t Reply_processor_set_tasks;
    struct __Reply__processor_set_threads_t Reply_processor_set_threads;
    struct __Reply__processor_set_policy_control_t Reply_processor_set_policy_control;
    struct __Reply__processor_set_stack_usage_t Reply_processor_set_stack_usage;
    struct __Reply__processor_set_info_t Reply_processor_set_info;
};

typedef struct __Request__processor_set_destroy_t __Request__processor_set_destroy_t, *P__Request__processor_set_destroy_t;

struct __Request__processor_set_destroy_t {
    struct mach_msg_header_t Head;
};

typedef struct __Request__processor_set_info_t __Request__processor_set_info_t, *P__Request__processor_set_info_t;

struct __Request__processor_set_info_t {
    struct mach_msg_header_t Head;
    struct NDR_record_t NDR;
    int flavor;
    mach_msg_type_number_t info_outCnt;
};

typedef struct __Request__processor_set_max_priority_t __Request__processor_set_max_priority_t, *P__Request__processor_set_max_priority_t;

struct __Request__processor_set_max_priority_t {
    struct mach_msg_header_t Head;
    struct NDR_record_t NDR;
    int max_priority;
    boolean_t change_threads;
};

typedef struct __Request__processor_set_policy_control_t __Request__processor_set_policy_control_t, *P__Request__processor_set_policy_control_t;

struct __Request__processor_set_policy_control_t {
    struct mach_msg_header_t Head;
    struct NDR_record_t NDR;
    processor_set_flavor_t flavor;
    mach_msg_type_number_t policy_infoCnt;
    integer_t policy_info[5];
    boolean_t change;
};

typedef struct __Request__processor_set_policy_disable_t __Request__processor_set_policy_disable_t, *P__Request__processor_set_policy_disable_t;

struct __Request__processor_set_policy_disable_t {
    struct mach_msg_header_t Head;
    struct NDR_record_t NDR;
    int policy;
    boolean_t change_threads;
};

typedef struct __Request__processor_set_policy_enable_t __Request__processor_set_policy_enable_t, *P__Request__processor_set_policy_enable_t;

struct __Request__processor_set_policy_enable_t {
    struct mach_msg_header_t Head;
    struct NDR_record_t NDR;
    int policy;
};

typedef struct __Request__processor_set_stack_usage_t __Request__processor_set_stack_usage_t, *P__Request__processor_set_stack_usage_t;

struct __Request__processor_set_stack_usage_t {
    struct mach_msg_header_t Head;
};

typedef struct __Request__processor_set_statistics_t __Request__processor_set_statistics_t, *P__Request__processor_set_statistics_t;

struct __Request__processor_set_statistics_t {
    struct mach_msg_header_t Head;
    struct NDR_record_t NDR;
    processor_set_flavor_t flavor;
    mach_msg_type_number_t info_outCnt;
};

typedef struct __Request__processor_set_tasks_t __Request__processor_set_tasks_t, *P__Request__processor_set_tasks_t;

struct __Request__processor_set_tasks_t {
    struct mach_msg_header_t Head;
};

typedef struct __Request__processor_set_threads_t __Request__processor_set_threads_t, *P__Request__processor_set_threads_t;

struct __Request__processor_set_threads_t {
    struct mach_msg_header_t Head;
};

typedef union __RequestUnion__processor_set_subsystem __RequestUnion__processor_set_subsystem, *P__RequestUnion__processor_set_subsystem;

union __RequestUnion__processor_set_subsystem {
    struct __Request__processor_set_statistics_t Request_processor_set_statistics;
    struct __Request__processor_set_destroy_t Request_processor_set_destroy;
    struct __Request__processor_set_max_priority_t Request_processor_set_max_priority;
    struct __Request__processor_set_policy_enable_t Request_processor_set_policy_enable;
    struct __Request__processor_set_policy_disable_t Request_processor_set_policy_disable;
    struct __Request__processor_set_tasks_t Request_processor_set_tasks;
    struct __Request__processor_set_threads_t Request_processor_set_threads;
    struct __Request__processor_set_policy_control_t Request_processor_set_policy_control;
    struct __Request__processor_set_stack_usage_t Request_processor_set_stack_usage;
    struct __Request__processor_set_info_t Request_processor_set_info;
};

#define PROP_DEFAULT 4

#define PROP_H 1

typedef struct propctx propctx, *Ppropctx;

struct propctx {
};

typedef struct propval propval, *Ppropval;

struct propval {
    char * name;
    char * * values;
    uint nvalues;
    uint valsize;
};

typedef ushort i386_ioport_t;

#define PR_SLOWHZ 2

#define PTHREAD_CANCEL_ASYNCHRONOUS 0

#define PTHREAD_CANCEL_DEFERRED 2

#define PTHREAD_CANCEL_DISABLE 0

#define PTHREAD_CANCEL_ENABLE 1

#define PTHREAD_CANCELED 1

#define PTHREAD_CREATE_DETACHED 2

#define PTHREAD_CREATE_JOINABLE 1

#define PTHREAD_EXPLICIT_SCHED 2

#define PTHREAD_INHERIT_SCHED 1

#define PTHREAD_MUTEX_DEFAULT 0

#define PTHREAD_MUTEX_ERRORCHECK 1

#define PTHREAD_MUTEX_NORMAL 0

#define PTHREAD_MUTEX_RECURSIVE 2

#define PTHREAD_PRIO_INHERIT 1

#define PTHREAD_PRIO_NONE 0

#define PTHREAD_PRIO_PROTECT 2

#define PTHREAD_PROCESS_PRIVATE 2

#define PTHREAD_PROCESS_SHARED 1

#define PTHREAD_SCOPE_PROCESS 2

#define PTHREAD_SCOPE_SYSTEM 1

#define __SCHED_PARAM_SIZE__ 4

#define _PTHREAD_COND_SIG_init 1018212795

#define _PTHREAD_ERRORCHECK_MUTEX_SIG_init 850045857

#define _PTHREAD_FIRSTFIT_MUTEX_SIG_init 850045859

#define _PTHREAD_MUTEX_SIG_init 850045863

#define _PTHREAD_ONCE_SIG_init 816954554

#define _PTHREAD_RECURSIVE_MUTEX_SIG_init 850045858

#define _PTHREAD_RWLOCK_SIG_init 766030772

#define SCHED_FIFO 4

#define SCHED_OTHER 1

#define SCHED_RR 2

#define _PTHREAD_MUTEX_POLICY_FAIRSHARE 1

#define _PTHREAD_MUTEX_POLICY_FIRSTFIT 2

#define _PTHREAD_MUTEX_POLICY_NONE 0

#define PT_ATTACH 10

#define PT_ATTACHEXC 14

#define PT_CONTINUE 7

#define PT_DENY_ATTACH 31

#define PT_DETACH 11

#define PT_FIRSTMACH 32

#define PT_FORCEQUOTA 30

#define PT_KILL 8

#define PT_READ_D 2

#define PT_READ_I 1

#define PT_READ_U 3

#define PT_SIGEXC 12

#define PT_STEP 9

#define PT_THUPDATE 13

#define PT_TRACE_ME 0

#define PT_WRITE_D 5

#define PT_WRITE_I 4

#define PT_WRITE_U 6

#define DISPATCH_CURRENT_QUEUE_LABEL 0

#define DISPATCH_QUEUE_PRIORITY_BACKGROUND -32768

#define DISPATCH_QUEUE_PRIORITY_DEFAULT 0

#define DISPATCH_QUEUE_PRIORITY_HIGH 2

#define DISPATCH_QUEUE_PRIORITY_LOW -2

#define DISPATCH_QUEUE_SERIAL 0

#define DISPATCH_TARGET_QUEUE_DEFAULT 0

typedef struct dispatch_queue_attr_s * dispatch_queue_attr_t;

typedef long dispatch_queue_priority_t;

typedef struct dispatch_queue_s * dispatch_queue_t;

#define GRPQUOTA 1

#define MAX_DQ_TIME 604800

#define MAX_IQ_TIME 604800

#define MAXQUOTAS 2

#define Q_GETQUOTA 768

#define Q_QUOTAOFF 512

#define Q_QUOTAON 256

#define Q_QUOTASTAT 1792

#define Q_SETQUOTA 1024

#define Q_SETUSE 1280

#define Q_SYNC 1536

#define QF_GROUPS_PER_GB 32

#define QF_MAX_GROUPS 262144

#define QF_MAX_USERS 2097152

#define QF_MIN_GROUPS 2048

#define QF_MIN_USERS 2048

#define QF_USERS_PER_GB 256

#define QF_VERSION 1

#define SUBCMDMASK 255

#define SUBCMDSHIFT 8

#define USRQUOTA 0

typedef struct dqblk dqblk, *Pdqblk;

struct dqblk {
    u_int64_t dqb_bhardlimit;
    u_int64_t dqb_bsoftlimit;
    u_int64_t dqb_curbytes;
    u_int32_t dqb_ihardlimit;
    u_int32_t dqb_isoftlimit;
    u_int32_t dqb_curinodes;
    u_int32_t dqb_btime;
    u_int32_t dqb_itime;
    u_int32_t dqb_id;
    u_int32_t dqb_spare[4];
};

typedef struct dqfilehdr dqfilehdr, *Pdqfilehdr;

struct dqfilehdr {
    u_int32_t dqh_magic;
    u_int32_t dqh_version;
    u_int32_t dqh_maxentries;
    u_int32_t dqh_entrycnt;
    u_int32_t dqh_flags;
    u_int32_t dqh_chktime;
    u_int32_t dqh_btime;
    u_int32_t dqh_itime;
    char dqh_string[16];
    u_int32_t dqh_spare[4];
};

#define RAND_F_ENG_RAND_GET_RAND_METHOD 108

#define RAND_F_FIPS_RAND 103

#define RAND_F_FIPS_RAND_BYTES 102

#define RAND_F_FIPS_RAND_GET_RAND_METHOD 109

#define RAND_F_FIPS_RAND_SET_DT 106

#define RAND_F_FIPS_SET_DT 104

#define RAND_F_FIPS_SET_PRNG_SEED 107

#define RAND_F_FIPS_SET_TEST_MODE 105

#define RAND_F_RAND_GET_RAND_METHOD 101

#define RAND_F_SSLEAY_RAND_BYTES 100

#define RAND_R_NO_KEY_SET 107

#define RAND_R_NON_FIPS_METHOD 105

#define RAND_R_NOT_IN_TEST_MODE 106

#define RAND_R_PRNG_ASKING_FOR_TOO_MUCH 101

#define RAND_R_PRNG_ERROR 108

#define RAND_R_PRNG_KEYED 109

#define RAND_R_PRNG_NOT_REKEYED 102

#define RAND_R_PRNG_NOT_RESEEDED 103

#define RAND_R_PRNG_NOT_SEEDED 100

#define RAND_R_PRNG_SEED_MUST_NOT_MATCH_KEY 110

#define RAND_R_PRNG_STUCK 104

typedef union _union_2257 _union_2257, *P_union_2257;

union _union_2257 {
    uint32_t ran_strx;
};

typedef struct ranlib ranlib, *Pranlib;

struct ranlib {
    union _union_2257 ran_un;
    uint32_t ran_off;
};

typedef struct rip6stat rip6stat, *Prip6stat;

struct rip6stat {
    u_quad_t rip6s_ipackets;
    u_quad_t rip6s_isum;
    u_quad_t rip6s_badsum;
    u_quad_t rip6s_nosock;
    u_quad_t rip6s_nosockmcast;
    u_quad_t rip6s_fullsock;
    u_quad_t rip6s_opackets;
};

#define RB_DIR_LEFT 0

#define RB_DIR_RIGHT 1

typedef struct rb_node rb_node, *Prb_node;

struct rb_node {
    void * opaque[3];
};

typedef struct rb_node rb_node_t;

typedef struct rb_tree rb_tree, *Prb_tree;

struct rb_tree {
    void * opaque[8];
};

typedef struct rb_tree_ops_t rb_tree_ops_t, *Prb_tree_ops_t;

typedef int (* rbto_compare_nodes_fn)(void *, void *, void *);

typedef int (* rbto_compare_key_fn)(void *, void *, void *);

struct rb_tree_ops_t {
    rbto_compare_nodes_fn rbto_compare_nodes;
    rbto_compare_key_fn rbto_compare_key;
    size_t rbto_node_offset;
    void * rbto_context;
};

typedef struct rb_tree rb_tree_t;

#define RC2_BLOCK 8

#define RC2_DECRYPT 0

#define RC2_ENCRYPT 1

#define RC2_KEY_LENGTH 16

typedef struct rc2_key_st rc2_key_st, *Prc2_key_st;

typedef struct rc2_key_st RC2_KEY;

struct rc2_key_st {
    uint data[64];
};

typedef struct rc4_key_st rc4_key_st, *Prc4_key_st;

typedef struct rc4_key_st RC4_KEY;

struct rc4_key_st {
    uchar x;
    uchar y;
    uchar data[256];
};

#define RC5_12_ROUNDS 12

#define RC5_16_ROUNDS 16

#define RC5_32_BLOCK 8

#define RC5_32_KEY_LENGTH 16

#define RC5_8_ROUNDS 8

#define RC5_DECRYPT 0

#define RC5_ENCRYPT 1

typedef struct rc5_key_st rc5_key_st, *Prc5_key_st;

typedef struct rc5_key_st RC5_32_KEY;

struct rc5_key_st {
    int rounds;
    uint data[34];
};

#define control_character_bit 64

#define control_character_threshold 32

#define ISFUNC 0

#define ISKMAP 1

#define ISMACR 2

#define KEYMAP_SIZE 256

#define RL_READLINE_VERSION 1026

#define RUBOUT 127

typedef struct _hist_entry _hist_entry, *P_hist_entry;

typedef void * histdata_t;

struct _hist_entry {
    char * line;
    histdata_t data;
};

typedef struct _keymap_entry _keymap_entry, *P_keymap_entry;

typedef int (Function)(char *, int);

struct _keymap_entry {
    char type;
    Function * function;
};

typedef char * (CPFunction)(char *, int);

typedef char * * (CPPFunction)(char *, int, int);

typedef struct _hist_entry HIST_ENTRY;

typedef struct HISTORY_STATE HISTORY_STATE, *PHISTORY_STATE;

struct HISTORY_STATE {
    int length;
};

typedef struct _keymap_entry KEYMAP_ENTRY;

typedef KEYMAP_ENTRY * Keymap;

typedef KEYMAP_ENTRY KEYMAP_ENTRY_ARRAY[256];

typedef int (rl_command_func_t)(int, int);

typedef char * (rl_compentry_func_t)(char *, int);

typedef void (VCPFunction)(char *);

typedef void (VFunction)(void);

#define RPP_ECHO_OFF 0

#define RPP_ECHO_ON 1

#define RPP_FORCELOWER 4

#define RPP_FORCEUPPER 8

#define RPP_REQUIRE_TTY 2

#define RPP_SEVENBIT 16

#define B_ADAPTORMASK 15

#define B_ADAPTORSHIFT 24

#define B_CONTROLLERMASK 15

#define B_CONTROLLERSHIFT 20

#define B_DEVMAGIC 2684354560

#define B_MAGICMASK 4026531840

#define B_PARTITIONMASK 255

#define B_PARTITIONSHIFT 8

#define B_TYPEMASK 255

#define B_TYPESHIFT 0

#define B_UNITMASK 255

#define B_UNITSHIFT 16

#define RB_ALTBOOT 64

#define RB_ASKNAME 1

#define RB_AUTOBOOT 0

#define RB_BOOT 1

#define RB_DFLTROOT 32

#define RB_HALT 8

#define RB_INITNAME 16

#define RB_NOSYNC 4

#define RB_PANIC 0

#define RB_QUICK 1024

#define RB_SAFEBOOT 256

#define RB_SINGLE 2

#define RB_UNIPROC 128

#define RB_UPSDELAY 512

#define STACK_INCR 4

typedef struct _xmlRelaxNG _xmlRelaxNG, *P_xmlRelaxNG;

struct _xmlRelaxNG {
};

typedef struct _xmlRelaxNGParserCtxt _xmlRelaxNGParserCtxt, *P_xmlRelaxNGParserCtxt;

struct _xmlRelaxNGParserCtxt {
};

typedef struct _xmlRelaxNGValidCtxt _xmlRelaxNGValidCtxt, *P_xmlRelaxNGValidCtxt;

struct _xmlRelaxNGValidCtxt {
};

typedef enum enum_2094 {
    XML_RELAXNG_ERR_ATTREXTRANS=20,
    XML_RELAXNG_ERR_ATTRNAME=14,
    XML_RELAXNG_ERR_ATTRNONS=16,
    XML_RELAXNG_ERR_ATTRVALID=24,
    XML_RELAXNG_ERR_ATTRWRONGNS=18,
    XML_RELAXNG_ERR_CONTENTVALID=25,
    XML_RELAXNG_ERR_DATAELEM=28,
    XML_RELAXNG_ERR_DATATYPE=31,
    XML_RELAXNG_ERR_DUPID=4,
    XML_RELAXNG_ERR_ELEMEXTRANS=19,
    XML_RELAXNG_ERR_ELEMNAME=13,
    XML_RELAXNG_ERR_ELEMNONS=15,
    XML_RELAXNG_ERR_ELEMNOTEMPTY=21,
    XML_RELAXNG_ERR_ELEMWRONG=38,
    XML_RELAXNG_ERR_ELEMWRONGNS=17,
    XML_RELAXNG_ERR_EXTRACONTENT=26,
    XML_RELAXNG_ERR_EXTRADATA=35,
    XML_RELAXNG_ERR_INTEREXTRA=12,
    XML_RELAXNG_ERR_INTERNAL=37,
    XML_RELAXNG_ERR_INTERNODATA=10,
    XML_RELAXNG_ERR_INTERSEQ=11,
    XML_RELAXNG_ERR_INVALIDATTR=27,
    XML_RELAXNG_ERR_LACKDATA=36,
    XML_RELAXNG_ERR_LIST=33,
    XML_RELAXNG_ERR_LISTELEM=30,
    XML_RELAXNG_ERR_LISTEMPTY=9,
    XML_RELAXNG_ERR_LISTEXTRA=8,
    XML_RELAXNG_ERR_MEMORY=1,
    XML_RELAXNG_ERR_NODEFINE=7,
    XML_RELAXNG_ERR_NOELEM=22,
    XML_RELAXNG_ERR_NOGRAMMAR=34,
    XML_RELAXNG_ERR_NOSTATE=6,
    XML_RELAXNG_ERR_NOTELEM=23,
    XML_RELAXNG_ERR_TEXTWRONG=39,
    XML_RELAXNG_ERR_TYPE=2,
    XML_RELAXNG_ERR_TYPECMP=5,
    XML_RELAXNG_ERR_TYPEVAL=3,
    XML_RELAXNG_ERR_VALELEM=29,
    XML_RELAXNG_ERR_VALUE=32,
    XML_RELAXNG_OK=0
} enum_2094;

typedef enum enum_2095 {
    XML_RELAXNGP_CRNG=2,
    XML_RELAXNGP_FREE_DOC=1,
    XML_RELAXNGP_NONE=0
} enum_2095;

typedef struct _xmlRelaxNG xmlRelaxNG;

typedef struct _xmlRelaxNGParserCtxt xmlRelaxNGParserCtxt;

typedef xmlRelaxNGParserCtxt * xmlRelaxNGParserCtxtPtr;

typedef enum enum_2095 xmlRelaxNGParserFlag;

typedef xmlRelaxNG * xmlRelaxNGPtr;

typedef struct _xmlRelaxNGValidCtxt xmlRelaxNGValidCtxt;

typedef xmlRelaxNGValidCtxt * xmlRelaxNGValidCtxtPtr;

typedef enum enum_2094 xmlRelaxNGValidErr;

typedef void (* xmlRelaxNGValidityErrorFunc)(void *, char *, ...);

typedef void (* xmlRelaxNGValidityWarningFunc)(void *, char *, ...);

#define R_ABS 0

#define R_SCATTERED 2147483648

typedef union anon__struct_2254_bitfield_1 anon__struct_2254_bitfield_1, *Panon__struct_2254_bitfield_1;

union anon__struct_2254_bitfield_1 {
    uint32_t r_symbolnum:24; /* : bits 0-23 */
    uint32_t r_pcrel:1; /* : bits 24 */
    uint32_t r_length:2; /* : bits 25-26 */
    uint32_t r_extern:1; /* : bits 27 */
    uint32_t r_type:4; /* : bits 28-31 */
};

typedef union anon__struct_2255_bitfield_1 anon__struct_2255_bitfield_1, *Panon__struct_2255_bitfield_1;

union anon__struct_2255_bitfield_1 {
    uint32_t r_address:24; /* : bits 0-23 */
    uint32_t r_type:4; /* : bits 24-27 */
    uint32_t r_length:2; /* : bits 28-29 */
    uint32_t r_pcrel:1; /* : bits 30 */
    uint32_t r_scattered:1; /* : bits 31 */
};

typedef enum reloc_type_generic {
    GENERIC_RELOC_LOCAL_SECTDIFF=4,
    GENERIC_RELOC_PAIR=1,
    GENERIC_RELOC_PB_LA_PTR=3,
    GENERIC_RELOC_SECTDIFF=2,
    GENERIC_RELOC_TLV=5,
    GENERIC_RELOC_VANILLA=0
} reloc_type_generic;

typedef struct relocation_info relocation_info, *Prelocation_info;

struct relocation_info {
    int32_t r_address;
    union anon__struct_2254_bitfield_1 field_0x4;
};

typedef struct scattered_relocation_info scattered_relocation_info, *Pscattered_relocation_info;

struct scattered_relocation_info {
    union anon__struct_2255_bitfield_1 field_0x0;
    int32_t r_value;
};

typedef struct _removefile_state _removefile_state, *P_removefile_state;

struct _removefile_state {
};

typedef enum enum_3354 {
    REMOVEFILE_KEEP_PARENT=2,
    REMOVEFILE_RECURSIVE=1,
    REMOVEFILE_SECURE_1_PASS=16,
    REMOVEFILE_SECURE_1_PASS_ZERO=64,
    REMOVEFILE_SECURE_35_PASS=8,
    REMOVEFILE_SECURE_3_PASS=32,
    REMOVEFILE_SECURE_7_PASS=4
} enum_3354;

typedef enum enum_3356 {
    REMOVEFILE_STATE_CONFIRM_CALLBACK=1,
    REMOVEFILE_STATE_CONFIRM_CONTEXT=2,
    REMOVEFILE_STATE_ERRNO=5,
    REMOVEFILE_STATE_ERROR_CALLBACK=3,
    REMOVEFILE_STATE_ERROR_CONTEXT=4,
    REMOVEFILE_STATE_STATUS_CALLBACK=6,
    REMOVEFILE_STATE_STATUS_CONTEXT=7
} enum_3356;

typedef enum enum_3357 {
    REMOVEFILE_PROCEED=0,
    REMOVEFILE_SKIP=1,
    REMOVEFILE_STOP=2
} enum_3357;

typedef struct _removefile_state * removefile_state_t;

typedef int (* removefile_callback_t)(removefile_state_t, char *, void *);

typedef uint32_t removefile_flags_t;

#define __RES 19991006

#define LOCALDOMAINPARTS 2

#define MAXDFLSRCH 3

#define MAXDNSRCH 6

#define MAXNS 3

#define MAXRESOLVSORT 10

#define RES_AAONLY 4

#define RES_BLAST 131072

#define RES_DEBUG 2

#define RES_DEFAULT 1728

#define RES_DEFNAMES 128

#define RES_DFLRETRY 2

#define RES_DNSRCH 512

#define RES_EXHAUSTIVE 1

#define RES_F_CONN 2

#define RES_F_EDNS0ERR 4

#define RES_F_VC 1

#define RES_IGNTC 32

#define RES_INIT 1

#define RES_INSECURE1 1024

#define RES_INSECURE2 2048

#define RES_IPV4ONLY 2

#define RES_IPV6ONLY 4

#define RES_KEEPTSIG 65536

#define RES_MAXNDOTS 15

#define RES_MAXRETRANS 30

#define RES_MAXRETRY 5

#define RES_MAXTIME 65535

#define RES_NO_BITSTRING 524288

#define RES_NO_NIBBLE 262144

#define RES_NO_NIBBLE2 2147483648

#define RES_NOALIASES 4096

#define RES_NOCHECKNAME 32768

#define RES_NOTLDQUERY 1048576

#define RES_PRF_ADD 128

#define RES_PRF_ANS 32

#define RES_PRF_AUTH 64

#define RES_PRF_CLASS 4

#define RES_PRF_CMD 8

#define RES_PRF_HEAD1 256

#define RES_PRF_HEAD2 512

#define RES_PRF_HEADX 2048

#define RES_PRF_INIT 16384

#define RES_PRF_QUERY 4096

#define RES_PRF_QUES 16

#define RES_PRF_REPLY 8192

#define RES_PRF_STATS 1

#define RES_PRF_TRUNC 32768

#define RES_PRF_TTLID 1024

#define RES_PRF_UPDATE 2

#define RES_PRIMARY 16

#define RES_RECURSE 64

#define RES_ROTATE 16384

#define RES_STAYOPEN 256

#define RES_TIMEOUT 5

#define RES_USE_A6 536870912

#define RES_USE_DNAME 268435456

#define RES_USE_DNSSEC 2097152

#define RES_USE_EDNS0 1073741824

#define RES_USE_INET6 8192

#define RES_USEVC 8

typedef struct __res_9_state __res_9_state, *P__res_9_state;

typedef union anon__struct_3363_bitfield_1 anon__struct_3363_bitfield_1, *Panon__struct_3363_bitfield_1;

typedef struct _struct_3365 _struct_3365, *P_struct_3365;

typedef enum enum_3360 {
    res_9_done=3,
    res_9_error=4,
    res_9_goahead=0,
    res_9_modified=2,
    res_9_nextns=1
} enum_3360;

typedef enum enum_3360 res_9_sendhookact;

typedef res_9_sendhookact (* res_send_qhook)(void);

typedef res_9_sendhookact (* res_send_rhook)(void);

typedef union _union_3367 _union_3367, *P_union_3367;

typedef struct _struct_3368 _struct_3368, *P_struct_3368;

typedef struct __res_9_state_ext __res_9_state_ext, *P__res_9_state_ext;

struct _struct_3368 {
    u_int16_t nscount;
    u_int16_t nstimes[3];
    int nssocks[3];
    struct __res_9_state_ext * ext;
};

union _union_3367 {
    char pad[68];
    struct _struct_3368 _ext;
};

struct _struct_3365 {
    struct in_addr addr;
    u_int32_t mask;
};

union anon__struct_3363_bitfield_1 {
    uint ndots:4; /* : bits 0-3 */
    uint nsort:4; /* : bits 4-7 */
};

struct __res_9_state {
    int retrans;
    int retry;
    u_long options;
    int nscount;
    struct sockaddr_in nsaddr_list[3];
    u_short id;
    char * dnsrch[7];
    char defdname[256];
    u_long pfcode;
    union anon__struct_3363_bitfield_1 field_0x184;
    char unused[3];
    struct _struct_3365 sort_list[10];
    res_send_qhook qhook;
    res_send_rhook rhook;
    int res_h_errno;
    int _vcsock;
    u_int _flags;
    u_int _pad;
    union _union_3367 _u;
};

struct __res_9_state_ext {
};

typedef union res_9_sockaddr_union res_9_sockaddr_union, *Pres_9_sockaddr_union;

union res_9_sockaddr_union {
    struct sockaddr_in sin;
    struct sockaddr_in6 sin6;
    int32_t __align32;
    char __space[128];
};

typedef struct __res_9_state * res_9_state;

typedef struct res_9_sym res_9_sym, *Pres_9_sym;

struct res_9_sym {
    int number;
    char * name;
    char * humanname;
};

#define _RLIMIT_POSIX_FLAG 4096

#define CPUMON_MAKE_FATAL 4096

#define IOPOL_APPLICATION 5

#define IOPOL_DEFAULT 0

#define IOPOL_IMPORTANT 1

#define IOPOL_NORMAL 1

#define IOPOL_PASSIVE 2

#define IOPOL_SCOPE_DARWIN_BG 2

#define IOPOL_SCOPE_PROCESS 0

#define IOPOL_SCOPE_THREAD 1

#define IOPOL_STANDARD 5

#define IOPOL_THROTTLE 3

#define IOPOL_TYPE_DISK 0

#define IOPOL_UTILITY 4

#define PRIO_DARWIN_BG 4096

#define PRIO_DARWIN_NONUI 4097

#define PRIO_DARWIN_PROCESS 4

#define PRIO_DARWIN_THREAD 3

#define PRIO_MAX 20

#define PRIO_MIN -20

#define PRIO_PGRP 1

#define PRIO_PROCESS 0

#define PRIO_USER 2

#define RLIM_INFINITY 9223372036854775807

#define RLIM_NLIMITS 9

#define RLIM_SAVED_CUR 9223372036854775807

#define RLIM_SAVED_MAX 9223372036854775807

#define RLIMIT_AS 5

#define RLIMIT_CORE 4

#define RLIMIT_CPU 0

#define RLIMIT_CPU_USAGE_MONITOR 2

#define RLIMIT_DATA 2

#define RLIMIT_FSIZE 1

#define RLIMIT_MEMLOCK 6

#define RLIMIT_NOFILE 8

#define RLIMIT_NPROC 7

#define RLIMIT_RSS 5

#define RLIMIT_STACK 3

#define RLIMIT_WAKEUPS_MONITOR 1

#define RUSAGE_CHILDREN -1

#define RUSAGE_INFO_CURRENT 2

#define RUSAGE_INFO_V0 0

#define RUSAGE_INFO_V1 1

#define RUSAGE_INFO_V2 2

#define RUSAGE_SELF 0

#define WAKEMON_DISABLE 2

#define WAKEMON_ENABLE 1

#define WAKEMON_GET_PARAMS 4

#define WAKEMON_MAKE_FATAL 16

#define WAKEMON_SET_DEFAULTS 8

typedef struct proc_rlimit_control_wakeupmon proc_rlimit_control_wakeupmon, *Pproc_rlimit_control_wakeupmon;

struct proc_rlimit_control_wakeupmon {
    uint32_t wm_flags;
    int32_t wm_rate;
};

typedef __uint64_t rlim_t;

typedef struct rlimit rlimit, *Prlimit;

struct rlimit {
    rlim_t rlim_cur;
    rlim_t rlim_max;
};

typedef void * rusage_info_t;

typedef struct rusage_info_v0 rusage_info_v0, *Prusage_info_v0;

struct rusage_info_v0 {
    uint8_t ri_uuid[16];
    uint64_t ri_user_time;
    uint64_t ri_system_time;
    uint64_t ri_pkg_idle_wkups;
    uint64_t ri_interrupt_wkups;
    uint64_t ri_pageins;
    uint64_t ri_wired_size;
    uint64_t ri_resident_size;
    uint64_t ri_phys_footprint;
    uint64_t ri_proc_start_abstime;
    uint64_t ri_proc_exit_abstime;
};

typedef struct rusage_info_v1 rusage_info_v1, *Prusage_info_v1;

struct rusage_info_v1 {
    uint8_t ri_uuid[16];
    uint64_t ri_user_time;
    uint64_t ri_system_time;
    uint64_t ri_pkg_idle_wkups;
    uint64_t ri_interrupt_wkups;
    uint64_t ri_pageins;
    uint64_t ri_wired_size;
    uint64_t ri_resident_size;
    uint64_t ri_phys_footprint;
    uint64_t ri_proc_start_abstime;
    uint64_t ri_proc_exit_abstime;
    uint64_t ri_child_user_time;
    uint64_t ri_child_system_time;
    uint64_t ri_child_pkg_idle_wkups;
    uint64_t ri_child_interrupt_wkups;
    uint64_t ri_child_pageins;
    uint64_t ri_child_elapsed_abstime;
};

typedef struct rusage_info_v2 rusage_info_v2, *Prusage_info_v2;

struct rusage_info_v2 {
    uint8_t ri_uuid[16];
    uint64_t ri_user_time;
    uint64_t ri_system_time;
    uint64_t ri_pkg_idle_wkups;
    uint64_t ri_interrupt_wkups;
    uint64_t ri_pageins;
    uint64_t ri_wired_size;
    uint64_t ri_resident_size;
    uint64_t ri_phys_footprint;
    uint64_t ri_proc_start_abstime;
    uint64_t ri_proc_exit_abstime;
    uint64_t ri_child_user_time;
    uint64_t ri_child_system_time;
    uint64_t ri_child_pkg_idle_wkups;
    uint64_t ri_child_interrupt_wkups;
    uint64_t ri_child_pageins;
    uint64_t ri_child_elapsed_abstime;
    uint64_t ri_diskio_bytesread;
    uint64_t ri_diskio_byteswritten;
};

typedef struct plimit plimit, *Pplimit;

struct plimit {
    struct rlimit pl_rlimit[9];
    int pl_refcnt;
};

typedef struct pstats pstats, *Ppstats;

typedef struct uprof uprof, *Puprof;

struct uprof {
    struct uprof * pr_next;
    caddr_t pr_base;
    u_int32_t pr_size;
    u_int32_t pr_off;
    u_int32_t pr_scale;
    u_int32_t pr_addr;
    u_int32_t pr_ticks;
};

struct pstats {
    struct rusage p_ru;
    struct rusage p_cru;
    struct uprof p_prof;
    uint64_t ps_start;
};

#define ANYP 192

#define B0 0

#define B110 3

#define B1200 9

#define B134 4

#define B150 5

#define B1800 10

#define B19200 14

#define B200 6

#define B2400 11

#define B300 7

#define B38400 15

#define B4800 12

#define B50 1

#define B600 8

#define B75 2

#define B9600 13

#define BS0 0

#define BS1 32768

#define BSDELAY 32768

#define CBREAK 2

#define CR0 0

#define CR1 4096

#define CR2 8192

#define CR3 12288

#define CRDELAY 12288

#define CRMOD 16

#define CRTBS 65536

#define CRTERA 262144

#define CRTKIL 67108864

#define CTLECH 268435456

#define DECCTQ 1073741824

#define ECHO 8

#define EVENP 128

#define FF0 0

#define FF1 16384

#define FLUSHO 8388608

#define L001000 33554432

#define LCASE 4

#define LCRTBS 1

#define LCRTERA 4

#define LCRTKIL 1024

#define LCTLECH 4096

#define LDECCTQ 16384

#define LFLUSHO 128

#define LITOUT 2097152

#define LL001000 512

#define LLITOUT 32

#define LMDMBUF 16

#define LNOFLSH 32768

#define LNOHANG 256

#define LPASS8 2048

#define LPENDIN 8192

#define LPRTERA 2

#define LTILDE 8

#define LTOSTOP 64

#define MDMBUF 1048576

#define NL0 0

#define NL1 256

#define NL2 512

#define NL3 768

#define NLDELAY 768

#define NOFLSH 2147483648

#define NOHANG 16777216

#define ODDP 64

#define PASS8 134217728

#define PENDIN 536870912

#define PRTERA 131072

#define RAW 32

#define REX_INTERACTIVE 1

#define REXPROC_MODES 3

#define REXPROC_SIGNAL 5

#define REXPROC_START 1

#define REXPROC_WAIT 2

#define REXPROC_WINCH 4

#define REXPROG 100017

#define REXVERS 1

#define STRINGSIZE 1024

#define TAB0 0

#define TAB1 1024

#define TAB2 2048

#define TANDEM 1

#define TBDELAY 3072

#define TILDE 524288

#define TOSTOP 4194304

#define VTDELAY 16384

#define XTABS 3072

typedef struct _struct_3656 _struct_3656, *P_struct_3656;

typedef char * rexstring;

struct _struct_3656 {
    u_int rst_cmd_len;
    rexstring * rst_cmd_val;
};

typedef struct _struct_3657 _struct_3657, *P_struct_3657;

struct _struct_3657 {
    u_int rst_env_len;
    rexstring * rst_env_val;
};

typedef struct ltchars ltchars, *Pltchars;

struct ltchars {
    u_int six;
    char chars[6];
    u_int mode;
};

typedef struct rex_result rex_result, *Prex_result;

struct rex_result {
    int rlt_stat;
    rexstring rlt_message;
};

typedef struct rex_start rex_start, *Prex_start;

struct rex_start {
    struct _struct_3656 rst_cmd;
    rexstring rst_host;
    rexstring rst_fsname;
    rexstring rst_dirwithin;
    struct _struct_3657 rst_env;
    u_int rst_port0;
    u_int rst_port1;
    u_int rst_port2;
    u_int rst_flags;
};

typedef struct rex_ttymode rex_ttymode, *Prex_ttymode;

typedef struct sgttyb sgttyb, *Psgttyb;

typedef struct tchars tchars, *Ptchars;

struct sgttyb {
    u_int four;
    char chars[4];
    u_int flags;
};

struct tchars {
    u_int six;
    char chars[6];
};

struct rex_ttymode {
    struct sgttyb basic;
    struct tchars more;
    struct ltchars yetmore;
    u_int andmore;
};

typedef struct rex_ttysize rex_ttysize, *Prex_ttysize;

struct rex_ttysize {
    int ts_lines;
    int ts_cols;
};

#define RIPEMD160_CBLOCK 64

#define RIPEMD160_DIGEST_LENGTH 20

#define RIPEMD160_LBLOCK 16

typedef struct RIPEMD160state_st RIPEMD160state_st, *PRIPEMD160state_st;

typedef struct RIPEMD160state_st RIPEMD160_CTX;

struct RIPEMD160state_st {
    uint A;
    uint B;
    uint C;
    uint D;
    uint E;
    uint Nl;
    uint Nh;
    uint data[16];
    uint num;
};

#define MAXUSERS 100

#define RUSERSPROC_ALLNAMES 3

#define RUSERSPROC_NAMES 2

#define RUSERSPROC_NUM 1

#define RUSERSPROG 100002

#define RUSERSVERS_1 1

#define RUSERSVERS_2 2

#define RUSERSVERS_IDLE 2

#define RUSERSVERS_ORIG 1

typedef struct ru_utmp ru_utmp, *Pru_utmp;

struct ru_utmp {
    char ut_line[8];
    char ut_name[8];
    char ut_host[16];
    rpc_int ut_time;
};

typedef struct ru_utmp rutmp;

typedef struct utmp utmp, *Putmp;

struct utmp {
};

typedef struct utmparr utmparr, *Putmparr;

struct utmparr {
    struct utmp * * uta_arr;
    int uta_cnt;
};

typedef struct utmpidle utmpidle, *Putmpidle;

struct utmpidle {
    struct ru_utmp ui_utmp;
    uint ui_idle;
};

typedef struct utmpidlearr utmpidlearr, *Putmpidlearr;

struct utmpidlearr {
    struct utmpidle * * uia_arr;
    int uia_cnt;
};

#define RTA_AUTHOR 64

#define RTA_BRD 128

#define RTA_DST 1

#define RTA_GATEWAY 2

#define RTA_GENMASK 8

#define RTA_IFA 32

#define RTA_IFP 16

#define RTA_NETMASK 4

#define RTAX_AUTHOR 6

#define RTAX_BRD 7

#define RTAX_DST 0

#define RTAX_GATEWAY 1

#define RTAX_GENMASK 3

#define RTAX_IFA 5

#define RTAX_IFP 4

#define RTAX_MAX 8

#define RTAX_NETMASK 2

#define RTF_BLACKHOLE 4096

#define RTF_BROADCAST 4194304

#define RTF_CLONING 256

#define RTF_CONDEMNED 33554432

#define RTF_DELCLONE 128

#define RTF_DONE 64

#define RTF_DYNAMIC 16

#define RTF_GATEWAY 2

#define RTF_HOST 4

#define RTF_IFREF 67108864

#define RTF_IFSCOPE 16777216

#define RTF_LLINFO 1024

#define RTF_LOCAL 2097152

#define RTF_MODIFIED 32

#define RTF_MULTICAST 8388608

#define RTF_NOIFREF 8192

#define RTF_PINNED 1048576

#define RTF_PRCLONING 65536

#define RTF_PROTO1 32768

#define RTF_PROTO2 16384

#define RTF_PROTO3 262144

#define RTF_PROXY 134217728

#define RTF_REJECT 8

#define RTF_ROUTER 268435456

#define RTF_STATIC 2048

#define RTF_UP 1

#define RTF_WASCLONED 131072

#define RTF_XRESOLVE 512

#define RTM_ADD 1

#define RTM_CHANGE 3

#define RTM_DELADDR 13

#define RTM_DELETE 2

#define RTM_DELMADDR 16

#define RTM_GET 4

#define RTM_GET2 20

#define RTM_IFINFO 14

#define RTM_IFINFO2 18

#define RTM_LOCK 8

#define RTM_LOSING 5

#define RTM_MISS 7

#define RTM_NEWADDR 12

#define RTM_NEWMADDR 15

#define RTM_NEWMADDR2 19

#define RTM_OLDADD 9

#define RTM_OLDDEL 10

#define RTM_REDIRECT 6

#define RTM_RESOLVE 11

#define RTM_RTTUNIT 1000000

#define RTM_VERSION 5

#define RTV_EXPIRE 4

#define RTV_HOPCOUNT 2

#define RTV_MTU 1

#define RTV_RPIPE 8

#define RTV_RTT 64

#define RTV_RTTVAR 128

#define RTV_SPIPE 16

#define RTV_SSTHRESH 32

typedef struct rt_addrinfo rt_addrinfo, *Prt_addrinfo;

struct rt_addrinfo {
    int rti_addrs;
    struct sockaddr * rti_info[8];
};

typedef struct rt_metrics rt_metrics, *Prt_metrics;

struct rt_metrics {
    u_int32_t rmx_locks;
    u_int32_t rmx_mtu;
    u_int32_t rmx_hopcount;
    int32_t rmx_expire;
    u_int32_t rmx_recvpipe;
    u_int32_t rmx_sendpipe;
    u_int32_t rmx_ssthresh;
    u_int32_t rmx_rtt;
    u_int32_t rmx_rttvar;
    u_int32_t rmx_pksent;
    u_int32_t rmx_filler[4];
};

typedef struct rt_msghdr rt_msghdr, *Prt_msghdr;

struct rt_msghdr {
    u_short rtm_msglen;
    u_char rtm_version;
    u_char rtm_type;
    u_short rtm_index;
    int rtm_flags;
    int rtm_addrs;
    pid_t rtm_pid;
    int rtm_seq;
    int rtm_errno;
    int rtm_use;
    u_int32_t rtm_inits;
    struct rt_metrics rtm_rmx;
};

typedef struct rt_msghdr2 rt_msghdr2, *Prt_msghdr2;

struct rt_msghdr2 {
    u_short rtm_msglen;
    u_char rtm_version;
    u_char rtm_type;
    u_short rtm_index;
    int rtm_flags;
    int rtm_addrs;
    int32_t rtm_refcnt;
    int rtm_parentflags;
    int rtm_reserved;
    int rtm_use;
    u_int32_t rtm_inits;
    struct rt_metrics rtm_rmx;
};

typedef struct rtstat rtstat, *Prtstat;

struct rtstat {
    short rts_badredirect;
    short rts_dynamic;
    short rts_newgateway;
    short rts_unreach;
    short rts_wildcard;
};

#define RPC_SIGBUF_SIZE 8

#define RPC_SUBSYSTEM_NULL 0

typedef uint routine_arg_offset;

typedef uint routine_arg_size;

typedef uint routine_arg_type;

typedef struct rpc_routine_arg_descriptor rpc_routine_arg_descriptor, *Prpc_routine_arg_descriptor;

struct rpc_routine_arg_descriptor {
    routine_arg_type type;
    routine_arg_size size;
    routine_arg_size count;
    routine_arg_offset offset;
};

typedef struct rpc_routine_arg_descriptor * rpc_routine_arg_descriptor_t;

typedef struct rpc_routine_descriptor rpc_routine_descriptor, *Prpc_routine_descriptor;

struct rpc_routine_descriptor {
    mig_impl_routine_t impl_routine;
    mig_stub_routine_t stub_routine;
    uint argc;
    uint descr_count;
    rpc_routine_arg_descriptor_t arg_descr;
    uint max_reply_msg;
};

typedef struct rpc_routine_descriptor * rpc_routine_descriptor_t;

typedef struct rpc_signature rpc_signature, *Prpc_signature;

struct rpc_signature {
    struct rpc_routine_descriptor rd;
    struct rpc_routine_arg_descriptor rad[1];
};

typedef struct rpc_subsystem rpc_subsystem, *Prpc_subsystem;

struct rpc_subsystem {
    void * reserved;
    mach_msg_id_t start;
    mach_msg_id_t end;
    uint maxsize;
    vm_address_t base_addr;
    struct rpc_routine_descriptor routine[1];
    struct rpc_routine_arg_descriptor arg_descriptor[1];
};

typedef struct rpc_subsystem * rpc_subsystem_t;

#define RPC_MSG_VERSION 2

#define RPC_SERVICE_PORT 2048

typedef struct _struct_3428 _struct_3428, *P_struct_3428;

struct _struct_3428 {
    uint low;
    uint high;
};

typedef struct _struct_3429 _struct_3429, *P_struct_3429;

struct _struct_3429 {
    caddr_t where;
    xdrproc_t proc;
};

typedef struct _struct_3432 _struct_3432, *P_struct_3432;

struct _struct_3432 {
    uint low;
    uint high;
};

typedef union _union_3427 _union_3427, *P_union_3427;

union _union_3427 {
    struct _struct_3428 AR_versions;
    struct _struct_3429 AR_results;
};

typedef union _union_3431 _union_3431, *P_union_3431;

union _union_3431 {
    struct _struct_3432 RJ_versions;
    enum auth_stat RJ_why;
};

typedef union _union_3434 _union_3434, *P_union_3434;

typedef struct accepted_reply accepted_reply, *Paccepted_reply;

typedef struct rejected_reply rejected_reply, *Prejected_reply;

typedef enum accept_stat {
    GARBAGE_ARGS=4,
    PROC_UNAVAIL=3,
    PROG_MISMATCH=2,
    PROG_UNAVAIL=1,
    SYSTEM_ERR=5
} accept_stat;

typedef enum reject_stat {
    AUTH_ERROR=1
} reject_stat;

struct accepted_reply {
    struct opaque_auth ar_verf;
    enum accept_stat ar_stat;
    union _union_3427 ru;
};

struct rejected_reply {
    enum reject_stat rj_stat;
    union _union_3431 ru;
};

union _union_3434 {
    struct accepted_reply RP_ar;
    struct rejected_reply RP_dr;
};

typedef union _union_3441 _union_3441, *P_union_3441;

typedef struct call_body call_body, *Pcall_body;

typedef struct reply_body reply_body, *Preply_body;

typedef enum reply_stat {
    MSG_ACCEPTED=0,
    MSG_DENIED=1
} reply_stat;

struct call_body {
    uint cb_rpcvers;
    uint cb_prog;
    uint cb_vers;
    uint cb_proc;
    struct opaque_auth cb_cred;
    struct opaque_auth cb_verf;
};

struct reply_body {
    enum reply_stat rp_stat;
    union _union_3434 ru;
};

union _union_3441 {
    struct call_body RM_cmb;
    struct reply_body RM_rmb;
};

typedef enum msg_type {
    CALL=0,
    REPLY=1
} msg_type;

typedef struct rpc_msg rpc_msg, *Prpc_msg;

struct rpc_msg {
    uint rm_xid;
    enum msg_type rm_direction;
    union _union_3441 ru;
};

#define AUTH_BADCRED 1

#define AUTH_BADVERF 3

#define AUTH_DECODE 11

#define AUTH_FAILED 7

#define AUTH_INVALIDRESP 6

#define AUTH_KERB_GENERIC 8

#define AUTH_NET_ADDR 12

#define AUTH_REJECTCRED 2

#define AUTH_REJECTVERF 4

#define AUTH_TIMEEXPIRE 9

#define AUTH_TKT_FILE 10

#define AUTH_TOOWEAK 5

#define RPC_AUTHERR 1

#define RPC_CALL 0

#define RPC_GARBAGE 4

#define RPC_MISMATCH 0

#define RPC_MSGACCEPTED 0

#define RPC_MSGDENIED 1

#define RPC_PROCUNAVAIL 3

#define RPC_PROGMISMATCH 2

#define RPC_PROGUNAVAIL 1

#define RPC_REPLY 1

#define RPC_REPLYSIZ 28

#define RPC_SIZ 24

#define RPC_SYSTEM_ERR 5

#define RPC_VER2 2

#define RPCAKN_FULLNAME 0

#define RPCAKN_NICKNAME 1

#define RPCAUTH_INVALID -1

#define RPCAUTH_KERB4 4

#define RPCAUTH_KRB5 390003

#define RPCAUTH_KRB5I 390004

#define RPCAUTH_KRB5P 390005

#define RPCAUTH_MAXSIZ 400

#define RPCAUTH_NONE 0

#define RPCAUTH_NULL 0

#define RPCAUTH_SHORT 2

#define RPCAUTH_SYS 1

#define RPCAUTH_UNIX 1

#define RPCAUTH_UNIXGIDS 16

#define RPCAUTH_UNKNOWN -1

#define RPCMNT_DUMP 2

#define RPCMNT_EXPORT 5

#define RPCMNT_MOUNT 1

#define RPCMNT_NAMELEN 255

#define RPCMNT_PATHLEN 1024

#define RPCMNT_UMNTALL 4

#define RPCMNT_UMOUNT 3

#define RPCMNT_VER1 1

#define RPCMNT_VER3 3

#define RPCPROG_MNT 100005

#define RPCPROG_NFS 100003

#define RPCPROG_RQUOTA 100011

#define RPCRQUOTA_EXT_VER 2

#define RPCRQUOTA_GET 1

#define RPCRQUOTA_VER 1

#define RPCSEC_GSS_CREDPROBLEM 13

#define RPCSEC_GSS_CTXPROBLEM 14

#define RQUOTA_STAT_EPERM 3

#define RQUOTA_STAT_NOQUOTA 2

#define RQUOTA_STAT_OK 1

#define RQ_PATHLEN 1024

#define RQUOTAPROC_GETACTIVEQUOTA 2

#define RQUOTAPROC_GETQUOTA 1

#define RQUOTAPROG 100011

#define RQUOTAVERS 1

typedef union _union_3686 _union_3686, *P_union_3686;

typedef struct rquota rquota, *Prquota;

struct rquota {
    int rq_bsize;
    boolean_t rq_active;
    u_int rq_bhardlimit;
    u_int rq_bsoftlimit;
    u_int rq_curblocks;
    u_int rq_fhardlimit;
    u_int rq_fsoftlimit;
    u_int rq_curfiles;
    u_int rq_btimeleft;
    u_int rq_ftimeleft;
};

union _union_3686 {
    struct rquota gqr_rquota;
};

typedef struct getquota_args getquota_args, *Pgetquota_args;

struct getquota_args {
    char * gqa_pathp;
    int gqa_uid;
};

typedef struct getquota_rslt getquota_rslt, *Pgetquota_rslt;

typedef enum gqr_status {
    Q_EPERM=3,
    Q_NOQUOTA=2,
    Q_OK=1
} gqr_status;

struct getquota_rslt {
    enum gqr_status status;
    union _union_3686 getquota_rslt_u;
};

#define OPENSSL_RSA_FIPS_MIN_MODULUS_BITS 1024

#define OPENSSL_RSA_MAX_MODULUS_BITS 16384

#define OPENSSL_RSA_MAX_PUBEXP_BITS 64

#define OPENSSL_RSA_SMALL_MODULUS_BITS 3072

#define RSA_3 3

#define RSA_F4 65537

#define RSA_F_FIPS_RSA_SIGN 140

#define RSA_F_FIPS_RSA_VERIFY 141

#define RSA_F_MEMORY_LOCK 100

#define RSA_F_RSA_BUILTIN_KEYGEN 129

#define RSA_F_RSA_CHECK_KEY 123

#define RSA_F_RSA_EAY_PRIVATE_DECRYPT 101

#define RSA_F_RSA_EAY_PRIVATE_ENCRYPT 102

#define RSA_F_RSA_EAY_PUBLIC_DECRYPT 103

#define RSA_F_RSA_EAY_PUBLIC_ENCRYPT 104

#define RSA_F_RSA_GENERATE_KEY 105

#define RSA_F_RSA_MEMORY_LOCK 130

#define RSA_F_RSA_NEW_METHOD 106

#define RSA_F_RSA_NULL 124

#define RSA_F_RSA_NULL_MOD_EXP 131

#define RSA_F_RSA_NULL_PRIVATE_DECRYPT 132

#define RSA_F_RSA_NULL_PRIVATE_ENCRYPT 133

#define RSA_F_RSA_NULL_PUBLIC_DECRYPT 134

#define RSA_F_RSA_NULL_PUBLIC_ENCRYPT 135

#define RSA_F_RSA_PADDING_ADD_NONE 107

#define RSA_F_RSA_PADDING_ADD_PKCS1_OAEP 121

#define RSA_F_RSA_PADDING_ADD_PKCS1_PSS 125

#define RSA_F_RSA_PADDING_ADD_PKCS1_TYPE_1 108

#define RSA_F_RSA_PADDING_ADD_PKCS1_TYPE_2 109

#define RSA_F_RSA_PADDING_ADD_SSLV23 110

#define RSA_F_RSA_PADDING_ADD_X931 127

#define RSA_F_RSA_PADDING_CHECK_NONE 111

#define RSA_F_RSA_PADDING_CHECK_PKCS1_OAEP 122

#define RSA_F_RSA_PADDING_CHECK_PKCS1_TYPE_1 112

#define RSA_F_RSA_PADDING_CHECK_PKCS1_TYPE_2 113

#define RSA_F_RSA_PADDING_CHECK_SSLV23 114

#define RSA_F_RSA_PADDING_CHECK_X931 128

#define RSA_F_RSA_PRINT 115

#define RSA_F_RSA_PRINT_FP 116

#define RSA_F_RSA_PRIVATE_ENCRYPT 137

#define RSA_F_RSA_PUBLIC_DECRYPT 138

#define RSA_F_RSA_SET_DEFAULT_METHOD 139

#define RSA_F_RSA_SET_METHOD 142

#define RSA_F_RSA_SETUP_BLINDING 136

#define RSA_F_RSA_SIGN 117

#define RSA_F_RSA_SIGN_ASN1_OCTET_STRING 118

#define RSA_F_RSA_VERIFY 119

#define RSA_F_RSA_VERIFY_ASN1_OCTET_STRING 120

#define RSA_F_RSA_VERIFY_PKCS1_PSS 126

#define RSA_FLAG_BLINDING 8

#define RSA_FLAG_CACHE_PRIVATE 4

#define RSA_FLAG_CACHE_PUBLIC 2

#define RSA_FLAG_EXT_PKEY 32

#define RSA_FLAG_FIPS_METHOD 1024

#define RSA_FLAG_NO_BLINDING 128

#define RSA_FLAG_NO_CONSTTIME 256

#define RSA_FLAG_NO_EXP_CONSTTIME 256

#define RSA_FLAG_NON_FIPS_ALLOW 1024

#define RSA_FLAG_SIGN_VER 64

#define RSA_FLAG_THREAD_SAFE 16

#define RSA_METHOD_FLAG_NO_CHECK 1

#define RSA_NO_PADDING 3

#define RSA_PKCS1_OAEP_PADDING 4

#define RSA_PKCS1_PADDING 1

#define RSA_PKCS1_PADDING_SIZE 11

#define RSA_R_ALGORITHM_MISMATCH 100

#define RSA_R_BAD_E_VALUE 101

#define RSA_R_BAD_FIXED_HEADER_DECRYPT 102

#define RSA_R_BAD_PAD_BYTE_COUNT 103

#define RSA_R_BAD_SIGNATURE 104

#define RSA_R_BLOCK_TYPE_IS_NOT_01 106

#define RSA_R_BLOCK_TYPE_IS_NOT_02 107

#define RSA_R_D_E_NOT_CONGRUENT_TO_1 123

#define RSA_R_DATA_GREATER_THAN_MOD_LEN 108

#define RSA_R_DATA_TOO_LARGE 109

#define RSA_R_DATA_TOO_LARGE_FOR_KEY_SIZE 110

#define RSA_R_DATA_TOO_LARGE_FOR_MODULUS 132

#define RSA_R_DATA_TOO_SMALL 111

#define RSA_R_DATA_TOO_SMALL_FOR_KEY_SIZE 122

#define RSA_R_DIGEST_TOO_BIG_FOR_RSA_KEY 112

#define RSA_R_DMP1_NOT_CONGRUENT_TO_D 124

#define RSA_R_DMQ1_NOT_CONGRUENT_TO_D 125

#define RSA_R_FIRST_OCTET_INVALID 133

#define RSA_R_INVALID_HEADER 137

#define RSA_R_INVALID_MESSAGE_LENGTH 131

#define RSA_R_INVALID_PADDING 138

#define RSA_R_INVALID_TRAILER 139

#define RSA_R_IQMP_NOT_INVERSE_OF_Q 126

#define RSA_R_KEY_SIZE_TOO_SMALL 120

#define RSA_R_LAST_OCTET_INVALID 134

#define RSA_R_MODULUS_TOO_LARGE 105

#define RSA_R_N_DOES_NOT_EQUAL_P_Q 127

#define RSA_R_NO_PUBLIC_EXPONENT 140

#define RSA_R_NON_FIPS_METHOD 141

#define RSA_R_NULL_BEFORE_BLOCK_MISSING 113

#define RSA_R_OAEP_DECODING_ERROR 121

#define RSA_R_OPERATION_NOT_ALLOWED_IN_FIPS_MODE 142

#define RSA_R_P_NOT_PRIME 128

#define RSA_R_PADDING_CHECK_FAILED 114

#define RSA_R_Q_NOT_PRIME 129

#define RSA_R_RSA_OPERATIONS_NOT_SUPPORTED 130

#define RSA_R_SLEN_CHECK_FAILED 136

#define RSA_R_SLEN_RECOVERY_FAILED 135

#define RSA_R_SSLV3_ROLLBACK_ATTACK 115

#define RSA_R_THE_ASN1_OBJECT_IDENTIFIER_IS_NOT_KNOWN_FOR_THIS_MD 116

#define RSA_R_UNKNOWN_ALGORITHM_TYPE 117

#define RSA_R_UNKNOWN_PADDING_TYPE 118

#define RSA_R_WRONG_SIGNATURE_LENGTH 119

#define RSA_SSLV23_PADDING 2

#define RSA_X931_PADDING 5

#define RSTAT_CPUSTATES 4

#define RSTAT_DK_NDRIVE 4

#define RSTATPROC_HAVEDISK 2

#define RSTATPROC_STATS 1

#define RSTATPROG 100001

#define RSTATVERS_ORIG 1

#define RSTATVERS_SWTCH 2

#define RSTATVERS_TIME 3

typedef struct rstat_timeval rstat_timeval, *Prstat_timeval;

struct rstat_timeval {
    u_int tv_sec;
    u_int tv_usec;
};

typedef struct stats stats, *Pstats;

struct stats {
    int cp_time[4];
    int dk_xfer[4];
    u_int v_pgpgin;
    u_int v_pgpgout;
    u_int v_pswpin;
    u_int v_pswpout;
    u_int v_intr;
    int if_ipackets;
    int if_ierrors;
    int if_oerrors;
    int if_collisions;
    int if_opackets;
};

typedef struct statsswtch statsswtch, *Pstatsswtch;

struct statsswtch {
    int cp_time[4];
    int dk_xfer[4];
    u_int v_pgpgin;
    u_int v_pgpgout;
    u_int v_pswpin;
    u_int v_pswpout;
    u_int v_intr;
    int if_ipackets;
    int if_ierrors;
    int if_oerrors;
    int if_collisions;
    u_int v_swtch;
    u_int avenrun[3];
    struct rstat_timeval boottime;
    int if_opackets;
};

typedef struct statstime statstime, *Pstatstime;

struct statstime {
    int cp_time[4];
    int dk_xfer[4];
    u_int v_pgpgin;
    u_int v_pgpgout;
    u_int v_pswpin;
    u_int v_pswpout;
    u_int v_intr;
    int if_ipackets;
    int if_ierrors;
    int if_oerrors;
    int if_collisions;
    u_int v_swtch;
    int avenrun[3];
    struct rstat_timeval boottime;
    struct rstat_timeval curtime;
    int if_opackets;
};

#define _CACHED_RUNES 256

#define _CRMASK -256

typedef struct _RuneCharClass _RuneCharClass, *P_RuneCharClass;

struct _RuneCharClass {
    char __name[14];
    __uint32_t __mask;
};

typedef struct _RuneEntry _RuneEntry, *P_RuneEntry;

struct _RuneEntry {
    __darwin_rune_t __min;
    __darwin_rune_t __max;
    __darwin_rune_t __map;
    __uint32_t * __types;
};

typedef struct _RuneLocale _RuneLocale, *P_RuneLocale;

typedef struct _RuneRange _RuneRange, *P_RuneRange;

struct _RuneRange {
    int __nranges;
    struct _RuneEntry * __ranges;
};

struct _RuneLocale {
    char __magic[8];
    char __encoding[32];
    __darwin_rune_t (* __sgetrune)(char *, __darwin_size_t, char * *);
    int (* __sputrune)(__darwin_rune_t, char *, __darwin_size_t, char * *);
    __darwin_rune_t __invalid_rune;
    __uint32_t __runetype[256];
    __darwin_rune_t __maplower[256];
    __darwin_rune_t __mapupper[256];
    struct _RuneRange __runetype_ext;
    struct _RuneRange __maplower_ext;
    struct _RuneRange __mapupper_ext;
    void * __variable;
    int __variable_len;
    int __ncharclasses;
    struct _RuneCharClass * __charclasses;
};

#define RUSERS_ACCOUNTING 9

#define RUSERS_BOOT_TIME 2

#define RUSERS_DEAD_PROCESS 8

#define RUSERS_EMPTY 0

#define RUSERS_INIT_PROCESS 5

#define RUSERS_LOGIN_PROCESS 6

#define RUSERS_MAXHOSTLEN 257

#define RUSERS_MAXLINELEN 32

#define RUSERS_MAXUSERLEN 32

#define RUSERS_NEW_TIME 4

#define RUSERS_OLD_TIME 3

#define RUSERS_RUN_LVL 1

#define RUSERS_USER_PROCESS 7

#define RUSERSVERS_3 3

typedef struct rusers_utmp rusers_utmp, *Prusers_utmp;

struct rusers_utmp {
    char * ut_user;
    char * ut_line;
    char * ut_host;
    int ut_type;
    int ut_time;
    u_int ut_idle;
};

typedef struct utmp_array utmp_array, *Putmp_array;

struct utmp_array {
    u_int utmp_array_len;
    struct rusers_utmp * utmp_array_val;
};

#define WALLPROC_WALL 2

#define WALLPROG 100008

#define WALLVERS 1

#define SANDBOX_NAMED 1

#define SASL_APPNAME 17

#define SASL_AUTH_EXTERNAL 102

#define SASL_AUTHSOURCE 14

#define SASL_AUTHUSER 16

#define SASL_AUX_END 0

#define SASL_BADAUTH -13

#define SASL_BADMAC -9

#define SASL_BADPARAM -7

#define SASL_BADPROT -5

#define SASL_BADSERV -10

#define SASL_BADVERS -23

#define SASL_BUFOVER -3

#define SASL_CALLBACK 7

#define SASL_CB_AUTHNAME 16386

#define SASL_CB_CANON_USER 32775

#define SASL_CB_CNONCE 16391

#define SASL_CB_ECHOPROMPT 16389

#define SASL_CB_GETOPT 1

#define SASL_CB_GETPATH 3

#define SASL_CB_GETREALM 16392

#define SASL_CB_LANGUAGE 16387

#define SASL_CB_LIST_END 0

#define SASL_CB_LOG 2

#define SASL_CB_NOECHOPROMPT 16390

#define SASL_CB_PASS 16388

#define SASL_CB_PROXY_POLICY 32769

#define SASL_CB_SERVER_USERDB_CHECKPASS 32773

#define SASL_CB_SERVER_USERDB_SETPASS 32774

#define SASL_CB_USER 16385

#define SASL_CB_VERIFYFILE 4

#define SASL_CONTINUE 1

#define SASL_CU_AUTHID 1

#define SASL_CU_AUTHZID 2

#define SASL_CU_NONE 0

#define SASL_DEFUSERREALM 3

#define SASL_DELEGATEDCREDS 11

#define SASL_DISABLED -19

#define SASL_ENCRYPT -16

#define SASL_EXPIRED -18

#define SASL_FAIL -1

#define SASL_GETOPTCTX 4

#define SASL_H 1

#define SASL_INTERACT 2

#define SASL_IPLOCALPORT 8

#define SASL_IPREMOTEPORT 9

#define SASL_KRB5_AUTHDATA 700

#define SASL_LOG_DEBUG 5

#define SASL_LOG_ERR 1

#define SASL_LOG_FAIL 2

#define SASL_LOG_NONE 0

#define SASL_LOG_NOTE 4

#define SASL_LOG_PASS 7

#define SASL_LOG_TRACE 6

#define SASL_LOG_WARN 3

#define SASL_MECHNAME 15

#define SASL_MECHNAMEMAX 20

#define SASL_NEED_PROXY 8

#define SASL_NOAUTHZ -14

#define SASL_NOCHANGE -22

#define SASL_NOLOG 1

#define SASL_NOMECH -4

#define SASL_NOMEM -2

#define SASL_NOTDONE -6

#define SASL_NOTINIT -12

#define SASL_NOUSER -20

#define SASL_NOUSERPASS -28

#define SASL_NOVERIFY -26

#define SASL_OK 0

#define SASL_PLUGERR 10

#define SASL_PWLOCK -21

#define SASL_SEC_FORWARD_SECRECY 8

#define SASL_SEC_MAXIMUM 255

#define SASL_SEC_MUTUAL_AUTH 64

#define SASL_SEC_NOACTIVE 2

#define SASL_SEC_NOANONYMOUS 16

#define SASL_SEC_NODICTIONARY 4

#define SASL_SEC_NOPLAINTEXT 1

#define SASL_SEC_PASS_CREDENTIALS 32

#define SASL_SEC_PROPS 101

#define SASL_SERVERFQDN 13

#define SASL_SERVICE 12

#define SASL_SET_CREATE 1

#define SASL_SET_CURMECH_ONLY 8

#define SASL_SET_DISABLE 2

#define SASL_SET_NOPLAIN 4

#define SASL_SSF 1

#define SASL_SSF_EXTERNAL 100

#define SASL_SUCCESS_DATA 4

#define SASL_TOOWEAK -15

#define SASL_TRANS -17

#define SASL_TRYAGAIN -8

#define SASL_UNAVAIL -24

#define SASL_USERNAME 0

#define SASL_VERSION_MAJOR 2

#define SASL_VERSION_MINOR 1

#define SASL_VERSION_STEP 22

#define SASL_WEAKPASS -27

#define SASL_WRONGMECH -11

typedef enum enum_3832 {
    SASL_VRFY_CONF=1,
    SASL_VRFY_OTHER=3,
    SASL_VRFY_PASSWD=2,
    SASL_VRFY_PLUGIN=0
} enum_3832;

typedef struct sasl_conn sasl_conn, *Psasl_conn;

typedef struct sasl_conn sasl_conn_t;

typedef int (sasl_authorize_t)(sasl_conn_t *, void *, char *, uint, char *, uint, char *, uint, struct propctx *);

struct sasl_conn {
};

typedef struct sasl_callback sasl_callback, *Psasl_callback;

struct sasl_callback {
    ulong id;
    int (* proc)(void);
    void * context;
};

typedef struct sasl_callback sasl_callback_t;

typedef void * (sasl_calloc_t)(ulong, ulong);

typedef int (sasl_canon_user_t)(sasl_conn_t *, void *, char *, uint, uint, char *, char *, uint, uint *);

typedef int (sasl_chalprompt_t)(void *, int, char *, char *, char *, char * *, uint *);

typedef void (sasl_free_t)(void *);

typedef int (sasl_getopt_t)(void *, char *, char *, char * *, uint *);

typedef int (sasl_getpath_t)(void *, char * *);

typedef int (sasl_getrealm_t)(void *, int, char * *, char * *);

typedef struct sasl_secret sasl_secret, *Psasl_secret;

typedef struct sasl_secret sasl_secret_t;

typedef int (sasl_getsecret_t)(sasl_conn_t *, void *, int, sasl_secret_t * *);

struct sasl_secret {
    ulong len;
    uchar data[1];
};

typedef int (sasl_getsimple_t)(void *, int, char * *, uint *);

typedef struct sasl_interact sasl_interact, *Psasl_interact;

struct sasl_interact {
    ulong id;
    char * challenge;
    char * prompt;
    char * defresult;
    void * result;
    uint len;
};

typedef struct sasl_interact sasl_interact_t;

typedef int (sasl_log_t)(void *, int, char *);

typedef void * (sasl_malloc_t)(ulong);

typedef void * (sasl_mutex_alloc_t)(void);

typedef void (sasl_mutex_free_t)(void *);

typedef int (sasl_mutex_lock_t)(void *);

typedef int (sasl_mutex_unlock_t)(void *);

typedef struct sasl_rand_s sasl_rand_s, *Psasl_rand_s;

struct sasl_rand_s {
};

typedef struct sasl_rand_s sasl_rand_t;

typedef void * (sasl_realloc_t)(void *, ulong);

typedef struct sasl_security_properties sasl_security_properties, *Psasl_security_properties;

typedef uint sasl_ssf_t;

struct sasl_security_properties {
    sasl_ssf_t min_ssf;
    sasl_ssf_t max_ssf;
    uint maxbufsize;
    uint security_flags;
    char * * property_names;
    char * * property_values;
};

typedef struct sasl_security_properties sasl_security_properties_t;

typedef int (sasl_server_userdb_checkpass_t)(sasl_conn_t *, void *, char *, char *, uint, struct propctx *);

typedef int (sasl_server_userdb_setpass_t)(sasl_conn_t *, void *, char *, char *, uint, struct propctx *, uint);

typedef enum enum_3832 sasl_verify_type_t;

typedef int (sasl_verifyfile_t)(void *, char *, sasl_verify_type_t);

#define SASLUTIL_H 1

#define SBUF_AUTOEXTEND 1

#define SBUF_DYNAMIC 65536

#define SBUF_DYNSTRUCT 524288

#define SBUF_FINISHED 131072

#define SBUF_FIXEDLEN 0

#define SBUF_OVERFLOWED 262144

#define SBUF_USRFLAGMSK 65535

typedef struct sbuf sbuf, *Psbuf;

struct sbuf {
    char * s_buf;
    void * s_unused;
    int s_size;
    int s_len;
    int s_flags;
};

typedef struct sched_param sched_param, *Psched_param;

struct sched_param {
    int sched_priority;
    char __opaque[4];
};

#define ARG1_EXTENT 1

#define ARGS10_EXTENT 10

#define ARGS2_EXTENT 2

#define ARGS3_EXTENT 3

#define ARGS4_EXTENT 4

#define ARGS5_EXTENT 5

#define ARGS6_EXTENT 6

#define ARGS7_EXTENT 7

#define ARGS8_EXTENT 8

#define ARGS9_EXTENT 10

typedef enum enum_3841 {
    ENTER=1,
    FIND=0
} enum_3841;

typedef enum enum_3841 ACTION;

typedef struct entry ENTRY;

typedef enum enum_3842 {
    endorder=2,
    leaf=3,
    postorder=1,
    preorder=0
} enum_3842;

typedef enum enum_3842 VISIT;

#define SEED_BLOCK_SIZE 16

#define SEED_KEY_LENGTH 16

typedef struct seed_key_st seed_key_st, *Pseed_key_st;

typedef struct seed_key_st SEED_KEY_SCHEDULE;

struct seed_key_st {
    uint data[32];
};

#define KERN_PRIV 0

#define SEL_GDT 0

#define SEL_LDT 1

#define USER_PRIV 3

#define GETALL 6

#define GETNCNT 3

#define GETPID 4

#define GETVAL 5

#define GETZCNT 7

#define SEM_A 128

#define SEM_R 256

#define SEM_UNDO 4096

#define SETALL 9

#define SETVAL 8

typedef struct __semid_ds_new __semid_ds_new, *P__semid_ds_new;

struct __semid_ds_new {
    struct ipc_perm sem_perm;
    __int32_t sem_base;
    ushort sem_nsems;
    time_t sem_otime;
    __int32_t sem_pad1;
    time_t sem_ctime;
    __int32_t sem_pad2;
    __int32_t sem_pad3[4];
};

typedef struct sem sem, *Psem;

struct sem {
    ushort semval;
    pid_t sempid;
    ushort semncnt;
    ushort semzcnt;
};

typedef struct sembuf sembuf, *Psembuf;

struct sembuf {
    ushort sem_num;
    short sem_op;
    short sem_flg;
};

typedef union semun semun, *Psemun;

union semun {
    int val;
    struct __semid_ds_new * buf;
    ushort * array;
};

typedef union semun semun_t;

typedef struct dispatch_semaphore_s * dispatch_semaphore_t;

#define _JBLEN 37

typedef int jmp_buf[37];

typedef int sigjmp_buf[38];

#define SHA224_DIGEST_LENGTH 28

#define SHA256_CBLOCK 64

#define SHA256_DIGEST_LENGTH 32

#define SHA384_DIGEST_LENGTH 48

#define SHA512_CBLOCK 128

#define SHA512_DIGEST_LENGTH 64

#define SHA_CBLOCK 64

#define SHA_DIGEST_LENGTH 20

#define SHA_LAST_BLOCK 56

#define SHA_LBLOCK 16

typedef union _union_3138 _union_3138, *P_union_3138;

union _union_3138 {
    ulonglong d[16];
    uchar p[128];
};

typedef struct SHA256state_st SHA256state_st, *PSHA256state_st;

typedef struct SHA256state_st SHA256_CTX;

struct SHA256state_st {
    uint h[8];
    uint Nl;
    uint Nh;
    uint data[16];
    uint num;
    uint md_len;
};

typedef struct SHA512state_st SHA512state_st, *PSHA512state_st;

typedef struct SHA512state_st SHA512_CTX;

struct SHA512state_st {
    ulonglong h[8];
    ulonglong Nl;
    ulonglong Nh;
    union _union_3138 u;
    uint num;
    uint md_len;
};

typedef struct SHAstate_st SHAstate_st, *PSHAstate_st;

typedef struct SHAstate_st SHA_CTX;

struct SHAstate_st {
    uint h0;
    uint h1;
    uint h2;
    uint h3;
    uint h4;
    uint Nl;
    uint Nh;
    uint data[16];
    uint num;
};

#define GLOBAL_SHARED_DATA_SEGMENT 2684354560

#define GLOBAL_SHARED_SEGMENT_MASK 4026531840

#define GLOBAL_SHARED_TEXT_SEGMENT 2415919104

#define SHARED_DATA_REGION_SIZE 268435456

#define SHARED_TEXT_REGION_SIZE 268435456

#define VM_PROT_COW 8

#define VM_PROT_ZF 16

typedef struct shared_file_mapping_np shared_file_mapping_np, *Pshared_file_mapping_np;

struct shared_file_mapping_np {
    mach_vm_address_t sfm_address;
    mach_vm_size_t sfm_size;
    mach_vm_offset_t sfm_file_offset;
    vm_prot_t sfm_max_prot;
    vm_prot_t sfm_init_prot;
};

typedef struct shared_region_range_np shared_region_range_np, *Pshared_region_range_np;

struct shared_region_range_np {
    mach_vm_address_t srr_address;
    mach_vm_size_t srr_size;
};

#define VM_PROT_SLIDE 32

#define SHM_R 400

#define SHM_RDONLY 4096

#define SHM_RND 8192

#define SHM_W 200

#define SHMLBA 4096

typedef struct __shmid_ds_new __shmid_ds_new, *P__shmid_ds_new;

typedef ushort shmatt_t;

struct __shmid_ds_new {
    struct ipc_perm shm_perm;
    size_t shm_segsz;
    pid_t shm_lpid;
    pid_t shm_cpid;
    shmatt_t shm_nattch;
    time_t shm_atime;
    time_t shm_dtime;
    time_t shm_ctime;
    void * shm_internal;
};

#define __DARWIN_NSIG 32

#define _I386_SIGNAL_H_ 1

#define BUS_ADRALN 1

#define BUS_ADRERR 2

#define BUS_NOOP 0

#define BUS_OBJERR 3

#define CLD_CONTINUED 6

#define CLD_DUMPED 3

#define CLD_EXITED 1

#define CLD_KILLED 2

#define CLD_NOOP 0

#define CLD_STOPPED 5

#define CLD_TRAPPED 4

#define FPE_FLTDIV 1

#define FPE_FLTINV 5

#define FPE_FLTOVF 2

#define FPE_FLTRES 4

#define FPE_FLTSUB 6

#define FPE_FLTUND 3

#define FPE_INTDIV 7

#define FPE_INTOVF 8

#define FPE_NOOP 0

#define ILL_BADSTK 8

#define ILL_COPROC 7

#define ILL_ILLADR 5

#define ILL_ILLOPC 1

#define ILL_ILLOPN 4

#define ILL_ILLTRP 2

#define ILL_NOOP 0

#define ILL_PRVOPC 3

#define ILL_PRVREG 6

#define MINSIGSTKSZ 32768

#define NSIG 32

#define POLL_ERR 4

#define POLL_HUP 6

#define POLL_IN 1

#define POLL_MSG 3

#define POLL_OUT 2

#define POLL_PRI 5

#define SA_64REGSET 512

#define SA_NOCLDSTOP 8

#define SA_NOCLDWAIT 32

#define SA_NODEFER 16

#define SA_ONSTACK 1

#define SA_RESETHAND 4

#define SA_RESTART 2

#define SA_SIGINFO 64

#define SA_USERSPACE_MASK 127

#define SA_USERTRAMP 256

#define SEGV_ACCERR 2

#define SEGV_MAPERR 1

#define SEGV_NOOP 0

#define SI_ASYNCIO 65540

#define SI_MESGQ 65541

#define SI_QUEUE 65538

#define SI_TIMER 65539

#define SI_USER 65537

#define SIG_BLOCK 1

#define SIG_SETMASK 3

#define SIG_UNBLOCK 2

#define SIGABRT 6

#define SIGALRM 14

#define SIGBUS 10

#define SIGCHLD 20

#define SIGCONT 19

#define SIGEMT 7

#define SIGEV_NONE 0

#define SIGEV_SIGNAL 1

#define SIGEV_THREAD 3

#define SIGFPE 8

#define SIGHUP 1

#define SIGILL 4

#define SIGINFO 29

#define SIGINT 2

#define SIGIO 23

#define SIGIOT 6

#define SIGKILL 9

#define SIGPIPE 13

#define SIGPROF 27

#define SIGQUIT 3

#define SIGSEGV 11

#define SIGSTKSZ 131072

#define SIGSTOP 17

#define SIGSYS 12

#define SIGTERM 15

#define SIGTRAP 5

#define SIGTSTP 18

#define SIGTTIN 21

#define SIGTTOU 22

#define SIGURG 16

#define SIGUSR1 30

#define SIGUSR2 31

#define SIGVTALRM 26

#define SIGWINCH 28

#define SIGXCPU 24

#define SIGXFSZ 25

#define SS_DISABLE 4

#define SS_ONSTACK 1

#define SV_INTERRUPT 2

#define SV_NOCLDSTOP 8

#define SV_NODEFER 16

#define SV_ONSTACK 1

#define SV_RESETHAND 4

#define SV_SIGINFO 64

#define TRAP_BRKPT 1

#define TRAP_TRACE 2

typedef struct __sigaction __sigaction, *P__sigaction;

typedef struct __siginfo __siginfo, *P__siginfo;

typedef struct __siginfo siginfo_t;

typedef union __sigaction_u __sigaction_u, *P__sigaction_u;

union __sigaction_u {
    void (* __sa_handler)(int);
    void (* __sa_sigaction)(int, struct __siginfo *, void *);
};

struct __sigaction {
    union __sigaction_u __sigaction_u;
    void (* sa_tramp)(void *, int, int, siginfo_t *, void *);
    sigset_t sa_mask;
    int sa_flags;
};

struct __siginfo {
    int si_signo;
    int si_errno;
    int si_code;
    pid_t si_pid;
    uid_t si_uid;
    int si_status;
    void * si_addr;
    union sigval si_value;
    long si_band;
    ulong __pad[7];
};

typedef int sig_atomic_t;

typedef void (* sig_t)(int);

typedef struct sigaction sigaction, *Psigaction;

struct sigaction {
    union __sigaction_u __sigaction_u;
    sigset_t sa_mask;
    int sa_flags;
};

typedef struct sigstack sigstack, *Psigstack;

struct sigstack {
    char * ss_sp;
    int ss_onstack;
};

typedef struct sigvec sigvec, *Psigvec;

struct sigvec {
    void (* sv_handler)(int);
    int sv_mask;
    int sv_flags;
};

#define LDAP_FILTER_EXT_MATCH 169

#define SLAPI_ABANDON_MSGID 120

#define SLAPI_ACL_ADD 32

#define SLAPI_ACL_ALL 127

#define SLAPI_ACL_COMPARE 1

#define SLAPI_ACL_DELETE 16

#define SLAPI_ACL_PROXY 128

#define SLAPI_ACL_READ 4

#define SLAPI_ACL_SEARCH 2

#define SLAPI_ACL_SELF 64

#define SLAPI_ACL_WRITE 8

#define SLAPI_ADD_ENTRY 60

#define SLAPI_ADD_EXISTING_DN_ENTRY 61

#define SLAPI_ADD_EXISTING_UNIQUEID_ENTRY 64

#define SLAPI_ADD_PARENT_ENTRY 62

#define SLAPI_ADD_PARENT_UNIQUEID 63

#define SLAPI_ADD_RESCONTROL 56

#define SLAPI_ADD_TARGET 50

#define SLAPI_ATTR_FLAG_COLLECTIVE 128

#define SLAPI_ATTR_FLAG_NOUSERMOD 256

#define SLAPI_ATTR_FLAG_OBSOLETE 64

#define SLAPI_ATTR_FLAG_OPATTR 2

#define SLAPI_ATTR_FLAG_READONLY 4

#define SLAPI_ATTR_FLAG_SINGLE 1

#define SLAPI_ATTR_FLAG_STD_ATTR 4

#define SLAPI_BACKEND 130

#define SLAPI_BACKEND_FLAG_GLOBAL_OVERLAY 256

#define SLAPI_BACKEND_FLAG_GLUE_INSTANCE 16

#define SLAPI_BACKEND_FLAG_GLUE_LINKED 64

#define SLAPI_BACKEND_FLAG_GLUE_SUBORDINATE 32

#define SLAPI_BACKEND_FLAG_NO_SCHEMA_CHECK 2

#define SLAPI_BACKEND_FLAG_NOLASTMOD 1

#define SLAPI_BACKEND_FLAG_OVERLAY 128

#define SLAPI_BACKEND_FLAG_SHADOW 32768

#define SLAPI_BACKEND_FLAG_SLURP_SHADOW 8192

#define SLAPI_BACKEND_FLAG_SYNC_SHADOW 4096

#define SLAPI_BE_LASTMOD 137

#define SLAPI_BE_MONITORDN 134

#define SLAPI_BE_READONLY 136

#define SLAPI_BE_TYPE 135

#define SLAPI_BIND_ANONYMOUS 3

#define SLAPI_BIND_CREDENTIALS 71

#define SLAPI_BIND_FAIL 2

#define SLAPI_BIND_METHOD 70

#define SLAPI_BIND_RET_SASLCREDS 73

#define SLAPI_BIND_SASLMECHANISM 72

#define SLAPI_BIND_SUCCESS 0

#define SLAPI_BIND_TARGET 50

#define SLAPI_COMPARE_TARGET 50

#define SLAPI_COMPARE_TYPE 80

#define SLAPI_COMPARE_VALUE 81

#define SLAPI_CONFIG_ARGC 42

#define SLAPI_CONFIG_ARGV 43

#define SLAPI_CONFIG_FILENAME 40

#define SLAPI_CONFIG_LINENO 41

#define SLAPI_CONN_AUTHMETHOD 746

#define SLAPI_CONN_AUTHTYPE 144

#define SLAPI_CONN_CERT 743

#define SLAPI_CONN_CLIENTIP 145

#define SLAPI_CONN_DN 143

#define SLAPI_CONN_ID 139

#define SLAPI_CONN_SERVERIP 146

#define SLAPI_CONNECTION 131

#define SLAPI_CONTROLS_ARG 58

#define SLAPI_DELETE_EXISTING_ENTRY 61

#define SLAPI_DELETE_TARGET 50

#define SLAPI_EXT_OP_REQ_OID 160

#define SLAPI_EXT_OP_REQ_VALUE 161

#define SLAPI_EXT_OP_RET_OID 162

#define SLAPI_EXT_OP_RET_VALUE 163

#define SLAPI_FAIL_DISKFULL -2

#define SLAPI_FAIL_GENERAL -1

#define SLAPI_FILTER_SCAN_CONTINUE 1

#define SLAPI_FILTER_SCAN_ERROR -2

#define SLAPI_FILTER_SCAN_NOMORE 0

#define SLAPI_FILTER_SCAN_STOP -1

#define SLAPI_FILTER_UNKNOWN_FILTER_TYPE 2

#define SLAPI_IS_INTERNAL_OPERATION 748

#define SLAPI_IS_REPLICATED_OPERATION 142

#define SLAPI_LOG_ACL 8

#define SLAPI_LOG_ARGS 3

#define SLAPI_LOG_BER 5

#define SLAPI_LOG_CACHE 13

#define SLAPI_LOG_CONFIG 7

#define SLAPI_LOG_CONNS 4

#define SLAPI_LOG_FATAL 0

#define SLAPI_LOG_FILTER 6

#define SLAPI_LOG_HOUSE 11

#define SLAPI_LOG_PACKETS 2

#define SLAPI_LOG_PARSE 10

#define SLAPI_LOG_PLUGIN 14

#define SLAPI_LOG_REPL 12

#define SLAPI_LOG_SHELL 9

#define SLAPI_LOG_TIMING 15

#define SLAPI_LOG_TRACE 1

#define SLAPI_MANAGEDSAIT 1000

#define SLAPI_MATCHINGRULE_DESC 3

#define SLAPI_MATCHINGRULE_NAME 1

#define SLAPI_MATCHINGRULE_OBSOLETE 5

#define SLAPI_MATCHINGRULE_OID 2

#define SLAPI_MATCHINGRULE_SYNTAX 4

#define SLAPI_MODIFY_EXISTING_ENTRY 61

#define SLAPI_MODIFY_MODS 90

#define SLAPI_MODIFY_TARGET 50

#define SLAPI_MODRDN_DELOLDRDN 101

#define SLAPI_MODRDN_EXISTING_ENTRY 61

#define SLAPI_MODRDN_NEWPARENT_ENTRY 105

#define SLAPI_MODRDN_NEWRDN 100

#define SLAPI_MODRDN_NEWSUPERIOR 102

#define SLAPI_MODRDN_NEWSUPERIOR_ADDRESS 107

#define SLAPI_MODRDN_PARENT_ENTRY 104

#define SLAPI_MODRDN_TARGET 50

#define SLAPI_MODRDN_TARGET_ENTRY 106

#define SLAPI_NENTRIES 195

#define SLAPI_OP_EQUAL 3

#define SLAPI_OP_FLAG_NEVER_CHAIN 2048

#define SLAPI_OP_GREATER 5

#define SLAPI_OP_GREATER_OR_EQUAL 4

#define SLAPI_OP_LESS 1

#define SLAPI_OP_LESS_OR_EQUAL 2

#define SLAPI_OP_SUBSTRING 6

#define SLAPI_OPERATION 132

#define SLAPI_OPERATION_ABANDON 256

#define SLAPI_OPERATION_ADD 16

#define SLAPI_OPERATION_ANY 4294967295

#define SLAPI_OPERATION_AUTHTYPE 741

#define SLAPI_OPERATION_BIND 1

#define SLAPI_OPERATION_COMPARE 128

#define SLAPI_OPERATION_DELETE 32

#define SLAPI_OPERATION_EXTENDED 512

#define SLAPI_OPERATION_ID 742

#define SLAPI_OPERATION_MODDN 64

#define SLAPI_OPERATION_MODIFY 8

#define SLAPI_OPERATION_MODRDN 64

#define SLAPI_OPERATION_MSGID 591

#define SLAPI_OPERATION_NONE 0

#define SLAPI_OPERATION_SEARCH 4

#define SLAPI_OPERATION_TYPE 590

#define SLAPI_OPERATION_UNBIND 2

#define SLAPI_OPINITIATED_TIME 140

#define SLAPI_PARENT_TXN 190

#define SLAPI_PLUGIN 3

#define SLAPI_PLUGIN_ACL_ALLOW_ACCESS 732

#define SLAPI_PLUGIN_ACL_INIT 730

#define SLAPI_PLUGIN_ACL_MODS_ALLOWED 733

#define SLAPI_PLUGIN_ACL_MODS_UPDATE 734

#define SLAPI_PLUGIN_ACL_SYNTAX_CHECK 731

#define SLAPI_PLUGIN_ARGC 7

#define SLAPI_PLUGIN_ARGV 6

#define SLAPI_PLUGIN_AUDIT 7

#define SLAPI_PLUGIN_AUDIT_DATA 1100

#define SLAPI_PLUGIN_AUDIT_FN 1101

#define SLAPI_PLUGIN_BE_POST_ADD_FN 550

#define SLAPI_PLUGIN_BE_POST_DELETE_FN 553

#define SLAPI_PLUGIN_BE_POST_MODIFY_FN 551

#define SLAPI_PLUGIN_BE_POST_MODRDN_FN 552

#define SLAPI_PLUGIN_BE_PRE_ADD_FN 450

#define SLAPI_PLUGIN_BE_PRE_DELETE_FN 453

#define SLAPI_PLUGIN_BE_PRE_MODIFY_FN 451

#define SLAPI_PLUGIN_BE_PRE_MODRDN_FN 452

#define SLAPI_PLUGIN_CLOSE_FN 210

#define SLAPI_PLUGIN_DATABASE 1

#define SLAPI_PLUGIN_DB_ABANDON_FN 208

#define SLAPI_PLUGIN_DB_ABORT_FN 221

#define SLAPI_PLUGIN_DB_ADD_FN 206

#define SLAPI_PLUGIN_DB_ARCHIVE2DB_FN 222

#define SLAPI_PLUGIN_DB_BEGIN_FN 219

#define SLAPI_PLUGIN_DB_BIND_FN 200

#define SLAPI_PLUGIN_DB_COMMIT_FN 220

#define SLAPI_PLUGIN_DB_COMPARE_FN 203

#define SLAPI_PLUGIN_DB_CONFIG_FN 209

#define SLAPI_PLUGIN_DB_DB2ARCHIVE_FN 223

#define SLAPI_PLUGIN_DB_DB2LDIF_FN 218

#define SLAPI_PLUGIN_DB_DELETE_FN 207

#define SLAPI_PLUGIN_DB_ENTRY_FN 214

#define SLAPI_PLUGIN_DB_FLUSH_FN 211

#define SLAPI_PLUGIN_DB_FREE_RESULT_SET_FN 225

#define SLAPI_PLUGIN_DB_LDIF2DB_FN 217

#define SLAPI_PLUGIN_DB_MODIFY_FN 204

#define SLAPI_PLUGIN_DB_MODRDN_FN 205

#define SLAPI_PLUGIN_DB_NEXT_SEARCH_ENTRY_FN 224

#define SLAPI_PLUGIN_DB_REFERRAL_FN 215

#define SLAPI_PLUGIN_DB_RESULT_FN 216

#define SLAPI_PLUGIN_DB_SEARCH_FN 202

#define SLAPI_PLUGIN_DB_SEQ_FN 213

#define SLAPI_PLUGIN_DB_SIZE_FN 226

#define SLAPI_PLUGIN_DB_TEST_FN 227

#define SLAPI_PLUGIN_DB_UNBIND_FN 201

#define SLAPI_PLUGIN_DESCRIPTION 12

#define SLAPI_PLUGIN_DESTROY_FN 11

#define SLAPI_PLUGIN_EXT_OP_FN 300

#define SLAPI_PLUGIN_EXT_OP_OIDLIST 301

#define SLAPI_PLUGIN_EXTENDED_NOT_HANDLED -2

#define SLAPI_PLUGIN_EXTENDED_SENT_RESULT -1

#define SLAPI_PLUGIN_EXTENDEDOP 2

#define SLAPI_PLUGIN_IDENTITY 13

#define SLAPI_PLUGIN_INTERNAL_POST_ABANDON_FN 1274

#define SLAPI_PLUGIN_INTERNAL_POST_ADD_FN 520

#define SLAPI_PLUGIN_INTERNAL_POST_BIND_FN 1270

#define SLAPI_PLUGIN_INTERNAL_POST_COMPARE_FN 1273

#define SLAPI_PLUGIN_INTERNAL_POST_DELETE_FN 523

#define SLAPI_PLUGIN_INTERNAL_POST_MODIFY_FN 521

#define SLAPI_PLUGIN_INTERNAL_POST_MODRDN_FN 522

#define SLAPI_PLUGIN_INTERNAL_POST_SEARCH_FN 1272

#define SLAPI_PLUGIN_INTERNAL_POST_UNBIND_FN 1271

#define SLAPI_PLUGIN_INTERNAL_PRE_ABANDON_FN 1264

#define SLAPI_PLUGIN_INTERNAL_PRE_ADD_FN 420

#define SLAPI_PLUGIN_INTERNAL_PRE_BIND_FN 1260

#define SLAPI_PLUGIN_INTERNAL_PRE_COMPARE_FN 1263

#define SLAPI_PLUGIN_INTERNAL_PRE_DELETE_FN 423

#define SLAPI_PLUGIN_INTERNAL_PRE_MODIFY_FN 421

#define SLAPI_PLUGIN_INTERNAL_PRE_MODRDN_FN 422

#define SLAPI_PLUGIN_INTERNAL_PRE_SEARCH_FN 1262

#define SLAPI_PLUGIN_INTERNAL_PRE_UNBIND_FN 1261

#define SLAPI_PLUGIN_INTOP_RESULT 15

#define SLAPI_PLUGIN_INTOP_SEARCH_ENTRIES 16

#define SLAPI_PLUGIN_INTOP_SEARCH_REFERRALS 17

#define SLAPI_PLUGIN_MATCHINGRULE 5

#define SLAPI_PLUGIN_MR_FILTER_CREATE_FN 600

#define SLAPI_PLUGIN_MR_FILTER_INDEX_FN 603

#define SLAPI_PLUGIN_MR_FILTER_MATCH_FN 602

#define SLAPI_PLUGIN_MR_FILTER_RESET_FN 604

#define SLAPI_PLUGIN_MR_FILTER_REUSABLE 615

#define SLAPI_PLUGIN_MR_INDEX_FN 605

#define SLAPI_PLUGIN_MR_INDEXER_CREATE_FN 601

#define SLAPI_PLUGIN_MR_KEYS 614

#define SLAPI_PLUGIN_MR_OID 610

#define SLAPI_PLUGIN_MR_QUERY_OPERATOR 616

#define SLAPI_PLUGIN_MR_TYPE 611

#define SLAPI_PLUGIN_MR_USAGE 617

#define SLAPI_PLUGIN_MR_USAGE_INDEX 0

#define SLAPI_PLUGIN_MR_USAGE_SORT 1

#define SLAPI_PLUGIN_MR_VALUE 612

#define SLAPI_PLUGIN_MR_VALUES 613

#define SLAPI_PLUGIN_OBJECT 10

#define SLAPI_PLUGIN_OPRETURN 9

#define SLAPI_PLUGIN_POST_ABANDON_FN 509

#define SLAPI_PLUGIN_POST_ADD_FN 507

#define SLAPI_PLUGIN_POST_BIND_FN 501

#define SLAPI_PLUGIN_POST_COMPARE_FN 504

#define SLAPI_PLUGIN_POST_DELETE_FN 508

#define SLAPI_PLUGIN_POST_ENTRY_FN 510

#define SLAPI_PLUGIN_POST_MODIFY_FN 505

#define SLAPI_PLUGIN_POST_MODRDN_FN 506

#define SLAPI_PLUGIN_POST_REFERRAL_FN 511

#define SLAPI_PLUGIN_POST_RESULT_FN 512

#define SLAPI_PLUGIN_POST_SEARCH_FN 503

#define SLAPI_PLUGIN_POST_UNBIND_FN 502

#define SLAPI_PLUGIN_POSTOPERATION 4

#define SLAPI_PLUGIN_PRE_ABANDON_FN 409

#define SLAPI_PLUGIN_PRE_ADD_FN 407

#define SLAPI_PLUGIN_PRE_BIND_FN 401

#define SLAPI_PLUGIN_PRE_COMPARE_FN 404

#define SLAPI_PLUGIN_PRE_DELETE_FN 408

#define SLAPI_PLUGIN_PRE_ENTRY_FN 410

#define SLAPI_PLUGIN_PRE_MODIFY_FN 405

#define SLAPI_PLUGIN_PRE_MODRDN_FN 406

#define SLAPI_PLUGIN_PRE_REFERRAL_FN 411

#define SLAPI_PLUGIN_PRE_RESULT_FN 412

#define SLAPI_PLUGIN_PRE_SEARCH_FN 403

#define SLAPI_PLUGIN_PRE_UNBIND_FN 402

#define SLAPI_PLUGIN_PREOPERATION 3

#define SLAPI_PLUGIN_PRIVATE 4

#define SLAPI_PLUGIN_START_FN 212

#define SLAPI_PLUGIN_SYNTAX 6

#define SLAPI_PLUGIN_SYNTAX_ASSERTION2KEYS_AVA 703

#define SLAPI_PLUGIN_SYNTAX_ASSERTION2KEYS_SUB 704

#define SLAPI_PLUGIN_SYNTAX_COMPARE 708

#define SLAPI_PLUGIN_SYNTAX_FILTER_AVA 700

#define SLAPI_PLUGIN_SYNTAX_FILTER_SUB 701

#define SLAPI_PLUGIN_SYNTAX_FLAG_ORDERING 2

#define SLAPI_PLUGIN_SYNTAX_FLAG_ORKEYS 1

#define SLAPI_PLUGIN_SYNTAX_FLAGS 707

#define SLAPI_PLUGIN_SYNTAX_NAMES 705

#define SLAPI_PLUGIN_SYNTAX_OID 706

#define SLAPI_PLUGIN_SYNTAX_VALUES2KEYS 702

#define SLAPI_PLUGIN_TYPE 5

#define SLAPI_PLUGIN_VERSION 8

#define SLAPI_REQCONTROLS 51

#define SLAPI_REQUESTOR_DN 141

#define SLAPI_REQUESTOR_ISROOT 133

#define SLAPI_REQUESTOR_ISUPDATEDN 142

#define SLAPI_RESCONTROLS 55

#define SLAPI_RESULT_CODE 881

#define SLAPI_RESULT_MATCHED 883

#define SLAPI_RESULT_TEXT 882

#define SLAPI_SEARCH_ATTRS 116

#define SLAPI_SEARCH_ATTRSONLY 117

#define SLAPI_SEARCH_DEREF 111

#define SLAPI_SEARCH_FILTER 114

#define SLAPI_SEARCH_REFERRALS 196

#define SLAPI_SEARCH_RESULT_ENTRY 194

#define SLAPI_SEARCH_RESULT_SET 193

#define SLAPI_SEARCH_SCOPE 110

#define SLAPI_SEARCH_SIZELIMIT 112

#define SLAPI_SEARCH_STRFILTER 115

#define SLAPI_SEARCH_TARGET 50

#define SLAPI_SEARCH_TIMELIMIT 113

#define SLAPI_STR2ENTRY_ADDRDNVALS 2

#define SLAPI_STR2ENTRY_BIGENTRY 4

#define SLAPI_STR2ENTRY_EXPAND_OBJECTCLASSES 64

#define SLAPI_STR2ENTRY_IGNORE_STATE 16

#define SLAPI_STR2ENTRY_INCLUDE_VERSION_STR 32

#define SLAPI_STR2ENTRY_NOT_WELL_FORMED_LDIF 128

#define SLAPI_STR2ENTRY_REMOVEDUPVALS 1

#define SLAPI_STR2ENTRY_TOMBSTONE_CHECK 8

#define SLAPI_TARGET_ADDRESS 48

#define SLAPI_TARGET_DN 50

#define SLAPI_TARGET_UNIQUEID 49

#define SLAPI_TXN 191

#define SLAPI_TYPE_CMP_BASE 1

#define SLAPI_TYPE_CMP_EXACT 0

#define SLAPI_TYPE_CMP_SUBTYPE 2

#define SLAPI_X_ADD_STRUCTURAL_CLASS 1308

#define SLAPI_X_CONN_CLIENTPATH 1300

#define SLAPI_X_CONN_IS_UDP 1302

#define SLAPI_X_CONN_SASL_CONTEXT 1304

#define SLAPI_X_CONN_SERVERPATH 1301

#define SLAPI_X_CONN_SSF 1303

#define SLAPI_X_GROUP_ATTRIBUTE 1251

#define SLAPI_X_GROUP_ENTRY 1250

#define SLAPI_X_GROUP_OPERATION_DN 1252

#define SLAPI_X_GROUP_TARGET_ENTRY 1253

#define SLAPI_X_MANAGEDIT 1306

#define SLAPI_X_OPERATION_DELETE_GLUE_PARENT 1305

#define SLAPI_X_OPERATION_NO_SCHEMA_CHECK 1307

#define SLAPI_X_OPERATION_NO_SUBORDINATE_GLUE 1309

#define SLAPI_X_PLUGIN_POST_GROUP_FN 1203

#define SLAPI_X_PLUGIN_PRE_GROUP_FN 1202

#define SLAPI_X_RELAX 1306

typedef struct _computed_attr_context _computed_attr_context, *P_computed_attr_context;

struct _computed_attr_context {
};

typedef struct BackendDB BackendDB, *PBackendDB;

struct BackendDB {
};

typedef struct _computed_attr_context computed_attr_context;

typedef struct Connection Connection, *PConnection;

struct Connection {
};

typedef struct slapi_filter slapi_filter, *Pslapi_filter;

typedef struct slapi_filter Slapi_Filter;

typedef int (* FILTER_APPLY_FN)(Slapi_Filter *, void *);

struct slapi_filter {
};

typedef struct Operation Operation, *POperation;

struct Operation {
};

typedef int (* plugin_referral_entry_callback)(char *, void *);

typedef void (* plugin_result_callback)(int, void *);

typedef struct slapi_entry slapi_entry, *Pslapi_entry;

typedef struct slapi_entry Slapi_Entry;

typedef int (* plugin_search_entry_callback)(Slapi_Entry *, void *);

struct slapi_entry {
};

typedef struct slapi_pblock slapi_pblock, *Pslapi_pblock;

typedef struct slapi_pblock Slapi_PBlock;

typedef int (* slapi_acl_callback_t)(Slapi_PBlock *, Slapi_Entry *, char *, struct berval *, int, void *);

struct slapi_pblock {
};

typedef struct slapi_attr slapi_attr, *Pslapi_attr;

struct slapi_attr {
};

typedef struct slapi_attr Slapi_Attr;

typedef struct BackendDB Slapi_Backend;

typedef struct slapi_componentid slapi_componentid, *Pslapi_componentid;

struct slapi_componentid {
};

typedef struct slapi_componentid Slapi_ComponentId;

typedef int (* slapi_compute_output_t)(computed_attr_context *, Slapi_Attr *, Slapi_Entry *);

typedef int (* slapi_compute_callback_t)(computed_attr_context *, char *, Slapi_Entry *, slapi_compute_output_t);

typedef struct slapi_condvar slapi_condvar, *Pslapi_condvar;

struct slapi_condvar {
};

typedef struct slapi_condvar Slapi_CondVar;

typedef struct Connection Slapi_Connection;

typedef struct slapi_dn slapi_dn, *Pslapi_dn;

struct slapi_dn {
};

typedef struct slapi_dn Slapi_DN;

typedef void * (* slapi_extension_constructor_fnptr)(void *, void *);

typedef void (* slapi_extension_destructor_fnptr)(void *, void *, void *);

typedef struct slapi_mod slapi_mod, *Pslapi_mod;

typedef struct slapi_mod Slapi_Mod;

struct slapi_mod {
};

typedef struct slapi_mods slapi_mods, *Pslapi_mods;

typedef struct slapi_mods Slapi_Mods;

struct slapi_mods {
};

typedef struct slapi_mutex slapi_mutex, *Pslapi_mutex;

struct slapi_mutex {
};

typedef struct slapi_mutex Slapi_Mutex;

typedef struct Operation Slapi_Operation;

typedef struct slapi_plugindesc slapi_plugindesc, *Pslapi_plugindesc;

struct slapi_plugindesc {
    char * spd_id;
    char * spd_vendor;
    char * spd_version;
    char * spd_description;
};

typedef struct slapi_plugindesc Slapi_PluginDesc;

typedef struct slapi_rdn slapi_rdn, *Pslapi_rdn;

struct slapi_rdn {
};

typedef struct slapi_rdn Slapi_RDN;

typedef int (* slapi_search_rewrite_callback_t)(Slapi_PBlock *);

typedef struct slapi_value slapi_value, *Pslapi_value;

typedef struct slapi_value Slapi_Value;

struct slapi_value {
};

typedef struct slapi_valueset slapi_valueset, *Pslapi_valueset;

typedef struct slapi_valueset Slapi_ValueSet;

struct slapi_valueset {
};

#define SM_MAXSTRLEN 1024

#define SM_MON 2

#define SM_NOTIFY 6

#define SM_PROG 100024

#define SM_SIMU_CRASH 5

#define SM_STAT 1

#define SM_UNMON 3

#define SM_UNMON_ALL 4

#define SM_VERS 1

typedef struct mon mon, *Pmon;

typedef struct mon_id mon_id, *Pmon_id;

typedef struct my_id my_id, *Pmy_id;

struct my_id {
    char * my_name;
    int my_prog;
    int my_vers;
    int my_proc;
};

struct mon_id {
    char * mon_name;
    struct my_id my_id;
};

struct mon {
    struct mon_id mon_id;
    char priv[16];
};

typedef struct sm_name sm_name, *Psm_name;

struct sm_name {
    char * mon_name;
};

typedef enum sm_res {
    stat_fail=1,
    stat_succ=0
} sm_res;

typedef struct sm_stat sm_stat, *Psm_stat;

struct sm_stat {
    int state;
};

typedef struct sm_stat_res sm_stat_res, *Psm_stat_res;

struct sm_stat_res {
    enum sm_res res_stat;
    int state;
};

typedef struct sm_status sm_status, *Psm_status;

struct sm_status {
    char * mon_name;
    int state;
    char priv[16];
};

typedef struct stat_chge stat_chge, *Pstat_chge;

struct stat_chge {
    char * mon_name;
    int state;
};

#define _SS_MAXSIZE 128

#define AF_APPLETALK 16

#define AF_CCITT 10

#define AF_CHAOS 5

#define AF_CNT 21

#define AF_COIP 20

#define AF_DATAKIT 9

#define AF_DECnet 12

#define AF_DLI 13

#define AF_E164 28

#define AF_ECMA 8

#define AF_HYLINK 15

#define AF_IEEE80211 37

#define AF_IMPLINK 3

#define AF_INET 2

#define AF_INET6 30

#define AF_IPX 23

#define AF_ISDN 28

#define AF_ISO 7

#define AF_LAT 14

#define AF_LINK 18

#define AF_LOCAL 1

#define AF_MAX 40

#define AF_NATM 31

#define AF_NDRV 27

#define AF_NETBIOS 33

#define AF_NS 6

#define AF_OSI 7

#define AF_PPP 34

#define AF_PUP 4

#define AF_RESERVED_36 36

#define AF_ROUTE 17

#define AF_SIP 24

#define AF_SNA 11

#define AF_SYSTEM 32

#define AF_UNIX 1

#define AF_UNSPEC 0

#define AF_UTUN 38

#define MSG_CTRUNC 32

#define MSG_DONTROUTE 4

#define MSG_DONTWAIT 128

#define MSG_EOF 256

#define MSG_EOR 8

#define MSG_FLUSH 1024

#define MSG_HAVEMORE 8192

#define MSG_HOLD 2048

#define MSG_NEEDSA 65536

#define MSG_OOB 1

#define MSG_PEEK 2

#define MSG_RCVMORE 16384

#define MSG_SEND 4096

#define MSG_TRUNC 16

#define MSG_WAITALL 64

#define MSG_WAITSTREAM 512

#define NET_MAXID 40

#define NET_RT_DUMP 1

#define NET_RT_DUMP2 7

#define NET_RT_FLAGS 2

#define NET_RT_IFLIST 3

#define NET_RT_IFLIST2 6

#define NET_RT_MAXID 10

#define NET_RT_STAT 4

#define NET_RT_TRASH 5

#define PF_APPLETALK 16

#define PF_BOND 1651469924

#define PF_CCITT 10

#define PF_CHAOS 5

#define PF_CNT 21

#define PF_COIP 20

#define PF_DATAKIT 9

#define PF_DECnet 12

#define PF_DLI 13

#define PF_ECMA 8

#define PF_HYLINK 15

#define PF_IMPLINK 3

#define PF_INET 2

#define PF_INET6 30

#define PF_IPX 23

#define PF_ISDN 28

#define PF_ISO 7

#define PF_KEY 29

#define PF_LAT 14

#define PF_LINK 18

#define PF_LOCAL 1

#define PF_MAX 40

#define PF_NATM 31

#define PF_NDRV 27

#define PF_NETBIOS 33

#define PF_NS 6

#define PF_OSI 7

#define PF_PIP 25

#define PF_PPP 34

#define PF_PUP 4

#define PF_RESERVED_36 36

#define PF_ROUTE 17

#define PF_RTIP 22

#define PF_SIP 24

#define PF_SNA 11

#define PF_SYSTEM 32

#define PF_UNIX 1

#define PF_UNSPEC 0

#define PF_UTUN 38

#define PF_VLAN 1986814318

#define PF_XTP 19

#define pseudo_AF_HDRCMPLT 35

#define pseudo_AF_KEY 29

#define pseudo_AF_PIP 25

#define pseudo_AF_RTIP 22

#define pseudo_AF_XTP 19

#define SCM_CREDS 3

#define SCM_RIGHTS 1

#define SCM_TIMESTAMP 2

#define SCM_TIMESTAMP_MONOTONIC 4

#define SHUT_RD 0

#define SHUT_RDWR 2

#define SHUT_WR 1

#define SO_ACCEPTCONN 2

#define SO_BROADCAST 32

#define SO_DEBUG 1

#define SO_DONTROUTE 16

#define SO_DONTTRUNC 8192

#define SO_ERROR 4103

#define SO_KEEPALIVE 8

#define SO_LABEL 4112

#define SO_LINGER 128

#define SO_LINGER_SEC 4224

#define SO_NKE 4129

#define SO_NOADDRERR 4131

#define SO_NOSIGPIPE 4130

#define SO_NOTIFYCONFLICT 4134

#define SO_NP_EXTENSIONS 4227

#define SO_NREAD 4128

#define SO_NWRITE 4132

#define SO_OOBINLINE 256

#define SO_PEERLABEL 4113

#define SO_RANDOMPORT 4226

#define SO_RCVBUF 4098

#define SO_RCVLOWAT 4100

#define SO_RCVTIMEO 4102

#define SO_REUSEADDR 4

#define SO_REUSEPORT 512

#define SO_REUSESHAREUID 4133

#define SO_SNDBUF 4097

#define SO_SNDLOWAT 4099

#define SO_SNDTIMEO 4101

#define SO_TIMESTAMP 1024

#define SO_TIMESTAMP_MONOTONIC 2048

#define SO_TYPE 4104

#define SO_UPCALLCLOSEWAIT 4135

#define SO_USELOOPBACK 64

#define SO_WANTMORE 16384

#define SO_WANTOOBFLAG 32768

#define SOCK_DGRAM 2

#define SOCK_MAXADDRLEN 255

#define SOCK_RAW 3

#define SOCK_RDM 4

#define SOCK_SEQPACKET 5

#define SOCK_STREAM 1

#define SOL_SOCKET 65535

#define SOMAXCONN 128

#define SONPX_SETOPTSHUT 1

typedef struct cmsghdr cmsghdr, *Pcmsghdr;

struct cmsghdr {
    socklen_t cmsg_len;
    int cmsg_level;
    int cmsg_type;
};

typedef struct linger linger, *Plinger;

struct linger {
    int l_onoff;
    int l_linger;
};

typedef struct msghdr msghdr, *Pmsghdr;

struct msghdr {
    void * msg_name;
    socklen_t msg_namelen;
    struct iovec * msg_iov;
    int msg_iovlen;
    void * msg_control;
    socklen_t msg_controllen;
    int msg_flags;
};

typedef struct so_np_extensions so_np_extensions, *Pso_np_extensions;

struct so_np_extensions {
    u_int32_t npx_flags;
    u_int32_t npx_mask;
};

typedef struct sockproto sockproto, *Psockproto;

struct sockproto {
    __uint16_t sp_family;
    __uint16_t sp_protocol;
};

#define DISPATCH_MACH_SEND_DEAD 1

#define DISPATCH_MEMORYPRESSURE_CRITICAL 4

#define DISPATCH_MEMORYPRESSURE_NORMAL 1

#define DISPATCH_MEMORYPRESSURE_WARN 2

#define DISPATCH_PROC_EXEC 536870912

#define DISPATCH_PROC_EXIT 2147483648

#define DISPATCH_PROC_FORK 1073741824

#define DISPATCH_PROC_SIGNAL 134217728

#define DISPATCH_TIMER_STRICT 1

#define DISPATCH_VNODE_ATTRIB 8

#define DISPATCH_VNODE_DELETE 1

#define DISPATCH_VNODE_EXTEND 4

#define DISPATCH_VNODE_LINK 16

#define DISPATCH_VNODE_RENAME 32

#define DISPATCH_VNODE_REVOKE 64

#define DISPATCH_VNODE_WRITE 2

typedef ulong dispatch_source_mach_send_flags_t;

typedef ulong dispatch_source_memorypressure_flags_t;

typedef ulong dispatch_source_proc_flags_t;

typedef struct dispatch_source_s * dispatch_source_t;

typedef ulong dispatch_source_timer_flags_t;

typedef struct dispatch_source_type_s dispatch_source_type_s, *Pdispatch_source_type_s;

struct dispatch_source_type_s {
};

typedef struct dispatch_source_type_s * dispatch_source_type_t;

typedef ulong dispatch_source_vnode_flags_t;

#define POSIX_SPAWN_CLOEXEC_DEFAULT 16384

#define POSIX_SPAWN_PCONTROL_KILL 3

#define POSIX_SPAWN_PCONTROL_NONE 0

#define POSIX_SPAWN_PCONTROL_SUSPEND 2

#define POSIX_SPAWN_PCONTROL_THROTTLE 1

#define POSIX_SPAWN_RESETIDS 1

#define POSIX_SPAWN_SETEXEC 64

#define POSIX_SPAWN_SETPGROUP 2

#define POSIX_SPAWN_SETSIGDEF 4

#define POSIX_SPAWN_SETSIGMASK 8

#define POSIX_SPAWN_START_SUSPENDED 128

typedef void * posix_spawn_file_actions_t;

typedef void * posix_spawnattr_t;

#define SI_ALIASED 2

#define SI_MOUNTEDON 1

#define SPECHSZ 64

typedef struct componentname componentname, *Pcomponentname;

struct componentname {
};

typedef struct nameidata nameidata, *Pnameidata;

struct nameidata {
};

typedef struct specinfo specinfo, *Pspecinfo;

typedef int32_t daddr_t;

struct specinfo {
    struct vnode * * si_hashchain;
    struct vnode * si_specnext;
    long si_flags;
    dev_t si_rdev;
    int32_t si_opencount;
    daddr_t si_size;
    daddr64_t si_lastr;
    u_int64_t si_devsize;
    u_int8_t si_initted;
    u_int8_t si_throttleable;
    u_int16_t si_isssd;
    u_int32_t si_devbsdunit;
    u_int64_t si_throttle_mask;
};

typedef struct vnop_lookup_args vnop_lookup_args, *Pvnop_lookup_args;

struct vnop_lookup_args {
};

#define SPRAYMAX 8845

#define SPRAYOVERHEAD 86

#define SPRAYPROC_CLEAR 3

#define SPRAYPROC_GET 2

#define SPRAYPROC_SPRAY 1

#define SPRAYPROG 100012

#define SPRAYVERS 1

typedef struct sprayarr sprayarr, *Psprayarr;

struct sprayarr {
    u_int sprayarr_len;
    char * sprayarr_val;
};

typedef struct spraycumul spraycumul, *Pspraycumul;

typedef struct spraytimeval spraytimeval, *Pspraytimeval;

struct spraytimeval {
    u_int sec;
    u_int usec;
};

struct spraycumul {
    u_int counter;
    struct spraytimeval clock;
};

#define SQLITE3_TEXT 3

#define SQLITE_ABORT 4

#define SQLITE_ABORT_ROLLBACK 516

#define SQLITE_ACCESS_EXISTS 0

#define SQLITE_ACCESS_READ 2

#define SQLITE_ACCESS_READWRITE 1

#define SQLITE_ALTER_TABLE 26

#define SQLITE_ANALYZE 28

#define SQLITE_ANY 5

#define SQLITE_ATTACH 24

#define SQLITE_AUTH 23

#define SQLITE_BLOB 4

#define SQLITE_BUSY 5

#define SQLITE_BUSY_RECOVERY 261

#define SQLITE_CANTOPEN 14

#define SQLITE_CANTOPEN_ISDIR 526

#define SQLITE_CANTOPEN_NOTEMPDIR 270

#define SQLITE_CHECKPOINT_FULL 1

#define SQLITE_CHECKPOINT_PASSIVE 0

#define SQLITE_CHECKPOINT_RESTART 2

#define SQLITE_CONFIG_GETMALLOC 5

#define SQLITE_CONFIG_GETMUTEX 11

#define SQLITE_CONFIG_GETPCACHE 15

#define SQLITE_CONFIG_GETPCACHE2 19

#define SQLITE_CONFIG_HEAP 8

#define SQLITE_CONFIG_LOG 16

#define SQLITE_CONFIG_LOOKASIDE 13

#define SQLITE_CONFIG_MALLOC 4

#define SQLITE_CONFIG_MEMSTATUS 9

#define SQLITE_CONFIG_MULTITHREAD 2

#define SQLITE_CONFIG_MUTEX 10

#define SQLITE_CONFIG_PAGECACHE 7

#define SQLITE_CONFIG_PCACHE 14

#define SQLITE_CONFIG_PCACHE2 18

#define SQLITE_CONFIG_SCRATCH 6

#define SQLITE_CONFIG_SERIALIZED 3

#define SQLITE_CONFIG_SINGLETHREAD 1

#define SQLITE_CONFIG_URI 17

#define SQLITE_CONSTRAINT 19

#define SQLITE_COPY 0

#define SQLITE_CORRUPT 11

#define SQLITE_CORRUPT_VTAB 267

#define SQLITE_CREATE_INDEX 1

#define SQLITE_CREATE_TABLE 2

#define SQLITE_CREATE_TEMP_INDEX 3

#define SQLITE_CREATE_TEMP_TABLE 4

#define SQLITE_CREATE_TEMP_TRIGGER 5

#define SQLITE_CREATE_TEMP_VIEW 6

#define SQLITE_CREATE_TRIGGER 7

#define SQLITE_CREATE_VIEW 8

#define SQLITE_CREATE_VTABLE 29

#define SQLITE_DBCONFIG_ENABLE_FKEY 1002

#define SQLITE_DBCONFIG_ENABLE_TRIGGER 1003

#define SQLITE_DBCONFIG_LOOKASIDE 1001

#define SQLITE_DBSTATUS_CACHE_HIT 7

#define SQLITE_DBSTATUS_CACHE_MISS 8

#define SQLITE_DBSTATUS_CACHE_USED 1

#define SQLITE_DBSTATUS_CACHE_WRITE 9

#define SQLITE_DBSTATUS_LOOKASIDE_HIT 4

#define SQLITE_DBSTATUS_LOOKASIDE_MISS_FULL 6

#define SQLITE_DBSTATUS_LOOKASIDE_MISS_SIZE 5

#define SQLITE_DBSTATUS_LOOKASIDE_USED 0

#define SQLITE_DBSTATUS_MAX 9

#define SQLITE_DBSTATUS_SCHEMA_USED 2

#define SQLITE_DBSTATUS_STMT_USED 3

#define SQLITE_DELETE 9

#define SQLITE_DENY 1

#define SQLITE_DETACH 25

#define SQLITE_DONE 101

#define SQLITE_DROP_INDEX 10

#define SQLITE_DROP_TABLE 11

#define SQLITE_DROP_TEMP_INDEX 12

#define SQLITE_DROP_TEMP_TABLE 13

#define SQLITE_DROP_TEMP_TRIGGER 14

#define SQLITE_DROP_TEMP_VIEW 15

#define SQLITE_DROP_TRIGGER 16

#define SQLITE_DROP_VIEW 17

#define SQLITE_DROP_VTABLE 30

#define SQLITE_EMPTY 16

#define SQLITE_ERROR 1

#define SQLITE_FAIL 3

#define SQLITE_FCNTL_CHUNK_SIZE 6

#define SQLITE_FCNTL_FILE_POINTER 7

#define SQLITE_FCNTL_GET_LOCKPROXYFILE 2

#define SQLITE_FCNTL_LAST_ERRNO 4

#define SQLITE_FCNTL_LOCKSTATE 1

#define SQLITE_FCNTL_OVERWRITE 11

#define SQLITE_FCNTL_PERSIST_WAL 10

#define SQLITE_FCNTL_POWERSAFE_OVERWRITE 13

#define SQLITE_FCNTL_PRAGMA 14

#define SQLITE_FCNTL_SET_LOCKPROXYFILE 3

#define SQLITE_FCNTL_SIZE_HINT 5

#define SQLITE_FCNTL_SYNC_OMITTED 8

#define SQLITE_FCNTL_VFSNAME 12

#define SQLITE_FCNTL_WIN32_AV_RETRY 9

#define SQLITE_FLOAT 2

#define SQLITE_FORMAT 24

#define SQLITE_FULL 13

#define SQLITE_FUNCTION 31

#define SQLITE_GET_LOCKPROXYFILE 2

#define SQLITE_IGNORE 2

#define SQLITE_INDEX_CONSTRAINT_EQ 2

#define SQLITE_INDEX_CONSTRAINT_GE 32

#define SQLITE_INDEX_CONSTRAINT_GT 4

#define SQLITE_INDEX_CONSTRAINT_LE 8

#define SQLITE_INDEX_CONSTRAINT_LT 16

#define SQLITE_INDEX_CONSTRAINT_MATCH 64

#define SQLITE_INSERT 18

#define SQLITE_INTEGER 1

#define SQLITE_INTERNAL 2

#define SQLITE_INTERRUPT 9

#define SQLITE_IOCAP_ATOMIC 1

#define SQLITE_IOCAP_ATOMIC16K 64

#define SQLITE_IOCAP_ATOMIC1K 4

#define SQLITE_IOCAP_ATOMIC2K 8

#define SQLITE_IOCAP_ATOMIC32K 128

#define SQLITE_IOCAP_ATOMIC4K 16

#define SQLITE_IOCAP_ATOMIC512 2

#define SQLITE_IOCAP_ATOMIC64K 256

#define SQLITE_IOCAP_ATOMIC8K 32

#define SQLITE_IOCAP_POWERSAFE_OVERWRITE 4096

#define SQLITE_IOCAP_SAFE_APPEND 512

#define SQLITE_IOCAP_SEQUENTIAL 1024

#define SQLITE_IOCAP_UNDELETABLE_WHEN_OPEN 2048

#define SQLITE_IOERR 10

#define SQLITE_IOERR_ACCESS 3338

#define SQLITE_IOERR_BLOCKED 2826

#define SQLITE_IOERR_CHECKRESERVEDLOCK 3594

#define SQLITE_IOERR_CLOSE 4106

#define SQLITE_IOERR_DELETE 2570

#define SQLITE_IOERR_DIR_CLOSE 4362

#define SQLITE_IOERR_DIR_FSYNC 1290

#define SQLITE_IOERR_FSTAT 1802

#define SQLITE_IOERR_FSYNC 1034

#define SQLITE_IOERR_LOCK 3850

#define SQLITE_IOERR_NOMEM 3082

#define SQLITE_IOERR_RDLOCK 2314

#define SQLITE_IOERR_READ 266

#define SQLITE_IOERR_SEEK 5642

#define SQLITE_IOERR_SHMLOCK 5130

#define SQLITE_IOERR_SHMMAP 5386

#define SQLITE_IOERR_SHMOPEN 4618

#define SQLITE_IOERR_SHMSIZE 4874

#define SQLITE_IOERR_SHORT_READ 522

#define SQLITE_IOERR_TRUNCATE 1546

#define SQLITE_IOERR_UNLOCK 2058

#define SQLITE_IOERR_WRITE 778

#define SQLITE_LAST_ERRNO 4

#define SQLITE_LIMIT_ATTACHED 7

#define SQLITE_LIMIT_COLUMN 2

#define SQLITE_LIMIT_COMPOUND_SELECT 4

#define SQLITE_LIMIT_EXPR_DEPTH 3

#define SQLITE_LIMIT_FUNCTION_ARG 6

#define SQLITE_LIMIT_LENGTH 0

#define SQLITE_LIMIT_LIKE_PATTERN_LENGTH 8

#define SQLITE_LIMIT_SQL_LENGTH 1

#define SQLITE_LIMIT_TRIGGER_DEPTH 10

#define SQLITE_LIMIT_VARIABLE_NUMBER 9

#define SQLITE_LIMIT_VDBE_OP 5

#define SQLITE_LOCK_EXCLUSIVE 4

#define SQLITE_LOCK_NONE 0

#define SQLITE_LOCK_PENDING 3

#define SQLITE_LOCK_RESERVED 2

#define SQLITE_LOCK_SHARED 1

#define SQLITE_LOCKED 6

#define SQLITE_LOCKED_SHAREDCACHE 262

#define SQLITE_MISMATCH 20

#define SQLITE_MISUSE 21

#define SQLITE_MUTEX_FAST 0

#define SQLITE_MUTEX_RECURSIVE 1

#define SQLITE_MUTEX_STATIC_LRU 6

#define SQLITE_MUTEX_STATIC_LRU2 7

#define SQLITE_MUTEX_STATIC_MASTER 2

#define SQLITE_MUTEX_STATIC_MEM 3

#define SQLITE_MUTEX_STATIC_MEM2 4

#define SQLITE_MUTEX_STATIC_OPEN 4

#define SQLITE_MUTEX_STATIC_PMEM 7

#define SQLITE_MUTEX_STATIC_PRNG 5

#define SQLITE_NOLFS 22

#define SQLITE_NOMEM 7

#define SQLITE_NOTADB 26

#define SQLITE_NOTFOUND 12

#define SQLITE_NULL 5

#define SQLITE_OK 0

#define SQLITE_OPEN_AUTOPROXY 32

#define SQLITE_OPEN_CREATE 4

#define SQLITE_OPEN_DELETEONCLOSE 8

#define SQLITE_OPEN_EXCLUSIVE 16

#define SQLITE_OPEN_FILEPROTECTION_COMPLETE 1048576

#define SQLITE_OPEN_FILEPROTECTION_COMPLETEUNLESSOPEN 2097152

#define SQLITE_OPEN_FILEPROTECTION_COMPLETEUNTILFIRSTUSERAUTHENTICATION 3145728

#define SQLITE_OPEN_FILEPROTECTION_MASK 7340032

#define SQLITE_OPEN_FILEPROTECTION_NONE 4194304

#define SQLITE_OPEN_FULLMUTEX 65536

#define SQLITE_OPEN_MAIN_DB 256

#define SQLITE_OPEN_MAIN_JOURNAL 2048

#define SQLITE_OPEN_MASTER_JOURNAL 16384

#define SQLITE_OPEN_MEMORY 128

#define SQLITE_OPEN_NOMUTEX 32768

#define SQLITE_OPEN_PRIVATECACHE 262144

#define SQLITE_OPEN_READONLY 1

#define SQLITE_OPEN_READWRITE 2

#define SQLITE_OPEN_SHAREDCACHE 131072

#define SQLITE_OPEN_SUBJOURNAL 8192

#define SQLITE_OPEN_TEMP_DB 512

#define SQLITE_OPEN_TEMP_JOURNAL 4096

#define SQLITE_OPEN_TRANSIENT_DB 1024

#define SQLITE_OPEN_URI 64

#define SQLITE_OPEN_WAL 524288

#define SQLITE_PERM 3

#define SQLITE_PRAGMA 19

#define SQLITE_PROTOCOL 15

#define SQLITE_RANGE 25

#define SQLITE_READ 20

#define SQLITE_READONLY 8

#define SQLITE_READONLY_CANTLOCK 520

#define SQLITE_READONLY_RECOVERY 264

#define SQLITE_REINDEX 27

#define SQLITE_REPLACE 5

#define SQLITE_ROLLBACK 1

#define SQLITE_ROW 100

#define SQLITE_SAVEPOINT 32

#define SQLITE_SCHEMA 17

#define SQLITE_SELECT 21

#define SQLITE_SET_LOCKPROXYFILE 3

#define SQLITE_SHM_EXCLUSIVE 8

#define SQLITE_SHM_LOCK 2

#define SQLITE_SHM_NLOCK 8

#define SQLITE_SHM_SHARED 4

#define SQLITE_SHM_UNLOCK 1

#define SQLITE_STATIC 0

#define SQLITE_STATUS_MALLOC_COUNT 9

#define SQLITE_STATUS_MALLOC_SIZE 5

#define SQLITE_STATUS_MEMORY_USED 0

#define SQLITE_STATUS_PAGECACHE_OVERFLOW 2

#define SQLITE_STATUS_PAGECACHE_SIZE 7

#define SQLITE_STATUS_PAGECACHE_USED 1

#define SQLITE_STATUS_PARSER_STACK 6

#define SQLITE_STATUS_SCRATCH_OVERFLOW 4

#define SQLITE_STATUS_SCRATCH_SIZE 8

#define SQLITE_STATUS_SCRATCH_USED 3

#define SQLITE_STMTSTATUS_AUTOINDEX 3

#define SQLITE_STMTSTATUS_FULLSCAN_STEP 1

#define SQLITE_STMTSTATUS_SORT 2

#define SQLITE_SYNC_DATAONLY 16

#define SQLITE_SYNC_FULL 3

#define SQLITE_SYNC_NORMAL 2

#define SQLITE_TESTCTRL_ALWAYS 13

#define SQLITE_TESTCTRL_ASSERT 12

#define SQLITE_TESTCTRL_BENIGN_MALLOC_HOOKS 10

#define SQLITE_TESTCTRL_BITVEC_TEST 8

#define SQLITE_TESTCTRL_EXPLAIN_STMT 19

#define SQLITE_TESTCTRL_FAULT_INSTALL 9

#define SQLITE_TESTCTRL_FIRST 5

#define SQLITE_TESTCTRL_ISKEYWORD 16

#define SQLITE_TESTCTRL_LAST 19

#define SQLITE_TESTCTRL_LOCALTIME_FAULT 18

#define SQLITE_TESTCTRL_OPTIMIZATIONS 15

#define SQLITE_TESTCTRL_PENDING_BYTE 11

#define SQLITE_TESTCTRL_PRNG_RESET 7

#define SQLITE_TESTCTRL_PRNG_RESTORE 6

#define SQLITE_TESTCTRL_PRNG_SAVE 5

#define SQLITE_TESTCTRL_RESERVE 14

#define SQLITE_TESTCTRL_SCRATCHMALLOC 17

#define SQLITE_TEXT 3

#define SQLITE_TOOBIG 18

#define SQLITE_TRANSACTION 22

#define SQLITE_TRANSIENT -1

#define SQLITE_UPDATE 23

#define SQLITE_UTF16 4

#define SQLITE_UTF16_ALIGNED 8

#define SQLITE_UTF16BE 3

#define SQLITE_UTF16LE 2

#define SQLITE_UTF8 1

#define SQLITE_VERSION_NUMBER 3007013

#define SQLITE_VTAB_CONSTRAINT_SUPPORT 1

typedef struct Mem Mem, *PMem;

struct Mem {
};

typedef struct sqlite3 sqlite3, *Psqlite3;

struct sqlite3 {
};

typedef struct sqlite3_backup sqlite3_backup, *Psqlite3_backup;

struct sqlite3_backup {
};

typedef struct sqlite3_blob sqlite3_blob, *Psqlite3_blob;

struct sqlite3_blob {
};

typedef int (* sqlite3_callback)(void *, int, char * *, char * *);

typedef struct sqlite3_context sqlite3_context, *Psqlite3_context;

struct sqlite3_context {
};

typedef void (* sqlite3_destructor_type)(void *);

typedef struct sqlite3_file sqlite3_file, *Psqlite3_file;

typedef struct sqlite3_io_methods sqlite3_io_methods, *Psqlite3_io_methods;

typedef longlong sqlite_int64;

typedef sqlite_int64 sqlite3_int64;

struct sqlite3_file {
    struct sqlite3_io_methods * pMethods;
};

struct sqlite3_io_methods {
    int iVersion;
    int (* xClose)(struct sqlite3_file *);
    int (* xRead)(struct sqlite3_file *, void *, int, sqlite3_int64);
    int (* xWrite)(struct sqlite3_file *, void *, int, sqlite3_int64);
    int (* xTruncate)(struct sqlite3_file *, sqlite3_int64);
    int (* xSync)(struct sqlite3_file *, int);
    int (* xFileSize)(struct sqlite3_file *, sqlite3_int64 *);
    int (* xLock)(struct sqlite3_file *, int);
    int (* xUnlock)(struct sqlite3_file *, int);
    int (* xCheckReservedLock)(struct sqlite3_file *, int *);
    int (* xFileControl)(struct sqlite3_file *, int, void *);
    int (* xSectorSize)(struct sqlite3_file *);
    int (* xDeviceCharacteristics)(struct sqlite3_file *);
    int (* xShmMap)(struct sqlite3_file *, int, int, int, void * *);
    int (* xShmLock)(struct sqlite3_file *, int, int, int);
    void (* xShmBarrier)(struct sqlite3_file *);
    int (* xShmUnmap)(struct sqlite3_file *, int);
};

typedef struct sqlite3_index_constraint sqlite3_index_constraint, *Psqlite3_index_constraint;

struct sqlite3_index_constraint {
    int iColumn;
    uchar op;
    uchar usable;
    int iTermOffset;
};

typedef struct sqlite3_index_constraint_usage sqlite3_index_constraint_usage, *Psqlite3_index_constraint_usage;

struct sqlite3_index_constraint_usage {
    int argvIndex;
    uchar omit;
};

typedef struct sqlite3_index_info sqlite3_index_info, *Psqlite3_index_info;

typedef struct sqlite3_index_orderby sqlite3_index_orderby, *Psqlite3_index_orderby;

struct sqlite3_index_info {
    int nConstraint;
    struct sqlite3_index_constraint * aConstraint;
    int nOrderBy;
    struct sqlite3_index_orderby * aOrderBy;
    struct sqlite3_index_constraint_usage * aConstraintUsage;
    int idxNum;
    char * idxStr;
    int needToFreeIdxStr;
    int orderByConsumed;
    double estimatedCost;
};

struct sqlite3_index_orderby {
    int iColumn;
    uchar desc;
};

typedef struct sqlite3_mem_methods sqlite3_mem_methods, *Psqlite3_mem_methods;

struct sqlite3_mem_methods {
    void * (* xMalloc)(int);
    void (* xFree)(void *);
    void * (* xRealloc)(void *, int);
    int (* xSize)(void *);
    int (* xRoundup)(int);
    int (* xInit)(void *);
    void (* xShutdown)(void *);
    void * pAppData;
};

typedef struct sqlite3_module sqlite3_module, *Psqlite3_module;

typedef struct sqlite3_vtab sqlite3_vtab, *Psqlite3_vtab;

typedef struct sqlite3_vtab_cursor sqlite3_vtab_cursor, *Psqlite3_vtab_cursor;

typedef struct Mem sqlite3_value;

struct sqlite3_module {
    int iVersion;
    int (* xCreate)(struct sqlite3 *, void *, int, char * *, struct sqlite3_vtab * *, char * *);
    int (* xConnect)(struct sqlite3 *, void *, int, char * *, struct sqlite3_vtab * *, char * *);
    int (* xBestIndex)(struct sqlite3_vtab *, struct sqlite3_index_info *);
    int (* xDisconnect)(struct sqlite3_vtab *);
    int (* xDestroy)(struct sqlite3_vtab *);
    int (* xOpen)(struct sqlite3_vtab *, struct sqlite3_vtab_cursor * *);
    int (* xClose)(struct sqlite3_vtab_cursor *);
    int (* xFilter)(struct sqlite3_vtab_cursor *, int, char *, int, sqlite3_value * *);
    int (* xNext)(struct sqlite3_vtab_cursor *);
    int (* xEof)(struct sqlite3_vtab_cursor *);
    int (* xColumn)(struct sqlite3_vtab_cursor *, struct sqlite3_context *, int);
    int (* xRowid)(struct sqlite3_vtab_cursor *, sqlite3_int64 *);
    int (* xUpdate)(struct sqlite3_vtab *, int, sqlite3_value * *, sqlite3_int64 *);
    int (* xBegin)(struct sqlite3_vtab *);
    int (* xSync)(struct sqlite3_vtab *);
    int (* xCommit)(struct sqlite3_vtab *);
    int (* xRollback)(struct sqlite3_vtab *);
    int (* xFindFunction)(struct sqlite3_vtab *, int, char *, void (* )(struct sqlite3_context *, int, sqlite3_value * *), void * *);
    int (* xRename)(struct sqlite3_vtab *, char *);
    int (* xSavepoint)(struct sqlite3_vtab *, int);
    int (* xRelease)(struct sqlite3_vtab *, int);
    int (* xRollbackTo)(struct sqlite3_vtab *, int);
};

struct sqlite3_vtab {
    struct sqlite3_module * pModule;
    int nRef;
    char * zErrMsg;
};

struct sqlite3_vtab_cursor {
    struct sqlite3_vtab * pVtab;
};

typedef struct sqlite3_mutex sqlite3_mutex, *Psqlite3_mutex;

struct sqlite3_mutex {
};

typedef struct sqlite3_mutex_methods sqlite3_mutex_methods, *Psqlite3_mutex_methods;

struct sqlite3_mutex_methods {
    int (* xMutexInit)(void);
    int (* xMutexEnd)(void);
    sqlite3_mutex * (* xMutexAlloc)(int);
    void (* xMutexFree)(struct sqlite3_mutex *);
    void (* xMutexEnter)(struct sqlite3_mutex *);
    int (* xMutexTry)(struct sqlite3_mutex *);
    void (* xMutexLeave)(struct sqlite3_mutex *);
    int (* xMutexHeld)(struct sqlite3_mutex *);
    int (* xMutexNotheld)(struct sqlite3_mutex *);
};

typedef struct sqlite3_pcache sqlite3_pcache, *Psqlite3_pcache;

struct sqlite3_pcache {
};

typedef struct sqlite3_pcache_methods sqlite3_pcache_methods, *Psqlite3_pcache_methods;

struct sqlite3_pcache_methods {
    void * pArg;
    int (* xInit)(void *);
    void (* xShutdown)(void *);
    sqlite3_pcache * (* xCreate)(int, int);
    void (* xCachesize)(struct sqlite3_pcache *, int);
    int (* xPagecount)(struct sqlite3_pcache *);
    void * (* xFetch)(struct sqlite3_pcache *, uint, int);
    void (* xUnpin)(struct sqlite3_pcache *, void *, int);
    void (* xRekey)(struct sqlite3_pcache *, void *, uint, uint);
    void (* xTruncate)(struct sqlite3_pcache *, uint);
    void (* xDestroy)(struct sqlite3_pcache *);
};

typedef struct sqlite3_pcache_methods2 sqlite3_pcache_methods2, *Psqlite3_pcache_methods2;

typedef struct sqlite3_pcache_page sqlite3_pcache_page, *Psqlite3_pcache_page;

struct sqlite3_pcache_methods2 {
    int iVersion;
    void * pArg;
    int (* xInit)(void *);
    void (* xShutdown)(void *);
    sqlite3_pcache * (* xCreate)(int, int, int);
    void (* xCachesize)(struct sqlite3_pcache *, int);
    int (* xPagecount)(struct sqlite3_pcache *);
    sqlite3_pcache_page * (* xFetch)(struct sqlite3_pcache *, uint, int);
    void (* xUnpin)(struct sqlite3_pcache *, struct sqlite3_pcache_page *, int);
    void (* xRekey)(struct sqlite3_pcache *, struct sqlite3_pcache_page *, uint, uint);
    void (* xTruncate)(struct sqlite3_pcache *, uint);
    void (* xDestroy)(struct sqlite3_pcache *);
    void (* xShrink)(struct sqlite3_pcache *);
};

struct sqlite3_pcache_page {
    void * pBuf;
    void * pExtra;
};

typedef struct sqlite3_rtree_geometry sqlite3_rtree_geometry, *Psqlite3_rtree_geometry;

struct sqlite3_rtree_geometry {
    void * pContext;
    int nParam;
    double * aParam;
    void * pUser;
    void (* xDelUser)(void *);
};

typedef struct sqlite3_stmt sqlite3_stmt, *Psqlite3_stmt;

struct sqlite3_stmt {
};

typedef void (* sqlite3_syscall_ptr)(void);

typedef ulonglong sqlite_uint64;

typedef sqlite_uint64 sqlite3_uint64;

typedef struct sqlite3_vfs sqlite3_vfs, *Psqlite3_vfs;

struct sqlite3_vfs {
    int iVersion;
    int szOsFile;
    int mxPathname;
    struct sqlite3_vfs * pNext;
    char * zName;
    void * pAppData;
    int (* xOpen)(struct sqlite3_vfs *, char *, struct sqlite3_file *, int, int *);
    int (* xDelete)(struct sqlite3_vfs *, char *, int);
    int (* xAccess)(struct sqlite3_vfs *, char *, int, int *);
    int (* xFullPathname)(struct sqlite3_vfs *, char *, int, char *);
    void * (* xDlOpen)(struct sqlite3_vfs *, char *);
    void (* xDlError)(struct sqlite3_vfs *, int, char *);
    void (* xDlSym)(void);
    void (* xDlClose)(struct sqlite3_vfs *, void *);
    int (* xRandomness)(struct sqlite3_vfs *, int, char *);
    int (* xSleep)(struct sqlite3_vfs *, int);
    int (* xCurrentTime)(struct sqlite3_vfs *, double *);
    int (* xGetLastError)(struct sqlite3_vfs *, int, char *);
    int (* xCurrentTimeInt64)(struct sqlite3_vfs *, sqlite3_int64 *);
    int (* xSetSystemCall)(struct sqlite3_vfs *, char *, sqlite3_syscall_ptr);
    sqlite3_syscall_ptr (* xGetSystemCall)(struct sqlite3_vfs *, char *);
    char * (* xNextSystemCall)(struct sqlite3_vfs *, char *);
};

typedef struct sqlite3_api_routines sqlite3_api_routines, *Psqlite3_api_routines;

struct sqlite3_api_routines {
    void * (* aggregate_context)(struct sqlite3_context *, int);
    int (* aggregate_count)(struct sqlite3_context *);
    int (* bind_blob)(struct sqlite3_stmt *, int, void *, int, void *);
    int (* bind_double)(struct sqlite3_stmt *, int, double);
    int (* bind_int)(struct sqlite3_stmt *, int, int);
    int (* bind_int64)(struct sqlite3_stmt *, int, sqlite_int64);
    int (* bind_null)(struct sqlite3_stmt *, int);
    int (* bind_parameter_count)(struct sqlite3_stmt *);
    int (* bind_parameter_index)(struct sqlite3_stmt *, char *);
    char * (* bind_parameter_name)(struct sqlite3_stmt *, int);
    int (* bind_text)(struct sqlite3_stmt *, int, char *, int, void *);
    int (* bind_text16)(struct sqlite3_stmt *, int, void *, int, void *);
    int (* bind_value)(struct sqlite3_stmt *, int, sqlite3_value *);
    int (* busy_handler)(struct sqlite3 *, int *, void *);
    int (* busy_timeout)(struct sqlite3 *, int);
    int (* changes)(struct sqlite3 *);
    int (* close)(struct sqlite3 *);
    int (* collation_needed)(struct sqlite3 *, void *, void *);
    int (* collation_needed16)(struct sqlite3 *, void *, void *);
    void * (* column_blob)(struct sqlite3_stmt *, int);
    int (* column_bytes)(struct sqlite3_stmt *, int);
    int (* column_bytes16)(struct sqlite3_stmt *, int);
    int (* column_count)(struct sqlite3_stmt *);
    char * (* column_database_name)(struct sqlite3_stmt *, int);
    void * (* column_database_name16)(struct sqlite3_stmt *, int);
    char * (* column_decltype)(struct sqlite3_stmt *, int);
    void * (* column_decltype16)(struct sqlite3_stmt *, int);
    double (* column_double)(struct sqlite3_stmt *, int);
    int (* column_int)(struct sqlite3_stmt *, int);
    sqlite_int64 (* column_int64)(struct sqlite3_stmt *, int);
    char * (* column_name)(struct sqlite3_stmt *, int);
    void * (* column_name16)(struct sqlite3_stmt *, int);
    char * (* column_origin_name)(struct sqlite3_stmt *, int);
    void * (* column_origin_name16)(struct sqlite3_stmt *, int);
    char * (* column_table_name)(struct sqlite3_stmt *, int);
    void * (* column_table_name16)(struct sqlite3_stmt *, int);
    uchar * (* column_text)(struct sqlite3_stmt *, int);
    void * (* column_text16)(struct sqlite3_stmt *, int);
    int (* column_type)(struct sqlite3_stmt *, int);
    sqlite3_value * (* column_value)(struct sqlite3_stmt *, int);
    void * (* commit_hook)(struct sqlite3 *, int *, void *);
    int (* complete)(char *);
    int (* complete16)(void *);
    int (* create_collation)(struct sqlite3 *, char *, int, void *, int *);
    int (* create_collation16)(struct sqlite3 *, void *, int, void *, int *);
    int (* create_function)(struct sqlite3 *, char *, int, int, void *, void (* )(struct sqlite3_context *, int, sqlite3_value * *), void (* )(struct sqlite3_context *, int, sqlite3_value * *), void (* )(struct sqlite3_context *));
    int (* create_function16)(struct sqlite3 *, void *, int, int, void *, void (* )(struct sqlite3_context *, int, sqlite3_value * *), void (* )(struct sqlite3_context *, int, sqlite3_value * *), void (* )(struct sqlite3_context *));
    int (* create_module)(struct sqlite3 *, char *, struct sqlite3_module *, void *);
    int (* data_count)(struct sqlite3_stmt *);
    sqlite3 * (* db_handle)(struct sqlite3_stmt *);
    int (* declare_vtab)(struct sqlite3 *, char *);
    int (* enable_shared_cache)(int);
    int (* errcode)(struct sqlite3 *);
    char * (* errmsg)(struct sqlite3 *);
    void * (* errmsg16)(struct sqlite3 *);
    int (* exec)(struct sqlite3 *, char *, sqlite3_callback, void *, char * *);
    int (* expired)(struct sqlite3_stmt *);
    int (* finalize)(struct sqlite3_stmt *);
    void (* free)(void *);
    void (* free_table)(char * *);
    int (* get_autocommit)(struct sqlite3 *);
    void * (* get_auxdata)(struct sqlite3_context *, int);
    int (* get_table)(struct sqlite3 *, char *, char * * *, int *, int *, char * *);
    int (* global_recover)(void);
    void (* interruptx)(struct sqlite3 *);
    sqlite_int64 (* last_insert_rowid)(struct sqlite3 *);
    char * (* libversion)(void);
    int (* libversion_number)(void);
    void * (* malloc)(int);
    char * (* mprintf)(char *, ...);
    int (* open)(char *, struct sqlite3 * *);
    int (* open16)(void *, struct sqlite3 * *);
    int (* prepare)(struct sqlite3 *, char *, int, struct sqlite3_stmt * *, char * *);
    int (* prepare16)(struct sqlite3 *, void *, int, struct sqlite3_stmt * *, void * *);
    void * (* profile)(struct sqlite3 *, void *, void *);
    void (* progress_handler)(struct sqlite3 *, int, int *, void *);
    void * (* realloc)(void *, int);
    int (* reset)(struct sqlite3_stmt *);
    void (* result_blob)(struct sqlite3_context *, void *, int, void *);
    void (* result_double)(struct sqlite3_context *, double);
    void (* result_error)(struct sqlite3_context *, char *, int);
    void (* result_error16)(struct sqlite3_context *, void *, int);
    void (* result_int)(struct sqlite3_context *, int);
    void (* result_int64)(struct sqlite3_context *, sqlite_int64);
    void (* result_null)(struct sqlite3_context *);
    void (* result_text)(struct sqlite3_context *, char *, int, void *);
    void (* result_text16)(struct sqlite3_context *, void *, int, void *);
    void (* result_text16be)(struct sqlite3_context *, void *, int, void *);
    void (* result_text16le)(struct sqlite3_context *, void *, int, void *);
    void (* result_value)(struct sqlite3_context *, sqlite3_value *);
    void * (* rollback_hook)(struct sqlite3 *, void *, void *);
    int (* set_authorizer)(struct sqlite3 *, int *, void *);
    void (* set_auxdata)(struct sqlite3_context *, int, void *, void *);
    char * (* snprintf)(int, char *, char *, ...);
    int (* step)(struct sqlite3_stmt *);
    int (* table_column_metadata)(struct sqlite3 *, char *, char *, char *, char * *, char * *, int *, int *, int *);
    void (* thread_cleanup)(void);
    int (* total_changes)(struct sqlite3 *);
    void * (* trace)(struct sqlite3 *, void (* )(void *, char *), void *);
    int (* transfer_bindings)(struct sqlite3_stmt *, struct sqlite3_stmt *);
    void * (* update_hook)(struct sqlite3 *, void *, void *);
    void * (* user_data)(struct sqlite3_context *);
    void * (* value_blob)(sqlite3_value *);
    int (* value_bytes)(sqlite3_value *);
    int (* value_bytes16)(sqlite3_value *);
    double (* value_double)(sqlite3_value *);
    int (* value_int)(sqlite3_value *);
    sqlite_int64 (* value_int64)(sqlite3_value *);
    int (* value_numeric_type)(sqlite3_value *);
    uchar * (* value_text)(sqlite3_value *);
    void * (* value_text16)(sqlite3_value *);
    void * (* value_text16be)(sqlite3_value *);
    void * (* value_text16le)(sqlite3_value *);
    int (* value_type)(sqlite3_value *);
    char * (* vmprintf)(char *, va_list);
    int (* overload_function)(struct sqlite3 *, char *, int);
    int (* prepare_v2)(struct sqlite3 *, char *, int, struct sqlite3_stmt * *, char * *);
    int (* prepare16_v2)(struct sqlite3 *, void *, int, struct sqlite3_stmt * *, void * *);
    int (* clear_bindings)(struct sqlite3_stmt *);
    int (* create_module_v2)(struct sqlite3 *, char *, struct sqlite3_module *, void *, void (* )(void *));
    int (* bind_zeroblob)(struct sqlite3_stmt *, int, int);
    int (* blob_bytes)(struct sqlite3_blob *);
    int (* blob_close)(struct sqlite3_blob *);
    int (* blob_open)(struct sqlite3 *, char *, char *, char *, sqlite3_int64, int, struct sqlite3_blob * *);
    int (* blob_read)(struct sqlite3_blob *, void *, int, int);
    int (* blob_write)(struct sqlite3_blob *, void *, int, int);
    int (* create_collation_v2)(struct sqlite3 *, char *, int, void *, int *, void *);
    int (* file_control)(struct sqlite3 *, char *, int, void *);
    sqlite3_int64 (* memory_highwater)(int);
    sqlite3_int64 (* memory_used)(void);
    sqlite3_mutex * (* mutex_alloc)(int);
    void (* mutex_enter)(struct sqlite3_mutex *);
    void (* mutex_free)(struct sqlite3_mutex *);
    void (* mutex_leave)(struct sqlite3_mutex *);
    int (* mutex_try)(struct sqlite3_mutex *);
    int (* open_v2)(char *, struct sqlite3 * *, int, char *);
    int (* release_memory)(int);
    void (* result_error_nomem)(struct sqlite3_context *);
    void (* result_error_toobig)(struct sqlite3_context *);
    int (* sleep)(int);
    void (* soft_heap_limit)(int);
    sqlite3_vfs * (* vfs_find)(char *);
    int (* vfs_register)(struct sqlite3_vfs *, int);
    int (* vfs_unregister)(struct sqlite3_vfs *);
    int (* xthreadsafe)(void);
    void (* result_zeroblob)(struct sqlite3_context *, int);
    void (* result_error_code)(struct sqlite3_context *, int);
    int (* test_control)(int, ...);
    void (* randomness)(int, void *);
    sqlite3 * (* context_db_handle)(struct sqlite3_context *);
    int (* extended_result_codes)(struct sqlite3 *, int);
    int (* limit)(struct sqlite3 *, int, int);
    sqlite3_stmt * (* next_stmt)(struct sqlite3 *, struct sqlite3_stmt *);
    char * (* sql)(struct sqlite3_stmt *);
    int (* status)(int, int *, int *, int);
    int (* backup_finish)(struct sqlite3_backup *);
    sqlite3_backup * (* backup_init)(struct sqlite3 *, char *, struct sqlite3 *, char *);
    int (* backup_pagecount)(struct sqlite3_backup *);
    int (* backup_remaining)(struct sqlite3_backup *);
    int (* backup_step)(struct sqlite3_backup *, int);
    char * (* compileoption_get)(int);
    int (* compileoption_used)(char *);
    int (* create_function_v2)(struct sqlite3 *, char *, int, int, void *, void (* )(struct sqlite3_context *, int, sqlite3_value * *), void (* )(struct sqlite3_context *, int, sqlite3_value * *), void (* )(struct sqlite3_context *), void (* )(void *));
    int (* db_config)(struct sqlite3 *, int, ...);
    sqlite3_mutex * (* db_mutex)(struct sqlite3 *);
    int (* db_status)(struct sqlite3 *, int, int *, int *, int);
    int (* extended_errcode)(struct sqlite3 *);
    void (* log)(int, char *, ...);
    sqlite3_int64 (* soft_heap_limit64)(sqlite3_int64);
    char * (* sourceid)(void);
    int (* stmt_status)(struct sqlite3_stmt *, int, int);
    int (* strnicmp)(char *, char *, int);
    int (* unlock_notify)(struct sqlite3 *, void *, void *);
    int (* wal_autocheckpoint)(struct sqlite3 *, int);
    int (* wal_checkpoint)(struct sqlite3 *, char *);
    void * (* wal_hook)(struct sqlite3 *, int *, void *);
    int (* blob_reopen)(struct sqlite3_blob *, sqlite3_int64);
    int (* vtab_config)(struct sqlite3 *, int, ...);
    int (* vtab_on_conflict)(struct sqlite3 *);
};

#define ACCESSPERMS 767

#define ALLPERMS 4095

#define DEFFILEMODE 510

#define S_BLKSIZE 512

#define SF_APPEND 262144

#define SF_ARCHIVED 65536

#define SF_IMMUTABLE 131072

#define SF_SETTABLE 4294901760

#define UF_APPEND 4

#define UF_COMPRESSED 32

#define UF_HIDDEN 32768

#define UF_IMMUTABLE 2

#define UF_NODUMP 1

#define UF_OPAQUE 8

#define UF_SETTABLE 65535

#define UF_TRACKED 64

typedef struct ostat ostat, *Postat;

struct ostat {
    __uint16_t st_dev;
    ino_t st_ino;
    mode_t st_mode;
    nlink_t st_nlink;
    __uint16_t st_uid;
    __uint16_t st_gid;
    __uint16_t st_rdev;
    __int32_t st_size;
    struct timespec st_atimespec;
    struct timespec st_mtimespec;
    struct timespec st_ctimespec;
    __int32_t st_blksize;
    __int32_t st_blocks;
    __uint32_t st_flags;
    __uint32_t st_gen;
};

typedef struct stat64 stat64, *Pstat64;

struct stat64 {
    dev_t st_dev;
    mode_t st_mode;
    nlink_t st_nlink;
    __darwin_ino64_t st_ino;
    uid_t st_uid;
    gid_t st_gid;
    dev_t st_rdev;
    struct timespec st_atimespec;
    struct timespec st_mtimespec;
    struct timespec st_ctimespec;
    struct timespec st_birthtimespec;
    off_t st_size;
    blkcnt_t st_blocks;
    blksize_t st_blksize;
    __uint32_t st_flags;
    __uint32_t st_gen;
    __int32_t st_lspare;
    __int64_t st_qspare[2];
};

#define ST_NOSUID 2

#define ST_RDONLY 1

typedef struct statvfs statvfs, *Pstatvfs;

struct statvfs {
    ulong f_bsize;
    ulong f_frsize;
    fsblkcnt_t f_blocks;
    fsblkcnt_t f_bfree;
    fsblkcnt_t f_bavail;
    fsfilcnt_t f_files;
    fsfilcnt_t f_ffree;
    fsfilcnt_t f_favail;
    ulong f_fsid;
    ulong f_flag;
    ulong f_namemax;
};

#define __bool_true_false_are_defined 1

#define false 0

#define true 1

#define __WORDSIZE 32

#define INT16_MAX 32767

#define INT16_MIN -32768

#define INT32_MAX 2147483647

#define INT32_MIN -2147483648

#define INT64_MAX 9223372036854775807

#define INT8_MAX 127

#define INT8_MIN -128

#define INT_FAST16_MAX 32767

#define INT_FAST16_MIN -32768

#define INT_FAST32_MAX 2147483647

#define INT_FAST32_MIN -2147483648

#define INT_FAST64_MAX 9223372036854775807

#define INT_FAST8_MAX 127

#define INT_FAST8_MIN -128

#define INT_LEAST16_MAX 32767

#define INT_LEAST16_MIN -32768

#define INT_LEAST32_MAX 2147483647

#define INT_LEAST32_MIN -2147483648

#define INT_LEAST64_MAX 9223372036854775807

#define INT_LEAST8_MAX 127

#define INT_LEAST8_MIN -128

#define INTMAX_MAX 9223372036854775807

#define INTPTR_MAX 2147483647

#define INTPTR_MIN -2147483648

#define PTRDIFF_MAX 2147483647

#define PTRDIFF_MIN -2147483648

#define SIG_ATOMIC_MAX 2147483647

#define SIG_ATOMIC_MIN -2147483648

#define SIZE_MAX 4294967295

#define UINT16_MAX 65535

#define UINT32_MAX 4294967295

#define UINT8_MAX 255

#define UINT_FAST16_MAX 65535

#define UINT_FAST32_MAX 4294967295

#define UINT_FAST8_MAX 255

#define UINT_LEAST16_MAX 65535

#define UINT_LEAST32_MAX 4294967295

#define UINT_LEAST8_MAX 255

#define UINTPTR_MAX 4294967295

#define WCHAR_MAX 2147483647

#define WCHAR_MIN -2147483648

#define WINT_MAX 2147483647

#define WINT_MIN -2147483648

typedef int16_t int_fast16_t;

typedef int32_t int_fast32_t;

typedef int64_t int_fast64_t;

typedef int8_t int_fast8_t;

typedef int16_t int_least16_t;

typedef int32_t int_least32_t;

typedef int64_t int_least64_t;

typedef int8_t int_least8_t;

typedef uint16_t uint_fast16_t;

typedef uint32_t uint_fast32_t;

typedef uint64_t uint_fast64_t;

typedef uint8_t uint_fast8_t;

typedef uint16_t uint_least16_t;

typedef uint32_t uint_least32_t;

typedef uint64_t uint_least64_t;

typedef uint8_t uint_least8_t;

#define __CTERMID_DEFINED 1

#define __SALC 16384

#define __SAPP 256

#define __SEOF 32

#define __SERR 64

#define __SIGN 32768

#define __SLBF 1

#define __SMBF 128

#define __SMOD 8192

#define __SNBF 2

#define __SNPT 2048

#define __SOFF 4096

#define __SOPT 1024

#define __SRD 4

#define __SRW 16

#define __SSTR 512

#define __SWR 8

#define _IOFBF 0

#define _IOLBF 1

#define _IONBF 2

#define BUFSIZ 1024

#define EOF -1

#define FILENAME_MAX 1024

#define FOPEN_MAX 20

#define L_ctermid 1024

#define L_tmpnam 1024

#define SEEK_CUR 1

#define SEEK_END 2

#define SEEK_SET 0

#define TMP_MAX 308915776

#define EXIT_FAILURE 1

#define EXIT_SUCCESS 0

#define RAND_MAX 2147483647

typedef struct div_t div_t, *Pdiv_t;

struct div_t {
    int quot;
    int rem;
};

typedef struct ldiv_t ldiv_t, *Pldiv_t;

struct ldiv_t {
    long quot;
    long rem;
};

typedef struct lldiv_t lldiv_t, *Plldiv_t;

struct lldiv_t {
    longlong quot;
    longlong rem;
};

#define STORE_CTRL_SET_CONF_FILE 3

#define STORE_CTRL_SET_CONF_SECTION 4

#define STORE_CTRL_SET_DIRECTORY 1

#define STORE_CTRL_SET_FILE 2

#define STORE_F_MEM_DELETE 134

#define STORE_F_MEM_GENERATE 135

#define STORE_F_MEM_LIST_END 168

#define STORE_F_MEM_LIST_NEXT 136

#define STORE_F_MEM_LIST_START 137

#define STORE_F_MEM_MODIFY 169

#define STORE_F_MEM_STORE 138

#define STORE_F_STORE_ATTR_INFO_GET0_CSTR 139

#define STORE_F_STORE_ATTR_INFO_GET0_DN 140

#define STORE_F_STORE_ATTR_INFO_GET0_NUMBER 141

#define STORE_F_STORE_ATTR_INFO_GET0_SHA1STR 142

#define STORE_F_STORE_ATTR_INFO_MODIFY_CSTR 143

#define STORE_F_STORE_ATTR_INFO_MODIFY_DN 144

#define STORE_F_STORE_ATTR_INFO_MODIFY_NUMBER 145

#define STORE_F_STORE_ATTR_INFO_MODIFY_SHA1STR 146

#define STORE_F_STORE_ATTR_INFO_SET_CSTR 147

#define STORE_F_STORE_ATTR_INFO_SET_DN 148

#define STORE_F_STORE_ATTR_INFO_SET_NUMBER 149

#define STORE_F_STORE_ATTR_INFO_SET_SHA1STR 150

#define STORE_F_STORE_CERTIFICATE 170

#define STORE_F_STORE_CTRL 161

#define STORE_F_STORE_DELETE_ARBITRARY 158

#define STORE_F_STORE_DELETE_CERTIFICATE 102

#define STORE_F_STORE_DELETE_CRL 103

#define STORE_F_STORE_DELETE_NUMBER 104

#define STORE_F_STORE_DELETE_PRIVATE_KEY 105

#define STORE_F_STORE_DELETE_PUBLIC_KEY 106

#define STORE_F_STORE_GENERATE_CRL 107

#define STORE_F_STORE_GENERATE_KEY 108

#define STORE_F_STORE_GET_ARBITRARY 159

#define STORE_F_STORE_GET_CERTIFICATE 109

#define STORE_F_STORE_GET_CRL 110

#define STORE_F_STORE_GET_NUMBER 111

#define STORE_F_STORE_GET_PRIVATE_KEY 112

#define STORE_F_STORE_GET_PUBLIC_KEY 113

#define STORE_F_STORE_LIST_CERTIFICATE_END 114

#define STORE_F_STORE_LIST_CERTIFICATE_ENDP 153

#define STORE_F_STORE_LIST_CERTIFICATE_NEXT 115

#define STORE_F_STORE_LIST_CERTIFICATE_START 116

#define STORE_F_STORE_LIST_CRL_END 117

#define STORE_F_STORE_LIST_CRL_ENDP 154

#define STORE_F_STORE_LIST_CRL_NEXT 118

#define STORE_F_STORE_LIST_CRL_START 119

#define STORE_F_STORE_LIST_PRIVATE_KEY_END 120

#define STORE_F_STORE_LIST_PRIVATE_KEY_ENDP 155

#define STORE_F_STORE_LIST_PRIVATE_KEY_NEXT 121

#define STORE_F_STORE_LIST_PRIVATE_KEY_START 122

#define STORE_F_STORE_LIST_PUBLIC_KEY_END 123

#define STORE_F_STORE_LIST_PUBLIC_KEY_ENDP 156

#define STORE_F_STORE_LIST_PUBLIC_KEY_NEXT 124

#define STORE_F_STORE_LIST_PUBLIC_KEY_START 125

#define STORE_F_STORE_MODIFY_ARBITRARY 162

#define STORE_F_STORE_MODIFY_CERTIFICATE 163

#define STORE_F_STORE_MODIFY_CRL 164

#define STORE_F_STORE_MODIFY_NUMBER 165

#define STORE_F_STORE_MODIFY_PRIVATE_KEY 166

#define STORE_F_STORE_MODIFY_PUBLIC_KEY 167

#define STORE_F_STORE_NEW_ENGINE 133

#define STORE_F_STORE_NEW_METHOD 132

#define STORE_F_STORE_PARSE_ATTRS_END 151

#define STORE_F_STORE_PARSE_ATTRS_ENDP 172

#define STORE_F_STORE_PARSE_ATTRS_NEXT 152

#define STORE_F_STORE_PARSE_ATTRS_START 171

#define STORE_F_STORE_REVOKE_CERTIFICATE 129

#define STORE_F_STORE_REVOKE_PRIVATE_KEY 130

#define STORE_F_STORE_REVOKE_PUBLIC_KEY 131

#define STORE_F_STORE_STORE_ARBITRARY 157

#define STORE_F_STORE_STORE_CERTIFICATE 100

#define STORE_F_STORE_STORE_CRL 101

#define STORE_F_STORE_STORE_NUMBER 126

#define STORE_F_STORE_STORE_PRIVATE_KEY 127

#define STORE_F_STORE_STORE_PUBLIC_KEY 128

#define STORE_R_ALREADY_HAS_A_VALUE 127

#define STORE_R_FAILED_DELETING_ARBITRARY 132

#define STORE_R_FAILED_DELETING_CERTIFICATE 100

#define STORE_R_FAILED_DELETING_KEY 101

#define STORE_R_FAILED_DELETING_NUMBER 102

#define STORE_R_FAILED_GENERATING_CRL 103

#define STORE_R_FAILED_GENERATING_KEY 104

#define STORE_R_FAILED_GETTING_ARBITRARY 133

#define STORE_R_FAILED_GETTING_CERTIFICATE 105

#define STORE_R_FAILED_GETTING_KEY 106

#define STORE_R_FAILED_GETTING_NUMBER 107

#define STORE_R_FAILED_LISTING_CERTIFICATES 108

#define STORE_R_FAILED_LISTING_KEYS 109

#define STORE_R_FAILED_MODIFYING_ARBITRARY 138

#define STORE_R_FAILED_MODIFYING_CERTIFICATE 139

#define STORE_R_FAILED_MODIFYING_CRL 140

#define STORE_R_FAILED_MODIFYING_NUMBER 141

#define STORE_R_FAILED_MODIFYING_PRIVATE_KEY 142

#define STORE_R_FAILED_MODIFYING_PUBLIC_KEY 143

#define STORE_R_FAILED_REVOKING_CERTIFICATE 110

#define STORE_R_FAILED_REVOKING_KEY 111

#define STORE_R_FAILED_STORING_ARBITRARY 134

#define STORE_R_FAILED_STORING_CERTIFICATE 112

#define STORE_R_FAILED_STORING_KEY 113

#define STORE_R_FAILED_STORING_NUMBER 114

#define STORE_R_NO_CONTROL_FUNCTION 144

#define STORE_R_NO_DELETE_ARBITRARY_FUNCTION 135

#define STORE_R_NO_DELETE_NUMBER_FUNCTION 115

#define STORE_R_NO_DELETE_OBJECT_FUNCTION 116

#define STORE_R_NO_GENERATE_CRL_FUNCTION 117

#define STORE_R_NO_GENERATE_OBJECT_FUNCTION 118

#define STORE_R_NO_GET_OBJECT_ARBITRARY_FUNCTION 136

#define STORE_R_NO_GET_OBJECT_FUNCTION 119

#define STORE_R_NO_GET_OBJECT_NUMBER_FUNCTION 120

#define STORE_R_NO_LIST_OBJECT_END_FUNCTION 121

#define STORE_R_NO_LIST_OBJECT_ENDP_FUNCTION 131

#define STORE_R_NO_LIST_OBJECT_NEXT_FUNCTION 122

#define STORE_R_NO_LIST_OBJECT_START_FUNCTION 123

#define STORE_R_NO_MODIFY_OBJECT_FUNCTION 145

#define STORE_R_NO_REVOKE_OBJECT_FUNCTION 124

#define STORE_R_NO_STORE 129

#define STORE_R_NO_STORE_OBJECT_ARBITRARY_FUNCTION 137

#define STORE_R_NO_STORE_OBJECT_FUNCTION 125

#define STORE_R_NO_STORE_OBJECT_NUMBER_FUNCTION 126

#define STORE_R_NO_VALUE 130

#define STORE_R_NOT_IMPLEMENTED 128

typedef struct _struct_3195 _struct_3195, *P_struct_3195;

typedef enum STORE_certificate_status {
    STORE_X509_EXPIRED=1,
    STORE_X509_REVOKED=3,
    STORE_X509_SUSPENDED=2,
    STORE_X509_VALID=0
} STORE_certificate_status;

typedef enum STORE_certificate_status STORE_CERTIFICATE_STATUS;

struct _struct_3195 {
    STORE_CERTIFICATE_STATUS status;
    X509 * certificate;
};

typedef union _union_3194 _union_3194, *P_union_3194;

union _union_3194 {
    struct _struct_3195 x509;
    X509_CRL * crl;
    EVP_PKEY * key;
    BIGNUM * number;
    BUF_MEM * arbitrary;
};

typedef struct STORE_attr_info_st STORE_attr_info_st, *PSTORE_attr_info_st;

typedef struct STORE_attr_info_st STORE_ATTR_INFO;

struct STORE_attr_info_st {
};

typedef enum STORE_attribs {
    STORE_ATTR_CERTHASH=9,
    STORE_ATTR_EMAIL=10,
    STORE_ATTR_END=0,
    STORE_ATTR_FILENAME=11,
    STORE_ATTR_FRIENDLYNAME=1,
    STORE_ATTR_ISSUER=6,
    STORE_ATTR_ISSUERKEYID=3,
    STORE_ATTR_ISSUERSERIALHASH=5,
    STORE_ATTR_KEYID=2,
    STORE_ATTR_OR=255,
    STORE_ATTR_SERIAL=7,
    STORE_ATTR_SUBJECT=8,
    STORE_ATTR_SUBJECTKEYID=4,
    STORE_ATTR_TYPE_NUM=11
} STORE_attribs;

typedef enum STORE_attribs STORE_ATTR_TYPES;

typedef void (* STORE_CLEANUP_FUNC_PTR)(STORE *);

typedef int (* STORE_CTRL_FUNC_PTR)(STORE *, int, long, void *, void (* )(void));

typedef int (* STORE_END_OBJECT_FUNC_PTR)(STORE *, void *);

typedef struct STORE_OBJECT_st STORE_OBJECT_st, *PSTORE_OBJECT_st;

typedef struct STORE_OBJECT_st STORE_OBJECT;

typedef enum STORE_object_types {
    STORE_OBJECT_TYPE_ARBITRARY=6,
    STORE_OBJECT_TYPE_NUM=6,
    STORE_OBJECT_TYPE_NUMBER=5,
    STORE_OBJECT_TYPE_PRIVATE_KEY=3,
    STORE_OBJECT_TYPE_PUBLIC_KEY=4,
    STORE_OBJECT_TYPE_X509_CERTIFICATE=1,
    STORE_OBJECT_TYPE_X509_CRL=2
} STORE_object_types;

typedef enum STORE_object_types STORE_OBJECT_TYPES;

typedef STORE_OBJECT * (* STORE_GENERATE_OBJECT_FUNC_PTR)(STORE *, STORE_OBJECT_TYPES, OPENSSL_ITEM *, OPENSSL_ITEM *);

struct STORE_OBJECT_st {
    STORE_OBJECT_TYPES type;
    union _union_3194 data;
};

typedef int (* STORE_GENERIC_FUNC_PTR)(STORE *, OPENSSL_ITEM *, OPENSSL_ITEM *);

typedef STORE_OBJECT * (* STORE_GET_OBJECT_FUNC_PTR)(STORE *, STORE_OBJECT_TYPES, OPENSSL_ITEM *, OPENSSL_ITEM *);

typedef int (* STORE_HANDLE_OBJECT_FUNC_PTR)(STORE *, STORE_OBJECT_TYPES, OPENSSL_ITEM *, OPENSSL_ITEM *);

typedef int (* STORE_INITIALISE_FUNC_PTR)(STORE *);

typedef int (* STORE_MODIFY_OBJECT_FUNC_PTR)(STORE *, STORE_OBJECT_TYPES, OPENSSL_ITEM *, OPENSSL_ITEM *, OPENSSL_ITEM *, OPENSSL_ITEM *, OPENSSL_ITEM *);

typedef STORE_OBJECT * (* STORE_NEXT_OBJECT_FUNC_PTR)(STORE *, void *);

typedef enum STORE_params {
    STORE_PARAM_AUTH_KRB5_TICKET=6,
    STORE_PARAM_AUTH_PASSPHRASE=5,
    STORE_PARAM_BITS=2,
    STORE_PARAM_EVP_TYPE=1,
    STORE_PARAM_KEY_NO_PARAMETERS=4,
    STORE_PARAM_KEY_PARAMETERS=3,
    STORE_PARAM_TYPE_NUM=6
} STORE_params;

typedef enum STORE_params STORE_PARAM_TYPES;

typedef void * (* STORE_START_OBJECT_FUNC_PTR)(STORE *, STORE_OBJECT_TYPES, OPENSSL_ITEM *, OPENSSL_ITEM *);

typedef int (* STORE_STORE_OBJECT_FUNC_PTR)(STORE *, STORE_OBJECT_TYPES, STORE_OBJECT *, OPENSSL_ITEM *, OPENSSL_ITEM *);

#define HASH_SZ 97

typedef struct _node _node, *P_node;

struct _node {
    char * key;
    void * data;
    struct _node * next;
};

typedef struct _node hash_node;

typedef struct hash_table hash_table, *Phash_table;

struct hash_table {
    int size;
    hash_node * * buckets;
};

typedef struct _stringlist _stringlist, *P_stringlist;

struct _stringlist {
    char * * sl_str;
    size_t sl_max;
    size_t sl_cur;
};

typedef struct _stringlist StringList;

#define RPC_ANYSOCK -1

typedef struct svc_req svc_req, *Psvc_req;

typedef struct SVCXPRT SVCXPRT, *PSVCXPRT;

typedef struct xp_ops xp_ops, *Pxp_ops;

typedef enum xprt_stat {
    XPRT_DIED=0,
    XPRT_IDLE=2,
    XPRT_MOREREQS=1
} xprt_stat;

struct SVCXPRT {
    int xp_sock;
    ushort xp_port;
    struct xp_ops * xp_ops;
    int xp_addrlen;
    struct sockaddr_in xp_raddr;
    struct opaque_auth xp_verf;
    caddr_t xp_p1;
    caddr_t xp_p2;
};

struct svc_req {
    uint rq_prog;
    uint rq_vers;
    uint rq_proc;
    struct opaque_auth rq_cred;
    caddr_t rq_clntcred;
    struct SVCXPRT * rq_xprt;
};

struct xp_ops {
    boolean_t (* xp_recv)(void);
    xprt_stat (* xp_stat)(void);
    boolean_t (* xp_getargs)(void);
    boolean_t (* xp_reply)(void);
    boolean_t (* xp_freeargs)(void);
    void (* xp_destroy)(void);
};

typedef struct i386_float_state i386_float_state, *Pi386_float_state;

struct i386_float_state {
};

#define SYNC_POLICY_FIFO 0

#define SYNC_POLICY_FIXED_PRIORITY 1

#define SYNC_POLICY_LIFO 2

#define SYNC_POLICY_MAX 7

#define SYNC_POLICY_ORDER_MASK 3

#define SYNC_POLICY_REVERSED 2

typedef int sync_policy_t;

#define AF_SYS_CONTROL 2

#define SYSPROTO_CONTROL 2

#define SYSPROTO_EVENT 1

typedef struct sockaddr_sys sockaddr_sys, *Psockaddr_sys;

struct sockaddr_sys {
    u_char ss_len;
    u_char ss_family;
    u_int16_t ss_sysaddr;
    u_int32_t ss_reserved[7];
};

#define SYS___disable_threadsignal 331

#define SYS___mac_execve 380

#define SYS___mac_get_fd 388

#define SYS___mac_get_file 382

#define SYS___mac_get_lcid 391

#define SYS___mac_get_lctx 392

#define SYS___mac_get_link 384

#define SYS___mac_get_mount 425

#define SYS___mac_get_pid 390

#define SYS___mac_get_proc 386

#define SYS___mac_getfsstat 426

#define SYS___mac_mount 424

#define SYS___mac_set_fd 389

#define SYS___mac_set_file 383

#define SYS___mac_set_lctx 393

#define SYS___mac_set_link 385

#define SYS___mac_set_proc 387

#define SYS___mac_syscall 381

#define SYS___old_semwait_signal 370

#define SYS___old_semwait_signal_nocancel 371

#define SYS___pthread_canceled 333

#define SYS___pthread_chdir 348

#define SYS___pthread_fchdir 349

#define SYS___pthread_kill 328

#define SYS___pthread_markcancel 332

#define SYS___pthread_sigmask 329

#define SYS___semwait_signal 334

#define SYS___semwait_signal_nocancel 423

#define SYS___sigwait 330

#define SYS___sigwait_nocancel 422

#define SYS___sysctl 202

#define SYS_accept 30

#define SYS_accept_nocancel 404

#define SYS_access 33

#define SYS_access_extended 284

#define SYS_acct 51

#define SYS_adjtime 140

#define SYS_aio_cancel 316

#define SYS_aio_error 317

#define SYS_aio_fsync 313

#define SYS_aio_read 318

#define SYS_aio_return 314

#define SYS_aio_suspend 315

#define SYS_aio_suspend_nocancel 421

#define SYS_aio_write 319

#define SYS_audit 350

#define SYS_audit_session_join 429

#define SYS_audit_session_port 432

#define SYS_audit_session_self 428

#define SYS_auditctl 359

#define SYS_auditon 351

#define SYS_bind 104

#define SYS_bsdthread_create 360

#define SYS_bsdthread_register 366

#define SYS_bsdthread_terminate 361

#define SYS_change_fdguard_np 444

#define SYS_chdir 12

#define SYS_chflags 34

#define SYS_chmod 15

#define SYS_chmod_extended 282

#define SYS_chown 16

#define SYS_chroot 61

#define SYS_chud 185

#define SYS_close 6

#define SYS_close_nocancel 399

#define SYS_connect 98

#define SYS_connect_nocancel 409

#define SYS_connectx 447

#define SYS_copyfile 227

#define SYS_csops 169

#define SYS_csops_audittoken 170

#define SYS_delete 226

#define SYS_disconnectx 448

#define SYS_dup 41

#define SYS_dup2 90

#define SYS_exchangedata 223

#define SYS_execve 59

#define SYS_exit 1

#define SYS_fchdir 13

#define SYS_fchflags 35

#define SYS_fchmod 124

#define SYS_fchmod_extended 283

#define SYS_fchown 123

#define SYS_fcntl 92

#define SYS_fcntl_nocancel 406

#define SYS_fdatasync 187

#define SYS_ffsctl 245

#define SYS_fgetattrlist 228

#define SYS_fgetxattr 235

#define SYS_fhopen 248

#define SYS_fileport_makefd 431

#define SYS_fileport_makeport 430

#define SYS_flistxattr 241

#define SYS_flock 131

#define SYS_fork 2

#define SYS_fpathconf 192

#define SYS_fremovexattr 239

#define SYS_fsctl 242

#define SYS_fsetattrlist 229

#define SYS_fsetxattr 237

#define SYS_fsgetpath 427

#define SYS_fstat 189

#define SYS_fstat64 339

#define SYS_fstat64_extended 343

#define SYS_fstat_extended 281

#define SYS_fstatfs 158

#define SYS_fstatfs64 346

#define SYS_fsync 95

#define SYS_fsync_nocancel 408

#define SYS_ftruncate 201

#define SYS_futimes 139

#define SYS_getattrlist 220

#define SYS_getaudit_addr 357

#define SYS_getauid 353

#define SYS_getdirentries 196

#define SYS_getdirentries64 344

#define SYS_getdirentriesattr 222

#define SYS_getdtablesize 89

#define SYS_getegid 43

#define SYS_geteuid 25

#define SYS_getfh 161

#define SYS_getfsstat 18

#define SYS_getfsstat64 347

#define SYS_getgid 47

#define SYS_getgroups 79

#define SYS_gethostuuid 142

#define SYS_getitimer 86

#define SYS_getlcid 395

#define SYS_getlogin 49

#define SYS_getpeername 31

#define SYS_getpgid 151

#define SYS_getpgrp 81

#define SYS_getpid 20

#define SYS_getppid 39

#define SYS_getpriority 100

#define SYS_getrlimit 194

#define SYS_getrusage 117

#define SYS_getsgroups 288

#define SYS_getsid 310

#define SYS_getsockname 32

#define SYS_getsockopt 118

#define SYS_gettid 286

#define SYS_gettimeofday 116

#define SYS_getuid 24

#define SYS_getwgroups 290

#define SYS_getxattr 234

#define SYS_guarded_close_np 442

#define SYS_guarded_kqueue_np 443

#define SYS_guarded_open_np 441

#define SYS_identitysvc 293

#define SYS_initgroups 243

#define SYS_ioctl 54

#define SYS_iopolicysys 322

#define SYS_issetugid 327

#define SYS_kas_info 439

#define SYS_kdebug_trace 180

#define SYS_kevent 363

#define SYS_kevent64 369

#define SYS_kill 37

#define SYS_kqueue 362

#define SYS_lchown 364

#define SYS_ledger 373

#define SYS_link 9

#define SYS_lio_listio 320

#define SYS_listen 106

#define SYS_listxattr 240

#define SYS_lseek 199

#define SYS_lstat 190

#define SYS_lstat64 340

#define SYS_lstat64_extended 342

#define SYS_lstat_extended 280

#define SYS_madvise 75

#define SYS_MAXSYSCALL 456

#define SYS_memorystatus_control 440

#define SYS_memorystatus_get_level 453

#define SYS_mincore 78

#define SYS_minherit 250

#define SYS_mkdir 136

#define SYS_mkdir_extended 292

#define SYS_mkfifo 132

#define SYS_mkfifo_extended 291

#define SYS_mknod 14

#define SYS_mlock 203

#define SYS_mlockall 324

#define SYS_mmap 197

#define SYS_modwatch 233

#define SYS_mount 167

#define SYS_mprotect 74

#define SYS_msgctl 258

#define SYS_msgget 259

#define SYS_msgrcv 261

#define SYS_msgrcv_nocancel 419

#define SYS_msgsnd 260

#define SYS_msgsnd_nocancel 418

#define SYS_msgsys 252

#define SYS_msync 65

#define SYS_msync_nocancel 405

#define SYS_munlock 204

#define SYS_munlockall 325

#define SYS_munmap 73

#define SYS_nfsclnt 247

#define SYS_nfssvc 155

#define SYS_open 5

#define SYS_open_dprotected_np 216

#define SYS_open_extended 277

#define SYS_open_nocancel 398

#define SYS_pathconf 191

#define SYS_peeloff 449

#define SYS_pid_resume 434

#define SYS_pid_suspend 433

#define SYS_pipe 42

#define SYS_poll 230

#define SYS_poll_nocancel 417

#define SYS_posix_spawn 244

#define SYS_pread 153

#define SYS_pread_nocancel 414

#define SYS_proc_info 336

#define SYS_proc_rlimit_control 446

#define SYS_proc_uuid_policy 452

#define SYS_process_policy 323

#define SYS_psynch_cvbroad 303

#define SYS_psynch_cvclrprepost 312

#define SYS_psynch_cvsignal 304

#define SYS_psynch_cvwait 305

#define SYS_psynch_mutexdrop 302

#define SYS_psynch_mutexwait 301

#define SYS_psynch_rw_downgrade 299

#define SYS_psynch_rw_longrdlock 297

#define SYS_psynch_rw_rdlock 306

#define SYS_psynch_rw_unlock 308

#define SYS_psynch_rw_unlock2 309

#define SYS_psynch_rw_upgrade 300

#define SYS_psynch_rw_wrlock 307

#define SYS_psynch_rw_yieldwrlock 298

#define SYS_ptrace 26

#define SYS_pwrite 154

#define SYS_pwrite_nocancel 415

#define SYS_quotactl 165

#define SYS_read 3

#define SYS_read_nocancel 396

#define SYS_readlink 58

#define SYS_readv 120

#define SYS_readv_nocancel 411

#define SYS_reboot 55

#define SYS_recvfrom 29

#define SYS_recvfrom_nocancel 403

#define SYS_recvmsg 27

#define SYS_recvmsg_nocancel 401

#define SYS_removexattr 238

#define SYS_rename 128

#define SYS_revoke 56

#define SYS_rmdir 137

#define SYS_searchfs 225

#define SYS_select 93

#define SYS_select_nocancel 407

#define SYS_sem_close 269

#define SYS_sem_destroy 276

#define SYS_sem_getvalue 274

#define SYS_sem_init 275

#define SYS_sem_open 268

#define SYS_sem_post 273

#define SYS_sem_trywait 272

#define SYS_sem_unlink 270

#define SYS_sem_wait 271

#define SYS_sem_wait_nocancel 420

#define SYS_semctl 254

#define SYS_semget 255

#define SYS_semop 256

#define SYS_semsys 251

#define SYS_sendfile 337

#define SYS_sendmsg 28

#define SYS_sendmsg_nocancel 402

#define SYS_sendto 133

#define SYS_sendto_nocancel 413

#define SYS_setattrlist 221

#define SYS_setaudit_addr 358

#define SYS_setauid 354

#define SYS_setegid 182

#define SYS_seteuid 183

#define SYS_setgid 181

#define SYS_setgroups 80

#define SYS_setitimer 83

#define SYS_setlcid 394

#define SYS_setlogin 50

#define SYS_setpgid 82

#define SYS_setpriority 96

#define SYS_setprivexec 152

#define SYS_setregid 127

#define SYS_setreuid 126

#define SYS_setrlimit 195

#define SYS_setsgroups 287

#define SYS_setsid 147

#define SYS_setsockopt 105

#define SYS_settid 285

#define SYS_settid_with_pid 311

#define SYS_settimeofday 122

#define SYS_setuid 23

#define SYS_setwgroups 289

#define SYS_setxattr 236

#define SYS_shared_region_check_np 294

#define SYS_shared_region_map_and_slide_np 438

#define SYS_shm_open 266

#define SYS_shm_unlink 267

#define SYS_shmat 262

#define SYS_shmctl 263

#define SYS_shmdt 264

#define SYS_shmget 265

#define SYS_shmsys 253

#define SYS_shutdown 134

#define SYS_sigaction 46

#define SYS_sigaltstack 53

#define SYS_sigpending 52

#define SYS_sigprocmask 48

#define SYS_sigreturn 184

#define SYS_sigsuspend 111

#define SYS_sigsuspend_nocancel 410

#define SYS_socket 97

#define SYS_socket_delegate 450

#define SYS_socketpair 135

#define SYS_stack_snapshot 365

#define SYS_stat 188

#define SYS_stat64 338

#define SYS_stat64_extended 341

#define SYS_stat_extended 279

#define SYS_statfs 157

#define SYS_statfs64 345

#define SYS_swapon 85

#define SYS_symlink 57

#define SYS_sync 36

#define SYS_syscall 0

#define SYS_system_override 454

#define SYS_telemetry 451

#define SYS_thread_selfid 372

#define SYS_truncate 200

#define SYS_umask 60

#define SYS_umask_extended 278

#define SYS_undelete 205

#define SYS_unlink 10

#define SYS_unmount 159

#define SYS_utimes 138

#define SYS_vfork 66

#define SYS_vfs_purge 455

#define SYS_vm_pressure_monitor 296

#define SYS_wait4 7

#define SYS_wait4_nocancel 400

#define SYS_waitevent 232

#define SYS_waitid 173

#define SYS_waitid_nocancel 416

#define SYS_watchevent 231

#define SYS_workq_kernreturn 368

#define SYS_workq_open 367

#define SYS_write 4

#define SYS_write_nocancel 397

#define SYS_writev 121

#define SYS_writev_nocancel 412

#define COMAPT_MAXLOGNAME 12

#define CTL_DEBUG 5

#define CTL_DEBUG_MAXID 20

#define CTL_DEBUG_NAME 0

#define CTL_DEBUG_VALUE 1

#define CTL_HW 6

#define CTL_KERN 1

#define CTL_MACHDEP 7

#define CTL_MAXID 9

#define CTL_MAXNAME 12

#define CTL_NET 4

#define CTL_UNSPEC 0

#define CTL_USER 8

#define CTL_VFS 3

#define CTL_VM 2

#define CTLFLAG_ANYBODY 268435456

#define CTLFLAG_KERN 16777216

#define CTLFLAG_LOCKED 8388608

#define CTLFLAG_MASKED 67108864

#define CTLFLAG_NOAUTO 33554432

#define CTLFLAG_NOLOCK 536870912

#define CTLFLAG_OID2 4194304

#define CTLFLAG_RD 2147483648

#define CTLFLAG_RW 3221225472

#define CTLFLAG_SECURE 134217728

#define CTLFLAG_WR 1073741824

#define CTLTYPE 15

#define CTLTYPE_INT 2

#define CTLTYPE_NODE 1

#define CTLTYPE_OPAQUE 5

#define CTLTYPE_QUAD 4

#define CTLTYPE_STRING 3

#define CTLTYPE_STRUCT 5

#define EPROC_CTTY 1

#define EPROC_SLEADER 2

#define HW_AVAILCPU 25

#define HW_BUS_FREQ 14

#define HW_BYTEORDER 4

#define HW_CACHELINE 16

#define HW_CPU_FREQ 15

#define HW_DISKNAMES 8

#define HW_DISKSTATS 9

#define HW_EPOCH 10

#define HW_FLOATINGPT 11

#define HW_L1DCACHESIZE 18

#define HW_L1ICACHESIZE 17

#define HW_L2CACHESIZE 20

#define HW_L2SETTINGS 19

#define HW_L3CACHESIZE 22

#define HW_L3SETTINGS 21

#define HW_MACHINE 1

#define HW_MACHINE_ARCH 12

#define HW_MAXID 26

#define HW_MEMSIZE 24

#define HW_MODEL 2

#define HW_NCPU 3

#define HW_PAGESIZE 7

#define HW_PHYSMEM 5

#define HW_TB_FREQ 23

#define HW_USERMEM 6

#define HW_VECTORUNIT 13

#define KERN_AFFINITY 43

#define KERN_AIOMAX 46

#define KERN_AIOPROCMAX 47

#define KERN_AIOTHREADS 48

#define KERN_ARGMAX 8

#define KERN_BOOTFILE 28

#define KERN_BOOTTIME 21

#define KERN_CHECKOPENEVT 70

#define KERN_CLASSIC 44

#define KERN_CLASSICHANDLER 45

#define KERN_CLOCKRATE 12

#define KERN_COREDUMP 51

#define KERN_COREFILE 50

#define KERN_DOMAINNAME 22

#define KERN_DUMMY 33

#define KERN_DUMPDEV 31

#define KERN_EXEC 45

#define KERN_FILE 15

#define KERN_HOSTID 11

#define KERN_HOSTNAME 10

#define KERN_IPC 32

#define KERN_JOB_CONTROL 19

#define KERN_KDBUFWAIT 23

#define KERN_KDCPUMAP 24

#define KERN_KDDFLAGS 2

#define KERN_KDDISABLE_BG_TRACE 20

#define KERN_KDEBUG 24

#define KERN_KDEFLAGS 1

#define KERN_KDENABLE 3

#define KERN_KDENABLE_BG_TRACE 19

#define KERN_KDGETBUF 5

#define KERN_KDGETENTROPY 16

#define KERN_KDGETREG 9

#define KERN_KDPIDEX 14

#define KERN_KDPIDTR 11

#define KERN_KDREADCURTHRMAP 21

#define KERN_KDREADTR 10

#define KERN_KDREMOVE 7

#define KERN_KDSET_TYPEFILTER 22

#define KERN_KDSETBUF 4

#define KERN_KDSETREG 8

#define KERN_KDSETRTCDEC 15

#define KERN_KDSETUP 6

#define KERN_KDTHRMAP 12

#define KERN_KDWRITEMAP 18

#define KERN_KDWRITETR 17

#define KERN_LCTX 67

#define KERN_LCTX_ALL 0

#define KERN_LCTX_LCID 1

#define KERN_LOGSIGEXIT 36

#define KERN_LOW_PRI_DELAY 57

#define KERN_LOW_PRI_WINDOW 56

#define KERN_MAXFILES 7

#define KERN_MAXFILESPERPROC 29

#define KERN_MAXID 72

#define KERN_MAXPARTITIONS 23

#define KERN_MAXPROC 6

#define KERN_MAXPROCPERUID 30

#define KERN_MAXVNODES 5

#define KERN_NETBOOT 40

#define KERN_NGROUPS 18

#define KERN_NISDOMAINNAME 22

#define KERN_NTP_PLL 27

#define KERN_NX_PROTECTION 60

#define KERN_OPENEVT_PROC 1

#define KERN_OSRELDATE 26

#define KERN_OSRELEASE 2

#define KERN_OSREV 3

#define KERN_OSTYPE 1

#define KERN_OSVERSION 65

#define KERN_POSIX 58

#define KERN_POSIX1 17

#define KERN_PROC 14

#define KERN_PROC_ALL 0

#define KERN_PROC_LCID 7

#define KERN_PROC_PGRP 2

#define KERN_PROC_PID 1

#define KERN_PROC_RUID 6

#define KERN_PROC_SESSION 3

#define KERN_PROC_TTY 4

#define KERN_PROC_UID 5

#define KERN_PROCARGS 38

#define KERN_PROCARGS2 49

#define KERN_PROCDELAYTERM 53

#define KERN_PROCNAME 62

#define KERN_PROF 16

#define KERN_PS_STRINGS 34

#define KERN_RAGE_PROC 1

#define KERN_RAGE_THREAD 2

#define KERN_RAGEVNODE 68

#define KERN_SAFEBOOT 66

#define KERN_SAVED_IDS 20

#define KERN_SECURELVL 9

#define KERN_SHREG_PRIVATIZABLE 54

#define KERN_SPECULATIVE_READS 64

#define KERN_SUGID_COREDUMP 52

#define KERN_SYMFILE 37

#define KERN_SYSV 42

#define KERN_TFP 61

#define KERN_TFP_POLICY 1

#define KERN_TFP_POLICY_DEFAULT 2

#define KERN_TFP_POLICY_DENY 0

#define KERN_THALTSTACK 63

#define KERN_THREADNAME 71

#define KERN_TRANSLATE 44

#define KERN_TTY 69

#define KERN_UNOPENEVT_PROC 2

#define KERN_UNRAGE_PROC 3

#define KERN_UNRAGE_THREAD 4

#define KERN_UPDATEINTERVAL 25

#define KERN_USRSTACK 59

#define KERN_USRSTACK32 35

#define KERN_USRSTACK64 59

#define KERN_VERSION 4

#define KERN_VNODE 13

#define KIPC_MAX_DATALEN 7

#define KIPC_MAX_HDR 6

#define KIPC_MAX_LINKHDR 4

#define KIPC_MAX_PROTOHDR 5

#define KIPC_MAXSOCKBUF 1

#define KIPC_MBSTAT 8

#define KIPC_NMBCLUSTERS 9

#define KIPC_SOCKBUF_WASTE 2

#define KIPC_SOMAXCONN 3

#define KIPC_SOQLIMITCOMPAT 10

#define LSCALE 1000

#define OID_AUTO -1

#define OID_AUTO_START 100

#define USER_BC_BASE_MAX 2

#define USER_BC_DIM_MAX 3

#define USER_BC_SCALE_MAX 4

#define USER_BC_STRING_MAX 5

#define USER_COLL_WEIGHTS_MAX 6

#define USER_CS_PATH 1

#define USER_EXPR_NEST_MAX 7

#define USER_LINE_MAX 8

#define USER_MAXID 21

#define USER_POSIX2_C_BIND 11

#define USER_POSIX2_C_DEV 12

#define USER_POSIX2_CHAR_TERM 13

#define USER_POSIX2_FORT_DEV 14

#define USER_POSIX2_FORT_RUN 15

#define USER_POSIX2_LOCALEDEF 16

#define USER_POSIX2_SW_DEV 17

#define USER_POSIX2_UPE 18

#define USER_POSIX2_VERSION 10

#define USER_RE_DUP_MAX 9

#define USER_STREAM_MAX 19

#define USER_TZNAME_MAX 20

#define VM_LOADAVG 2

#define VM_MACHFACTOR 4

#define VM_MAXID 6

#define VM_METER 1

#define VM_SWAPUSAGE 5

#define WMESGLEN 7

typedef struct _pcred _pcred, *P_pcred;

typedef struct ucred ucred, *Pucred;

typedef struct _struct_293 _struct_293, *P_struct_293;

typedef struct posix_cred posix_cred, *Pposix_cred;

struct _pcred {
    char pc_lock[72];
    struct ucred * pc_ucred;
    uid_t p_ruid;
    uid_t p_svuid;
    gid_t p_rgid;
    gid_t p_svgid;
    int p_refcnt;
};

struct posix_cred {
    uid_t cr_uid;
    uid_t cr_ruid;
    uid_t cr_svuid;
    short cr_ngroups;
    gid_t cr_groups[16];
    gid_t cr_rgid;
    gid_t cr_svgid;
    uid_t cr_gmuid;
    int cr_flags;
};

struct _struct_293 {
    struct ucred * tqe_next;
    struct ucred * * tqe_prev;
};

struct ucred {
    struct _struct_293 cr_link;
    u_long cr_ref;
    struct posix_cred cr_posix;
    struct label * cr_label;
    struct au_session cr_audit;
};

typedef struct _ucred _ucred, *P_ucred;

struct _ucred {
    int32_t cr_ref;
    uid_t cr_uid;
    short cr_ngroups;
    gid_t cr_groups[16];
};

typedef struct ctlname ctlname, *Pctlname;

struct ctlname {
    char * ctl_name;
    int ctl_type;
};

typedef struct eproc eproc, *Peproc;

typedef int32_t segsz_t;

struct eproc {
    struct proc * e_paddr;
    struct session * e_sess;
    struct _pcred e_pcred;
    struct _ucred e_ucred;
    struct vmspace e_vm;
    pid_t e_ppid;
    pid_t e_pgid;
    short e_jobc;
    dev_t e_tdev;
    pid_t e_tpgid;
    struct session * e_tsess;
    char e_wmesg[8];
    segsz_t e_xsize;
    short e_xrssize;
    short e_xccount;
    short e_xswrss;
    int32_t e_flag;
    char e_login[12];
    int32_t e_spare[4];
};

typedef struct kinfo_lctx kinfo_lctx, *Pkinfo_lctx;

struct kinfo_lctx {
    pid_t id;
    int mc;
};

typedef struct kinfo_proc kinfo_proc, *Pkinfo_proc;

struct kinfo_proc {
    struct extern_proc kp_proc;
    struct eproc kp_eproc;
};

typedef struct loadavg loadavg, *Ploadavg;

struct loadavg {
    fixpt_t ldavg[3];
    long fscale;
};

typedef struct xsw_usage xsw_usage, *Pxsw_usage;

struct xsw_usage {
    u_int64_t xsu_total;
    u_int64_t xsu_avail;
    u_int64_t xsu_used;
    u_int32_t xsu_pagesize;
    boolean_t xsu_encrypted;
};

#define ARG_MAX 262144

#define BC_BASE_MAX 99

#define BC_DIM_MAX 2048

#define BC_SCALE_MAX 99

#define BC_STRING_MAX 1000

#define CHARCLASS_NAME_MAX 14

#define CHILD_MAX 266

#define COLL_WEIGHTS_MAX 2

#define EQUIV_CLASS_MAX 2

#define EXPR_NEST_MAX 32

#define GID_MAX 2147483647

#define LINE_MAX 2048

#define LINK_MAX 32767

#define MAX_CANON 1024

#define MAX_INPUT 1024

#define NAME_MAX 255

#define NGROUPS_MAX 16

#define NZERO 20

#define OPEN_MAX 10240

#define PATH_MAX 1024

#define PIPE_BUF 512

#define RE_DUP_MAX 255

#define UID_MAX 2147483647

#define DESC_TBL_MAX 8192

typedef union dt_entry dt_entry, *Pdt_entry;

typedef struct tss_desc tss_desc, *Ptss_desc;

typedef struct tss_desc tss_desc_t;

typedef struct task_gate task_gate, *Ptask_gate;

typedef struct task_gate task_gate_t;

typedef union anon__struct_573_bitfield_1 anon__struct_573_bitfield_1, *Panon__struct_573_bitfield_1;

typedef union anon__struct_573_bitfield_2 anon__struct_573_bitfield_2, *Panon__struct_573_bitfield_2;

typedef union anon__struct_574_bitfield_1 anon__struct_574_bitfield_1, *Panon__struct_574_bitfield_1;

union anon__struct_573_bitfield_1 {
    uchar type:5; /* : bits 0-4 */
    uchar dpl:2; /* : bits 5-6 */
    uchar present:1; /* : bits 7 */
};

union anon__struct_573_bitfield_2 {
    uchar limit16:4; /* : bits 0-3 */
    uchar granular:1; /* : bits 4 */
};

struct tss_desc {
    ushort limit00;
    ushort base00;
    uchar base16;
    union anon__struct_573_bitfield_1 field_0x5;
    union anon__struct_573_bitfield_2 field_0x6;
    uchar base24;
};

union anon__struct_574_bitfield_1 {
    uint type:5; /* : bits 0-4 */
    uint dpl:2; /* : bits 5-6 */
    uint present:1; /* : bits 7 */
};

struct task_gate {
    sel_t tss;
    union anon__struct_574_bitfield_1 field_0x2;
};

union dt_entry {
    code_desc_t code;
    data_desc_t data;
    ldt_desc_t ldt;
    tss_desc_t task_state;
    call_gate_t call_gate;
    trap_gate_t trap_gate;
    intr_gate_t intr_gate;
    task_gate_t task_gate;
};

typedef union dt_entry dt_entry_t;

typedef union gdt_entry gdt_entry, *Pgdt_entry;

union gdt_entry {
    code_desc_t code;
    data_desc_t data;
    ldt_desc_t ldt;
    call_gate_t call_gate;
    task_gate_t task_gate;
    tss_desc_t task_state;
};

typedef union gdt_entry gdt_entry_t;

typedef gdt_entry_t gdt_t;

typedef union idt_entry idt_entry, *Pidt_entry;

union idt_entry {
    trap_gate_t trap_gate;
    intr_gate_t intr_gate;
    task_gate_t task_gate;
};

typedef union idt_entry idt_entry_t;

typedef idt_entry_t idt_t;

typedef union ldt_entry ldt_entry, *Pldt_entry;

union ldt_entry {
    code_desc_t code;
    data_desc_t data;
    call_gate_t call_gate;
    task_gate_t task_gate;
};

typedef union ldt_entry ldt_entry_t;

typedef ldt_entry_t ldt_t;

#define ANNOUNCE 3

#define BADADDR 7

#define BADCTLADDR 8

#define BADVERSION 6

#define DELETE 2

#define FAILED 2

#define LEAVE_INVITE 0

#define LOOK_UP 1

#define MACHINE_UNKNOWN 3

#define MAX_LIFE 60

#define NAME_SIZE 12

#define NOT_HERE 1

#define PERMISSION_DENIED 4

#define RING_WAIT 30

#define SUCCESS 0

#define TALK_VERSION 1

#define TTY_SIZE 16

#define UNKNOWN_REQUEST 5

typedef struct CTL_MSG CTL_MSG, *PCTL_MSG;

typedef struct osockaddr osockaddr, *Posockaddr;

struct osockaddr {
    __uint16_t sa_family;
    char sa_data[14];
};

struct CTL_MSG {
    uchar vers;
    uchar type;
    uchar answer;
    uchar pad;
    uint id_num;
    struct osockaddr addr;
    struct osockaddr ctl_addr;
    int pid;
    char l_name[12];
    char r_name[12];
    char r_tty[16];
};

typedef struct CTL_RESPONSE CTL_RESPONSE, *PCTL_RESPONSE;

struct CTL_RESPONSE {
    uchar vers;
    uchar type;
    uchar answer;
    uchar pad;
    uint id_num;
    struct osockaddr addr;
};

#define TARGET_CPU_68K 0

#define TARGET_CPU_ALPHA 0

#define TARGET_CPU_ARM 0

#define TARGET_CPU_MIPS 0

#define TARGET_CPU_PPC 0

#define TARGET_CPU_PPC64 0

#define TARGET_CPU_SPARC 0

#define TARGET_CPU_X86 1

#define TARGET_CPU_X86_64 0

#define TARGET_IPHONE_SIMULATOR 0

#define TARGET_OS_EMBEDDED 0

#define TARGET_OS_IPHONE 0

#define TARGET_OS_MAC 1

#define TARGET_OS_UNIX 0

#define TARGET_OS_WIN32 0

#define TARGET_RT_64_BIT 0

#define TARGET_RT_BIG_ENDIAN 0

#define TARGET_RT_LITTLE_ENDIAN 1

#define TARGET_RT_MAC_CFM 0

#define TARGET_RT_MAC_MACHO 1

#define task_MSG_COUNT 39

typedef struct __Reply__lock_set_create_t __Reply__lock_set_create_t, *P__Reply__lock_set_create_t;

struct __Reply__lock_set_create_t {
    struct mach_msg_header_t Head;
    struct mach_msg_body_t msgh_body;
    struct mach_msg_port_descriptor_t new_lock_set;
};

typedef struct __Reply__lock_set_destroy_t __Reply__lock_set_destroy_t, *P__Reply__lock_set_destroy_t;

struct __Reply__lock_set_destroy_t {
    struct mach_msg_header_t Head;
    struct NDR_record_t NDR;
    kern_return_t RetCode;
};

typedef struct __Reply__mach_ports_lookup_t __Reply__mach_ports_lookup_t, *P__Reply__mach_ports_lookup_t;

struct __Reply__mach_ports_lookup_t {
    struct mach_msg_header_t Head;
    struct mach_msg_body_t msgh_body;
    struct mach_msg_ool_ports_descriptor_t init_port_set;
    struct NDR_record_t NDR;
    mach_msg_type_number_t init_port_setCnt;
};

typedef struct __Reply__mach_ports_register_t __Reply__mach_ports_register_t, *P__Reply__mach_ports_register_t;

struct __Reply__mach_ports_register_t {
    struct mach_msg_header_t Head;
    struct NDR_record_t NDR;
    kern_return_t RetCode;
};

typedef struct __Reply__semaphore_create_t __Reply__semaphore_create_t, *P__Reply__semaphore_create_t;

struct __Reply__semaphore_create_t {
    struct mach_msg_header_t Head;
    struct mach_msg_body_t msgh_body;
    struct mach_msg_port_descriptor_t semaphore;
};

typedef struct __Reply__semaphore_destroy_t __Reply__semaphore_destroy_t, *P__Reply__semaphore_destroy_t;

struct __Reply__semaphore_destroy_t {
    struct mach_msg_header_t Head;
    struct NDR_record_t NDR;
    kern_return_t RetCode;
};

typedef struct __Reply__task_assign_default_t __Reply__task_assign_default_t, *P__Reply__task_assign_default_t;

struct __Reply__task_assign_default_t {
    struct mach_msg_header_t Head;
    struct NDR_record_t NDR;
    kern_return_t RetCode;
};

typedef struct __Reply__task_assign_t __Reply__task_assign_t, *P__Reply__task_assign_t;

struct __Reply__task_assign_t {
    struct mach_msg_header_t Head;
    struct NDR_record_t NDR;
    kern_return_t RetCode;
};

typedef struct __Reply__task_create_t __Reply__task_create_t, *P__Reply__task_create_t;

struct __Reply__task_create_t {
    struct mach_msg_header_t Head;
    struct mach_msg_body_t msgh_body;
    struct mach_msg_port_descriptor_t child_task;
};

typedef struct __Reply__task_get_assignment_t __Reply__task_get_assignment_t, *P__Reply__task_get_assignment_t;

struct __Reply__task_get_assignment_t {
    struct mach_msg_header_t Head;
    struct mach_msg_body_t msgh_body;
    struct mach_msg_port_descriptor_t assigned_set;
};

typedef struct __Reply__task_get_emulation_vector_t __Reply__task_get_emulation_vector_t, *P__Reply__task_get_emulation_vector_t;

struct __Reply__task_get_emulation_vector_t {
    struct mach_msg_header_t Head;
    struct mach_msg_body_t msgh_body;
    struct mach_msg_ool_descriptor_t emulation_vector;
    struct NDR_record_t NDR;
    int vector_start;
    mach_msg_type_number_t emulation_vectorCnt;
};

typedef struct __Reply__task_get_exception_ports_t __Reply__task_get_exception_ports_t, *P__Reply__task_get_exception_ports_t;

struct __Reply__task_get_exception_ports_t {
    struct mach_msg_header_t Head;
    struct mach_msg_body_t msgh_body;
    struct mach_msg_port_descriptor_t old_handlers[32];
    struct NDR_record_t NDR;
    mach_msg_type_number_t masksCnt;
    exception_mask_t masks[32];
    exception_behavior_t old_behaviors[32];
    thread_state_flavor_t old_flavors[32];
};

typedef struct __Reply__task_get_special_port_t __Reply__task_get_special_port_t, *P__Reply__task_get_special_port_t;

struct __Reply__task_get_special_port_t {
    struct mach_msg_header_t Head;
    struct mach_msg_body_t msgh_body;
    struct mach_msg_port_descriptor_t special_port;
};

typedef struct __Reply__task_get_state_t __Reply__task_get_state_t, *P__Reply__task_get_state_t;

struct __Reply__task_get_state_t {
    struct mach_msg_header_t Head;
    struct NDR_record_t NDR;
    kern_return_t RetCode;
    mach_msg_type_number_t old_stateCnt;
    natural_t old_state[224];
};

typedef struct __Reply__task_info_t __Reply__task_info_t, *P__Reply__task_info_t;

struct __Reply__task_info_t {
    struct mach_msg_header_t Head;
    struct NDR_record_t NDR;
    kern_return_t RetCode;
    mach_msg_type_number_t task_info_outCnt;
    integer_t task_info_out[52];
};

typedef struct __Reply__task_policy_get_t __Reply__task_policy_get_t, *P__Reply__task_policy_get_t;

struct __Reply__task_policy_get_t {
    struct mach_msg_header_t Head;
    struct NDR_record_t NDR;
    kern_return_t RetCode;
    mach_msg_type_number_t policy_infoCnt;
    integer_t policy_info[16];
    boolean_t get_default;
};

typedef struct __Reply__task_policy_set_t __Reply__task_policy_set_t, *P__Reply__task_policy_set_t;

struct __Reply__task_policy_set_t {
    struct mach_msg_header_t Head;
    struct NDR_record_t NDR;
    kern_return_t RetCode;
};

typedef struct __Reply__task_policy_t __Reply__task_policy_t, *P__Reply__task_policy_t;

struct __Reply__task_policy_t {
    struct mach_msg_header_t Head;
    struct NDR_record_t NDR;
    kern_return_t RetCode;
};

typedef struct __Reply__task_purgable_info_t __Reply__task_purgable_info_t, *P__Reply__task_purgable_info_t;

typedef struct vm_purgeable_info task_purgable_info_t;

struct __Reply__task_purgable_info_t {
    struct mach_msg_header_t Head;
    struct NDR_record_t NDR;
    kern_return_t RetCode;
    task_purgable_info_t stats;
};

typedef struct __Reply__task_resume2_t __Reply__task_resume2_t, *P__Reply__task_resume2_t;

struct __Reply__task_resume2_t {
    struct mach_msg_header_t Head;
    struct NDR_record_t NDR;
    kern_return_t RetCode;
};

typedef struct __Reply__task_resume_t __Reply__task_resume_t, *P__Reply__task_resume_t;

struct __Reply__task_resume_t {
    struct mach_msg_header_t Head;
    struct NDR_record_t NDR;
    kern_return_t RetCode;
};

typedef struct __Reply__task_sample_t __Reply__task_sample_t, *P__Reply__task_sample_t;

struct __Reply__task_sample_t {
    struct mach_msg_header_t Head;
    struct NDR_record_t NDR;
    kern_return_t RetCode;
};

typedef struct __Reply__task_set_emulation_t __Reply__task_set_emulation_t, *P__Reply__task_set_emulation_t;

struct __Reply__task_set_emulation_t {
    struct mach_msg_header_t Head;
    struct NDR_record_t NDR;
    kern_return_t RetCode;
};

typedef struct __Reply__task_set_emulation_vector_t __Reply__task_set_emulation_vector_t, *P__Reply__task_set_emulation_vector_t;

struct __Reply__task_set_emulation_vector_t {
    struct mach_msg_header_t Head;
    struct NDR_record_t NDR;
    kern_return_t RetCode;
};

typedef struct __Reply__task_set_exception_ports_t __Reply__task_set_exception_ports_t, *P__Reply__task_set_exception_ports_t;

struct __Reply__task_set_exception_ports_t {
    struct mach_msg_header_t Head;
    struct NDR_record_t NDR;
    kern_return_t RetCode;
};

typedef struct __Reply__task_set_info_t __Reply__task_set_info_t, *P__Reply__task_set_info_t;

struct __Reply__task_set_info_t {
    struct mach_msg_header_t Head;
    struct NDR_record_t NDR;
    kern_return_t RetCode;
};

typedef struct __Reply__task_set_phys_footprint_limit_t __Reply__task_set_phys_footprint_limit_t, *P__Reply__task_set_phys_footprint_limit_t;

struct __Reply__task_set_phys_footprint_limit_t {
    struct mach_msg_header_t Head;
    struct NDR_record_t NDR;
    kern_return_t RetCode;
    int old_limit;
};

typedef struct __Reply__task_set_policy_t __Reply__task_set_policy_t, *P__Reply__task_set_policy_t;

struct __Reply__task_set_policy_t {
    struct mach_msg_header_t Head;
    struct NDR_record_t NDR;
    kern_return_t RetCode;
};

typedef struct __Reply__task_set_ras_pc_t __Reply__task_set_ras_pc_t, *P__Reply__task_set_ras_pc_t;

struct __Reply__task_set_ras_pc_t {
    struct mach_msg_header_t Head;
    struct NDR_record_t NDR;
    kern_return_t RetCode;
};

typedef struct __Reply__task_set_special_port_t __Reply__task_set_special_port_t, *P__Reply__task_set_special_port_t;

struct __Reply__task_set_special_port_t {
    struct mach_msg_header_t Head;
    struct NDR_record_t NDR;
    kern_return_t RetCode;
};

typedef struct __Reply__task_set_state_t __Reply__task_set_state_t, *P__Reply__task_set_state_t;

struct __Reply__task_set_state_t {
    struct mach_msg_header_t Head;
    struct NDR_record_t NDR;
    kern_return_t RetCode;
};

typedef struct __Reply__task_suspend2_t __Reply__task_suspend2_t, *P__Reply__task_suspend2_t;

struct __Reply__task_suspend2_t {
    struct mach_msg_header_t Head;
    struct mach_msg_body_t msgh_body;
    struct mach_msg_port_descriptor_t suspend_token;
};

typedef struct __Reply__task_suspend_t __Reply__task_suspend_t, *P__Reply__task_suspend_t;

struct __Reply__task_suspend_t {
    struct mach_msg_header_t Head;
    struct NDR_record_t NDR;
    kern_return_t RetCode;
};

typedef struct __Reply__task_swap_exception_ports_t __Reply__task_swap_exception_ports_t, *P__Reply__task_swap_exception_ports_t;

struct __Reply__task_swap_exception_ports_t {
    struct mach_msg_header_t Head;
    struct mach_msg_body_t msgh_body;
    struct mach_msg_port_descriptor_t old_handlerss[32];
    struct NDR_record_t NDR;
    mach_msg_type_number_t masksCnt;
    exception_mask_t masks[32];
    exception_behavior_t old_behaviors[32];
    thread_state_flavor_t old_flavors[32];
};

typedef struct __Reply__task_terminate_t __Reply__task_terminate_t, *P__Reply__task_terminate_t;

struct __Reply__task_terminate_t {
    struct mach_msg_header_t Head;
    struct NDR_record_t NDR;
    kern_return_t RetCode;
};

typedef struct __Reply__task_threads_t __Reply__task_threads_t, *P__Reply__task_threads_t;

struct __Reply__task_threads_t {
    struct mach_msg_header_t Head;
    struct mach_msg_body_t msgh_body;
    struct mach_msg_ool_ports_descriptor_t act_list;
    struct NDR_record_t NDR;
    mach_msg_type_number_t act_listCnt;
};

typedef struct __Reply__task_zone_info_t __Reply__task_zone_info_t, *P__Reply__task_zone_info_t;

struct __Reply__task_zone_info_t {
    struct mach_msg_header_t Head;
    struct mach_msg_body_t msgh_body;
    struct mach_msg_ool_descriptor_t names;
    struct mach_msg_ool_descriptor_t info;
    struct NDR_record_t NDR;
    mach_msg_type_number_t namesCnt;
    mach_msg_type_number_t infoCnt;
};

typedef struct __Reply__thread_create_running_t __Reply__thread_create_running_t, *P__Reply__thread_create_running_t;

struct __Reply__thread_create_running_t {
    struct mach_msg_header_t Head;
    struct mach_msg_body_t msgh_body;
};


