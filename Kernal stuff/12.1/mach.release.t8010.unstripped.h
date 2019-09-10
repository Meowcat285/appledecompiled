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

typedef __int32_t __darwin_dev_t;

typedef __darwin_dev_t dev_t;

typedef int errno_t;

typedef struct fd_set fd_set, *Pfd_set;

struct fd_set {
    __int32_t[0] fds_bits;
};

typedef uint __uint32_t;

typedef __uint32_t __darwin_gid_t;

typedef __darwin_gid_t gid_t;

typedef __uint32_t __darwin_id_t;

typedef __darwin_id_t id_t;

typedef __uint32_t in_addr_t;

typedef short int16_t;

typedef int int32_t;

typedef longlong int64_t;

typedef long __darwin_intptr_t;

typedef __darwin_intptr_t intptr_t;

typedef struct iovec iovec, *Piovec;

typedef ulong __darwin_size_t;

typedef __darwin_size_t size_t;

struct iovec {
    void * iov_base;
    size_t iov_len;
};

typedef uint __darwin_natural_t;

typedef __darwin_natural_t __darwin_mach_port_name_t;

typedef __darwin_mach_port_name_t __darwin_mach_port_t;

typedef __darwin_mach_port_t mach_port_t;

typedef ushort __uint16_t;

typedef __uint16_t __darwin_mode_t;

typedef __darwin_mode_t mode_t;

typedef __uint16_t nlink_t;

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

typedef uchar __uint8_t;

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

typedef struct timespec timespec, *Ptimespec;

typedef long __darwin_time_t;

struct timespec {
    __darwin_time_t tv_sec;
    long tv_nsec;
};

typedef struct timeval timeval, *Ptimeval;

typedef __int32_t __darwin_suseconds_t;

struct timeval {
    __darwin_time_t tv_sec;
    __darwin_suseconds_t tv_usec;
};

typedef ulonglong __uint64_t;

typedef __uint64_t __darwin_ino64_t;

typedef __uint32_t __darwin_uid_t;

typedef void * __darwin_va_list;

typedef __darwin_uid_t uid_t;

typedef ushort uint16_t;

typedef uint uint32_t;

typedef ulonglong uint64_t;

typedef ulong uintptr_t;

typedef __darwin_va_list va_list;

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

typedef uint u_int32_t;

typedef u_int32_t attrgroup_t;

typedef struct attrlist attrlist, *Pattrlist;

typedef ushort u_short;

typedef ushort u_int16_t;

struct attrlist {
    u_short bitmapcount;
    u_int16_t reserved;
    attrgroup_t commonattr;
    attrgroup_t volattr;
    attrgroup_t dirattr;
    attrgroup_t fileattr;
    attrgroup_t forkattr;
};

typedef ulonglong u_int64_t;

typedef u_int64_t au_asflgs_t;

typedef pid_t au_asid_t;

typedef uid_t au_id_t;

typedef struct au_mask au_mask, *Pau_mask;

struct au_mask {
    uint am_success;
    uint am_failure;
};

typedef struct au_mask au_mask_t;

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

typedef struct kevent kevent, *Pkevent;

struct kevent {
    uintptr_t ident;
    int16_t filter;
    uint16_t flags;
    uint32_t fflags;
    intptr_t data;
    void * udata;
};

typedef uint boolean_t;

typedef int clock_res_t;

typedef struct mach_timespec mach_timespec, *Pmach_timespec;

struct mach_timespec {
    uint tv_sec;
    clock_res_t tv_nsec;
};

typedef struct mach_timespec mach_timespec_t;

typedef int sleep_type_t;

typedef struct buf buf, *Pbuf;

struct buf {
};

typedef struct uio uio, *Puio;

struct uio {
};

typedef struct _copyfile_state _copyfile_state, *P_copyfile_state;

struct _copyfile_state {
};

typedef uint32_t copyfile_flags_t;

typedef struct _copyfile_state * copyfile_state_t;

typedef struct MetaClass MetaClass, *PMetaClass;

struct MetaClass { /* PlaceHolder Structure */
};

typedef struct InitElement InitElement, *PInitElement;

struct InitElement { /* PlaceHolder Structure */
};

typedef dword MappingOptions;

typedef dword Segment64;

typedef struct SegmentOptions SegmentOptions, *PSegmentOptions;

struct SegmentOptions { /* PlaceHolder Structure */
};

typedef dword PhysicalSegment;

typedef dword FullWakeReason;

typedef dword valueSelector;

typedef dword change_t;

typedef dword ...;

typedef struct _IOServiceJob _IOServiceJob, *P_IOServiceJob;

struct _IOServiceJob { /* PlaceHolder Structure */
};

typedef struct _IOServiceNotifier _IOServiceNotifier, *P_IOServiceNotifier;

struct _IOServiceNotifier { /* PlaceHolder Structure */
};

typedef struct _vm_map _vm_map, *P_vm_map;

struct _vm_map { /* PlaceHolder Structure */
};

typedef dword firehose_tracepoint_code_t;

typedef struct IODeviceMemory IODeviceMemory, *PIODeviceMemory;

struct IODeviceMemory { /* PlaceHolder Structure */
};

typedef struct IODMACommand IODMACommand, *PIODMACommand;

struct IODMACommand { /* PlaceHolder Structure */
};

typedef struct IODMAMapSpecification IODMAMapSpecification, *PIODMAMapSpecification;

struct IODMAMapSpecification { /* PlaceHolder Structure */
};

typedef struct IOEventSource IOEventSource, *PIOEventSource;

struct IOEventSource { /* PlaceHolder Structure */
};

typedef struct IOExternalMethodArguments IOExternalMethodArguments, *PIOExternalMethodArguments;

struct IOExternalMethodArguments { /* PlaceHolder Structure */
};

typedef struct IOExternalMethodDispatch IOExternalMethodDispatch, *PIOExternalMethodDispatch;

struct IOExternalMethodDispatch { /* PlaceHolder Structure */
};

typedef struct IOHistogramSegmentConfig IOHistogramSegmentConfig, *PIOHistogramSegmentConfig;

struct IOHistogramSegmentConfig { /* PlaceHolder Structure */
};

typedef struct IOInterruptController IOInterruptController, *PIOInterruptController;

struct IOInterruptController { /* PlaceHolder Structure */
};

typedef struct IOInterruptVector IOInterruptVector, *PIOInterruptVector;

struct IOInterruptVector { /* PlaceHolder Structure */
};

typedef struct IOMapper IOMapper, *PIOMapper;

struct IOMapper { /* PlaceHolder Structure */
};

typedef struct IOMemoryDescriptor IOMemoryDescriptor, *PIOMemoryDescriptor;

struct IOMemoryDescriptor { /* PlaceHolder Structure */
};

typedef struct IOMemoryMap IOMemoryMap, *PIOMemoryMap;

struct IOMemoryMap { /* PlaceHolder Structure */
};

typedef struct IOMemoryReference IOMemoryReference, *PIOMemoryReference;

struct IOMemoryReference { /* PlaceHolder Structure */
};

typedef struct IONotifier IONotifier, *PIONotifier;

struct IONotifier { /* PlaceHolder Structure */
};

typedef struct IONVRAMController IONVRAMController, *PIONVRAMController;

struct IONVRAMController { /* PlaceHolder Structure */
};

typedef struct IONVRAMDescriptor IONVRAMDescriptor, *PIONVRAMDescriptor;

struct IONVRAMDescriptor { /* PlaceHolder Structure */
};

typedef struct iopa_t iopa_t, *Piopa_t;

struct iopa_t { /* PlaceHolder Structure */
};

typedef struct IOPlatformExpert IOPlatformExpert, *PIOPlatformExpert;

struct IOPlatformExpert { /* PlaceHolder Structure */
};

typedef struct IOPMActions IOPMActions, *PIOPMActions;

struct IOPMActions { /* PlaceHolder Structure */
};

typedef struct IOPMDriverCallEntry IOPMDriverCallEntry, *PIOPMDriverCallEntry;

struct IOPMDriverCallEntry { /* PlaceHolder Structure */
};

typedef struct IOPMinformee IOPMinformee, *PIOPMinformee;

struct IOPMinformee { /* PlaceHolder Structure */
};

typedef struct IOPMInterestContext IOPMInterestContext, *PIOPMInterestContext;

struct IOPMInterestContext { /* PlaceHolder Structure */
};

typedef struct IOPMPowerState IOPMPowerState, *PIOPMPowerState;

struct IOPMPowerState { /* PlaceHolder Structure */
};

typedef struct IOPMrootDomain IOPMrootDomain, *PIOPMrootDomain;

struct IOPMrootDomain { /* PlaceHolder Structure */
};

typedef struct IOPowerConnection IOPowerConnection, *PIOPowerConnection;

struct IOPowerConnection { /* PlaceHolder Structure */
};

typedef struct IORegistryEntry IORegistryEntry, *PIORegistryEntry;

struct IORegistryEntry { /* PlaceHolder Structure */
};

typedef struct IORegistryPlane IORegistryPlane, *PIORegistryPlane;

struct IORegistryPlane { /* PlaceHolder Structure */
};

typedef struct IOReportChannelList IOReportChannelList, *PIOReportChannelList;

struct IOReportChannelList { /* PlaceHolder Structure */
};

typedef dword IOReportChannelType;

typedef struct IOReportElementValues IOReportElementValues, *PIOReportElementValues;

struct IOReportElementValues { /* PlaceHolder Structure */
};

typedef struct IOUserClient IOUserClient, *PIOUserClient;

struct IOUserClient { /* PlaceHolder Structure */
};

typedef struct IOVirtualRange IOVirtualRange, *PIOVirtualRange;

struct IOVirtualRange { /* PlaceHolder Structure */
};

typedef struct ipc_port ipc_port, *Pipc_port;

struct ipc_port { /* PlaceHolder Structure */
};

typedef struct kmod_info kmod_info, *Pkmod_info;

struct kmod_info { /* PlaceHolder Structure */
};

typedef dword long_double;

typedef dword long_long;

typedef struct OpaqueDTEntry OpaqueDTEntry, *POpaqueDTEntry;

struct OpaqueDTEntry { /* PlaceHolder Structure */
};

typedef struct OSDictionary OSDictionary, *POSDictionary;

struct OSDictionary { /* PlaceHolder Structure */
};

typedef struct OSNumber OSNumber, *POSNumber;

struct OSNumber { /* PlaceHolder Structure */
};

typedef struct OSObject OSObject, *POSObject;

struct OSObject { /* PlaceHolder Structure */
};

typedef struct OSOrderedSet OSOrderedSet, *POSOrderedSet;

struct OSOrderedSet { /* PlaceHolder Structure */
};

typedef struct OSSerialize OSSerialize, *POSSerialize;

struct OSSerialize { /* PlaceHolder Structure */
};

typedef struct OSString OSString, *POSString;

struct OSString { /* PlaceHolder Structure */
};

typedef struct OSSymbol OSSymbol, *POSSymbol;

struct OSSymbol { /* PlaceHolder Structure */
};

typedef struct OSSymbolPoolState OSSymbolPoolState, *POSSymbolPoolState;

struct OSSymbolPoolState { /* PlaceHolder Structure */
};

typedef struct parser_state parser_state, *Pparser_state;

struct parser_state { /* PlaceHolder Structure */
};

typedef struct semaphore semaphore, *Psemaphore;

struct semaphore { /* PlaceHolder Structure */
};

typedef struct sysctl_oid sysctl_oid, *Psysctl_oid;

struct sysctl_oid { /* PlaceHolder Structure */
};

typedef struct sysctl_req sysctl_req, *Psysctl_req;

struct sysctl_req { /* PlaceHolder Structure */
};

typedef struct task task, *Ptask;

struct task { /* PlaceHolder Structure */
};

typedef struct mach_header mach_header, *Pmach_header;

typedef int integer_t;

typedef integer_t cpu_type_t;

typedef integer_t cpu_subtype_t;

struct mach_header {
    uint32_t magic;
    cpu_type_t cputype;
    cpu_subtype_t cpusubtype;
    uint32_t filetype;
    uint32_t ncmds;
    uint32_t sizeofcmds;
    uint32_t flags;
};

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

typedef int exception_behavior_t;

typedef exception_behavior_t * exception_behavior_array_t;

typedef int thread_state_flavor_t;

typedef thread_state_flavor_t * exception_flavor_array_t;

typedef uint exception_mask_t;

typedef exception_mask_t * exception_mask_array_t;

typedef integer_t host_flavor_t;

typedef integer_t * host_info64_t;

typedef integer_t * host_info_t;

typedef struct in_addr in_addr, *Pin_addr;

struct in_addr {
    in_addr_t s_addr;
};

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

typedef int kern_return_t;

typedef struct __bufattr __bufattr, *P__bufattr;

struct __bufattr {
};

typedef struct buf * buf_t;

typedef struct __bufattr * bufattr_t;

typedef int64_t daddr64_t;

typedef struct proc proc, *Pproc;

typedef struct proc * proc_t;

struct proc {
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

typedef struct segment_command_64 segment_command_64, *Psegment_command_64;

typedef int vm_prot_t;

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

typedef struct mac mac, *Pmac;

struct mac {
    size_t m_buflen;
    char * m_string;
};

typedef struct mac * mac_t;

typedef mach_port_t exception_handler_t;

typedef exception_handler_t * exception_handler_array_t;

typedef mach_port_t host_priv_t;

typedef mach_port_t host_security_t;

typedef mach_port_t host_t;

typedef mach_port_t ipc_space_t;

typedef mach_port_t mem_entry_name_port_t;

typedef mach_port_t processor_t;

typedef mach_port_t semaphore_t;

typedef mach_port_t task_name_t;

typedef mach_port_t task_suspension_token_t;

typedef mach_port_t task_t;

typedef mach_port_t thread_act_t;

typedef struct ARM64_THREAD_STATE ARM64_THREAD_STATE, *PARM64_THREAD_STATE;

struct ARM64_THREAD_STATE {
    qword x0;
    qword x1;
    qword x2;
    qword x3;
    qword x4;
    qword x5;
    qword x6;
    qword x7;
    qword x8;
    qword x9;
    qword x10;
    qword x11;
    qword x12;
    qword x13;
    qword x14;
    qword x15;
    qword x16;
    qword x17;
    qword x18;
    qword x19;
    qword x20;
    qword x21;
    qword x22;
    qword x23;
    qword x24;
    qword x25;
    qword x26;
    qword x27;
    qword x28;
    qword fp;
    qword lr;
    qword sp;
    qword pc;
    dword cpsr;
    dword pad;
};

typedef struct build_tool_version build_tool_version, *Pbuild_tool_version;

struct build_tool_version {
    dword tool;
    dword version;
};

typedef struct build_version_command build_version_command, *Pbuild_version_command;

struct build_version_command {
    dword cmd;
    dword cmdsize;
    dword platform;
    dword minos;
    dword sdk;
    dword ntools;
    struct build_tool_version build_tool_version[][1];
};

typedef struct dysymtab_command dysymtab_command, *Pdysymtab_command;

struct dysymtab_command {
    dword cmd;
    dword cmdsize;
    dword ilocalsym;
    dword nlocalsym;
    dword iextdefsym;
    dword nextdefsym;
    dword iundefsym;
    dword nundefsym;
    dword tocoff;
    dword ntoc;
    dword modtaboff;
    dword nmodtab;
    dword extrefsymoff;
    dword nextrefsyms;
    dword indirectsymoff;
    dword nindirectsyms;
    dword extreloff;
    dword nextrel;
    dword locreloff;
    dword nlocrel;
};

typedef struct linkedit_data_command linkedit_data_command, *Plinkedit_data_command;

struct linkedit_data_command {
    dword cmd;
    dword cmdsize;
    dword dataoff;
    dword datasize;
};


/* WARNING! conflicting data type names: /MachO/mach_header - /dyld_images.h/mach_header */


/* WARNING! conflicting data type names: /MachO/section - /loader.h/section */

typedef struct segment_command segment_command, *Psegment_command;

struct segment_command {
    dword cmd;
    dword cmdsize;
    char segname[16];
    qword vmaddr;
    qword vmsize;
    qword fileoff;
    qword filesize;
    dword maxprot;
    dword initprot;
    dword nsects;
    dword flags;
};

typedef struct source_version_command source_version_command, *Psource_version_command;

struct source_version_command {
    dword cmd;
    dword cmdsize;
    qword version;
};

typedef struct symtab_command symtab_command, *Psymtab_command;

struct symtab_command {
    dword cmd;
    dword cmdsize;
    dword symoff;
    dword nsyms;
    dword stroff;
    dword strsize;
};

typedef struct thread_command thread_command, *Pthread_command;

typedef struct thread_state_hdr thread_state_hdr, *Pthread_state_hdr;

struct thread_state_hdr {
    dword flavor;
    dword count;
};

struct thread_command {
    dword cmd;
    dword cmdsize;
    struct thread_state_hdr threadStateHeader;
    struct ARM64_THREAD_STATE threadState;
};

typedef struct uuid_command uuid_command, *Puuid_command;

struct uuid_command {
    dword cmd;
    dword cmdsize;
    byte uuid[16];
};

typedef uchar UInt8;

typedef UInt8 Byte;

typedef ulonglong memory_object_offset_t;

typedef ulonglong memory_object_size_t;

typedef mach_port_t memory_object_t;

typedef struct audit_token_t audit_token_t, *Paudit_token_t;

struct audit_token_t {
    uint val[8];
};

typedef __darwin_natural_t natural_t;

typedef natural_t mach_msg_timeout_t;

typedef uint mach_msg_type_name_t;

typedef natural_t mach_msg_type_number_t;

typedef struct security_token_t security_token_t, *Psecurity_token_t;

struct security_token_t {
    uint val[2];
};

typedef struct fsid fsid, *Pfsid;

struct fsid {
    int32_t val[2];
};

typedef struct fsid fsid_t;

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

typedef struct vnode vnode, *Pvnode;

struct vnode {
};

typedef struct vnode * vnode_t;

typedef void * cpu_id_t;

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

typedef union anon__struct_289_bitfield_1 anon__struct_289_bitfield_1, *Panon__struct_289_bitfield_1;

union anon__struct_289_bitfield_1 {
    uint name:1; /* : bits 0 */
    uint prealloc:1; /* : bits 1 */
};

typedef union anon__struct_289_bitfield_2 anon__struct_289_bitfield_2, *Panon__struct_289_bitfield_2;

union anon__struct_289_bitfield_2 {
    boolean_t pad1:30; /* : bits 0-29 */
};

typedef integer_t mach_port_delta_t;

typedef int mach_port_flavor_t;

typedef integer_t * mach_port_info_t;

typedef struct mach_port_limits mach_port_limits, *Pmach_port_limits;

typedef natural_t mach_port_msgcount_t;

struct mach_port_limits {
    mach_port_msgcount_t mpl_qlimit;
};

typedef struct mach_port_limits mach_port_limits_t;

typedef natural_t mach_port_name_t;

typedef mach_port_name_t * mach_port_name_array_t;

typedef struct mach_port_options mach_port_options, *Pmach_port_options;

struct mach_port_options {
    uint32_t flags;
    mach_port_limits_t mpl;
    uint64_t reserved[2];
};

typedef struct mach_port_options mach_port_options_t;

typedef mach_port_options_t * mach_port_options_ptr_t;

typedef struct mach_port_qos mach_port_qos, *Pmach_port_qos;

struct mach_port_qos {
    union anon__struct_289_bitfield_1 field_0x0;
    union anon__struct_289_bitfield_2 field_0x4;
    natural_t len;
};

typedef struct mach_port_qos mach_port_qos_t;

typedef natural_t mach_port_right_t;

typedef natural_t mach_port_type_t;

typedef mach_port_type_t * mach_port_type_array_t;

typedef int processor_flavor_t;

typedef integer_t * processor_info_t;

typedef __uint64_t rlim_t;

typedef struct rlimit rlimit, *Prlimit;

struct rlimit {
    rlim_t rlim_cur;
    rlim_t rlim_max;
};

typedef struct rusage rusage, *Prusage;

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

typedef struct sbuf sbuf, *Psbuf;

struct sbuf {
    char * s_buf;
    void * s_unused;
    int s_size;
    int s_len;
    int s_flags;
};

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

typedef union __sigaction_u __sigaction_u, *P__sigaction_u;

typedef struct __siginfo __siginfo, *P__siginfo;

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

union __sigaction_u {
    void (* __sa_handler)(int);
    void (* __sa_sigaction)(int, struct __siginfo *, void *);
};

typedef struct sigaction sigaction, *Psigaction;

struct sigaction {
    union __sigaction_u __sigaction_u;
    sigset_t sa_mask;
    int sa_flags;
};

typedef struct __siginfo siginfo_t;

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

typedef struct sockaddr sockaddr, *Psockaddr;

struct sockaddr {
    __uint8_t sa_len;
    sa_family_t sa_family;
    char sa_data[14];
};

typedef struct vnop_lookup_args vnop_lookup_args, *Pvnop_lookup_args;

struct vnop_lookup_args {
};

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

typedef struct __sbuf __sbuf, *P__sbuf;

struct __sbuf {
    uchar * _base;
    int _size;
};

typedef struct __sFILE __sFILE, *P__sFILE;

typedef __darwin_off_t fpos_t;

typedef struct __sFILEX __sFILEX, *P__sFILEX;

struct __sFILEX {
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

typedef struct __sFILE FILE;

typedef natural_t task_flavor_t;

typedef integer_t * task_info_t;

typedef natural_t thread_policy_flavor_t;

typedef integer_t * thread_policy_t;

typedef struct itimerval itimerval, *Pitimerval;

struct itimerval {
    struct timeval it_interval;
    struct timeval it_value;
};

typedef struct timezone timezone, *Ptimezone;

struct timezone {
    int tz_minuteswest;
    int tz_dsttime;
};

typedef char * caddr_t;

typedef uchar u_char;

typedef uint u_int;

typedef ulong u_long;

typedef u_int64_t user_addr_t;

typedef struct _struct_293 _struct_293, *P_struct_293;

typedef struct ucred ucred, *Pucred;

typedef struct posix_cred posix_cred, *Pposix_cred;

typedef struct label label, *Plabel;

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

struct label {
};

struct ucred {
    struct _struct_293 cr_link;
    u_long cr_ref;
    struct posix_cred cr_posix;
    struct label * cr_label;
    struct au_session cr_audit;
};

typedef struct ucred * kauth_cred_t;

typedef struct fssearchblock fssearchblock, *Pfssearchblock;

struct fssearchblock {
    struct attrlist * returnattrs;
    void * returnbuffer;
    size_t returnbuffersize;
    u_long maxmatches;
    struct timeval timelimit;
    void * searchparams1;
    size_t sizeofsearchparams1;
    void * searchparams2;
    size_t sizeofsearchparams2;
    struct attrlist searchattrs;
};

typedef struct searchstate searchstate, *Psearchstate;

struct searchstate {
    uint32_t ss_union_flags;
    uint32_t ss_union_layer;
    u_char ss_fsstate[548];
};

typedef struct vnop_access_args vnop_access_args, *Pvnop_access_args;

struct vnop_access_args {
};

typedef struct vnop_advlock_args vnop_advlock_args, *Pvnop_advlock_args;

struct vnop_advlock_args {
};

typedef struct vnop_allocate_args vnop_allocate_args, *Pvnop_allocate_args;

struct vnop_allocate_args {
};

typedef struct vnop_blktooff_args vnop_blktooff_args, *Pvnop_blktooff_args;

struct vnop_blktooff_args {
};

typedef struct vnop_blockmap_args vnop_blockmap_args, *Pvnop_blockmap_args;

struct vnop_blockmap_args {
};

typedef struct vnop_bwrite_args vnop_bwrite_args, *Pvnop_bwrite_args;

struct vnop_bwrite_args {
};

typedef struct vnop_close_args vnop_close_args, *Pvnop_close_args;

struct vnop_close_args {
};

typedef struct vnop_copyfile_args vnop_copyfile_args, *Pvnop_copyfile_args;

struct vnop_copyfile_args {
};

typedef struct vnop_create_args vnop_create_args, *Pvnop_create_args;

struct vnop_create_args {
};

typedef struct vnop_exchange_args vnop_exchange_args, *Pvnop_exchange_args;

struct vnop_exchange_args {
};

typedef struct vnop_fsync_args vnop_fsync_args, *Pvnop_fsync_args;

struct vnop_fsync_args {
};

typedef struct vnop_getattr_args vnop_getattr_args, *Pvnop_getattr_args;

struct vnop_getattr_args {
};

typedef struct vnop_inactive_args vnop_inactive_args, *Pvnop_inactive_args;

struct vnop_inactive_args {
};

typedef struct vnop_ioctl_args vnop_ioctl_args, *Pvnop_ioctl_args;

struct vnop_ioctl_args {
};

typedef struct vnop_link_args vnop_link_args, *Pvnop_link_args;

struct vnop_link_args {
};

typedef struct vnop_mkdir_args vnop_mkdir_args, *Pvnop_mkdir_args;

struct vnop_mkdir_args {
};

typedef struct vnop_mknod_args vnop_mknod_args, *Pvnop_mknod_args;

struct vnop_mknod_args {
};

typedef struct vnop_mmap_args vnop_mmap_args, *Pvnop_mmap_args;

struct vnop_mmap_args {
};

typedef struct vnop_offtoblk_args vnop_offtoblk_args, *Pvnop_offtoblk_args;

struct vnop_offtoblk_args {
};

typedef struct vnop_open_args vnop_open_args, *Pvnop_open_args;

struct vnop_open_args {
};

typedef struct vnop_pagein_args vnop_pagein_args, *Pvnop_pagein_args;

struct vnop_pagein_args {
};

typedef struct vnop_pageout_args vnop_pageout_args, *Pvnop_pageout_args;

struct vnop_pageout_args {
};

typedef struct vnop_pathconf_args vnop_pathconf_args, *Pvnop_pathconf_args;

struct vnop_pathconf_args {
};

typedef struct vnop_read_args vnop_read_args, *Pvnop_read_args;

struct vnop_read_args {
};

typedef struct vnop_readdir_args vnop_readdir_args, *Pvnop_readdir_args;

struct vnop_readdir_args {
};

typedef struct vnop_readdirattr_args vnop_readdirattr_args, *Pvnop_readdirattr_args;

struct vnop_readdirattr_args {
};

typedef struct vnop_readlink_args vnop_readlink_args, *Pvnop_readlink_args;

struct vnop_readlink_args {
};

typedef struct vnop_reclaim_args vnop_reclaim_args, *Pvnop_reclaim_args;

struct vnop_reclaim_args {
};

typedef struct vnop_remove_args vnop_remove_args, *Pvnop_remove_args;

struct vnop_remove_args {
};

typedef struct vnop_rename_args vnop_rename_args, *Pvnop_rename_args;

struct vnop_rename_args {
};

typedef struct vnop_revoke_args vnop_revoke_args, *Pvnop_revoke_args;

struct vnop_revoke_args {
};

typedef struct vnop_rmdir_args vnop_rmdir_args, *Pvnop_rmdir_args;

struct vnop_rmdir_args {
};

typedef struct vnop_searchfs_args vnop_searchfs_args, *Pvnop_searchfs_args;

struct vnop_searchfs_args {
};

typedef struct vnop_select_args vnop_select_args, *Pvnop_select_args;

struct vnop_select_args {
};

typedef struct vnop_setattr_args vnop_setattr_args, *Pvnop_setattr_args;

struct vnop_setattr_args {
};

typedef struct vnop_strategy_args vnop_strategy_args, *Pvnop_strategy_args;

struct vnop_strategy_args {
};

typedef struct vnop_symlink_args vnop_symlink_args, *Pvnop_symlink_args;

struct vnop_symlink_args {
};

typedef struct vnop_whiteout_args vnop_whiteout_args, *Pvnop_whiteout_args;

struct vnop_whiteout_args {
};

typedef struct vnop_write_args vnop_write_args, *Pvnop_write_args;

struct vnop_write_args {
};

typedef int vm_behavior_t;

typedef uint vm_inherit_t;

typedef struct mach_vm_read_entry mach_vm_read_entry, *Pmach_vm_read_entry;

typedef uint64_t mach_vm_address_t;

typedef uint64_t mach_vm_size_t;

struct mach_vm_read_entry {
    mach_vm_address_t address;
    mach_vm_size_t size;
};

typedef int vm_region_flavor_t;

typedef int * vm_region_info_t;

typedef mach_vm_address_t mach_port_context_t;

typedef uint64_t mach_vm_offset_t;

typedef mach_port_t upl_t;

typedef uintptr_t vm_offset_t;

typedef vm_offset_t vm_address_t;

typedef mach_port_t vm_map_t;

typedef uintptr_t vm_size_t;

typedef enum enum_54 {
    P_ALL=0,
    P_PGID=2,
    P_PID=1
} enum_54;

typedef enum enum_54 idtype_t;

typedef Byte Bytef;

typedef uint uInt;

typedef ulong uLong;

typedef void * voidpf;

typedef voidpf (* alloc_func)(voidpf, uInt, uInt);

typedef void (* free_func)(voidpf, voidpf);

typedef struct internal_state internal_state, *Pinternal_state;

struct internal_state {
    int dummy;
};

typedef struct z_stream_s z_stream_s, *Pz_stream_s;

typedef struct z_stream_s z_stream;

struct z_stream_s {
    Bytef * next_in;
    uInt avail_in;
    uLong total_in;
    Bytef * next_out;
    uInt avail_out;
    uLong total_out;
    char * msg;
    struct internal_state * state;
    alloc_func zalloc;
    free_func zfree;
    voidpf opaque;
    int data_type;
    uLong adler;
    uLong reserved;
};

typedef z_stream * z_streamp;

typedef struct _IOConfigThread _IOConfigThread, *P_IOConfigThread;

struct _IOConfigThread { /* PlaceHolder Class Structure */
};

typedef struct _IOOpenServiceIterator _IOOpenServiceIterator, *P_IOOpenServiceIterator;

struct _IOOpenServiceIterator { /* PlaceHolder Class Structure */
};

typedef struct _IOServiceInterestNotifier _IOServiceInterestNotifier, *P_IOServiceInterestNotifier;

struct _IOServiceInterestNotifier { /* PlaceHolder Class Structure */
};

typedef struct _IOServiceNullNotifier _IOServiceNullNotifier, *P_IOServiceNullNotifier;

struct _IOServiceNullNotifier { /* PlaceHolder Class Structure */
};

typedef struct IOBigMemoryCursor IOBigMemoryCursor, *PIOBigMemoryCursor;

struct IOBigMemoryCursor { /* PlaceHolder Class Structure */
};

typedef struct IOBufferMemoryDescriptor IOBufferMemoryDescriptor, *PIOBufferMemoryDescriptor;

struct IOBufferMemoryDescriptor { /* PlaceHolder Class Structure */
};

typedef struct IOCatalogue IOCatalogue, *PIOCatalogue;

struct IOCatalogue { /* PlaceHolder Class Structure */
};

typedef struct IOCommand IOCommand, *PIOCommand;

struct IOCommand { /* PlaceHolder Class Structure */
};

typedef struct IOCommandGate IOCommandGate, *PIOCommandGate;

struct IOCommandGate { /* PlaceHolder Class Structure */
};

typedef struct IOCommandPool IOCommandPool, *PIOCommandPool;

struct IOCommandPool { /* PlaceHolder Class Structure */
};

typedef struct IOConditionLock IOConditionLock, *PIOConditionLock;

struct IOConditionLock { /* PlaceHolder Class Structure */
};

typedef struct IOCPU IOCPU, *PIOCPU;

struct IOCPU { /* PlaceHolder Class Structure */
};

typedef struct IOCPUInterruptController IOCPUInterruptController, *PIOCPUInterruptController;

struct IOCPUInterruptController { /* PlaceHolder Class Structure */
};

typedef struct IODataQueue IODataQueue, *PIODataQueue;

struct IODataQueue { /* PlaceHolder Class Structure */
};

typedef struct IODMAController IODMAController, *PIODMAController;

struct IODMAController { /* PlaceHolder Class Structure */
};

typedef struct IODMAEventSource IODMAEventSource, *PIODMAEventSource;

struct IODMAEventSource { /* PlaceHolder Class Structure */
};

typedef struct IODTNVRAM IODTNVRAM, *PIODTNVRAM;

struct IODTNVRAM { /* PlaceHolder Class Structure */
};

typedef struct IODTPlatformExpert IODTPlatformExpert, *PIODTPlatformExpert;

struct IODTPlatformExpert { /* PlaceHolder Class Structure */
};

typedef struct IOFilterInterruptEventSource IOFilterInterruptEventSource, *PIOFilterInterruptEventSource;

struct IOFilterInterruptEventSource { /* PlaceHolder Class Structure */
};

typedef struct IOGeneralMemoryDescriptor IOGeneralMemoryDescriptor, *PIOGeneralMemoryDescriptor;

struct IOGeneralMemoryDescriptor { /* PlaceHolder Class Structure */
};

typedef struct IOHistogramReporter IOHistogramReporter, *PIOHistogramReporter;

struct IOHistogramReporter { /* PlaceHolder Class Structure */
};

typedef struct IOInterleavedMemoryDescriptor IOInterleavedMemoryDescriptor, *PIOInterleavedMemoryDescriptor;

struct IOInterleavedMemoryDescriptor { /* PlaceHolder Class Structure */
};

typedef struct IOInterruptEventSource IOInterruptEventSource, *PIOInterruptEventSource;

struct IOInterruptEventSource { /* PlaceHolder Class Structure */
};

typedef struct IOKitDiagnostics IOKitDiagnostics, *PIOKitDiagnostics;

struct IOKitDiagnostics { /* PlaceHolder Class Structure */
};

typedef struct IOKitDiagnosticsClient IOKitDiagnosticsClient, *PIOKitDiagnosticsClient;

struct IOKitDiagnosticsClient { /* PlaceHolder Class Structure */
};

typedef struct IOLittleMemoryCursor IOLittleMemoryCursor, *PIOLittleMemoryCursor;

struct IOLittleMemoryCursor { /* PlaceHolder Class Structure */
};

typedef struct IOMachPort IOMachPort, *PIOMachPort;

struct IOMachPort { /* PlaceHolder Class Structure */
};

typedef struct IOMemoryCursor IOMemoryCursor, *PIOMemoryCursor;

struct IOMemoryCursor { /* PlaceHolder Class Structure */
};

typedef struct IOMultiMemoryDescriptor IOMultiMemoryDescriptor, *PIOMultiMemoryDescriptor;

struct IOMultiMemoryDescriptor { /* PlaceHolder Class Structure */
};

typedef struct IONaturalMemoryCursor IONaturalMemoryCursor, *PIONaturalMemoryCursor;

struct IONaturalMemoryCursor { /* PlaceHolder Class Structure */
};

typedef struct IOPanicPlatform IOPanicPlatform, *PIOPanicPlatform;

struct IOPanicPlatform { /* PlaceHolder Class Structure */
};

typedef struct IOPlatformDevice IOPlatformDevice, *PIOPlatformDevice;

struct IOPlatformDevice { /* PlaceHolder Class Structure */
};

typedef struct IOPlatformExpertDevice IOPlatformExpertDevice, *PIOPlatformExpertDevice;

struct IOPlatformExpertDevice { /* PlaceHolder Class Structure */
};

typedef struct IOPMCompletionQueue IOPMCompletionQueue, *PIOPMCompletionQueue;

struct IOPMCompletionQueue { /* PlaceHolder Class Structure */
};

typedef struct IOPMinformeeList IOPMinformeeList, *PIOPMinformeeList;

struct IOPMinformeeList { /* PlaceHolder Class Structure */
};

typedef struct IOPMPowerSource IOPMPowerSource, *PIOPMPowerSource;

struct IOPMPowerSource { /* PlaceHolder Class Structure */
};

typedef struct IOPMPowerSourceList IOPMPowerSourceList, *PIOPMPowerSourceList;

struct IOPMPowerSourceList { /* PlaceHolder Class Structure */
};

typedef struct IOPMPowerStateQueue IOPMPowerStateQueue, *PIOPMPowerStateQueue;

struct IOPMPowerStateQueue { /* PlaceHolder Class Structure */
};

typedef struct IOPMRequest IOPMRequest, *PIOPMRequest;

struct IOPMRequest { /* PlaceHolder Class Structure */
};

typedef struct IOPMRequestQueue IOPMRequestQueue, *PIOPMRequestQueue;

struct IOPMRequestQueue { /* PlaceHolder Class Structure */
};

typedef struct IOPMServiceInterestNotifier IOPMServiceInterestNotifier, *PIOPMServiceInterestNotifier;

struct IOPMServiceInterestNotifier { /* PlaceHolder Class Structure */
};

typedef struct IOPMWorkQueue IOPMWorkQueue, *PIOPMWorkQueue;

struct IOPMWorkQueue { /* PlaceHolder Class Structure */
};

typedef struct IOPolledFilePollers IOPolledFilePollers, *PIOPolledFilePollers;

struct IOPolledFilePollers { /* PlaceHolder Class Structure */
};

typedef struct IOPolledInterface IOPolledInterface, *PIOPolledInterface;

struct IOPolledInterface { /* PlaceHolder Class Structure */
};

typedef struct IORangeAllocator IORangeAllocator, *PIORangeAllocator;

struct IORangeAllocator { /* PlaceHolder Class Structure */
};

typedef struct IORegistryIterator IORegistryIterator, *PIORegistryIterator;

struct IORegistryIterator { /* PlaceHolder Class Structure */
};

typedef struct IOReporter IOReporter, *PIOReporter;

struct IOReporter { /* PlaceHolder Class Structure */
};

typedef struct IOReportLegend IOReportLegend, *PIOReportLegend;

struct IOReportLegend { /* PlaceHolder Class Structure */
};

typedef struct IOResources IOResources, *PIOResources;

struct IOResources { /* PlaceHolder Class Structure */
};

typedef struct IORootParent IORootParent, *PIORootParent;

struct IORootParent { /* PlaceHolder Class Structure */
};

typedef struct IORTC IORTC, *PIORTC;

struct IORTC { /* PlaceHolder Class Structure */
};

typedef struct IOService IOService, *PIOService;

struct IOService { /* PlaceHolder Class Structure */
};

typedef struct IOServiceMessageUserNotification IOServiceMessageUserNotification, *PIOServiceMessageUserNotification;

struct IOServiceMessageUserNotification { /* PlaceHolder Class Structure */
};

typedef struct IOServicePM IOServicePM, *PIOServicePM;

struct IOServicePM { /* PlaceHolder Class Structure */
};

typedef struct IOServiceUserNotification IOServiceUserNotification, *PIOServiceUserNotification;

struct IOServiceUserNotification { /* PlaceHolder Class Structure */
};

typedef struct IOSharedDataQueue IOSharedDataQueue, *PIOSharedDataQueue;

struct IOSharedDataQueue { /* PlaceHolder Class Structure */
};

typedef struct IOSharedInterruptController IOSharedInterruptController, *PIOSharedInterruptController;

struct IOSharedInterruptController { /* PlaceHolder Class Structure */
};

typedef struct IOSimpleReporter IOSimpleReporter, *PIOSimpleReporter;

struct IOSimpleReporter { /* PlaceHolder Class Structure */
};

typedef struct IOStateReporter IOStateReporter, *PIOStateReporter;

struct IOStateReporter { /* PlaceHolder Class Structure */
};

typedef struct IOSubMemoryDescriptor IOSubMemoryDescriptor, *PIOSubMemoryDescriptor;

struct IOSubMemoryDescriptor { /* PlaceHolder Class Structure */
};

typedef struct IOTimerEventSource IOTimerEventSource, *PIOTimerEventSource;

struct IOTimerEventSource { /* PlaceHolder Class Structure */
};

typedef struct IOUserIterator IOUserIterator, *PIOUserIterator;

struct IOUserIterator { /* PlaceHolder Class Structure */
};

typedef struct IOUserNotification IOUserNotification, *PIOUserNotification;

struct IOUserNotification { /* PlaceHolder Class Structure */
};

typedef struct IOWatchDogTimer IOWatchDogTimer, *PIOWatchDogTimer;

struct IOWatchDogTimer { /* PlaceHolder Class Structure */
};

typedef struct IOWorkLoop IOWorkLoop, *PIOWorkLoop;

struct IOWorkLoop { /* PlaceHolder Class Structure */
};

typedef struct KLDBootstrap KLDBootstrap, *PKLDBootstrap;

struct KLDBootstrap { /* PlaceHolder Class Structure */
};

typedef struct OSArray OSArray, *POSArray;

struct OSArray { /* PlaceHolder Class Structure */
};

typedef struct OSBoolean OSBoolean, *POSBoolean;

struct OSBoolean { /* PlaceHolder Class Structure */
};

typedef struct OSCollection OSCollection, *POSCollection;

struct OSCollection { /* PlaceHolder Class Structure */
};

typedef struct OSCollectionIterator OSCollectionIterator, *POSCollectionIterator;

struct OSCollectionIterator { /* PlaceHolder Class Structure */
};

typedef struct OSData OSData, *POSData;

struct OSData { /* PlaceHolder Class Structure */
};

typedef struct OSIterator OSIterator, *POSIterator;

struct OSIterator { /* PlaceHolder Class Structure */
};

typedef struct OSKext OSKext, *POSKext;

struct OSKext { /* PlaceHolder Class Structure */
};

typedef struct OSMetaClass OSMetaClass, *POSMetaClass;

struct OSMetaClass { /* PlaceHolder Class Structure */
};

typedef struct OSMetaClassBase OSMetaClassBase, *POSMetaClassBase;

struct OSMetaClassBase { /* PlaceHolder Class Structure */
};

typedef struct OSMetaClassMeta OSMetaClassMeta, *POSMetaClassMeta;

struct OSMetaClassMeta { /* PlaceHolder Class Structure */
};

typedef struct OSSerializer OSSerializer, *POSSerializer;

struct OSSerializer { /* PlaceHolder Class Structure */
};

typedef struct OSSet OSSet, *POSSet;

struct OSSet { /* PlaceHolder Class Structure */
};

typedef struct OSSymbolPool OSSymbolPool, *POSSymbolPool;

struct OSSymbolPool { /* PlaceHolder Class Structure */
};

typedef struct PMAssertionsTracker PMAssertionsTracker, *PPMAssertionsTracker;

struct PMAssertionsTracker { /* PlaceHolder Class Structure */
};

typedef struct PMHaltWorker PMHaltWorker, *PPMHaltWorker;

struct PMHaltWorker { /* PlaceHolder Class Structure */
};

typedef struct PMSettingHandle PMSettingHandle, *PPMSettingHandle;

struct PMSettingHandle { /* PlaceHolder Class Structure */
};

typedef struct PMSettingObject PMSettingObject, *PPMSettingObject;

struct PMSettingObject { /* PlaceHolder Class Structure */
};

typedef struct PMTraceWorker PMTraceWorker, *PPMTraceWorker;

struct PMTraceWorker { /* PlaceHolder Class Structure */
};

typedef struct RootDomainUserClient RootDomainUserClient, *PRootDomainUserClient;

struct RootDomainUserClient { /* PlaceHolder Class Structure */
};

