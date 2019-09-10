typedef unsigned char   undefined;

typedef unsigned char    undefined1;
typedef unsigned short    undefined2;
typedef unsigned int    undefined4;
#define _G_BUFSIZ 8192

#define _G_config_h 1

#define _G_HAVE_ATEXIT 1

#define _G_HAVE_BOOL 1

#define _G_HAVE_IO_FILE_OPEN 1

#define _G_HAVE_IO_GETLINE_INFO 1

#define _G_HAVE_LONG_DOUBLE_IO 1

#define _G_HAVE_MMAP 1

#define _G_HAVE_MREMAP 1

#define _G_HAVE_PRINTF_FP 1

#define _G_HAVE_SYS_CDEFS 1

#define _G_HAVE_SYS_WAIT 1

#define _G_IO_IO_FILE_VERSION 131073

#define _G_NAMES_HAVE_UNDERSCORE 0

#define _G_NEED_STDARG_H 1

#define _G_USING_THUNKS 1

#define _G_VTABLE_LABEL_HAS_LENGTH 1

typedef struct _G_fpos64_t _G_fpos64_t, *P_G_fpos64_t;

typedef long long    longlong;
typedef longlong __quad_t;

typedef __quad_t __off64_t;

typedef struct __mbstate_t __mbstate_t, *P__mbstate_t;

typedef union _union_27 _union_27, *P_union_27;

typedef unsigned int    uint;
union _union_27 {
    uint __wch;
    char __wchb[4];
};

struct __mbstate_t {
    int __count;
    union _union_27 __value;
};

struct _G_fpos64_t {
    __off64_t __pos;
    struct __mbstate_t __state;
};

typedef struct _G_fpos_t _G_fpos_t, *P_G_fpos_t;

typedef long __off_t;

struct _G_fpos_t {
    __off_t __pos;
    struct __mbstate_t __state;
};

typedef int _G_int16_t;

typedef int _G_int32_t;

typedef uint _G_uint16_t;

typedef uint _G_uint32_t;

#define _SYS_ACCT_H 1

#define ACCT_BYTEORDER 0

#define ACCT_COMM 16

#define AHZ 100

typedef struct acct acct, *Pacct;

typedef unsigned short    ushort;
typedef ushort u_int16_t;

typedef uint u_int32_t;

typedef u_int16_t comp_t;

struct acct {
    char ac_flag;
    u_int16_t ac_uid;
    u_int16_t ac_gid;
    u_int16_t ac_tty;
    u_int32_t ac_btime;
    comp_t ac_utime;
    comp_t ac_stime;
    comp_t ac_etime;
    comp_t ac_mem;
    comp_t ac_io;
    comp_t ac_rw;
    comp_t ac_minflt;
    comp_t ac_majflt;
    comp_t ac_swaps;
    u_int32_t ac_exitcode;
    char ac_comm[17];
    char ac_pad[10];
};

typedef struct acct_v3 acct_v3, *Pacct_v3;

struct acct_v3 {
    char ac_flag;
    char ac_version;
    u_int16_t ac_tty;
    u_int32_t ac_exitcode;
    u_int32_t ac_uid;
    u_int32_t ac_gid;
    u_int32_t ac_pid;
    u_int32_t ac_ppid;
    u_int32_t ac_btime;
    float ac_etime;
    comp_t ac_utime;
    comp_t ac_stime;
    comp_t ac_mem;
    comp_t ac_io;
    comp_t ac_rw;
    comp_t ac_minflt;
    comp_t ac_majflt;
    comp_t ac_swaps;
    char ac_comm[16];
};

typedef enum enum_1621 {
    ACORE=8,
    AFORK=1,
    ASU=2,
    AXSIG=16
} enum_1621;

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

#define _AIO_H 1

typedef struct aiocb aiocb, *Paiocb;

typedef unsigned long    ulong;
typedef ulong size_t;

typedef struct sigevent sigevent, *Psigevent;

typedef int __ssize_t;

typedef union sigval sigval, *Psigval;

typedef union sigval sigval_t;

typedef union _union_1044 _union_1044, *P_union_1044;

typedef int __pid_t;

typedef struct _struct_1045 _struct_1045, *P_struct_1045;

struct _struct_1045 {
    void (* _function)(sigval_t);
    void * _attribute;
};

union _union_1044 {
    int _pad[61];
    __pid_t _tid;
    struct _struct_1045 _sigev_thread;
};

union sigval {
    int sival_int;
    void * sival_ptr;
};

struct sigevent {
    sigval_t sigev_value;
    int sigev_signo;
    int sigev_notify;
    union _union_1044 _sigev_un;
};

struct aiocb {
    int aio_fildes;
    int aio_lio_opcode;
    int aio_reqprio;
    void * aio_buf;
    size_t aio_nbytes;
    struct sigevent aio_sigevent;
    struct aiocb * __next_prio;
    int __abs_prio;
    int __policy;
    int __error_code;
    __ssize_t __return_value;
    __off_t aio_offset;
    char __unused[32];
};

typedef struct aiocb64 aiocb64, *Paiocb64;

struct aiocb64 {
    int aio_fildes;
    int aio_lio_opcode;
    int aio_reqprio;
    void * aio_buf;
    size_t aio_nbytes;
    struct sigevent aio_sigevent;
    struct aiocb * __next_prio;
    int __abs_prio;
    int __policy;
    int __error_code;
    __ssize_t __return_value;
    __off64_t aio_offset;
    char __unused[32];
};

typedef struct aioinit aioinit, *Paioinit;

struct aioinit {
    int aio_threads;
    int aio_num;
    int aio_locks;
    int aio_usedba;
    int aio_debug;
    int aio_numusers;
    int aio_idle_time;
    int aio_reserved;
};

typedef enum enum_1090 {
    AIO_ALLDONE=2,
    AIO_CANCELED=0,
    AIO_NOTCANCELED=1
} enum_1090;

typedef enum enum_1091 {
    LIO_NOP=2,
    LIO_READ=0,
    LIO_WRITE=1
} enum_1091;

typedef enum enum_1092 {
    LIO_NOWAIT=1,
    LIO_WAIT=0
} enum_1092;

#define _ALLOCA_H 1

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

#define ASN1_F_ASN1_GENERALIZEDTIME_ADJ 216

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

#define ASN1_F_ASN1_ITEM_SIGN_CTX 220

#define ASN1_F_ASN1_ITEM_UNPACK 199

#define ASN1_F_ASN1_ITEM_VERIFY 197

#define ASN1_F_ASN1_MBSTRING_NCOPY 122

#define ASN1_F_ASN1_OBJECT_NEW 123

#define ASN1_F_ASN1_OUTPUT_DATA 214

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

#define ASN1_F_ASN1_TIME_ADJ 217

#define ASN1_F_ASN1_TIME_SET 175

#define ASN1_F_ASN1_TYPE_GET_INT_OCTETSTRING 134

#define ASN1_F_ASN1_TYPE_GET_OCTETSTRING 135

#define ASN1_F_ASN1_UNPACK_STRING 136

#define ASN1_F_ASN1_UTCTIME_ADJ 218

#define ASN1_F_ASN1_UTCTIME_SET 187

#define ASN1_F_ASN1_VERIFY 137

#define ASN1_F_B64_READ_ASN1 209

#define ASN1_F_B64_WRITE_ASN1 210

#define ASN1_F_BIO_NEW_NDEF 208

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

#define ASN1_F_D2I_AUTOPRIVATEKEY 207

#define ASN1_F_D2I_NETSCAPE_RSA 152

#define ASN1_F_D2I_NETSCAPE_RSA_2 153

#define ASN1_F_D2I_PRIVATEKEY 154

#define ASN1_F_D2I_PUBLICKEY 155

#define ASN1_F_D2I_RSA_NET 200

#define ASN1_F_D2I_RSA_NET_2 201

#define ASN1_F_D2I_X509 156

#define ASN1_F_D2I_X509_CINF 157

#define ASN1_F_D2I_X509_PKEY 159

#define ASN1_F_I2D_ASN1_BIO_STREAM 211

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

#define ASN1_F_PKCS5_PBE2_SET_IV 167

#define ASN1_F_PKCS5_PBE_SET 202

#define ASN1_F_PKCS5_PBE_SET0_ALGOR 215

#define ASN1_F_PKCS5_PBKDF2_SET 219

#define ASN1_F_SMIME_READ_ASN1 212

#define ASN1_F_SMIME_TEXT 213

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

#define ASN1_PCTX_FLAGS_NO_ANY_TYPE 16

#define ASN1_PCTX_FLAGS_NO_FIELD_NAME 64

#define ASN1_PCTX_FLAGS_NO_MSTRING_TYPE 32

#define ASN1_PCTX_FLAGS_NO_STRUCT_NAME 256

#define ASN1_PCTX_FLAGS_SHOW_ABSENT 1

#define ASN1_PCTX_FLAGS_SHOW_FIELD_STRUCT_NAME 128

#define ASN1_PCTX_FLAGS_SHOW_SEQUENCE 2

#define ASN1_PCTX_FLAGS_SHOW_SSOF 4

#define ASN1_PCTX_FLAGS_SHOW_TYPE 8

#define ASN1_R_ADDING_OBJECT 171

#define ASN1_R_ASN1_PARSE_ERROR 203

#define ASN1_R_ASN1_SIG_PARSE_ERROR 204

#define ASN1_R_AUX_ERROR 100

#define ASN1_R_BAD_CLASS 101

#define ASN1_R_BAD_OBJECT_HEADER 102

#define ASN1_R_BAD_PASSWORD_READ 103

#define ASN1_R_BAD_TAG 104

#define ASN1_R_BMPSTRING_IS_WRONG_LENGTH 214

#define ASN1_R_BN_LIB 105

#define ASN1_R_BOOLEAN_IS_WRONG_LENGTH 106

#define ASN1_R_BUFFER_TOO_SMALL 107

#define ASN1_R_CIPHER_HAS_NO_OBJECT_IDENTIFIER 108

#define ASN1_R_CONTEXT_NOT_INITIALISED 217

#define ASN1_R_DATA_IS_WRONG 109

#define ASN1_R_DECODE_ERROR 110

#define ASN1_R_DECODING_ERROR 111

#define ASN1_R_DEPTH_EXCEEDED 174

#define ASN1_R_DIGEST_AND_KEY_TYPE_NOT_SUPPORTED 198

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

#define ASN1_R_INVALID_BIT_STRING_BITS_LEFT 220

#define ASN1_R_INVALID_BMPSTRING_LENGTH 129

#define ASN1_R_INVALID_DIGIT 130

#define ASN1_R_INVALID_MIME_TYPE 205

#define ASN1_R_INVALID_MODIFIER 186

#define ASN1_R_INVALID_NUMBER 187

#define ASN1_R_INVALID_OBJECT_ENCODING 216

#define ASN1_R_INVALID_SEPARATOR 131

#define ASN1_R_INVALID_TIME_FORMAT 132

#define ASN1_R_INVALID_UNIVERSALSTRING_LENGTH 133

#define ASN1_R_INVALID_UTF8STRING 134

#define ASN1_R_IV_TOO_LARGE 135

#define ASN1_R_LENGTH_ERROR 136

#define ASN1_R_LIST_ERROR 188

#define ASN1_R_MIME_NO_CONTENT_TYPE 206

#define ASN1_R_MIME_PARSE_ERROR 207

#define ASN1_R_MIME_SIG_PARSE_ERROR 208

#define ASN1_R_MISSING_EOC 137

#define ASN1_R_MISSING_SECOND_NUMBER 138

#define ASN1_R_MISSING_VALUE 189

#define ASN1_R_MSTRING_NOT_UNIVERSAL 139

#define ASN1_R_MSTRING_WRONG_TAG 140

#define ASN1_R_NESTED_ASN1_STRING 197

#define ASN1_R_NO_CONTENT_TYPE 209

#define ASN1_R_NO_DEFAULT_DIGEST 201

#define ASN1_R_NO_MATCHING_CHOICE_TYPE 143

#define ASN1_R_NO_MULTIPART_BODY_FAILURE 210

#define ASN1_R_NO_MULTIPART_BOUNDARY 211

#define ASN1_R_NO_SIG_CONTENT_TYPE 212

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

#define ASN1_R_SIG_INVALID_MIME_TYPE 213

#define ASN1_R_STREAMING_NOT_SUPPORTED 202

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

#define ASN1_R_UNIVERSALSTRING_IS_WRONG_LENGTH 215

#define ASN1_R_UNKNOWN_FORMAT 160

#define ASN1_R_UNKNOWN_MESSAGE_DIGEST_ALGORITHM 161

#define ASN1_R_UNKNOWN_OBJECT_TYPE 162

#define ASN1_R_UNKNOWN_PUBLIC_KEY_TYPE 163

#define ASN1_R_UNKNOWN_SIGNATURE_ALGORITHM 199

#define ASN1_R_UNKNOWN_TAG 194

#define ASN1_R_UNKOWN_FORMAT 195

#define ASN1_R_UNSUPPORTED_ANY_DEFINED_BY_TYPE 164

#define ASN1_R_UNSUPPORTED_CIPHER 165

#define ASN1_R_UNSUPPORTED_ENCRYPTION_ALGORITHM 166

#define ASN1_R_UNSUPPORTED_PUBLIC_KEY_TYPE 167

#define ASN1_R_UNSUPPORTED_TYPE 196

#define ASN1_R_WRONG_PUBLIC_KEY_TYPE 200

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

#define ASN1_STRING_FLAG_MSTRING 64

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

typedef union _union_257 _union_257, *P_union_257;

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

typedef unsigned char    uchar;
struct ASN1_VALUE_st {
};

struct asn1_string_st {
    int length;
    int type;
    uchar * data;
    long flags;
};

union _union_257 {
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

typedef struct ASN1_ITEM_st ASN1_ITEM_st, *PASN1_ITEM_st;

typedef struct ASN1_ITEM_st ASN1_ITEM;

typedef ASN1_ITEM ASN1_ITEM_EXP;

typedef struct ASN1_TEMPLATE_st ASN1_TEMPLATE_st, *PASN1_TEMPLATE_st;

typedef struct ASN1_TEMPLATE_st ASN1_TEMPLATE;

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

typedef struct stack_st_ASN1_TYPE stack_st_ASN1_TYPE, *Pstack_st_ASN1_TYPE;

typedef struct stack_st_ASN1_TYPE ASN1_SEQUENCE_ANY;

typedef struct stack_st stack_st, *Pstack_st;

typedef struct stack_st _STACK;

struct stack_st {
    int num;
    char * * data;
    int sorted;
    int num_alloc;
    int (* comp)(void *, void *);
};

struct stack_st_ASN1_TYPE {
    _STACK stack;
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
    union _union_257 value;
};

typedef struct BIT_STRING_BITNAME_st BIT_STRING_BITNAME_st, *PBIT_STRING_BITNAME_st;

typedef struct BIT_STRING_BITNAME_st BIT_STRING_BITNAME;

struct BIT_STRING_BITNAME_st {
    int bitnum;
    char * lname;
    char * sname;
};

typedef void * (d2i_of_void)(void * *, uchar * *, long);

typedef int (i2d_of_void)(void *, uchar * *);

typedef struct NETSCAPE_X509_st NETSCAPE_X509_st, *PNETSCAPE_X509_st;

typedef struct NETSCAPE_X509_st NETSCAPE_X509;

typedef struct x509_st x509_st, *Px509_st;

typedef struct x509_st X509;

typedef struct x509_cinf_st x509_cinf_st, *Px509_cinf_st;

typedef struct x509_cinf_st X509_CINF;

typedef struct X509_algor_st X509_algor_st, *PX509_algor_st;

typedef struct X509_algor_st X509_ALGOR;

typedef struct crypto_ex_data_st crypto_ex_data_st, *Pcrypto_ex_data_st;

typedef struct crypto_ex_data_st CRYPTO_EX_DATA;

typedef struct AUTHORITY_KEYID_st AUTHORITY_KEYID_st, *PAUTHORITY_KEYID_st;

typedef struct AUTHORITY_KEYID_st AUTHORITY_KEYID;

typedef struct X509_POLICY_CACHE_st X509_POLICY_CACHE_st, *PX509_POLICY_CACHE_st;

typedef struct X509_POLICY_CACHE_st X509_POLICY_CACHE;

typedef struct stack_st_DIST_POINT stack_st_DIST_POINT, *Pstack_st_DIST_POINT;

typedef struct stack_st_GENERAL_NAME stack_st_GENERAL_NAME, *Pstack_st_GENERAL_NAME;

typedef struct NAME_CONSTRAINTS_st NAME_CONSTRAINTS_st, *PNAME_CONSTRAINTS_st;

typedef struct NAME_CONSTRAINTS_st NAME_CONSTRAINTS;

typedef struct stack_st_IPAddressFamily stack_st_IPAddressFamily, *Pstack_st_IPAddressFamily;

typedef struct ASIdentifiers_st ASIdentifiers_st, *PASIdentifiers_st;

typedef struct x509_cert_aux_st x509_cert_aux_st, *Px509_cert_aux_st;

typedef struct x509_cert_aux_st X509_CERT_AUX;

typedef struct X509_name_st X509_name_st, *PX509_name_st;

typedef struct X509_name_st X509_NAME;

typedef struct X509_val_st X509_val_st, *PX509_val_st;

typedef struct X509_val_st X509_VAL;

typedef struct X509_pubkey_st X509_pubkey_st, *PX509_pubkey_st;

typedef struct X509_pubkey_st X509_PUBKEY;

typedef struct stack_st_X509_EXTENSION stack_st_X509_EXTENSION, *Pstack_st_X509_EXTENSION;

typedef struct stack_st_void stack_st_void, *Pstack_st_void;

typedef struct stack_st_GENERAL_NAME GENERAL_NAMES;

typedef struct stack_st_GENERAL_SUBTREE stack_st_GENERAL_SUBTREE, *Pstack_st_GENERAL_SUBTREE;

typedef struct ASIdentifierChoice_st ASIdentifierChoice_st, *PASIdentifierChoice_st;

typedef struct ASIdentifierChoice_st ASIdentifierChoice;

typedef struct stack_st_ASN1_OBJECT stack_st_ASN1_OBJECT, *Pstack_st_ASN1_OBJECT;

typedef struct stack_st_X509_ALGOR stack_st_X509_ALGOR, *Pstack_st_X509_ALGOR;

typedef struct stack_st_X509_NAME_ENTRY stack_st_X509_NAME_ENTRY, *Pstack_st_X509_NAME_ENTRY;

typedef struct buf_mem_st buf_mem_st, *Pbuf_mem_st;

typedef struct buf_mem_st BUF_MEM;

typedef struct asn1_string_st ASN1_TIME;

typedef struct evp_pkey_st evp_pkey_st, *Pevp_pkey_st;

typedef struct evp_pkey_st EVP_PKEY;

typedef union _union_930 _union_930, *P_union_930;

typedef struct evp_pkey_asn1_method_st evp_pkey_asn1_method_st, *Pevp_pkey_asn1_method_st;

typedef struct evp_pkey_asn1_method_st EVP_PKEY_ASN1_METHOD;

typedef struct engine_st engine_st, *Pengine_st;

typedef struct engine_st ENGINE;

typedef union _union_271 _union_271, *P_union_271;

typedef struct stack_st_X509_ATTRIBUTE stack_st_X509_ATTRIBUTE, *Pstack_st_X509_ATTRIBUTE;

typedef int ASN1_NULL;

typedef struct stack_st_ASIdOrRange stack_st_ASIdOrRange, *Pstack_st_ASIdOrRange;

typedef struct stack_st_ASIdOrRange ASIdOrRanges;

typedef struct rsa_st rsa_st, *Prsa_st;

typedef struct dsa_st dsa_st, *Pdsa_st;

typedef struct dh_st dh_st, *Pdh_st;

typedef struct ec_key_st ec_key_st, *Pec_key_st;

typedef struct rsa_meth_st rsa_meth_st, *Prsa_meth_st;

typedef struct rsa_st RSA;

typedef struct bignum_st bignum_st, *Pbignum_st;

typedef struct bignum_st BIGNUM;

typedef struct bignum_ctx bignum_ctx, *Pbignum_ctx;

typedef struct bignum_ctx BN_CTX;

typedef struct bn_mont_ctx_st bn_mont_ctx_st, *Pbn_mont_ctx_st;

typedef struct bn_mont_ctx_st BN_MONT_CTX;

typedef struct bn_gencb_st bn_gencb_st, *Pbn_gencb_st;

typedef struct bn_gencb_st BN_GENCB;

typedef struct rsa_meth_st RSA_METHOD;

typedef struct bn_blinding_st bn_blinding_st, *Pbn_blinding_st;

typedef struct bn_blinding_st BN_BLINDING;

typedef struct dsa_method dsa_method, *Pdsa_method;

typedef struct DSA_SIG_st DSA_SIG_st, *PDSA_SIG_st;

typedef struct DSA_SIG_st DSA_SIG;

typedef struct dsa_st DSA;

typedef struct dsa_method DSA_METHOD;

typedef struct dh_method dh_method, *Pdh_method;

typedef struct dh_st DH;

typedef struct dh_method DH_METHOD;

typedef union _union_175 _union_175, *P_union_175;

union _union_175 {
    void (* cb_1)(int, int, void *);
    int (* cb_2)(int, int, BN_GENCB *);
};

struct bn_gencb_st {
    uint ver;
    void * arg;
    union _union_175 cb;
};

struct crypto_ex_data_st {
    struct stack_st_void * sk;
    int dummy;
};

union _union_271 {
    char * ptr;
    struct rsa_st * rsa;
    struct dsa_st * dsa;
    struct dh_st * dh;
    struct ec_key_st * ec;
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
    struct stack_st_X509_EXTENSION * extensions;
    ASN1_ENCODING enc;
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

struct stack_st_X509_ALGOR {
    _STACK stack;
};

struct evp_pkey_asn1_method_st {
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

struct X509_pubkey_st {
    X509_ALGOR * algor;
    ASN1_BIT_STRING * public_key;
    EVP_PKEY * pkey;
};

struct NETSCAPE_X509_st {
    ASN1_OCTET_STRING * header;
    X509 * cert;
};

struct AUTHORITY_KEYID_st {
    ASN1_OCTET_STRING * keyid;
    GENERAL_NAMES * issuer;
    ASN1_INTEGER * serial;
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

struct buf_mem_st {
    size_t length;
    char * data;
    size_t max;
};

struct stack_st_X509_ATTRIBUTE {
    _STACK stack;
};

struct stack_st_DIST_POINT {
    _STACK stack;
};

struct NAME_CONSTRAINTS_st {
    struct stack_st_GENERAL_SUBTREE * permittedSubtrees;
    struct stack_st_GENERAL_SUBTREE * excludedSubtrees;
};

struct stack_st_void {
    _STACK stack;
};

struct ec_key_st {
};

struct ASIdentifiers_st {
    ASIdentifierChoice * asnum;
    ASIdentifierChoice * * rdi;
};

struct X509_name_st {
    struct stack_st_X509_NAME_ENTRY * entries;
    int modified;
    BUF_MEM * bytes;
    uchar * canon_enc;
    int canon_enclen;
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
    AUTHORITY_KEYID * akid;
    X509_POLICY_CACHE * policy_cache;
    struct stack_st_DIST_POINT * crldp;
    struct stack_st_GENERAL_NAME * altname;
    NAME_CONSTRAINTS * nc;
    struct stack_st_IPAddressFamily * rfc3779_addr;
    struct ASIdentifiers_st * rfc3779_asid;
    uchar sha1_hash[20];
    X509_CERT_AUX * aux;
};

struct X509_val_st {
    ASN1_TIME * notBefore;
    ASN1_TIME * notAfter;
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

struct stack_st_X509_EXTENSION {
    _STACK stack;
};

struct stack_st_ASN1_OBJECT {
    _STACK stack;
};

struct DSA_SIG_st {
    BIGNUM * r;
    BIGNUM * s;
};

struct X509_POLICY_CACHE_st {
};

struct stack_st_IPAddressFamily {
    _STACK stack;
};

struct stack_st_GENERAL_SUBTREE {
    _STACK stack;
};

struct bignum_st {
    ulong * d;
    int top;
    int dmax;
    int neg;
    int flags;
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

struct engine_st {
};

struct stack_st_ASIdOrRange {
    _STACK stack;
};

struct x509_cert_aux_st {
    struct stack_st_ASN1_OBJECT * trust;
    struct stack_st_ASN1_OBJECT * reject;
    ASN1_UTF8STRING * alias;
    ASN1_OCTET_STRING * keyid;
    struct stack_st_X509_ALGOR * other;
};

union _union_930 {
    ASN1_NULL * inherit;
    ASIdOrRanges * asIdsOrRanges;
};

struct ASIdentifierChoice_st {
    int type;
    union _union_930 u;
};

struct stack_st_X509_NAME_ENTRY {
    _STACK stack;
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

struct stack_st_GENERAL_NAME {
    _STACK stack;
};

struct evp_pkey_st {
    int type;
    int save_type;
    int references;
    EVP_PKEY_ASN1_METHOD * ameth;
    ENGINE * engine;
    union _union_271 pkey;
    int save_parameters;
    struct stack_st_X509_ATTRIBUTE * attributes;
};

struct bn_mont_ctx_st {
    int ri;
    BIGNUM RR;
    BIGNUM N;
    BIGNUM Ni;
    ulong n0[2];
    int flags;
};

typedef struct stack_st_ASN1_GENERALSTRING stack_st_ASN1_GENERALSTRING, *Pstack_st_ASN1_GENERALSTRING;

struct stack_st_ASN1_GENERALSTRING {
    _STACK stack;
};

typedef struct stack_st_ASN1_INTEGER stack_st_ASN1_INTEGER, *Pstack_st_ASN1_INTEGER;

struct stack_st_ASN1_INTEGER {
    _STACK stack;
};

typedef struct stack_st_ASN1_STRING_TABLE stack_st_ASN1_STRING_TABLE, *Pstack_st_ASN1_STRING_TABLE;

struct stack_st_ASN1_STRING_TABLE {
    _STACK stack;
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

#define ASN1_OP_DETACHED_POST 13

#define ASN1_OP_DETACHED_PRE 12

#define ASN1_OP_FREE_POST 3

#define ASN1_OP_FREE_PRE 2

#define ASN1_OP_I2D_POST 7

#define ASN1_OP_I2D_PRE 6

#define ASN1_OP_NEW_POST 1

#define ASN1_OP_NEW_PRE 0

#define ASN1_OP_PRINT_POST 9

#define ASN1_OP_PRINT_PRE 8

#define ASN1_OP_STREAM_POST 11

#define ASN1_OP_STREAM_PRE 10

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

typedef struct stack_st_ASN1_ADB_TABLE stack_st_ASN1_ADB_TABLE, *Pstack_st_ASN1_ADB_TABLE;

typedef struct ASN1_ADB_TABLE_st ASN1_ADB_TABLE_st, *PASN1_ADB_TABLE_st;

typedef struct ASN1_ADB_TABLE_st ASN1_ADB_TABLE;

struct ASN1_ADB_st {
    ulong flags;
    ulong offset;
    struct stack_st_ASN1_ADB_TABLE * * app_items;
    ASN1_ADB_TABLE * tbl;
    long tblcount;
    ASN1_TEMPLATE * default_tt;
    ASN1_TEMPLATE * null_tt;
};

struct stack_st_ASN1_ADB_TABLE {
};

struct ASN1_ADB_TABLE_st {
    long value;
    ASN1_TEMPLATE tt;
};

typedef struct ASN1_AUX_st ASN1_AUX_st, *PASN1_AUX_st;

typedef struct ASN1_AUX_st ASN1_AUX;

typedef int (ASN1_aux_cb)(int, ASN1_VALUE * *, ASN1_ITEM *, void *);

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

typedef struct bio_st bio_st, *Pbio_st;

typedef struct bio_st BIO;

typedef struct asn1_pctx_st asn1_pctx_st, *Pasn1_pctx_st;

typedef struct asn1_pctx_st ASN1_PCTX;

typedef int (ASN1_ex_print_func)(BIO *, ASN1_VALUE * *, int, char *, ASN1_PCTX *);

typedef struct bio_method_st bio_method_st, *Pbio_method_st;

typedef void (bio_info_cb)(struct bio_st *, int, char *, int, long, long);

typedef struct bio_method_st BIO_METHOD;

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

struct asn1_pctx_st {
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

typedef struct ASN1_EXTERN_FUNCS_st ASN1_EXTERN_FUNCS_st, *PASN1_EXTERN_FUNCS_st;

typedef struct ASN1_EXTERN_FUNCS_st ASN1_EXTERN_FUNCS;

struct ASN1_EXTERN_FUNCS_st {
    void * app_data;
    ASN1_ex_new_func * asn1_ex_new;
    ASN1_ex_free_func * asn1_ex_free;
    ASN1_ex_free_func * asn1_ex_clear;
    ASN1_ex_d2i * asn1_ex_d2i;
    ASN1_ex_i2d * asn1_ex_i2d;
    ASN1_ex_print_func * asn1_ex_print;
};

typedef int (ASN1_primitive_c2i)(ASN1_VALUE * *, uchar *, int, int, char *, ASN1_ITEM *);

typedef struct ASN1_PRIMITIVE_FUNCS_st ASN1_PRIMITIVE_FUNCS_st, *PASN1_PRIMITIVE_FUNCS_st;

typedef struct ASN1_PRIMITIVE_FUNCS_st ASN1_PRIMITIVE_FUNCS;

typedef int (ASN1_primitive_i2c)(ASN1_VALUE * *, uchar *, int *, ASN1_ITEM *);

typedef int (ASN1_primitive_print)(BIO *, ASN1_VALUE * *, ASN1_ITEM *, int, ASN1_PCTX *);

struct ASN1_PRIMITIVE_FUNCS_st {
    void * app_data;
    ulong flags;
    ASN1_ex_new_func * prim_new;
    ASN1_ex_free_func * prim_free;
    ASN1_ex_free_func * prim_clear;
    ASN1_primitive_c2i * prim_c2i;
    ASN1_primitive_i2c * prim_i2c;
    ASN1_primitive_print * prim_print;
};

typedef struct ASN1_PRINT_ARG_st ASN1_PRINT_ARG_st, *PASN1_PRINT_ARG_st;

typedef struct ASN1_PRINT_ARG_st ASN1_PRINT_ARG;

struct ASN1_PRINT_ARG_st {
    BIO * out;
    int indent;
    ASN1_PCTX * pctx;
};

typedef struct ASN1_STREAM_ARG_st ASN1_STREAM_ARG_st, *PASN1_STREAM_ARG_st;

typedef struct ASN1_STREAM_ARG_st ASN1_STREAM_ARG;

struct ASN1_STREAM_ARG_st {
    BIO * out;
    BIO * ndef_bio;
    uchar * * boundary;
};

typedef struct stack_st_ASN1_VALUE stack_st_ASN1_VALUE, *Pstack_st_ASN1_VALUE;

struct stack_st_ASN1_VALUE {
    _STACK stack;
};

#define __ASSERT_FUNCTION 0

#define _ASSERT_H 1

#define _RPC_AUTH_H 1

#define AUTH_DES 3

#define AUTH_DH 3

#define AUTH_KERB 4

#define AUTH_NONE 0

#define AUTH_NULL 0

#define AUTH_SHORT 2

#define AUTH_SYS 1

#define AUTH_UNIX 1

#define MAX_AUTH_BYTES 400

#define MAXNETNAMELEN 255

typedef struct _struct_1940 _struct_1940, *P_struct_1940;

struct _struct_1940 {
    u_int32_t high;
    u_int32_t low;
};

typedef struct AUTH AUTH, *PAUTH;

typedef struct opaque_auth opaque_auth, *Popaque_auth;

typedef union des_block des_block, *Pdes_block;

typedef struct auth_ops auth_ops, *Pauth_ops;

typedef struct XDR XDR, *PXDR;

typedef char * __caddr_t;

typedef __caddr_t caddr_t;

typedef int enum_t;

typedef uint __u_int;

typedef __u_int u_int;

typedef enum xdr_op {
    XDR_DECODE=1,
    XDR_ENCODE=0,
    XDR_FREE=2
} xdr_op;

typedef struct xdr_ops xdr_ops, *Pxdr_ops;

typedef int bool_t;

typedef int int32_t;

union des_block {
    struct _struct_1940 key;
    char c[8];
};

struct opaque_auth {
    enum_t oa_flavor;
    caddr_t oa_base;
    u_int oa_length;
};

struct XDR {
    enum xdr_op x_op;
    struct xdr_ops * x_ops;
    caddr_t x_public;
    caddr_t x_private;
    caddr_t x_base;
    u_int x_handy;
};

struct AUTH {
    struct opaque_auth ah_cred;
    struct opaque_auth ah_verf;
    union des_block ah_key;
    struct auth_ops * ah_ops;
    caddr_t ah_private;
};

struct auth_ops {
    void (* ah_nextverf)(struct AUTH *);
    int (* ah_marshal)(struct AUTH *, struct XDR *);
    int (* ah_validate)(struct AUTH *, struct opaque_auth *);
    int (* ah_refresh)(struct AUTH *);
    void (* ah_destroy)(struct AUTH *);
};

struct xdr_ops {
    bool_t (* x_getlong)(struct XDR *, long *);
    bool_t (* x_putlong)(struct XDR *, long *);
    bool_t (* x_getbytes)(struct XDR *, caddr_t, u_int);
    bool_t (* x_putbytes)(struct XDR *, char *, u_int);
    u_int (* x_getpostn)(struct XDR *);
    bool_t (* x_setpostn)(struct XDR *, u_int);
    int32_t * (* x_inline)(struct XDR *, u_int);
    void (* x_destroy)(struct XDR *);
    bool_t (* x_getint32)(struct XDR *, int32_t *);
    bool_t (* x_putint32)(struct XDR *, int32_t *);
};

typedef enum auth_stat {
    AUTH_BADCRED=1,
    AUTH_BADVERF=3,
    AUTH_FAILED=7,
    AUTH_INVALIDRESP=6,
    AUTH_OK=0,
    AUTH_REJECTEDCRED=2,
    AUTH_REJECTEDVERF=4,
    AUTH_TOOWEAK=5
} auth_stat;

#define _RPC_AUTH_DES_H 1

typedef union _union_2008 _union_2008, *P_union_2008;

typedef struct rpc_timeval rpc_timeval, *Prpc_timeval;

typedef uint uint32_t;

struct rpc_timeval {
    uint32_t tv_sec;
    uint32_t tv_usec;
};

union _union_2008 {
    struct rpc_timeval adv_ctime;
    union des_block adv_xtime;
};

typedef struct authdes_cred authdes_cred, *Pauthdes_cred;

typedef enum authdes_namekind {
    ADN_FULLNAME=0,
    ADN_NICKNAME=1
} authdes_namekind;

typedef struct authdes_fullname authdes_fullname, *Pauthdes_fullname;

struct authdes_fullname {
    char * name;
    union des_block key;
    uint32_t window;
};

struct authdes_cred {
    enum authdes_namekind adc_namekind;
    struct authdes_fullname adc_fullname;
    uint32_t adc_nickname;
};

typedef struct authdes_verf authdes_verf, *Pauthdes_verf;

struct authdes_verf {
    union _union_2008 adv_time_u;
    uint32_t adv_int_u;
};

#define _RPC_AUTH_UNIX_H 1

#define MAX_MACHINE_NAME 255

#define NGRPS 16

typedef struct authunix_parms authunix_parms, *Pauthunix_parms;

typedef ulong __u_long;

typedef __u_long u_long;

typedef uint __uid_t;

typedef uint __gid_t;

struct authunix_parms {
    u_long aup_time;
    char * aup_machname;
    __uid_t aup_uid;
    __gid_t aup_gid;
    u_int aup_len;
    __gid_t * aup_gids;
};

typedef struct short_hand_verf short_hand_verf, *Pshort_hand_verf;

struct short_hand_verf {
    struct opaque_auth new_cred;
};

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

#define BIO_C_GET_EX_ARG 154

#define BIO_C_GET_FD 105

#define BIO_C_GET_FILE_PTR 107

#define BIO_C_GET_MD 112

#define BIO_C_GET_MD_CTX 120

#define BIO_C_GET_PREFIX 150

#define BIO_C_GET_PROXY_PARAM 121

#define BIO_C_GET_READ_REQUEST 141

#define BIO_C_GET_SOCKS 134

#define BIO_C_GET_SSL 110

#define BIO_C_GET_SSL_NUM_RENEGOTIATES 126

#define BIO_C_GET_SUFFIX 152

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

#define BIO_C_SET_EX_ARG 153

#define BIO_C_SET_FD 104

#define BIO_C_SET_FILE_PTR 106

#define BIO_C_SET_FILENAME 108

#define BIO_C_SET_MD 111

#define BIO_C_SET_MD_CTX 148

#define BIO_C_SET_NBIO 102

#define BIO_C_SET_PREFIX 149

#define BIO_C_SET_PROXY_PARAM 103

#define BIO_C_SET_SOCKS 135

#define BIO_C_SET_SSL 109

#define BIO_C_SET_SSL_RENEGOTIATE_BYTES 125

#define BIO_C_SET_SSL_RENEGOTIATE_TIMEOUT 127

#define BIO_C_SET_SUFFIX 151

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

#define BIO_F_DGRAM_SCTP_READ 132

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

#define BIO_TYPE_ASN1 534

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

typedef int (asn1_ps_func)(BIO *, uchar * *, int *, void *);

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

typedef struct stack_st_BIO stack_st_BIO, *Pstack_st_BIO;

struct stack_st_BIO {
    _STACK stack;
};

#define __BITS_PER_LONG 32

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

#define BN_BITS 128

#define BN_BITS2 64

#define BN_BITS4 32

#define BN_BLINDING_NO_RECREATE 2

#define BN_BLINDING_NO_UPDATE 1

#define BN_BYTES 8

#define BN_DEC_CONV -8446744073709551616

#define BN_DEC_NUM 19

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

#define BN_MASK2 -1

#define BN_MASK2h -4294967296

#define BN_MASK2h1 -2147483648

#define BN_MASK2l 4294967295

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

#define BN_TBIT -9223372036854775808

#define BOOTPARAMPROC_GETFILE 2

#define BOOTPARAMPROC_WHOAMI 1

#define BOOTPARAMPROG 100026

#define BOOTPARAMVERS 1

#define IP_ADDR_TYPE 1

#define MAX_FILEID 32

#define MAX_PATH_LEN 1024

typedef union _union_2067 _union_2067, *P_union_2067;

typedef struct ip_addr_t ip_addr_t, *Pip_addr_t;

struct ip_addr_t {
    char net;
    char host;
    char lh;
    char impno;
};

union _union_2067 {
    struct ip_addr_t ip_addr;
};

typedef struct bp_address bp_address, *Pbp_address;

struct bp_address {
    int address_type;
    union _union_2067 bp_address_u;
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

#define BUF_F_BUF_MEM_GROW 100

#define BUF_F_BUF_MEM_GROW_CLEAN 105

#define BUF_F_BUF_MEM_NEW 101

#define BUF_F_BUF_MEMDUP 103

#define BUF_F_BUF_STRDUP 102

#define BUF_F_BUF_STRNDUP 104

#define _BITS_BYTESWAP_H 1

#define CAMELLIA_BLOCK_SIZE 16

#define CAMELLIA_DECRYPT 0

#define CAMELLIA_ENCRYPT 1

#define CAMELLIA_TABLE_BYTE_LEN 272

#define CAMELLIA_TABLE_WORD_LEN 68

typedef union _union_714 _union_714, *P_union_714;

typedef uint KEY_TABLE_TYPE[68];

union _union_714 {
    double d;
    KEY_TABLE_TYPE rd_key;
};

typedef struct camellia_key_st camellia_key_st, *Pcamellia_key_st;

typedef struct camellia_key_st CAMELLIA_KEY;

struct camellia_key_st {
    union _union_714 u;
    int grand_rounds;
};

#define CAST_BLOCK 8

#define CAST_DECRYPT 0

#define CAST_ENCRYPT 1

#define CAST_KEY_LENGTH 16

typedef struct cast_key_st cast_key_st, *Pcast_key_st;

typedef struct cast_key_st CAST_KEY;

struct cast_key_st {
    uint data[32];
    int short_key;
};

#define _SYS_CDEFS_H 1

#define _RPC_CLNT_H 1

#define CLGET_FD 6

#define CLGET_PROG 14

#define CLGET_RETRY_TIMEOUT 5

#define CLGET_SERVER_ADDR 3

#define CLGET_SVC_ADDR 7

#define CLGET_TIMEOUT 2

#define CLGET_VERS 12

#define CLGET_XID 10

#define CLSET_FD_CLOSE 8

#define CLSET_FD_NCLOSE 9

#define CLSET_POP_TIMOD 18

#define CLSET_PROG 15

#define CLSET_PUSH_TIMOD 17

#define CLSET_RETRY_TIMEOUT 4

#define CLSET_SVC_ADDR 16

#define CLSET_TIMEOUT 1

#define CLSET_VERS 13

#define CLSET_XID 11

#define NULLPROC 0

#define RPCSMALLMSGSIZE 400

#define RPCTEST_NULL_BATCH_PROC 3

#define RPCTEST_NULL_PROC 2

#define RPCTEST_PROGRAM 1

#define RPCTEST_VERSION 1

#define UDPMSGSIZE 8800

typedef struct _struct_1962 _struct_1962, *P_struct_1962;

struct _struct_1962 {
    u_long low;
    u_long high;
};

typedef struct _struct_1963 _struct_1963, *P_struct_1963;

struct _struct_1963 {
    long s1;
    long s2;
};

typedef union _union_1961 _union_1961, *P_union_1961;

union _union_1961 {
    int RE_errno;
    enum auth_stat RE_why;
    struct _struct_1962 RE_vers;
    struct _struct_1963 RE_lb;
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
    RPC_INPROGRESS=24,
    RPC_INTR=18,
    RPC_N2AXLATEFAILURE=22,
    RPC_NOBROADCAST=21,
    RPC_PROCUNAVAIL=10,
    RPC_PROGNOTREGISTERED=15,
    RPC_PROGUNAVAIL=8,
    RPC_PROGVERSMISMATCH=9,
    RPC_RPCBFAILURE=14,
    RPC_STALERACHANDLE=25,
    RPC_SUCCESS=0,
    RPC_SYSTEMERROR=12,
    RPC_TIMEDOUT=5,
    RPC_TLIERROR=20,
    RPC_UDERROR=23,
    RPC_UNKNOWNADDR=19,
    RPC_UNKNOWNHOST=13,
    RPC_UNKNOWNPROTO=17,
    RPC_VERSMISMATCH=6
} clnt_stat;

typedef bool_t (* xdrproc_t)(struct XDR *, void *, ...);

typedef struct timeval timeval, *Ptimeval;

typedef struct rpc_err rpc_err, *Prpc_err;

typedef long __time_t;

typedef long __suseconds_t;

struct rpc_err {
    enum clnt_stat re_status;
    union _union_1961 ru;
};

struct timeval {
    __time_t tv_sec;
    __suseconds_t tv_usec;
};

struct clnt_ops {
    clnt_stat (* cl_call)(struct CLIENT *, u_long, xdrproc_t, caddr_t, xdrproc_t, caddr_t, struct timeval);
    void (* cl_abort)(void);
    void (* cl_geterr)(struct CLIENT *, struct rpc_err *);
    bool_t (* cl_freeres)(struct CLIENT *, xdrproc_t, caddr_t);
    void (* cl_destroy)(struct CLIENT *);
    bool_t (* cl_control)(struct CLIENT *, int, char *);
};

struct CLIENT {
    struct AUTH * cl_auth;
    struct clnt_ops * cl_ops;
    caddr_t cl_private;
};

typedef struct rpc_createerr rpc_createerr, *Prpc_createerr;

struct rpc_createerr {
    enum clnt_stat cf_stat;
    struct rpc_err cf_error;
};

typedef struct CMAC_CTX_st CMAC_CTX_st, *PCMAC_CTX_st;

typedef struct CMAC_CTX_st CMAC_CTX;

struct CMAC_CTX_st {
};

#define CMS_BINARY 128

#define CMS_CRLFEOL 2048

#define CMS_DEBUG_DECRYPT 131072

#define CMS_DETACHED 64

#define CMS_F_CHECK_CONTENT 99

#define CMS_F_CMS_ADD0_CERT 164

#define CMS_F_CMS_ADD0_RECIPIENT_KEY 100

#define CMS_F_CMS_ADD0_RECIPIENT_PASSWORD 165

#define CMS_F_CMS_ADD1_RECEIPTREQUEST 158

#define CMS_F_CMS_ADD1_RECIPIENT_CERT 101

#define CMS_F_CMS_ADD1_SIGNER 102

#define CMS_F_CMS_ADD1_SIGNINGTIME 103

#define CMS_F_CMS_COMPRESS 104

#define CMS_F_CMS_COMPRESSEDDATA_CREATE 105

#define CMS_F_CMS_COMPRESSEDDATA_INIT_BIO 106

#define CMS_F_CMS_COPY_CONTENT 107

#define CMS_F_CMS_COPY_MESSAGEDIGEST 108

#define CMS_F_CMS_DATA 109

#define CMS_F_CMS_DATAFINAL 110

#define CMS_F_CMS_DATAINIT 111

#define CMS_F_CMS_DECRYPT 112

#define CMS_F_CMS_DECRYPT_SET1_KEY 113

#define CMS_F_CMS_DECRYPT_SET1_PASSWORD 166

#define CMS_F_CMS_DECRYPT_SET1_PKEY 114

#define CMS_F_CMS_DIGEST_VERIFY 118

#define CMS_F_CMS_DIGESTALGORITHM_FIND_CTX 115

#define CMS_F_CMS_DIGESTALGORITHM_INIT_BIO 116

#define CMS_F_CMS_DIGESTEDDATA_DO_FINAL 117

#define CMS_F_CMS_ENCODE_RECEIPT 161

#define CMS_F_CMS_ENCRYPT 119

#define CMS_F_CMS_ENCRYPTEDCONTENT_INIT_BIO 120

#define CMS_F_CMS_ENCRYPTEDDATA_DECRYPT 121

#define CMS_F_CMS_ENCRYPTEDDATA_ENCRYPT 122

#define CMS_F_CMS_ENCRYPTEDDATA_SET1_KEY 123

#define CMS_F_CMS_ENVELOPED_DATA_INIT 126

#define CMS_F_CMS_ENVELOPEDDATA_CREATE 124

#define CMS_F_CMS_ENVELOPEDDATA_INIT_BIO 125

#define CMS_F_CMS_FINAL 127

#define CMS_F_CMS_GET0_CERTIFICATE_CHOICES 128

#define CMS_F_CMS_GET0_CONTENT 129

#define CMS_F_CMS_GET0_ECONTENT_TYPE 130

#define CMS_F_CMS_GET0_ENVELOPED 131

#define CMS_F_CMS_GET0_REVOCATION_CHOICES 132

#define CMS_F_CMS_GET0_SIGNED 133

#define CMS_F_CMS_MSGSIGDIGEST_ADD1 162

#define CMS_F_CMS_RECEIPT_VERIFY 160

#define CMS_F_CMS_RECEIPTREQUEST_CREATE0 159

#define CMS_F_CMS_RECIPIENTINFO_DECRYPT 134

#define CMS_F_CMS_RECIPIENTINFO_KEKRI_DECRYPT 135

#define CMS_F_CMS_RECIPIENTINFO_KEKRI_ENCRYPT 136

#define CMS_F_CMS_RECIPIENTINFO_KEKRI_GET0_ID 137

#define CMS_F_CMS_RECIPIENTINFO_KEKRI_ID_CMP 138

#define CMS_F_CMS_RECIPIENTINFO_KTRI_CERT_CMP 139

#define CMS_F_CMS_RECIPIENTINFO_KTRI_DECRYPT 140

#define CMS_F_CMS_RECIPIENTINFO_KTRI_ENCRYPT 141

#define CMS_F_CMS_RECIPIENTINFO_KTRI_GET0_ALGS 142

#define CMS_F_CMS_RECIPIENTINFO_KTRI_GET0_SIGNER_ID 143

#define CMS_F_CMS_RECIPIENTINFO_PWRI_CRYPT 167

#define CMS_F_CMS_RECIPIENTINFO_SET0_KEY 144

#define CMS_F_CMS_RECIPIENTINFO_SET0_PASSWORD 168

#define CMS_F_CMS_RECIPIENTINFO_SET0_PKEY 145

#define CMS_F_CMS_SET1_SIGNERIDENTIFIER 146

#define CMS_F_CMS_SET_DETACHED 147

#define CMS_F_CMS_SIGN 148

#define CMS_F_CMS_SIGN_RECEIPT 163

#define CMS_F_CMS_SIGNED_DATA_INIT 149

#define CMS_F_CMS_SIGNERINFO_CONTENT_SIGN 150

#define CMS_F_CMS_SIGNERINFO_SIGN 151

#define CMS_F_CMS_SIGNERINFO_VERIFY 152

#define CMS_F_CMS_SIGNERINFO_VERIFY_CERT 153

#define CMS_F_CMS_SIGNERINFO_VERIFY_CONTENT 154

#define CMS_F_CMS_STREAM 155

#define CMS_F_CMS_UNCOMPRESS 156

#define CMS_F_CMS_VERIFY 157

#define CMS_NO_ATTR_VERIFY 8

#define CMS_NO_CONTENT_VERIFY 4

#define CMS_NO_SIGNER_CERT_VERIFY 32

#define CMS_NOATTR 256

#define CMS_NOCERTS 2

#define CMS_NOCRL 8192

#define CMS_NOINTERN 16

#define CMS_NOOLDMIMETYPE 1024

#define CMS_NOSIGS 12

#define CMS_NOSMIMECAP 512

#define CMS_NOVERIFY 32

#define CMS_PARTIAL 16384

#define CMS_R_ADD_SIGNER_ERROR 99

#define CMS_R_CERTIFICATE_ALREADY_PRESENT 175

#define CMS_R_CERTIFICATE_HAS_NO_KEYID 160

#define CMS_R_CERTIFICATE_VERIFY_ERROR 100

#define CMS_R_CIPHER_INITIALISATION_ERROR 101

#define CMS_R_CIPHER_PARAMETER_INITIALISATION_ERROR 102

#define CMS_R_CMS_DATAFINAL_ERROR 103

#define CMS_R_CMS_LIB 104

#define CMS_R_CONTENT_NOT_FOUND 105

#define CMS_R_CONTENT_TYPE_MISMATCH 171

#define CMS_R_CONTENT_TYPE_NOT_COMPRESSED_DATA 106

#define CMS_R_CONTENT_TYPE_NOT_ENVELOPED_DATA 107

#define CMS_R_CONTENT_TYPE_NOT_SIGNED_DATA 108

#define CMS_R_CONTENT_VERIFY_ERROR 109

#define CMS_R_CONTENTIDENTIFIER_MISMATCH 170

#define CMS_R_CTRL_ERROR 110

#define CMS_R_CTRL_FAILURE 111

#define CMS_R_DECRYPT_ERROR 112

#define CMS_R_DIGEST_ERROR 161

#define CMS_R_ERROR_GETTING_PUBLIC_KEY 113

#define CMS_R_ERROR_READING_MESSAGEDIGEST_ATTRIBUTE 114

#define CMS_R_ERROR_SETTING_KEY 115

#define CMS_R_ERROR_SETTING_RECIPIENTINFO 116

#define CMS_R_INVALID_ENCRYPTED_KEY_LENGTH 117

#define CMS_R_INVALID_KEY_ENCRYPTION_PARAMETER 176

#define CMS_R_INVALID_KEY_LENGTH 118

#define CMS_R_MD_BIO_INIT_ERROR 119

#define CMS_R_MESSAGEDIGEST_ATTRIBUTE_WRONG_LENGTH 120

#define CMS_R_MESSAGEDIGEST_WRONG_LENGTH 121

#define CMS_R_MSGSIGDIGEST_ERROR 172

#define CMS_R_MSGSIGDIGEST_VERIFICATION_FAILURE 162

#define CMS_R_MSGSIGDIGEST_WRONG_LENGTH 163

#define CMS_R_NEED_ONE_SIGNER 164

#define CMS_R_NO_CIPHER 126

#define CMS_R_NO_CONTENT 127

#define CMS_R_NO_CONTENT_TYPE 173

#define CMS_R_NO_DEFAULT_DIGEST 128

#define CMS_R_NO_DIGEST_SET 129

#define CMS_R_NO_KEY 130

#define CMS_R_NO_KEY_OR_CERT 174

#define CMS_R_NO_MATCHING_DIGEST 131

#define CMS_R_NO_MATCHING_RECIPIENT 132

#define CMS_R_NO_MATCHING_SIGNATURE 166

#define CMS_R_NO_MSGSIGDIGEST 167

#define CMS_R_NO_PASSWORD 178

#define CMS_R_NO_PRIVATE_KEY 133

#define CMS_R_NO_PUBLIC_KEY 134

#define CMS_R_NO_RECEIPT_REQUEST 168

#define CMS_R_NO_SIGNERS 135

#define CMS_R_NOT_A_SIGNED_RECEIPT 165

#define CMS_R_NOT_ENCRYPTED_DATA 122

#define CMS_R_NOT_KEK 123

#define CMS_R_NOT_KEY_TRANSPORT 124

#define CMS_R_NOT_PWRI 177

#define CMS_R_NOT_SUPPORTED_FOR_THIS_KEY_TYPE 125

#define CMS_R_PRIVATE_KEY_DOES_NOT_MATCH_CERTIFICATE 136

#define CMS_R_RECEIPT_DECODE_ERROR 169

#define CMS_R_RECIPIENT_ERROR 137

#define CMS_R_SIGNER_CERTIFICATE_NOT_FOUND 138

#define CMS_R_SIGNFINAL_ERROR 139

#define CMS_R_SMIME_TEXT_ERROR 140

#define CMS_R_STORE_INIT_ERROR 141

#define CMS_R_TYPE_NOT_COMPRESSED_DATA 142

#define CMS_R_TYPE_NOT_DATA 143

#define CMS_R_TYPE_NOT_DIGESTED_DATA 144

#define CMS_R_TYPE_NOT_ENCRYPTED_DATA 145

#define CMS_R_TYPE_NOT_ENVELOPED_DATA 146

#define CMS_R_UNABLE_TO_FINALIZE_CONTEXT 147

#define CMS_R_UNKNOWN_CIPHER 148

#define CMS_R_UNKNOWN_DIGEST_ALGORIHM 149

#define CMS_R_UNKNOWN_ID 150

#define CMS_R_UNSUPPORTED_COMPRESSION_ALGORITHM 151

#define CMS_R_UNSUPPORTED_CONTENT_TYPE 152

#define CMS_R_UNSUPPORTED_KEK_ALGORITHM 153

#define CMS_R_UNSUPPORTED_KEY_ENCRYPTION_ALGORITHM 179

#define CMS_R_UNSUPPORTED_RECIPIENT_TYPE 154

#define CMS_R_UNSUPPORTED_RECPIENTINFO_TYPE 155

#define CMS_R_UNSUPPORTED_TYPE 156

#define CMS_R_UNWRAP_ERROR 157

#define CMS_R_UNWRAP_FAILURE 180

#define CMS_R_VERIFICATION_FAILURE 158

#define CMS_R_WRAP_ERROR 159

#define CMS_RECIPINFO_AGREE 1

#define CMS_RECIPINFO_KEK 2

#define CMS_RECIPINFO_OTHER 4

#define CMS_RECIPINFO_PASS 3

#define CMS_RECIPINFO_TRANS 0

#define CMS_REUSE_DIGEST 32768

#define CMS_SIGNERINFO_ISSUER_SERIAL 0

#define CMS_SIGNERINFO_KEYIDENTIFIER 1

#define CMS_STREAM 4096

#define CMS_TEXT 1

#define CMS_USE_KEYID 65536

typedef struct CMS_CertificateChoices CMS_CertificateChoices, *PCMS_CertificateChoices;

struct CMS_CertificateChoices {
};

typedef struct CMS_ContentInfo_st CMS_ContentInfo_st, *PCMS_ContentInfo_st;

typedef struct CMS_ContentInfo_st CMS_ContentInfo;

struct CMS_ContentInfo_st {
};

typedef struct CMS_Receipt_st CMS_Receipt_st, *PCMS_Receipt_st;

typedef struct CMS_Receipt_st CMS_Receipt;

struct CMS_Receipt_st {
};

typedef struct CMS_ReceiptRequest_st CMS_ReceiptRequest_st, *PCMS_ReceiptRequest_st;

typedef struct CMS_ReceiptRequest_st CMS_ReceiptRequest;

struct CMS_ReceiptRequest_st {
};

typedef struct CMS_RecipientInfo_st CMS_RecipientInfo_st, *PCMS_RecipientInfo_st;

typedef struct CMS_RecipientInfo_st CMS_RecipientInfo;

struct CMS_RecipientInfo_st {
};

typedef struct CMS_RevocationInfoChoice_st CMS_RevocationInfoChoice_st, *PCMS_RevocationInfoChoice_st;

typedef struct CMS_RevocationInfoChoice_st CMS_RevocationInfoChoice;

struct CMS_RevocationInfoChoice_st {
};

typedef struct CMS_SignerInfo_st CMS_SignerInfo_st, *PCMS_SignerInfo_st;

typedef struct CMS_SignerInfo_st CMS_SignerInfo;

struct CMS_SignerInfo_st {
};

typedef struct stack_st_CMS_RecipientInfo stack_st_CMS_RecipientInfo, *Pstack_st_CMS_RecipientInfo;

struct stack_st_CMS_RecipientInfo {
};

typedef struct stack_st_CMS_SignerInfo stack_st_CMS_SignerInfo, *Pstack_st_CMS_SignerInfo;

struct stack_st_CMS_SignerInfo {
    _STACK stack;
};

#define COMP_F_BIO_ZLIB_FLUSH 99

#define COMP_F_BIO_ZLIB_NEW 100

#define COMP_F_BIO_ZLIB_READ 101

#define COMP_F_BIO_ZLIB_WRITE 102

#define COMP_R_ZLIB_DEFLATE_ERROR 99

#define COMP_R_ZLIB_INFLATE_ERROR 100

#define COMP_R_ZLIB_NOT_SUPPORTED 101

typedef struct comp_ctx_st comp_ctx_st, *Pcomp_ctx_st;

typedef struct comp_ctx_st COMP_CTX;

typedef struct comp_method_st comp_method_st, *Pcomp_method_st;

typedef struct comp_method_st COMP_METHOD;

struct comp_ctx_st {
    COMP_METHOD * meth;
    ulong compress_in;
    ulong compress_out;
    ulong expand_in;
    ulong expand_out;
    CRYPTO_EX_DATA ex_data;
};

struct comp_method_st {
    int type;
    char * name;
    int (* init)(COMP_CTX *);
    void (* finish)(COMP_CTX *);
    int (* compress)(COMP_CTX *, uchar *, uint, uchar *, uint);
    int (* expand)(COMP_CTX *, uchar *, uint, uchar *, uint);
    long (* ctrl)(void);
    long (* callback_ctrl)(void);
};

#define _COMPLEX_H 1

#define CONF_F_CONF_DUMP_FP 104

#define CONF_F_CONF_LOAD 100

#define CONF_F_CONF_LOAD_BIO 102

#define CONF_F_CONF_LOAD_FP 103

#define CONF_F_CONF_MODULES_LOAD 116

#define CONF_F_CONF_PARSE_LIST 119

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

#define CONF_R_LIST_CANNOT_BE_NULL 115

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

typedef struct lhash_st_CONF_VALUE lhash_st_CONF_VALUE, *Plhash_st_CONF_VALUE;

struct lhash_st_CONF_VALUE {
    int dummy;
};

struct conf_st {
    CONF_METHOD * meth;
    void * meth_data;
    struct lhash_st_CONF_VALUE * data;
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

typedef struct stack_st_CONF_IMODULE stack_st_CONF_IMODULE, *Pstack_st_CONF_IMODULE;

struct stack_st_CONF_IMODULE {
    _STACK stack;
};

typedef struct stack_st_CONF_MODULE stack_st_CONF_MODULE, *Pstack_st_CONF_MODULE;

struct stack_st_CONF_MODULE {
    _STACK stack;
};

typedef struct stack_st_CONF_VALUE stack_st_CONF_VALUE, *Pstack_st_CONF_VALUE;

struct stack_st_CONF_VALUE {
    _STACK stack;
};

typedef enum enum_1570 {
    _PC_2_SYMLINKS=20,
    _PC_ALLOC_SIZE_MIN=18,
    _PC_ASYNC_IO=10,
    _PC_CHOWN_RESTRICTED=6,
    _PC_FILESIZEBITS=13,
    _PC_LINK_MAX=0,
    _PC_MAX_CANON=1,
    _PC_MAX_INPUT=2,
    _PC_NAME_MAX=3,
    _PC_NO_TRUNC=7,
    _PC_PATH_MAX=4,
    _PC_PIPE_BUF=5,
    _PC_PRIO_IO=11,
    _PC_REC_INCR_XFER_SIZE=14,
    _PC_REC_MAX_XFER_SIZE=15,
    _PC_REC_MIN_XFER_SIZE=16,
    _PC_REC_XFER_ALIGN=17,
    _PC_SOCK_MAXBUF=12,
    _PC_SYMLINK_MAX=19,
    _PC_SYNC_IO=9,
    _PC_VDISABLE=8
} enum_1570;

typedef enum enum_1571 {
    _SC_2_CHAR_TERM=96,
    _SC_2_C_BIND=47,
    _SC_2_C_DEV=48,
    _SC_2_C_VERSION=97,
    _SC_2_FORT_DEV=49,
    _SC_2_FORT_RUN=50,
    _SC_2_LOCALEDEF=52,
    _SC_2_PBS=169,
    _SC_2_PBS_ACCOUNTING=170,
    _SC_2_PBS_CHECKPOINT=176,
    _SC_2_PBS_LOCATE=171,
    _SC_2_PBS_MESSAGE=172,
    _SC_2_PBS_TRACK=173,
    _SC_2_SW_DEV=51,
    _SC_2_UPE=98,
    _SC_2_VERSION=46,
    _SC_ADVISORY_INFO=133,
    _SC_AIO_LISTIO_MAX=23,
    _SC_AIO_MAX=24,
    _SC_AIO_PRIO_DELTA_MAX=25,
    _SC_ARG_MAX=0,
    _SC_ASYNCHRONOUS_IO=12,
    _SC_ATEXIT_MAX=88,
    _SC_AVPHYS_PAGES=87,
    _SC_BARRIERS=134,
    _SC_BASE=135,
    _SC_BC_BASE_MAX=36,
    _SC_BC_DIM_MAX=37,
    _SC_BC_SCALE_MAX=38,
    _SC_BC_STRING_MAX=39,
    _SC_CHARCLASS_NAME_MAX=45,
    _SC_CHAR_BIT=102,
    _SC_CHAR_MAX=103,
    _SC_CHAR_MIN=104,
    _SC_CHILD_MAX=1,
    _SC_CLK_TCK=2,
    _SC_CLOCK_SELECTION=138,
    _SC_COLL_WEIGHTS_MAX=40,
    _SC_CPUTIME=139,
    _SC_C_LANG_SUPPORT=136,
    _SC_C_LANG_SUPPORT_R=137,
    _SC_DELAYTIMER_MAX=26,
    _SC_DEVICE_IO=141,
    _SC_DEVICE_SPECIFIC=142,
    _SC_DEVICE_SPECIFIC_R=143,
    _SC_EQUIV_CLASS_MAX=41,
    _SC_EXPR_NEST_MAX=42,
    _SC_FD_MGMT=144,
    _SC_FIFO=145,
    _SC_FILE_ATTRIBUTES=147,
    _SC_FILE_LOCKING=148,
    _SC_FILE_SYSTEM=149,
    _SC_FSYNC=15,
    _SC_GETGR_R_SIZE_MAX=70,
    _SC_GETPW_R_SIZE_MAX=71,
    _SC_HOST_NAME_MAX=181,
    _SC_INT_MAX=105,
    _SC_INT_MIN=106,
    _SC_IOV_MAX=61,
    _SC_IPV6=201,
    _SC_JOB_CONTROL=7,
    _SC_LEVEL1_DCACHE_ASSOC=190,
    _SC_LEVEL1_DCACHE_LINESIZE=191,
    _SC_LEVEL1_DCACHE_SIZE=189,
    _SC_LEVEL1_ICACHE_ASSOC=187,
    _SC_LEVEL1_ICACHE_LINESIZE=188,
    _SC_LEVEL1_ICACHE_SIZE=186,
    _SC_LEVEL2_CACHE_ASSOC=193,
    _SC_LEVEL2_CACHE_LINESIZE=194,
    _SC_LEVEL2_CACHE_SIZE=192,
    _SC_LEVEL3_CACHE_ASSOC=196,
    _SC_LEVEL3_CACHE_LINESIZE=197,
    _SC_LEVEL3_CACHE_SIZE=195,
    _SC_LEVEL4_CACHE_ASSOC=199,
    _SC_LEVEL4_CACHE_LINESIZE=200,
    _SC_LEVEL4_CACHE_SIZE=198,
    _SC_LINE_MAX=43,
    _SC_LOGIN_NAME_MAX=72,
    _SC_LONG_BIT=107,
    _SC_MAPPED_FILES=16,
    _SC_MB_LEN_MAX=109,
    _SC_MEMLOCK=17,
    _SC_MEMLOCK_RANGE=18,
    _SC_MEMORY_PROTECTION=19,
    _SC_MESSAGE_PASSING=20,
    _SC_MONOTONIC_CLOCK=150,
    _SC_MQ_OPEN_MAX=27,
    _SC_MQ_PRIO_MAX=28,
    _SC_MULTI_PROCESS=151,
    _SC_NETWORKING=153,
    _SC_NGROUPS_MAX=3,
    _SC_NL_ARGMAX=120,
    _SC_NL_LANGMAX=121,
    _SC_NL_MSGMAX=122,
    _SC_NL_NMAX=123,
    _SC_NL_SETMAX=124,
    _SC_NL_TEXTMAX=125,
    _SC_NPROCESSORS_CONF=84,
    _SC_NPROCESSORS_ONLN=85,
    _SC_NZERO=110,
    _SC_OPEN_MAX=4,
    _SC_PAGESIZE=30,
    _SC_PASS_MAX=89,
    _SC_PHYS_PAGES=86,
    _SC_PII=53,
    _SC_PII_INTERNET=56,
    _SC_PII_INTERNET_DGRAM=63,
    _SC_PII_INTERNET_STREAM=62,
    _SC_PII_OSI=57,
    _SC_PII_OSI_CLTS=65,
    _SC_PII_OSI_COTS=64,
    _SC_PII_OSI_M=66,
    _SC_PII_SOCKET=55,
    _SC_PII_XTI=54,
    _SC_PIPE=146,
    _SC_POLL=58,
    _SC_PRIORITIZED_IO=13,
    _SC_PRIORITY_SCHEDULING=10,
    _SC_RAW_SOCKETS=202,
    _SC_READER_WRITER_LOCKS=154,
    _SC_REALTIME_SIGNALS=9,
    _SC_REGEXP=156,
    _SC_REGEX_VERSION=157,
    _SC_RE_DUP_MAX=44,
    _SC_RTSIG_MAX=31,
    _SC_SAVED_IDS=8,
    _SC_SCHAR_MAX=112,
    _SC_SCHAR_MIN=113,
    _SC_SELECT=59,
    _SC_SEMAPHORES=21,
    _SC_SEM_NSEMS_MAX=32,
    _SC_SEM_VALUE_MAX=33,
    _SC_SHARED_MEMORY_OBJECTS=22,
    _SC_SHELL=158,
    _SC_SHRT_MAX=114,
    _SC_SHRT_MIN=115,
    _SC_SIGNALS=159,
    _SC_SIGQUEUE_MAX=34,
    _SC_SINGLE_PROCESS=152,
    _SC_SPAWN=160,
    _SC_SPIN_LOCKS=155,
    _SC_SPORADIC_SERVER=161,
    _SC_SSIZE_MAX=111,
    _SC_SS_REPL_MAX=207,
    _SC_STREAMS=175,
    _SC_STREAM_MAX=5,
    _SC_SYMLOOP_MAX=174,
    _SC_SYNCHRONIZED_IO=14,
    _SC_SYSTEM_DATABASE=163,
    _SC_SYSTEM_DATABASE_R=164,
    _SC_THREADS=68,
    _SC_THREAD_ATTR_STACKADDR=78,
    _SC_THREAD_ATTR_STACKSIZE=79,
    _SC_THREAD_CPUTIME=140,
    _SC_THREAD_DESTRUCTOR_ITERATIONS=74,
    _SC_THREAD_KEYS_MAX=75,
    _SC_THREAD_PRIORITY_SCHEDULING=80,
    _SC_THREAD_PRIO_INHERIT=81,
    _SC_THREAD_PRIO_PROTECT=82,
    _SC_THREAD_PROCESS_SHARED=83,
    _SC_THREAD_ROBUST_PRIO_INHERIT=213,
    _SC_THREAD_ROBUST_PRIO_PROTECT=214,
    _SC_THREAD_SAFE_FUNCTIONS=69,
    _SC_THREAD_SPORADIC_SERVER=162,
    _SC_THREAD_STACK_MIN=76,
    _SC_THREAD_THREADS_MAX=77,
    _SC_TIMEOUTS=165,
    _SC_TIMERS=11,
    _SC_TIMER_MAX=35,
    _SC_TRACE=182,
    _SC_TRACE_EVENT_FILTER=183,
    _SC_TRACE_EVENT_NAME_MAX=208,
    _SC_TRACE_INHERIT=184,
    _SC_TRACE_LOG=185,
    _SC_TRACE_NAME_MAX=209,
    _SC_TRACE_SYS_MAX=210,
    _SC_TRACE_USER_EVENT_MAX=211,
    _SC_TTY_NAME_MAX=73,
    _SC_TYPED_MEMORY_OBJECTS=166,
    _SC_TZNAME_MAX=6,
    _SC_T_IOV_MAX=67,
    _SC_UCHAR_MAX=116,
    _SC_UINT_MAX=117,
    _SC_UIO_MAXIOV=60,
    _SC_ULONG_MAX=118,
    _SC_USER_GROUPS=167,
    _SC_USER_GROUPS_R=168,
    _SC_USHRT_MAX=119,
    _SC_V6_ILP32_OFF32=177,
    _SC_V6_ILP32_OFFBIG=178,
    _SC_V6_LP64_OFF64=179,
    _SC_V6_LPBIG_OFFBIG=180,
    _SC_V7_ILP32_OFF32=203,
    _SC_V7_ILP32_OFFBIG=204,
    _SC_V7_LP64_OFF64=205,
    _SC_V7_LPBIG_OFFBIG=206,
    _SC_VERSION=29,
    _SC_WORD_BIT=108,
    _SC_XBS5_ILP32_OFF32=126,
    _SC_XBS5_ILP32_OFFBIG=127,
    _SC_XBS5_LP64_OFF64=128,
    _SC_XBS5_LPBIG_OFFBIG=129,
    _SC_XOPEN_CRYPT=93,
    _SC_XOPEN_ENH_I18N=94,
    _SC_XOPEN_LEGACY=130,
    _SC_XOPEN_REALTIME=131,
    _SC_XOPEN_REALTIME_THREADS=132,
    _SC_XOPEN_SHM=95,
    _SC_XOPEN_STREAMS=212,
    _SC_XOPEN_UNIX=92,
    _SC_XOPEN_VERSION=90,
    _SC_XOPEN_XCU_VERSION=91,
    _SC_XOPEN_XPG2=99,
    _SC_XOPEN_XPG3=100,
    _SC_XOPEN_XPG4=101
} enum_1571;

typedef enum enum_1572 {
    _CS_GNU_LIBC_VERSION=2,
    _CS_GNU_LIBPTHREAD_VERSION=3,
    _CS_LFS64_CFLAGS=1004,
    _CS_LFS64_LDFLAGS=1005,
    _CS_LFS64_LIBS=1006,
    _CS_LFS64_LINTFLAGS=1007,
    _CS_LFS_CFLAGS=1000,
    _CS_LFS_LDFLAGS=1001,
    _CS_LFS_LIBS=1002,
    _CS_LFS_LINTFLAGS=1003,
    _CS_PATH=0,
    _CS_POSIX_V6_ILP32_OFF32_CFLAGS=1116,
    _CS_POSIX_V6_ILP32_OFF32_LDFLAGS=1117,
    _CS_POSIX_V6_ILP32_OFF32_LIBS=1118,
    _CS_POSIX_V6_ILP32_OFF32_LINTFLAGS=1119,
    _CS_POSIX_V6_ILP32_OFFBIG_CFLAGS=1120,
    _CS_POSIX_V6_ILP32_OFFBIG_LDFLAGS=1121,
    _CS_POSIX_V6_ILP32_OFFBIG_LIBS=1122,
    _CS_POSIX_V6_ILP32_OFFBIG_LINTFLAGS=1123,
    _CS_POSIX_V6_LP64_OFF64_CFLAGS=1124,
    _CS_POSIX_V6_LP64_OFF64_LDFLAGS=1125,
    _CS_POSIX_V6_LP64_OFF64_LIBS=1126,
    _CS_POSIX_V6_LP64_OFF64_LINTFLAGS=1127,
    _CS_POSIX_V6_LPBIG_OFFBIG_CFLAGS=1128,
    _CS_POSIX_V6_LPBIG_OFFBIG_LDFLAGS=1129,
    _CS_POSIX_V6_LPBIG_OFFBIG_LIBS=1130,
    _CS_POSIX_V6_LPBIG_OFFBIG_LINTFLAGS=1131,
    _CS_POSIX_V7_ILP32_OFF32_CFLAGS=1132,
    _CS_POSIX_V7_ILP32_OFF32_LDFLAGS=1133,
    _CS_POSIX_V7_ILP32_OFF32_LIBS=1134,
    _CS_POSIX_V7_ILP32_OFF32_LINTFLAGS=1135,
    _CS_POSIX_V7_ILP32_OFFBIG_CFLAGS=1136,
    _CS_POSIX_V7_ILP32_OFFBIG_LDFLAGS=1137,
    _CS_POSIX_V7_ILP32_OFFBIG_LIBS=1138,
    _CS_POSIX_V7_ILP32_OFFBIG_LINTFLAGS=1139,
    _CS_POSIX_V7_LP64_OFF64_CFLAGS=1140,
    _CS_POSIX_V7_LP64_OFF64_LDFLAGS=1141,
    _CS_POSIX_V7_LP64_OFF64_LIBS=1142,
    _CS_POSIX_V7_LP64_OFF64_LINTFLAGS=1143,
    _CS_POSIX_V7_LPBIG_OFFBIG_CFLAGS=1144,
    _CS_POSIX_V7_LPBIG_OFFBIG_LDFLAGS=1145,
    _CS_POSIX_V7_LPBIG_OFFBIG_LIBS=1146,
    _CS_POSIX_V7_LPBIG_OFFBIG_LINTFLAGS=1147,
    _CS_V5_WIDTH_RESTRICTED_ENVS=4,
    _CS_V6_ENV=1148,
    _CS_V6_WIDTH_RESTRICTED_ENVS=1,
    _CS_V7_ENV=1149,
    _CS_V7_WIDTH_RESTRICTED_ENVS=5,
    _CS_XBS5_ILP32_OFF32_CFLAGS=1100,
    _CS_XBS5_ILP32_OFF32_LDFLAGS=1101,
    _CS_XBS5_ILP32_OFF32_LIBS=1102,
    _CS_XBS5_ILP32_OFF32_LINTFLAGS=1103,
    _CS_XBS5_ILP32_OFFBIG_CFLAGS=1104,
    _CS_XBS5_ILP32_OFFBIG_LDFLAGS=1105,
    _CS_XBS5_ILP32_OFFBIG_LIBS=1106,
    _CS_XBS5_ILP32_OFFBIG_LINTFLAGS=1107,
    _CS_XBS5_LP64_OFF64_CFLAGS=1108,
    _CS_XBS5_LP64_OFF64_LDFLAGS=1109,
    _CS_XBS5_LP64_OFF64_LIBS=1110,
    _CS_XBS5_LP64_OFF64_LINTFLAGS=1111,
    _CS_XBS5_LPBIG_OFFBIG_CFLAGS=1112,
    _CS_XBS5_LPBIG_OFFBIG_LDFLAGS=1113,
    _CS_XBS5_LPBIG_OFFBIG_LIBS=1114,
    _CS_XBS5_LPBIG_OFFBIG_LINTFLAGS=1115
} enum_1572;

#define _CPIO_H 1

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

#define CRYPTO_F_FIPS_MODE_SET 109

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

#define CRYPTO_LOCK_FIPS 39

#define CRYPTO_LOCK_FIPS2 40

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

#define CRYPTO_NUM_LOCKS 41

#define CRYPTO_R_FIPS_MODE_NOT_SUPPORTED 101

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

#define SSLEAY_VERSION_NUMBER 268439647

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

typedef struct crypto_threadid_st crypto_threadid_st, *Pcrypto_threadid_st;

typedef struct crypto_threadid_st CRYPTO_THREADID;

struct crypto_threadid_st {
    void * ptr;
    ulong val;
};

typedef struct openssl_item_st openssl_item_st, *Popenssl_item_st;

typedef struct openssl_item_st OPENSSL_ITEM;

struct openssl_item_st {
    int code;
    void * value;
    size_t value_size;
    size_t * value_length;
};

typedef struct stack_st_CRYPTO_EX_DATA_FUNCS stack_st_CRYPTO_EX_DATA_FUNCS, *Pstack_st_CRYPTO_EX_DATA_FUNCS;

struct stack_st_CRYPTO_EX_DATA_FUNCS {
    _STACK stack;
};

#define _CTYPE_H 1

typedef enum enum_496 {
    _ISalnum=11,
    _ISalpha=2,
    _ISblank=8,
    _IScntrl=9,
    _ISdigit=3,
    _ISgraph=7,
    _ISlower=1,
    _ISprint=6,
    _ISpunct=10,
    _ISspace=5,
    _ISupper=0,
    _ISxdigit=4
} enum_496;

#define _SYS_DEBUGREG_H 1

#define DR_CONTROL 7

#define DR_CONTROL_RESERVED 64512

#define DR_CONTROL_SHIFT 16

#define DR_CONTROL_SIZE 4

#define DR_ENABLE_SIZE 2

#define DR_FIRSTADDR 0

#define DR_GLOBAL_ENABLE_MASK 170

#define DR_GLOBAL_ENABLE_SHIFT 1

#define DR_GLOBAL_SLOWDOWN 512

#define DR_LASTADDR 3

#define DR_LEN_1 0

#define DR_LEN_2 4

#define DR_LEN_4 12

#define DR_LEN_8 8

#define DR_LOCAL_ENABLE_MASK 85

#define DR_LOCAL_ENABLE_SHIFT 0

#define DR_LOCAL_SLOWDOWN 256

#define DR_RW_EXECUTE 0

#define DR_RW_READ 3

#define DR_RW_WRITE 1

#define DR_STATUS 6

#define DR_STEP 16384

#define DR_SWITCH 32768

#define DR_TRAP0 1

#define DR_TRAP1 2

#define DR_TRAP2 4

#define DR_TRAP3 8

#define __GLIBC_HAVE_LONG_LONG 1

#define __WORDSIZE 32

typedef union _union_771 _union_771, *P_union_771;

typedef uchar DES_cblock[8];

union _union_771 {
    DES_cblock cblock;
    uint deslong[2];
};

typedef uchar const_DES_cblock[8];

typedef struct DES_ks DES_ks, *PDES_ks;

typedef struct DES_ks DES_key_schedule;

struct DES_ks {
    union _union_771 ks[16];
};

#define __DES_CRYPT_H__ 1

#define DES_DEVMASK 2

#define DES_DIRMASK 1

#define DES_HW 0

#define DES_MAXDATA 8192

#define DES_SW 2

#define DESERR_BADPARAM 3

#define DESERR_HWERROR 2

#define DESERR_NOHWDEVICE 1

#define DESERR_NONE 0

#define DES_CBC_MODE 0

#define DES_DECRYPT 0

#define DES_ENCRYPT 1

#define DES_PCBC_MODE 1

#define DH_CHECK_P_NOT_PRIME 1

#define DH_CHECK_P_NOT_SAFE_PRIME 2

#define DH_CHECK_P_NOT_STRONG_PRIME 2

#define DH_CHECK_PUBKEY_TOO_LARGE 2

#define DH_CHECK_PUBKEY_TOO_SMALL 1

#define DH_F_COMPUTE_KEY 102

#define DH_F_DH_BUILTIN_GENPARAMS 106

#define DH_F_DH_COMPUTE_KEY 114

#define DH_F_DH_GENERATE_KEY 115

#define DH_F_DH_GENERATE_PARAMETERS_EX 116

#define DH_F_DH_NEW_METHOD 105

#define DH_F_DH_PARAM_DECODE 107

#define DH_F_DH_PRIV_DECODE 110

#define DH_F_DH_PRIV_ENCODE 111

#define DH_F_DH_PUB_DECODE 108

#define DH_F_DH_PUB_ENCODE 109

#define DH_F_DHPARAMS_PRINT_FP 101

#define DH_F_DO_DH_PRINT 100

#define DH_F_GENERATE_KEY 103

#define DH_F_GENERATE_PARAMETERS 104

#define DH_F_PKEY_DH_DERIVE 112

#define DH_F_PKEY_DH_KEYGEN 113

#define DH_FLAG_CACHE_MONT_P 1

#define DH_FLAG_FIPS_METHOD 1024

#define DH_FLAG_NO_EXP_CONSTTIME 2

#define DH_FLAG_NON_FIPS_ALLOW 1024

#define DH_GENERATOR_2 2

#define DH_GENERATOR_5 5

#define DH_NOT_SUITABLE_GENERATOR 8

#define DH_R_BAD_GENERATOR 101

#define DH_R_BN_DECODE_ERROR 109

#define DH_R_BN_ERROR 106

#define DH_R_DECODE_ERROR 104

#define DH_R_INVALID_PUBKEY 102

#define DH_R_KEY_SIZE_TOO_SMALL 110

#define DH_R_KEYS_NOT_SET 108

#define DH_R_MODULUS_TOO_LARGE 103

#define DH_R_NO_PARAMETERS_SET 107

#define DH_R_NO_PRIVATE_VALUE 100

#define DH_R_NON_FIPS_METHOD 111

#define DH_R_PARAMETER_ENCODING_ERROR 105

#define DH_UNABLE_TO_CHECK_GENERATOR 4

#define EVP_PKEY_CTRL_DH_PARAMGEN_GENERATOR 4098

#define EVP_PKEY_CTRL_DH_PARAMGEN_PRIME_LEN 4097

#define OPENSSL_DH_FIPS_MIN_MODULUS_BITS 1024

#define OPENSSL_DH_MAX_MODULUS_BITS 10000

#define _DIRENT_H 1

#define MAXNAMLEN 255

typedef struct __dirstream __dirstream, *P__dirstream;

struct __dirstream {
};

typedef struct __dirstream DIR;

typedef struct dirent dirent, *Pdirent;

typedef ulong __ino_t;

struct dirent {
    __ino_t d_ino;
    __off_t d_off;
    ushort d_reclen;
    uchar d_type;
    char d_name[256];
};

typedef struct dirent64 dirent64, *Pdirent64;

typedef unsigned long long    ulonglong;
typedef ulonglong __u_quad_t;

typedef __u_quad_t __ino64_t;

struct dirent64 {
    __ino64_t d_ino;
    __off64_t d_off;
    ushort d_reclen;
    uchar d_type;
    char d_name[256];
};

typedef enum enum_1221 {
    DT_BLK=6,
    DT_CHR=2,
    DT_DIR=4,
    DT_FIFO=1,
    DT_LNK=10,
    DT_REG=8,
    DT_SOCK=12,
    DT_UNKNOWN=0,
    DT_WHT=14
} enum_1221;

#define DSA_F_D2I_DSA_SIG 110

#define DSA_F_DO_DSA_PRINT 104

#define DSA_F_DSA_BUILTIN_KEYGEN 124

#define DSA_F_DSA_BUILTIN_PARAMGEN 123

#define DSA_F_DSA_DO_SIGN 112

#define DSA_F_DSA_DO_VERIFY 113

#define DSA_F_DSA_GENERATE_KEY 126

#define DSA_F_DSA_GENERATE_PARAMETERS 125

#define DSA_F_DSA_GENERATE_PARAMETERS_EX 127

#define DSA_F_DSA_NEW_METHOD 103

#define DSA_F_DSA_PARAM_DECODE 119

#define DSA_F_DSA_PRINT_FP 105

#define DSA_F_DSA_PRIV_DECODE 115

#define DSA_F_DSA_PRIV_ENCODE 116

#define DSA_F_DSA_PUB_DECODE 117

#define DSA_F_DSA_PUB_ENCODE 118

#define DSA_F_DSA_SIG_NEW 109

#define DSA_F_DSA_SIG_PRINT 125

#define DSA_F_DSA_SIGN 106

#define DSA_F_DSA_SIGN_SETUP 107

#define DSA_F_DSA_VERIFY 108

#define DSA_F_DSAPARAMS_PRINT 100

#define DSA_F_DSAPARAMS_PRINT_FP 101

#define DSA_F_I2D_DSA_SIG 111

#define DSA_F_OLD_DSA_PRIV_DECODE 122

#define DSA_F_PKEY_DSA_CTRL 120

#define DSA_F_PKEY_DSA_KEYGEN 121

#define DSA_F_SIG_CB 114

#define DSA_FLAG_CACHE_MONT_P 1

#define DSA_FLAG_FIPS_METHOD 1024

#define DSA_FLAG_NO_EXP_CONSTTIME 2

#define DSA_FLAG_NON_FIPS_ALLOW 1024

#define DSA_R_BAD_Q_VALUE 102

#define DSA_R_BN_DECODE_ERROR 108

#define DSA_R_BN_ERROR 109

#define DSA_R_DATA_TOO_LARGE_FOR_KEY_SIZE 100

#define DSA_R_DECODE_ERROR 104

#define DSA_R_INVALID_DIGEST_TYPE 106

#define DSA_R_KEY_SIZE_INVALID 113

#define DSA_R_KEY_SIZE_TOO_SMALL 110

#define DSA_R_MISSING_PARAMETERS 101

#define DSA_R_MODULUS_TOO_LARGE 103

#define DSA_R_NEED_NEW_SETUP_VALUES 112

#define DSA_R_NO_PARAMETERS_SET 107

#define DSA_R_NON_FIPS_DSA_METHOD 111

#define DSA_R_NON_FIPS_METHOD 111

#define DSA_R_OPERATION_NOT_ALLOWED_IN_FIPS_MODE 112

#define DSA_R_PARAMETER_ENCODING_ERROR 105

#define DSS_prime_checks 64

#define EVP_PKEY_CTRL_DSA_PARAMGEN_BITS 4097

#define EVP_PKEY_CTRL_DSA_PARAMGEN_MD 4099

#define EVP_PKEY_CTRL_DSA_PARAMGEN_Q_BITS 4098

#define OPENSSL_DSA_FIPS_MIN_MODULUS_BITS 1024

#define OPENSSL_DSA_MAX_MODULUS_BITS 10000

#define DSO_CTRL_GET_FLAGS 1

#define DSO_CTRL_OR_FLAGS 3

#define DSO_CTRL_SET_FLAGS 2

#define DSO_F_BEOS_BIND_FUNC 144

#define DSO_F_BEOS_BIND_VAR 145

#define DSO_F_BEOS_LOAD 146

#define DSO_F_BEOS_NAME_CONVERTER 147

#define DSO_F_BEOS_UNLOAD 148

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

#define DSO_F_DSO_GLOBAL_LOOKUP 139

#define DSO_F_DSO_LOAD 112

#define DSO_F_DSO_MERGE 132

#define DSO_F_DSO_NEW_METHOD 113

#define DSO_F_DSO_PATHBYADDR 140

#define DSO_F_DSO_SET_FILENAME 129

#define DSO_F_DSO_SET_NAME_CONVERTER 122

#define DSO_F_DSO_UP_REF 114

#define DSO_F_GLOBAL_LOOKUP_FUNC 138

#define DSO_F_PATHBYADDR 137

#define DSO_F_VMS_BIND_SYM 115

#define DSO_F_VMS_LOAD 116

#define DSO_F_VMS_MERGER 133

#define DSO_F_VMS_UNLOAD 117

#define DSO_F_WIN32_BIND_FUNC 118

#define DSO_F_WIN32_BIND_VAR 119

#define DSO_F_WIN32_GLOBALLOOKUP 142

#define DSO_F_WIN32_GLOBALLOOKUP_FUNC 143

#define DSO_F_WIN32_JOINER 135

#define DSO_F_WIN32_LOAD 120

#define DSO_F_WIN32_MERGER 134

#define DSO_F_WIN32_NAME_CONVERTER 125

#define DSO_F_WIN32_PATHBYADDR 141

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
    struct stack_st_void * meth_data;
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
    int (* pathbyaddr)(void *, char *, int);
    void * (* globallookup)(char *);
};

#define DTLS1_AL_HEADER_LENGTH 2

#define DTLS1_BAD_VER 256

#define DTLS1_CCS_HEADER_LENGTH 1

#define DTLS1_COOKIE_LENGTH 256

#define DTLS1_HM_BAD_FRAGMENT -2

#define DTLS1_HM_FRAGMENT_RETRY -3

#define DTLS1_HM_HEADER_LENGTH 12

#define DTLS1_RT_HEADER_LENGTH 13

#define DTLS1_TMO_ALERT_COUNT 12

#define DTLS1_TMO_READ_COUNT 2

#define DTLS1_TMO_WRITE_COUNT 2

#define DTLS1_VERSION 65279

#define DTLS_MAX_VERSION 65279

typedef struct ccs_header_st ccs_header_st, *Pccs_header_st;

struct ccs_header_st {
    uchar type;
    ushort seq;
};

typedef struct dtls1_bitmap_st dtls1_bitmap_st, *Pdtls1_bitmap_st;

typedef struct dtls1_bitmap_st DTLS1_BITMAP;

struct dtls1_bitmap_st {
    ulong map;
    uchar max_seq_num[8];
};

typedef struct dtls1_record_data_st dtls1_record_data_st, *Pdtls1_record_data_st;

typedef struct dtls1_record_data_st DTLS1_RECORD_DATA;

typedef struct ssl3_buffer_st ssl3_buffer_st, *Pssl3_buffer_st;

typedef struct ssl3_buffer_st SSL3_BUFFER;

typedef struct ssl3_record_st ssl3_record_st, *Pssl3_record_st;

typedef struct ssl3_record_st SSL3_RECORD;

struct ssl3_buffer_st {
    uchar * buf;
    size_t len;
    int offset;
    int left;
};

struct ssl3_record_st {
    int type;
    uint length;
    uint off;
    uchar * data;
    uchar * input;
    uchar * comp;
    ulong epoch;
    uchar seq_num[8];
};

struct dtls1_record_data_st {
    uchar * packet;
    uint packet_length;
    SSL3_BUFFER rbuf;
    SSL3_RECORD rrec;
};

typedef struct dtls1_retransmit_state dtls1_retransmit_state, *Pdtls1_retransmit_state;

typedef struct evp_cipher_ctx_st evp_cipher_ctx_st, *Pevp_cipher_ctx_st;

typedef struct evp_cipher_ctx_st EVP_CIPHER_CTX;

typedef struct env_md_ctx_st env_md_ctx_st, *Penv_md_ctx_st;

typedef struct env_md_ctx_st EVP_MD_CTX;

typedef struct ssl_session_st ssl_session_st, *Pssl_session_st;

typedef struct ssl_session_st SSL_SESSION;

typedef struct evp_cipher_st evp_cipher_st, *Pevp_cipher_st;

typedef struct evp_cipher_st EVP_CIPHER;

typedef struct env_md_st env_md_st, *Penv_md_st;

typedef struct env_md_st EVP_MD;

typedef struct evp_pkey_ctx_st evp_pkey_ctx_st, *Pevp_pkey_ctx_st;

typedef struct evp_pkey_ctx_st EVP_PKEY_CTX;

typedef struct sess_cert_st sess_cert_st, *Psess_cert_st;

typedef struct ssl_cipher_st ssl_cipher_st, *Pssl_cipher_st;

typedef struct ssl_cipher_st SSL_CIPHER;

typedef struct stack_st_SSL_CIPHER stack_st_SSL_CIPHER, *Pstack_st_SSL_CIPHER;

struct env_md_ctx_st {
    EVP_MD * digest;
    ENGINE * engine;
    ulong flags;
    void * md_data;
    EVP_PKEY_CTX * pctx;
    int (* update)(EVP_MD_CTX *, void *, size_t);
};

struct stack_st_SSL_CIPHER {
    _STACK stack;
};

struct ssl_cipher_st {
    int valid;
    char * name;
    ulong id;
    ulong algorithm_mkey;
    ulong algorithm_auth;
    ulong algorithm_enc;
    ulong algorithm_mac;
    ulong algorithm_ssl;
    ulong algo_strength;
    ulong algorithm2;
    int strength_bits;
    int alg_bits;
};

struct evp_pkey_ctx_st {
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
    int (* md_ctrl)(EVP_MD_CTX *, int, int, void *);
};

struct evp_cipher_st {
    int nid;
    int block_size;
    int key_len;
    int iv_len;
    ulong flags;
    int (* init)(EVP_CIPHER_CTX *, uchar *, uchar *, int);
    int (* do_cipher)(EVP_CIPHER_CTX *, uchar *, uchar *, size_t);
    int (* cleanup)(EVP_CIPHER_CTX *);
    int ctx_size;
    int (* set_asn1_parameters)(EVP_CIPHER_CTX *, ASN1_TYPE *);
    int (* get_asn1_parameters)(EVP_CIPHER_CTX *, ASN1_TYPE *);
    int (* ctrl)(EVP_CIPHER_CTX *, int, int, void *);
    void * app_data;
};

struct dtls1_retransmit_state {
    EVP_CIPHER_CTX * enc_write_ctx;
    EVP_MD_CTX * write_hash;
    COMP_CTX * compress;
    SSL_SESSION * session;
    ushort epoch;
};

struct ssl_session_st {
    int ssl_version;
    uint key_arg_length;
    uchar key_arg[8];
    int master_key_length;
    uchar master_key[48];
    uint session_id_length;
    uchar session_id[32];
    uint sid_ctx_length;
    uchar sid_ctx[32];
    uint krb5_client_princ_len;
    uchar krb5_client_princ[256];
    char * psk_identity_hint;
    char * psk_identity;
    int not_resumable;
    struct sess_cert_st * sess_cert;
    X509 * peer;
    long verify_result;
    int references;
    long timeout;
    long time;
    uint compress_meth;
    SSL_CIPHER * cipher;
    ulong cipher_id;
    struct stack_st_SSL_CIPHER * ciphers;
    CRYPTO_EX_DATA ex_data;
    struct ssl_session_st * prev;
    struct ssl_session_st * * next;
    char * tlsext_hostname;
    size_t tlsext_ecpointformatlist_length;
    uchar * tlsext_ecpointformatlist;
    size_t tlsext_ellipticcurvelist_length;
    uchar * tlsext_ellipticcurvelist;
    uchar * tlsext_tick;
    size_t tlsext_ticklen;
    long tlsext_tick_lifetime_hint;
};

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

struct sess_cert_st {
};

typedef struct dtls1_state_st dtls1_state_st, *Pdtls1_state_st;

typedef struct dtls1_state_st DTLS1_STATE;

typedef struct record_pqueue_st record_pqueue_st, *Precord_pqueue_st;

typedef struct record_pqueue_st record_pqueue;

typedef struct _pqueue _pqueue, *P_pqueue;

typedef struct _pqueue * pqueue;

typedef struct hm_header_st hm_header_st, *Phm_header_st;

typedef struct dtls1_timeout_st dtls1_timeout_st, *Pdtls1_timeout_st;

struct dtls1_timeout_st {
    uint read_timeouts;
    uint write_timeouts;
    uint num_alerts;
};

struct record_pqueue_st {
    ushort epoch;
    pqueue q;
};

struct hm_header_st {
    uchar type;
    ulong msg_len;
    ushort seq;
    ulong frag_off;
    ulong frag_len;
    uint is_ccs;
    struct dtls1_retransmit_state saved_retransmit_state;
};

struct dtls1_state_st {
    uint send_cookie;
    uchar cookie[256];
    uchar rcvd_cookie[256];
    uint cookie_len;
    ushort r_epoch;
    ushort w_epoch;
    DTLS1_BITMAP bitmap;
    DTLS1_BITMAP next_bitmap;
    ushort handshake_write_seq;
    ushort next_handshake_write_seq;
    ushort handshake_read_seq;
    uchar last_write_sequence[8];
    record_pqueue unprocessed_rcds;
    record_pqueue processed_rcds;
    pqueue buffered_messages;
    pqueue sent_messages;
    record_pqueue buffered_app_data;
    uint mtu;
    struct hm_header_st w_msg_hdr;
    struct hm_header_st r_msg_hdr;
    struct dtls1_timeout_st timeout;
    struct timeval next_timeout;
    ushort timeout_duration;
    uchar alert_fragment[2];
    uint alert_fragment_len;
    uchar handshake_fragment[12];
    uint handshake_fragment_len;
    uint retransmitting;
    uint change_cipher_spec_ok;
    uint listen;
};

struct _pqueue {
};

typedef struct hm_fragment_st hm_fragment_st, *Phm_fragment_st;

typedef struct hm_fragment_st hm_fragment;

struct hm_fragment_st {
    struct hm_header_st msg_header;
    uchar * fragment;
    uchar * reassembly;
};

#define EC_F_BN_TO_FELEM 224

#define EC_F_COMPUTE_WNAF 143

#define EC_F_D2I_ECPARAMETERS 144

#define EC_F_D2I_ECPKPARAMETERS 145

#define EC_F_D2I_ECPRIVATEKEY 146

#define EC_F_DO_EC_KEY_PRINT 221

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

#define EC_F_EC_GFP_NISTP224_GROUP_SET_CURVE 225

#define EC_F_EC_GFP_NISTP224_POINT_GET_AFFINE_COORDINATES 226

#define EC_F_EC_GFP_NISTP224_POINTS_MUL 228

#define EC_F_EC_GFP_NISTP256_GROUP_SET_CURVE 230

#define EC_F_EC_GFP_NISTP256_POINT_GET_AFFINE_COORDINATES 232

#define EC_F_EC_GFP_NISTP256_POINTS_MUL 231

#define EC_F_EC_GFP_NISTP521_GROUP_SET_CURVE 233

#define EC_F_EC_GFP_NISTP521_POINT_GET_AFFINE_COORDINATES 235

#define EC_F_EC_GFP_NISTP521_POINTS_MUL 234

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

#define EC_F_EC_KEY_SET_PUBLIC_KEY_AFFINE_COORDINATES 229

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

#define EC_F_EC_PRE_COMP_DUP 207

#define EC_F_EC_PRE_COMP_NEW 196

#define EC_F_EC_WNAF_MUL 187

#define EC_F_EC_WNAF_PRECOMPUTE_MULT 188

#define EC_F_ECKEY_PARAM2TYPE 223

#define EC_F_ECKEY_PARAM_DECODE 212

#define EC_F_ECKEY_PRIV_DECODE 213

#define EC_F_ECKEY_PRIV_ENCODE 214

#define EC_F_ECKEY_PUB_DECODE 215

#define EC_F_ECKEY_PUB_ENCODE 216

#define EC_F_ECKEY_TYPE2PARAM 220

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

#define EC_F_NISTP224_PRE_COMP_NEW 227

#define EC_F_NISTP256_PRE_COMP_NEW 236

#define EC_F_NISTP521_PRE_COMP_NEW 237

#define EC_F_O2I_ECPUBLICKEY 152

#define EC_F_OLD_EC_PRIV_DECODE 222

#define EC_F_PKEY_EC_CTRL 197

#define EC_F_PKEY_EC_CTRL_STR 198

#define EC_F_PKEY_EC_DERIVE 217

#define EC_F_PKEY_EC_KEYGEN 199

#define EC_F_PKEY_EC_PARAMGEN 219

#define EC_F_PKEY_EC_SIGN 218

#define EC_FLAG_FIPS_CHECKED 2

#define EC_FLAG_NON_FIPS_ALLOW 1

#define EC_PKEY_NO_PARAMETERS 1

#define EC_PKEY_NO_PUBKEY 2

#define EC_R_ASN1_ERROR 115

#define EC_R_ASN1_UNKNOWN_FIELD 116

#define EC_R_BIGNUM_OUT_OF_RANGE 144

#define EC_R_BUFFER_TOO_SMALL 100

#define EC_R_COORDINATES_OUT_OF_RANGE 146

#define EC_R_D2I_ECPKPARAMETERS_FAILURE 117

#define EC_R_DECODE_ERROR 142

#define EC_R_DISCRIMINANT_IS_ZERO 118

#define EC_R_EC_GROUP_NEW_BY_NAME_FAILURE 119

#define EC_R_FIELD_TOO_LARGE 143

#define EC_R_GF2M_NOT_SUPPORTED 147

#define EC_R_GROUP2PKPARAMETERS_FAILURE 120

#define EC_R_I2D_ECPKPARAMETERS_FAILURE 121

#define EC_R_INCOMPATIBLE_OBJECTS 101

#define EC_R_INVALID_ARGUMENT 112

#define EC_R_INVALID_COMPRESSED_POINT 110

#define EC_R_INVALID_COMPRESSION_BIT 109

#define EC_R_INVALID_CURVE 141

#define EC_R_INVALID_DIGEST_TYPE 138

#define EC_R_INVALID_ENCODING 102

#define EC_R_INVALID_FIELD 103

#define EC_R_INVALID_FORM 104

#define EC_R_INVALID_GROUP_ORDER 122

#define EC_R_INVALID_PENTANOMIAL_BASIS 132

#define EC_R_INVALID_PRIVATE_KEY 123

#define EC_R_INVALID_TRINOMIAL_BASIS 137

#define EC_R_KEYS_NOT_SET 140

#define EC_R_MISSING_PARAMETERS 124

#define EC_R_MISSING_PRIVATE_KEY 125

#define EC_R_NO_FIELD_MOD 133

#define EC_R_NO_PARAMETERS_SET 139

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

#define EC_R_WRONG_CURVE_PARAMETERS 145

#define EC_R_WRONG_ORDER 130

#define EVP_PKEY_CTRL_EC_PARAMGEN_CURVE_NID 4097

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

typedef struct ec_key_st EC_KEY;

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

typedef enum enum_295 {
    POINT_CONVERSION_COMPRESSED=2,
    POINT_CONVERSION_HYBRID=6,
    POINT_CONVERSION_UNCOMPRESSED=4
} enum_295;

typedef enum enum_295 point_conversion_form_t;

#define EC_FLAG_COFACTOR_ECDH 4096

#define ECDH_F_ECDH_CHECK 102

#define ECDH_F_ECDH_COMPUTE_KEY 100

#define ECDH_F_ECDH_DATA_NEW_METHOD 101

#define ECDH_R_KDF_FAILED 102

#define ECDH_R_NO_PRIVATE_VALUE 100

#define ECDH_R_NON_FIPS_METHOD 103

#define ECDH_R_POINT_ARITHMETIC_FAILURE 101

#define ECDSA_F_ECDSA_CHECK 104

#define ECDSA_F_ECDSA_DATA_NEW_METHOD 100

#define ECDSA_F_ECDSA_DO_SIGN 101

#define ECDSA_F_ECDSA_DO_VERIFY 102

#define ECDSA_F_ECDSA_SIGN_SETUP 103

#define ECDSA_R_BAD_SIGNATURE 100

#define ECDSA_R_DATA_TOO_LARGE_FOR_KEY_SIZE 101

#define ECDSA_R_ERR_EC_LIB 102

#define ECDSA_R_MISSING_PARAMETERS 103

#define ECDSA_R_NEED_NEW_SETUP_VALUES 106

#define ECDSA_R_NON_FIPS_METHOD 107

#define ECDSA_R_RANDOM_NUMBER_GENERATION_FAILED 104

#define ECDSA_R_SIGNATURE_MALLOC_FAILED 105

typedef struct ECDSA_SIG_st ECDSA_SIG_st, *PECDSA_SIG_st;

typedef struct ECDSA_SIG_st ECDSA_SIG;

struct ECDSA_SIG_st {
    BIGNUM * r;
    BIGNUM * s;
};

#define __BIG_ENDIAN 4321

#define __BYTE_ORDER 1234

#define __FLOAT_WORD_ORDER 1234

#define __LITTLE_ENDIAN 1234

#define __PDP_ENDIAN 3412

#define _ENDIAN_H 1

#define BIG_ENDIAN 4321

#define BYTE_ORDER 1234

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

#define ENGINE_F_ENGINE_GET_PKEY_ASN1_METH 193

#define ENGINE_F_ENGINE_GET_PKEY_METH 192

#define ENGINE_F_ENGINE_GET_PREV 116

#define ENGINE_F_ENGINE_INIT 119

#define ENGINE_F_ENGINE_LIST_ADD 120

#define ENGINE_F_ENGINE_LIST_REMOVE 121

#define ENGINE_F_ENGINE_LOAD_PRIVATE_KEY 150

#define ENGINE_F_ENGINE_LOAD_PUBLIC_KEY 151

#define ENGINE_F_ENGINE_LOAD_SSL_CLIENT_CERT 194

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

#define ENGINE_FLAGS_NO_REGISTER_ALL 8

#define ENGINE_METHOD_ALL 65535

#define ENGINE_METHOD_CIPHERS 64

#define ENGINE_METHOD_DH 4

#define ENGINE_METHOD_DIGESTS 128

#define ENGINE_METHOD_DSA 2

#define ENGINE_METHOD_ECDH 16

#define ENGINE_METHOD_ECDSA 32

#define ENGINE_METHOD_NONE 0

#define ENGINE_METHOD_PKEY_ASN1_METHS 1024

#define ENGINE_METHOD_PKEY_METHS 512

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

#define ENGINE_R_ENGINE_CONFIGURATION_ERROR 102

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

#define ENGINE_R_UNIMPLEMENTED_PUBLIC_KEY_METHOD 101

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

typedef struct st_dynamic_fns st_dynamic_fns, *Pst_dynamic_fns;

typedef struct st_dynamic_fns dynamic_fns;

typedef int (* dynamic_bind_engine)(ENGINE *, char *, dynamic_fns *);

typedef struct st_ERR_FNS st_ERR_FNS, *Pst_ERR_FNS;

typedef struct st_ERR_FNS ERR_FNS;

typedef struct st_dynamic_MEM_fns st_dynamic_MEM_fns, *Pst_dynamic_MEM_fns;

typedef struct st_dynamic_MEM_fns dynamic_MEM_fns;

typedef struct st_dynamic_LOCK_fns st_dynamic_LOCK_fns, *Pst_dynamic_LOCK_fns;

typedef struct st_dynamic_LOCK_fns dynamic_LOCK_fns;

struct st_ERR_FNS {
};

struct st_dynamic_MEM_fns {
    dyn_MEM_malloc_cb malloc_cb;
    dyn_MEM_realloc_cb realloc_cb;
    dyn_MEM_free_cb free_cb;
};

struct st_dynamic_LOCK_fns {
    dyn_lock_locking_cb lock_locking_cb;
    dyn_lock_add_lock_cb lock_add_lock_cb;
    dyn_dynlock_create_cb dynlock_create_cb;
    dyn_dynlock_lock_cb dynlock_lock_cb;
    dyn_dynlock_destroy_cb dynlock_destroy_cb;
};

struct st_dynamic_fns {
    void * static_state;
    ERR_FNS * err_fns;
    CRYPTO_EX_DATA_IMPL * ex_data_fns;
    dynamic_MEM_fns mem_fns;
    dynamic_LOCK_fns lock_fns;
};

typedef ulong (* dynamic_v_check_fn)(ulong);

typedef int (* ENGINE_CIPHERS_PTR)(ENGINE *, EVP_CIPHER * *, int * *, int);

typedef struct ENGINE_CMD_DEFN_st ENGINE_CMD_DEFN_st, *PENGINE_CMD_DEFN_st;

typedef struct ENGINE_CMD_DEFN_st ENGINE_CMD_DEFN;

struct ENGINE_CMD_DEFN_st {
    uint cmd_num;
    char * cmd_name;
    char * cmd_desc;
    uint cmd_flags;
};

typedef int (* ENGINE_CTRL_FUNC_PTR)(ENGINE *, int, long, void *, void (* )(void));

typedef int (* ENGINE_DIGESTS_PTR)(ENGINE *, EVP_MD * *, int * *, int);

typedef int (* ENGINE_GEN_FUNC_PTR)(void);

typedef int (* ENGINE_GEN_INT_FUNC_PTR)(ENGINE *);

typedef struct ui_method_st ui_method_st, *Pui_method_st;

typedef struct ui_method_st UI_METHOD;

typedef EVP_PKEY * (* ENGINE_LOAD_KEY_PTR)(ENGINE *, char *, UI_METHOD *, void *);

struct ui_method_st {
};

typedef int (* ENGINE_PKEY_ASN1_METHS_PTR)(ENGINE *, EVP_PKEY_ASN1_METHOD * *, int * *, int);

typedef struct evp_pkey_method_st evp_pkey_method_st, *Pevp_pkey_method_st;

typedef struct evp_pkey_method_st EVP_PKEY_METHOD;

typedef int (* ENGINE_PKEY_METHS_PTR)(ENGINE *, EVP_PKEY_METHOD * *, int * *, int);

struct evp_pkey_method_st {
};

typedef struct ssl_st ssl_st, *Pssl_st;

typedef struct x509_store_ctx_st x509_store_ctx_st, *Px509_store_ctx_st;

typedef struct X509_crl_st X509_crl_st, *PX509_crl_st;

typedef struct X509_crl_st X509_CRL;

typedef struct stack_st_X509 stack_st_X509, *Pstack_st_X509;

typedef struct stack_st_X509_CRL stack_st_X509_CRL, *Pstack_st_X509_CRL;

typedef struct x509_store_ctx_st X509_STORE_CTX;

typedef struct ssl_st SSL;

typedef struct stack_st_X509_NAME stack_st_X509_NAME, *Pstack_st_X509_NAME;

typedef int (* ENGINE_SSL_CLIENT_CERT_PTR)(ENGINE *, SSL *, struct stack_st_X509_NAME *, X509 * *, EVP_PKEY * *, struct stack_st_X509 * *, UI_METHOD *, void *);

typedef struct ssl_method_st ssl_method_st, *Pssl_method_st;

typedef struct ssl_ctx_st ssl_ctx_st, *Pssl_ctx_st;

typedef struct hmac_ctx_st hmac_ctx_st, *Phmac_ctx_st;

typedef struct hmac_ctx_st HMAC_CTX;

typedef struct ssl_ctx_st SSL_CTX;

typedef struct ssl_method_st SSL_METHOD;

typedef struct ssl2_state_st ssl2_state_st, *Pssl2_state_st;

typedef struct ssl3_state_st ssl3_state_st, *Pssl3_state_st;

typedef struct X509_VERIFY_PARAM_st X509_VERIFY_PARAM_st, *PX509_VERIFY_PARAM_st;

typedef struct X509_VERIFY_PARAM_st X509_VERIFY_PARAM;

typedef struct cert_st cert_st, *Pcert_st;

typedef int (* GEN_SESSION_CB)(SSL *, uchar *, uint *);

typedef struct x509_store_st x509_store_st, *Px509_store_st;

typedef struct x509_store_st X509_STORE;

typedef struct X509_crl_info_st X509_crl_info_st, *PX509_crl_info_st;

typedef struct X509_crl_info_st X509_CRL_INFO;

typedef struct ISSUING_DIST_POINT_st ISSUING_DIST_POINT_st, *PISSUING_DIST_POINT_st;

typedef struct ISSUING_DIST_POINT_st ISSUING_DIST_POINT;

typedef struct stack_st_GENERAL_NAMES stack_st_GENERAL_NAMES, *Pstack_st_GENERAL_NAMES;

typedef struct x509_crl_method_st x509_crl_method_st, *Px509_crl_method_st;

typedef struct x509_crl_method_st X509_CRL_METHOD;

typedef struct X509_POLICY_TREE_st X509_POLICY_TREE_st, *PX509_POLICY_TREE_st;

typedef struct X509_POLICY_TREE_st X509_POLICY_TREE;

typedef struct kssl_ctx_st kssl_ctx_st, *Pkssl_ctx_st;

typedef struct kssl_ctx_st KSSL_CTX;

typedef struct stack_st_OCSP_RESPID stack_st_OCSP_RESPID, *Pstack_st_OCSP_RESPID;

typedef struct stack_st_X509_EXTENSION X509_EXTENSIONS;

typedef struct tls_session_ticket_ext_st tls_session_ticket_ext_st, *Ptls_session_ticket_ext_st;

typedef struct tls_session_ticket_ext_st TLS_SESSION_TICKET_EXT;

typedef int (* tls_session_ticket_ext_cb_fn)(SSL *, uchar *, int, void *);

typedef int (* tls_session_secret_cb_fn)(SSL *, void *, int *, struct stack_st_SSL_CIPHER *, SSL_CIPHER * *, void *);

typedef struct stack_st_SRTP_PROTECTION_PROFILE stack_st_SRTP_PROTECTION_PROFILE, *Pstack_st_SRTP_PROTECTION_PROFILE;

typedef struct srtp_protection_profile_st srtp_protection_profile_st, *Psrtp_protection_profile_st;

typedef struct srtp_protection_profile_st SRTP_PROTECTION_PROFILE;

typedef struct lhash_st_SSL_SESSION lhash_st_SSL_SESSION, *Plhash_st_SSL_SESSION;

typedef struct _struct_615 _struct_615, *P_struct_615;

typedef int (pem_password_cb)(char *, int, int, void *);

typedef struct stack_st_SSL_COMP stack_st_SSL_COMP, *Pstack_st_SSL_COMP;

typedef struct ssl3_buf_freelist_st ssl3_buf_freelist_st, *Pssl3_buf_freelist_st;

typedef struct ssl3_enc_method ssl3_enc_method, *Pssl3_enc_method;

typedef struct _struct_641 _struct_641, *P_struct_641;

typedef struct _struct_645 _struct_645, *P_struct_645;

typedef __time_t time_t;

typedef struct stack_st_X509_OBJECT stack_st_X509_OBJECT, *Pstack_st_X509_OBJECT;

typedef struct stack_st_X509_LOOKUP stack_st_X509_LOOKUP, *Pstack_st_X509_LOOKUP;

typedef struct stack_st_X509_REVOKED stack_st_X509_REVOKED, *Pstack_st_X509_REVOKED;

typedef struct DIST_POINT_NAME_st DIST_POINT_NAME_st, *PDIST_POINT_NAME_st;

typedef struct DIST_POINT_NAME_st DIST_POINT_NAME;

typedef int krb5_int32;

typedef krb5_int32 krb5_enctype;

typedef uchar krb5_octet;

typedef struct ssl_comp_st ssl_comp_st, *Pssl_comp_st;

typedef struct ssl_comp_st SSL_COMP;

typedef union _union_856 _union_856, *P_union_856;

struct cert_st {
};

struct srtp_protection_profile_st {
    char * name;
    ulong id;
};

struct x509_crl_method_st {
};

struct lhash_st_SSL_SESSION {
    int dummy;
};

struct stack_st_X509_OBJECT {
    _STACK stack;
};

struct ssl_comp_st {
    int id;
    char * name;
    COMP_METHOD * method;
};

struct ssl3_buf_freelist_st {
};

struct _struct_615 {
    int sess_connect;
    int sess_connect_renegotiate;
    int sess_connect_good;
    int sess_accept;
    int sess_accept_renegotiate;
    int sess_accept_good;
    int sess_miss;
    int sess_timeout;
    int sess_cache_full;
    int sess_hit;
    int sess_cb_hit;
};

struct ISSUING_DIST_POINT_st {
    DIST_POINT_NAME * distpoint;
    int onlyuser;
    int onlyCA;
    ASN1_BIT_STRING * onlysomereasons;
    int indirectCRL;
    int onlyattr;
};

struct stack_st_X509 {
    _STACK stack;
};

struct ssl3_enc_method {
};

struct _struct_645 {
    uchar cert_verify_md[128];
    uchar finish_md[128];
    int finish_md_len;
    uchar peer_finish_md[128];
    int peer_finish_md_len;
    ulong message_size;
    int message_type;
    SSL_CIPHER * new_cipher;
    DH * dh;
    EC_KEY * ecdh;
    int next_state;
    int reuse_message;
    int cert_req;
    int ctype_num;
    char ctype[9];
    struct stack_st_X509_NAME * ca_names;
    int use_rsa_tmp;
    int key_block_length;
    uchar * key_block;
    EVP_CIPHER * new_sym_enc;
    EVP_MD * new_hash;
    int new_mac_pkey_type;
    int new_mac_secret_size;
    SSL_COMP * new_compression;
    int cert_request;
};

struct ssl3_state_st {
    long flags;
    int delay_buf_pop_ret;
    uchar read_sequence[8];
    int read_mac_secret_size;
    uchar read_mac_secret[64];
    uchar write_sequence[8];
    int write_mac_secret_size;
    uchar write_mac_secret[64];
    uchar server_random[32];
    uchar client_random[32];
    int need_empty_fragments;
    int empty_fragment_done;
    int init_extra;
    SSL3_BUFFER rbuf;
    SSL3_BUFFER wbuf;
    SSL3_RECORD rrec;
    SSL3_RECORD wrec;
    uchar alert_fragment[2];
    uint alert_fragment_len;
    uchar handshake_fragment[4];
    uint handshake_fragment_len;
    uint wnum;
    int wpend_tot;
    int wpend_type;
    int wpend_ret;
    uchar * wpend_buf;
    BIO * handshake_buffer;
    EVP_MD_CTX * * handshake_dgst;
    int change_cipher_spec;
    int warn_alert;
    int fatal_alert;
    int alert_dispatch;
    uchar send_alert[2];
    int renegotiate;
    int total_renegotiations;
    int num_renegotiations;
    int in_read_app_data;
    void * client_opaque_prf_input;
    size_t client_opaque_prf_input_len;
    void * server_opaque_prf_input;
    size_t server_opaque_prf_input_len;
    struct _struct_645 tmp;
    uchar previous_client_finished[64];
    uchar previous_client_finished_len;
    uchar previous_server_finished[64];
    uchar previous_server_finished_len;
    int send_connection_binding;
    int next_proto_neg_seen;
};

struct X509_crl_st {
    X509_CRL_INFO * crl;
    X509_ALGOR * sig_alg;
    ASN1_BIT_STRING * signature;
    int references;
    int flags;
    AUTHORITY_KEYID * akid;
    ISSUING_DIST_POINT * idp;
    int idp_flags;
    int idp_reasons;
    ASN1_INTEGER * crl_number;
    ASN1_INTEGER * base_crl_number;
    uchar sha1_hash[20];
    struct stack_st_GENERAL_NAMES * issuers;
    X509_CRL_METHOD * meth;
    void * meth_data;
};

struct X509_crl_info_st {
    ASN1_INTEGER * version;
    X509_ALGOR * sig_alg;
    X509_NAME * issuer;
    ASN1_TIME * lastUpdate;
    ASN1_TIME * nextUpdate;
    struct stack_st_X509_REVOKED * revoked;
    struct stack_st_X509_EXTENSION * extensions;
    ASN1_ENCODING enc;
};

struct X509_VERIFY_PARAM_st {
    char * name;
    time_t check_time;
    ulong inh_flags;
    ulong flags;
    int purpose;
    int trust;
    int depth;
    struct stack_st_ASN1_OBJECT * policies;
};

struct stack_st_X509_REVOKED {
    _STACK stack;
};

struct stack_st_X509_NAME {
    _STACK stack;
};

struct stack_st_OCSP_RESPID {
    _STACK stack;
};

struct stack_st_GENERAL_NAMES {
    _STACK stack;
};

struct stack_st_SRTP_PROTECTION_PROFILE {
    _STACK stack;
};

struct ssl_st {
    int version;
    int type;
    SSL_METHOD * method;
    BIO * rbio;
    BIO * wbio;
    BIO * bbio;
    int rwstate;
    int in_handshake;
    int (* handshake_func)(SSL *);
    int server;
    int new_session;
    int quiet_shutdown;
    int shutdown;
    int state;
    int rstate;
    BUF_MEM * init_buf;
    void * init_msg;
    int init_num;
    int init_off;
    uchar * packet;
    uint packet_length;
    struct ssl2_state_st * s2;
    struct ssl3_state_st * s3;
    struct dtls1_state_st * d1;
    int read_ahead;
    void (* msg_callback)(int, int, int, void *, size_t, SSL *, void *);
    void * msg_callback_arg;
    int hit;
    X509_VERIFY_PARAM * param;
    struct stack_st_SSL_CIPHER * cipher_list;
    struct stack_st_SSL_CIPHER * cipher_list_by_id;
    int mac_flags;
    EVP_CIPHER_CTX * enc_read_ctx;
    EVP_MD_CTX * read_hash;
    COMP_CTX * expand;
    EVP_CIPHER_CTX * enc_write_ctx;
    EVP_MD_CTX * write_hash;
    COMP_CTX * compress;
    struct cert_st * cert;
    uint sid_ctx_length;
    uchar sid_ctx[32];
    SSL_SESSION * session;
    GEN_SESSION_CB generate_session_id;
    int verify_mode;
    int (* verify_callback)(int, X509_STORE_CTX *);
    void (* info_callback)(SSL *, int, int);
    int error;
    int error_code;
    KSSL_CTX * kssl_ctx;
    uint (* psk_client_callback)(SSL *, char *, char *, uint, uchar *, uint);
    uint (* psk_server_callback)(SSL *, char *, uchar *, uint);
    SSL_CTX * ctx;
    int debug;
    long verify_result;
    CRYPTO_EX_DATA ex_data;
    struct stack_st_X509_NAME * client_CA;
    int references;
    ulong options;
    ulong mode;
    long max_cert_list;
    int first_packet;
    int client_version;
    uint max_send_fragment;
    void (* tlsext_debug_cb)(SSL *, int, int, uchar *, int, void *);
    void * tlsext_debug_arg;
    char * tlsext_hostname;
    int servername_done;
    int tlsext_status_type;
    int tlsext_status_expected;
    struct stack_st_OCSP_RESPID * tlsext_ocsp_ids;
    X509_EXTENSIONS * tlsext_ocsp_exts;
    uchar * tlsext_ocsp_resp;
    int tlsext_ocsp_resplen;
    int tlsext_ticket_expected;
    size_t tlsext_ecpointformatlist_length;
    uchar * tlsext_ecpointformatlist;
    size_t tlsext_ellipticcurvelist_length;
    uchar * tlsext_ellipticcurvelist;
    void * tlsext_opaque_prf_input;
    size_t tlsext_opaque_prf_input_len;
    TLS_SESSION_TICKET_EXT * tlsext_session_ticket;
    tls_session_ticket_ext_cb_fn tls_session_ticket_ext_cb;
    void * tls_session_ticket_ext_cb_arg;
    tls_session_secret_cb_fn tls_session_secret_cb;
    void * tls_session_secret_cb_arg;
    SSL_CTX * initial_ctx;
    uchar * next_proto_negotiated;
    uchar next_proto_negotiated_len;
    struct stack_st_SRTP_PROTECTION_PROFILE * srtp_profiles;
    SRTP_PROTECTION_PROFILE * srtp_profile;
    uint tlsext_heartbeat;
    uint tlsext_hb_pending;
    uint tlsext_hb_seq;
    int renegotiate;
};

struct stack_st_SSL_COMP {
    _STACK stack;
};

union _union_856 {
    GENERAL_NAMES * fullname;
    struct stack_st_X509_NAME_ENTRY * relativename;
};

struct _struct_641 {
    uint conn_id_length;
    uint cert_type;
    uint cert_length;
    uint csl;
    uint clear;
    uint enc;
    uchar ccl[32];
    uint cipher_spec_length;
    uint session_id_length;
    uint clen;
    uint rlen;
};

struct x509_store_st {
    int cache;
    struct stack_st_X509_OBJECT * objs;
    struct stack_st_X509_LOOKUP * get_cert_methods;
    X509_VERIFY_PARAM * param;
    int (* verify)(X509_STORE_CTX *);
    int (* verify_cb)(int, X509_STORE_CTX *);
    int (* get_issuer)(X509 * *, X509_STORE_CTX *, X509 *);
    int (* check_issued)(X509_STORE_CTX *, X509 *, X509 *);
    int (* check_revocation)(X509_STORE_CTX *);
    int (* get_crl)(X509_STORE_CTX *, X509_CRL * *, X509 *);
    int (* check_crl)(X509_STORE_CTX *, X509_CRL *);
    int (* cert_crl)(X509_STORE_CTX *, X509_CRL *, X509 *);
    stack_st_X509 * (* lookup_certs)(X509_STORE_CTX *, X509_NAME *);
    stack_st_X509_CRL * (* lookup_crls)(X509_STORE_CTX *, X509_NAME *);
    int (* cleanup)(X509_STORE_CTX *);
    CRYPTO_EX_DATA ex_data;
    int references;
};

struct stack_st_X509_LOOKUP {
    _STACK stack;
};

struct stack_st_X509_CRL {
    _STACK stack;
};

struct x509_store_ctx_st {
    X509_STORE * ctx;
    int current_method;
    X509 * cert;
    struct stack_st_X509 * untrusted;
    struct stack_st_X509_CRL * crls;
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
    stack_st_X509 * (* lookup_certs)(X509_STORE_CTX *, X509_NAME *);
    stack_st_X509_CRL * (* lookup_crls)(X509_STORE_CTX *, X509_NAME *);
    int (* cleanup)(X509_STORE_CTX *);
    int valid;
    int last_untrusted;
    struct stack_st_X509 * chain;
    X509_POLICY_TREE * tree;
    int explicit_policy;
    int error_depth;
    int error;
    X509 * current_cert;
    X509 * current_issuer;
    X509_CRL * current_crl;
    int current_crl_score;
    uint current_reasons;
    X509_STORE_CTX * parent;
    CRYPTO_EX_DATA ex_data;
};

struct ssl_ctx_st {
    SSL_METHOD * method;
    struct stack_st_SSL_CIPHER * cipher_list;
    struct stack_st_SSL_CIPHER * cipher_list_by_id;
    struct x509_store_st * cert_store;
    struct lhash_st_SSL_SESSION * sessions;
    ulong session_cache_size;
    struct ssl_session_st * session_cache_head;
    struct ssl_session_st * session_cache_tail;
    int session_cache_mode;
    long session_timeout;
    int (* new_session_cb)(struct ssl_st *, SSL_SESSION *);
    void (* remove_session_cb)(struct ssl_ctx_st *, SSL_SESSION *);
    SSL_SESSION * (* get_session_cb)(struct ssl_st *, uchar *, int, int *);
    struct _struct_615 stats;
    int references;
    int (* app_verify_callback)(X509_STORE_CTX *, void *);
    void * app_verify_arg;
    pem_password_cb * default_passwd_callback;
    void * default_passwd_callback_userdata;
    int (* client_cert_cb)(SSL *, X509 * *, EVP_PKEY * *);
    int (* app_gen_cookie_cb)(SSL *, uchar *, uint *);
    int (* app_verify_cookie_cb)(SSL *, uchar *, uint);
    CRYPTO_EX_DATA ex_data;
    EVP_MD * rsa_md5;
    EVP_MD * md5;
    EVP_MD * sha1;
    struct stack_st_X509 * extra_certs;
    struct stack_st_SSL_COMP * comp_methods;
    void (* info_callback)(SSL *, int, int);
    struct stack_st_X509_NAME * client_CA;
    ulong options;
    ulong mode;
    long max_cert_list;
    struct cert_st * cert;
    int read_ahead;
    void (* msg_callback)(int, int, int, void *, size_t, SSL *, void *);
    void * msg_callback_arg;
    int verify_mode;
    uint sid_ctx_length;
    uchar sid_ctx[32];
    int (* default_verify_callback)(int, X509_STORE_CTX *);
    GEN_SESSION_CB generate_session_id;
    X509_VERIFY_PARAM * param;
    int quiet_shutdown;
    uint max_send_fragment;
    ENGINE * client_cert_engine;
    int (* tlsext_servername_callback)(SSL *, int *, void *);
    void * tlsext_servername_arg;
    uchar tlsext_tick_key_name[16];
    uchar tlsext_tick_hmac_key[16];
    uchar tlsext_tick_aes_key[16];
    int (* tlsext_ticket_key_cb)(SSL *, uchar *, uchar *, EVP_CIPHER_CTX *, HMAC_CTX *, int);
    int (* tlsext_status_cb)(SSL *, void *);
    void * tlsext_status_arg;
    int (* tlsext_opaque_prf_input_callback)(SSL *, void *, size_t, void *);
    void * tlsext_opaque_prf_input_callback_arg;
    char * psk_identity_hint;
    uint (* psk_client_callback)(SSL *, char *, char *, uint, uchar *, uint);
    uint (* psk_server_callback)(SSL *, char *, uchar *, uint);
    uint freelist_max_len;
    struct ssl3_buf_freelist_st * wbuf_freelist;
    struct ssl3_buf_freelist_st * rbuf_freelist;
    int (* next_protos_advertised_cb)(SSL *, uchar * *, uint *, void *);
    void * next_protos_advertised_cb_arg;
    int (* next_proto_select_cb)(SSL *, uchar * *, uchar *, uchar *, uint, void *);
    void * next_proto_select_cb_arg;
    struct stack_st_SRTP_PROTECTION_PROFILE * srtp_profiles;
};

struct ssl_method_st {
    int version;
    int (* ssl_new)(SSL *);
    void (* ssl_clear)(SSL *);
    void (* ssl_free)(SSL *);
    int (* ssl_accept)(SSL *);
    int (* ssl_connect)(SSL *);
    int (* ssl_read)(SSL *, void *, int);
    int (* ssl_peek)(SSL *, void *, int);
    int (* ssl_write)(SSL *, void *, int);
    int (* ssl_shutdown)(SSL *);
    int (* ssl_renegotiate)(SSL *);
    int (* ssl_renegotiate_check)(SSL *);
    long (* ssl_get_message)(SSL *, int, int, int, long, int *);
    int (* ssl_read_bytes)(SSL *, int, uchar *, int, int);
    int (* ssl_write_bytes)(SSL *, int, void *, int);
    int (* ssl_dispatch_alert)(SSL *);
    long (* ssl_ctrl)(SSL *, int, long, void *);
    long (* ssl_ctx_ctrl)(SSL_CTX *, int, long, void *);
    SSL_CIPHER * (* get_cipher_by_char)(uchar *);
    int (* put_cipher_by_char)(SSL_CIPHER *, uchar *);
    int (* ssl_pending)(SSL *);
    int (* num_ciphers)(void);
    SSL_CIPHER * (* get_cipher)(uint);
    ssl_method_st * (* get_ssl_method)(int);
    long (* get_timeout)(void);
    struct ssl3_enc_method * ssl3_enc;
    int (* ssl_version)(void);
    long (* ssl_callback_ctrl)(SSL *, int, void (* )(void));
    long (* ssl_ctx_callback_ctrl)(SSL_CTX *, int, void (* )(void));
};

struct hmac_ctx_st {
    EVP_MD * md;
    EVP_MD_CTX md_ctx;
    EVP_MD_CTX i_ctx;
    EVP_MD_CTX o_ctx;
    uint key_length;
    uchar key[128];
};

struct DIST_POINT_NAME_st {
    int type;
    union _union_856 name;
    X509_NAME * dpname;
};

struct ssl2_state_st {
    int three_byte_header;
    int clear_text;
    int escape;
    int ssl2_rollback;
    uint wnum;
    int wpend_tot;
    uchar * wpend_buf;
    int wpend_off;
    int wpend_len;
    int wpend_ret;
    int rbuf_left;
    int rbuf_offs;
    uchar * rbuf;
    uchar * wbuf;
    uchar * write_ptr;
    uint padding;
    uint rlength;
    int ract_data_length;
    uint wlength;
    int wact_data_length;
    uchar * ract_data;
    uchar * wact_data;
    uchar * mac_data;
    uchar * read_key;
    uchar * write_key;
    uint challenge_length;
    uchar challenge[32];
    uint conn_id_length;
    uchar conn_id[16];
    uint key_material_length;
    uchar key_material[48];
    ulong read_sequence;
    ulong write_sequence;
    struct _struct_641 tmp;
};

struct kssl_ctx_st {
    char * service_name;
    char * service_host;
    char * client_princ;
    char * keytab_file;
    char * cred_cache;
    krb5_enctype enctype;
    int length;
    krb5_octet * key;
};

struct tls_session_ticket_ext_st {
};

struct X509_POLICY_TREE_st {
};

#define _POSIX_V6_ILP32_OFF32 1

#define _POSIX_V6_ILP32_OFFBIG 1

#define _POSIX_V7_ILP32_OFF32 1

#define _POSIX_V7_ILP32_OFFBIG 1

#define _XBS5_ILP32_OFF32 1

#define _XBS5_ILP32_OFFBIG 1

#define _SYS_EPOLL_H 1

#define EPOLL_CTL_ADD 1

#define EPOLL_CTL_DEL 2

#define EPOLL_CTL_MOD 3

typedef enum enum_1622 {
    EPOLL_CLOEXEC=2000000,
    EPOLL_NONBLOCK=4000
} enum_1622;

typedef union epoll_data epoll_data, *Pepoll_data;

typedef ulonglong uint64_t;

union epoll_data {
    void * ptr;
    int fd;
    uint32_t u32;
    uint64_t u64;
};

typedef union epoll_data epoll_data_t;

typedef struct epoll_event epoll_event, *Pepoll_event;

struct epoll_event {
    uint32_t events;
    epoll_data_t data;
};

typedef enum EPOLL_EVENTS {
    EPOLLERR=8,
    EPOLLET=-2147483648,
    EPOLLHUP=16,
    EPOLLIN=1,
    EPOLLMSG=1024,
    EPOLLONESHOT=1073741824,
    EPOLLOUT=4,
    EPOLLPRI=2,
    EPOLLRDBAND=128,
    EPOLLRDHUP=8192,
    EPOLLRDNORM=64,
    EPOLLWRBAND=512,
    EPOLLWRNORM=256
} EPOLL_EVENTS;

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

#define ERR_LIB_HMAC 48

#define ERR_LIB_JPAKE 49

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

#define ERR_LIB_TS 47

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

#define ERR_R_TS_LIB 47

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
    CRYPTO_THREADID tid;
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

typedef struct lhash_st_ERR_STATE lhash_st_ERR_STATE, *Plhash_st_ERR_STATE;

struct lhash_st_ERR_STATE {
};

typedef struct lhash_st_ERR_STRING_DATA lhash_st_ERR_STRING_DATA, *Plhash_st_ERR_STRING_DATA;

struct lhash_st_ERR_STRING_DATA {
};

#define E2BIG 7

#define EACCES 13

#define EAGAIN 11

#define EBADF 9

#define EBUSY 16

#define ECHILD 10

#define EDOM 33

#define EEXIST 17

#define EFAULT 14

#define EFBIG 27

#define EINTR 4

#define EINVAL 22

#define EIO 5

#define EISDIR 21

#define EMFILE 24

#define EMLINK 31

#define ENFILE 23

#define ENODEV 19

#define ENOENT 2

#define ENOEXEC 8

#define ENOMEM 12

#define ENOSPC 28

#define ENOTBLK 15

#define ENOTDIR 20

#define ENOTTY 25

#define ENXIO 6

#define EPERM 1

#define EPIPE 32

#define ERANGE 34

#define EROFS 30

#define ESPIPE 29

#define ESRCH 3

#define ETXTBSY 26

#define EXDEV 18

#define __error_t_defined 1

#define _ERRNO_H 1

#define EADDRINUSE 98

#define EADDRNOTAVAIL 99

#define EADV 68

#define EAFNOSUPPORT 97

#define EALREADY 114

#define EBADE 52

#define EBADFD 77

#define EBADMSG 74

#define EBADR 53

#define EBADRQC 56

#define EBADSLT 57

#define EBFONT 59

#define ECANCELED 125

#define ECHRNG 44

#define ECOMM 70

#define ECONNABORTED 103

#define ECONNREFUSED 111

#define ECONNRESET 104

#define EDEADLK 35

#define EDEADLOCK 35

#define EDESTADDRREQ 89

#define EDOTDOT 73

#define EDQUOT 122

#define EHOSTDOWN 112

#define EHOSTUNREACH 113

#define EHWPOISON 133

#define EIDRM 43

#define EILSEQ 84

#define EINPROGRESS 115

#define EISCONN 106

#define EISNAM 120

#define EKEYEXPIRED 127

#define EKEYREJECTED 129

#define EKEYREVOKED 128

#define EL2HLT 51

#define EL2NSYNC 45

#define EL3HLT 46

#define EL3RST 47

#define ELIBACC 79

#define ELIBBAD 80

#define ELIBEXEC 83

#define ELIBMAX 82

#define ELIBSCN 81

#define ELNRNG 48

#define ELOOP 40

#define EMEDIUMTYPE 124

#define EMSGSIZE 90

#define EMULTIHOP 72

#define ENAMETOOLONG 36

#define ENAVAIL 119

#define ENETDOWN 100

#define ENETRESET 102

#define ENETUNREACH 101

#define ENOANO 55

#define ENOBUFS 105

#define ENOCSI 50

#define ENODATA 61

#define ENOKEY 126

#define ENOLCK 37

#define ENOLINK 67

#define ENOMEDIUM 123

#define ENOMSG 42

#define ENONET 64

#define ENOPKG 65

#define ENOPROTOOPT 92

#define ENOSR 63

#define ENOSTR 60

#define ENOSYS 38

#define ENOTCONN 107

#define ENOTEMPTY 39

#define ENOTNAM 118

#define ENOTRECOVERABLE 131

#define ENOTSOCK 88

#define ENOTSUP 95

#define ENOTUNIQ 76

#define EOPNOTSUPP 95

#define EOVERFLOW 75

#define EOWNERDEAD 130

#define EPFNOSUPPORT 96

#define EPROTO 71

#define EPROTONOSUPPORT 93

#define EPROTOTYPE 91

#define EREMCHG 78

#define EREMOTE 66

#define EREMOTEIO 121

#define ERESTART 85

#define ERFKILL 132

#define ESHUTDOWN 108

#define ESOCKTNOSUPPORT 94

#define ESRMNT 69

#define ESTALE 116

#define ESTRPIPE 86

#define ETIME 62

#define ETIMEDOUT 110

#define ETOOMANYREFS 109

#define EUCLEAN 117

#define EUNATCH 49

#define EUSERS 87

#define EWOULDBLOCK 11

#define EXFULL 54

typedef int error_t;

#define _NETINET_ETHER_H 1

#define __NET_ETHERNET_H 1

#define ETHER_ADDR_LEN 6

#define ETHER_CRC_LEN 4

#define ETHER_HDR_LEN 14

#define ETHER_MAX_LEN 1518

#define ETHER_MIN_LEN 64

#define ETHER_TYPE_LEN 2

#define ETHERMIN 46

#define ETHERMTU 1500

#define ETHERTYPE_AARP 33011

#define ETHERTYPE_ARP 2054

#define ETHERTYPE_AT 32923

#define ETHERTYPE_IP 2048

#define ETHERTYPE_IPV6 34525

#define ETHERTYPE_IPX 33079

#define ETHERTYPE_LOOPBACK 36864

#define ETHERTYPE_NTRAILER 16

#define ETHERTYPE_PUP 512

#define ETHERTYPE_REVARP 32821

#define ETHERTYPE_SPRITE 1280

#define ETHERTYPE_TRAIL 4096

#define ETHERTYPE_VLAN 33024

typedef struct ether_addr ether_addr, *Pether_addr;

typedef uchar u_int8_t;

struct ether_addr {
    u_int8_t ether_addr_octet[6];
};

typedef struct ether_header ether_header, *Pether_header;

struct ether_header {
    u_int8_t ether_dhost[6];
    u_int8_t ether_shost[6];
    u_int16_t ether_type;
};

#define _SYS_EVENTFD_H 1

typedef enum enum_1628 {
    EFD_CLOEXEC=2000000,
    EFD_NONBLOCK=4000,
    EFD_SEMAPHORE=1
} enum_1628;

typedef uint64_t eventfd_t;

#define ASN1_PKEY_ALIAS 1

#define ASN1_PKEY_CTRL_CMS_ENVELOPE 7

#define ASN1_PKEY_CTRL_CMS_SIGN 5

#define ASN1_PKEY_CTRL_DEFAULT_MD_NID 3

#define ASN1_PKEY_CTRL_PKCS7_ENCRYPT 2

#define ASN1_PKEY_CTRL_PKCS7_SIGN 1

#define ASN1_PKEY_DYNAMIC 2

#define ASN1_PKEY_SIGPARAM_NULL 4

#define EVP_CIPH_ALWAYS_CALL_INIT 32

#define EVP_CIPH_CBC_MODE 2

#define EVP_CIPH_CCM_MODE 7

#define EVP_CIPH_CFB_MODE 3

#define EVP_CIPH_CTR_MODE 5

#define EVP_CIPH_CTRL_INIT 64

#define EVP_CIPH_CUSTOM_COPY 16384

#define EVP_CIPH_CUSTOM_IV 16

#define EVP_CIPH_CUSTOM_KEY_LENGTH 128

#define EVP_CIPH_ECB_MODE 1

#define EVP_CIPH_FLAG_AEAD_CIPHER 2097152

#define EVP_CIPH_FLAG_CUSTOM_CIPHER 1048576

#define EVP_CIPH_FLAG_DEFAULT_ASN1 4096

#define EVP_CIPH_FLAG_FIPS 1024

#define EVP_CIPH_FLAG_LENGTH_BITS 8192

#define EVP_CIPH_FLAG_NON_FIPS_ALLOW 2048

#define EVP_CIPH_GCM_MODE 6

#define EVP_CIPH_MODE 983047

#define EVP_CIPH_NO_PADDING 256

#define EVP_CIPH_OFB_MODE 4

#define EVP_CIPH_RAND_KEY 512

#define EVP_CIPH_STREAM_CIPHER 0

#define EVP_CIPH_VARIABLE_LENGTH 8

#define EVP_CIPH_XTS_MODE 65537

#define EVP_CTRL_AEAD_SET_MAC_KEY 23

#define EVP_CTRL_AEAD_TLS1_AAD 22

#define EVP_CTRL_CCM_GET_TAG 16

#define EVP_CTRL_CCM_SET_IVLEN 9

#define EVP_CTRL_CCM_SET_L 20

#define EVP_CTRL_CCM_SET_MSGLEN 21

#define EVP_CTRL_CCM_SET_TAG 17

#define EVP_CTRL_COPY 8

#define EVP_CTRL_GCM_GET_TAG 16

#define EVP_CTRL_GCM_IV_GEN 19

#define EVP_CTRL_GCM_SET_IV_FIXED 18

#define EVP_CTRL_GCM_SET_IV_INV 24

#define EVP_CTRL_GCM_SET_IVLEN 9

#define EVP_CTRL_GCM_SET_TAG 17

#define EVP_CTRL_GET_RC2_KEY_BITS 2

#define EVP_CTRL_GET_RC5_ROUNDS 4

#define EVP_CTRL_INIT 0

#define EVP_CTRL_PBE_PRF_NID 7

#define EVP_CTRL_RAND_KEY 6

#define EVP_CTRL_SET_KEY_LENGTH 1

#define EVP_CTRL_SET_RC2_KEY_BITS 3

#define EVP_CTRL_SET_RC5_ROUNDS 5

#define EVP_F_AES_INIT_KEY 133

#define EVP_F_AES_XTS 172

#define EVP_F_AES_XTS_CIPHER 175

#define EVP_F_AESNI_INIT_KEY 165

#define EVP_F_AESNI_XTS_CIPHER 176

#define EVP_F_ALG_MODULE_INIT 177

#define EVP_F_CAMELLIA_INIT_KEY 159

#define EVP_F_CMAC_INIT 173

#define EVP_F_D2I_PKEY 100

#define EVP_F_DO_SIGVER_INIT 161

#define EVP_F_DSA_PKEY2PKCS8 135

#define EVP_F_DSAPKEY2PKCS8 134

#define EVP_F_ECDSA_PKEY2PKCS8 129

#define EVP_F_ECKEY_PKEY2PKCS8 132

#define EVP_F_EVP_CIPHER_CTX_COPY 163

#define EVP_F_EVP_CIPHER_CTX_CTRL 124

#define EVP_F_EVP_CIPHER_CTX_SET_KEY_LENGTH 122

#define EVP_F_EVP_CIPHERINIT_EX 123

#define EVP_F_EVP_DECRYPTFINAL_EX 101

#define EVP_F_EVP_DIGESTINIT_EX 128

#define EVP_F_EVP_ENCRYPTFINAL_EX 127

#define EVP_F_EVP_MD_CTX_COPY_EX 110

#define EVP_F_EVP_MD_SIZE 162

#define EVP_F_EVP_OPENINIT 102

#define EVP_F_EVP_PBE_ALG_ADD 115

#define EVP_F_EVP_PBE_ALG_ADD_TYPE 160

#define EVP_F_EVP_PBE_CIPHERINIT 116

#define EVP_F_EVP_PKCS82PKEY 111

#define EVP_F_EVP_PKCS82PKEY_BROKEN 136

#define EVP_F_EVP_PKEY2PKCS8_BROKEN 113

#define EVP_F_EVP_PKEY_COPY_PARAMETERS 103

#define EVP_F_EVP_PKEY_CTX_CTRL 137

#define EVP_F_EVP_PKEY_CTX_CTRL_STR 150

#define EVP_F_EVP_PKEY_CTX_DUP 156

#define EVP_F_EVP_PKEY_DECRYPT 104

#define EVP_F_EVP_PKEY_DECRYPT_INIT 138

#define EVP_F_EVP_PKEY_DECRYPT_OLD 151

#define EVP_F_EVP_PKEY_DERIVE 153

#define EVP_F_EVP_PKEY_DERIVE_INIT 154

#define EVP_F_EVP_PKEY_DERIVE_SET_PEER 155

#define EVP_F_EVP_PKEY_ENCRYPT 105

#define EVP_F_EVP_PKEY_ENCRYPT_INIT 139

#define EVP_F_EVP_PKEY_ENCRYPT_OLD 152

#define EVP_F_EVP_PKEY_GET1_DH 119

#define EVP_F_EVP_PKEY_GET1_DSA 120

#define EVP_F_EVP_PKEY_GET1_EC_KEY 131

#define EVP_F_EVP_PKEY_GET1_ECDSA 130

#define EVP_F_EVP_PKEY_GET1_RSA 121

#define EVP_F_EVP_PKEY_KEYGEN 146

#define EVP_F_EVP_PKEY_KEYGEN_INIT 147

#define EVP_F_EVP_PKEY_NEW 106

#define EVP_F_EVP_PKEY_PARAMGEN 148

#define EVP_F_EVP_PKEY_PARAMGEN_INIT 149

#define EVP_F_EVP_PKEY_SIGN 140

#define EVP_F_EVP_PKEY_SIGN_INIT 141

#define EVP_F_EVP_PKEY_VERIFY 142

#define EVP_F_EVP_PKEY_VERIFY_INIT 143

#define EVP_F_EVP_PKEY_VERIFY_RECOVER 144

#define EVP_F_EVP_PKEY_VERIFY_RECOVER_INIT 145

#define EVP_F_EVP_RIJNDAEL 126

#define EVP_F_EVP_SIGNFINAL 107

#define EVP_F_EVP_VERIFYFINAL 108

#define EVP_F_FIPS_CIPHER_CTX_COPY 170

#define EVP_F_FIPS_CIPHER_CTX_CTRL 167

#define EVP_F_FIPS_CIPHER_CTX_SET_KEY_LENGTH 171

#define EVP_F_FIPS_CIPHERINIT 166

#define EVP_F_FIPS_DIGESTINIT 168

#define EVP_F_FIPS_MD_CTX_COPY 169

#define EVP_F_HMAC_INIT_EX 174

#define EVP_F_INT_CTX_NEW 157

#define EVP_F_PKCS5_PBE_KEYIVGEN 117

#define EVP_F_PKCS5_V2_PBE_KEYIVGEN 118

#define EVP_F_PKCS5_V2_PBKDF2_KEYIVGEN 164

#define EVP_F_PKCS8_SET_BROKEN 112

#define EVP_F_PKEY_SET_TYPE 158

#define EVP_F_RC2_MAGIC_TO_METH 109

#define EVP_F_RC5_CTRL 125

#define EVP_GCM_TLS_EXPLICIT_IV_LEN 8

#define EVP_GCM_TLS_FIXED_IV_LEN 4

#define EVP_GCM_TLS_TAG_LEN 16

#define EVP_MAX_BLOCK_LENGTH 32

#define EVP_MAX_IV_LENGTH 16

#define EVP_MAX_KEY_LENGTH 64

#define EVP_MAX_MD_SIZE 64

#define EVP_MD_CTRL_ALG_CTRL 4096

#define EVP_MD_CTRL_DIGALGID 1

#define EVP_MD_CTRL_MICALG 2

#define EVP_MD_CTX_FLAG_CLEANED 2

#define EVP_MD_CTX_FLAG_NO_INIT 256

#define EVP_MD_CTX_FLAG_NON_FIPS_ALLOW 8

#define EVP_MD_CTX_FLAG_ONESHOT 1

#define EVP_MD_CTX_FLAG_PAD_MASK 240

#define EVP_MD_CTX_FLAG_PAD_PKCS1 0

#define EVP_MD_CTX_FLAG_PAD_PSS 32

#define EVP_MD_CTX_FLAG_PAD_X931 16

#define EVP_MD_CTX_FLAG_PSS_MDLEN 65535

#define EVP_MD_CTX_FLAG_PSS_MREC 65534

#define EVP_MD_CTX_FLAG_REUSE 4

#define EVP_MD_FLAG_DIGALGID_ABSENT 8

#define EVP_MD_FLAG_DIGALGID_CUSTOM 24

#define EVP_MD_FLAG_DIGALGID_MASK 24

#define EVP_MD_FLAG_DIGALGID_NULL 0

#define EVP_MD_FLAG_FIPS 1024

#define EVP_MD_FLAG_ONESHOT 1

#define EVP_MD_FLAG_PKEY_DIGEST 2

#define EVP_MD_FLAG_PKEY_METHOD_SIGNATURE 4

#define EVP_PBE_TYPE_OUTER 0

#define EVP_PBE_TYPE_PRF 1

#define EVP_PK_DH 4

#define EVP_PK_DSA 2

#define EVP_PK_EC 8

#define EVP_PK_RSA 1

#define EVP_PKEY_ALG_CTRL 4096

#define EVP_PKEY_CMAC 894

#define EVP_PKEY_CTRL_CIPHER 12

#define EVP_PKEY_CTRL_CMS_DECRYPT 10

#define EVP_PKEY_CTRL_CMS_ENCRYPT 9

#define EVP_PKEY_CTRL_CMS_SIGN 11

#define EVP_PKEY_CTRL_DIGESTINIT 7

#define EVP_PKEY_CTRL_MD 1

#define EVP_PKEY_CTRL_PEER_KEY 2

#define EVP_PKEY_CTRL_PKCS7_DECRYPT 4

#define EVP_PKEY_CTRL_PKCS7_ENCRYPT 3

#define EVP_PKEY_CTRL_PKCS7_SIGN 5

#define EVP_PKEY_CTRL_SET_IV 8

#define EVP_PKEY_CTRL_SET_MAC_KEY 6

#define EVP_PKEY_DH 28

#define EVP_PKEY_DSA 116

#define EVP_PKEY_DSA1 67

#define EVP_PKEY_DSA2 66

#define EVP_PKEY_DSA3 113

#define EVP_PKEY_DSA4 70

#define EVP_PKEY_EC 408

#define EVP_PKEY_FLAG_AUTOARGLEN 2

#define EVP_PKEY_FLAG_SIGCTX_CUSTOM 4

#define EVP_PKEY_HMAC 855

#define EVP_PKEY_MO_DECRYPT 8

#define EVP_PKEY_MO_ENCRYPT 4

#define EVP_PKEY_MO_SIGN 1

#define EVP_PKEY_MO_VERIFY 2

#define EVP_PKEY_NONE 0

#define EVP_PKEY_OP_DECRYPT 512

#define EVP_PKEY_OP_DERIVE 1024

#define EVP_PKEY_OP_ENCRYPT 256

#define EVP_PKEY_OP_KEYGEN 4

#define EVP_PKEY_OP_PARAMGEN 2

#define EVP_PKEY_OP_SIGN 8

#define EVP_PKEY_OP_SIGNCTX 64

#define EVP_PKEY_OP_TYPE_CRYPT 768

#define EVP_PKEY_OP_TYPE_GEN 6

#define EVP_PKEY_OP_UNDEFINED 0

#define EVP_PKEY_OP_VERIFY 16

#define EVP_PKEY_OP_VERIFYCTX 128

#define EVP_PKEY_OP_VERIFYRECOVER 32

#define EVP_PKEY_RSA 6

#define EVP_PKEY_RSA2 19

#define EVP_PKS_DSA 512

#define EVP_PKS_EC 1024

#define EVP_PKS_RSA 256

#define EVP_PKT_ENC 32

#define EVP_PKT_EXCH 64

#define EVP_PKT_EXP 4096

#define EVP_PKT_SIGN 16

#define EVP_R_AES_IV_SETUP_FAILED 162

#define EVP_R_AES_KEY_SETUP_FAILED 143

#define EVP_R_ASN1_LIB 140

#define EVP_R_BAD_BLOCK_LENGTH 136

#define EVP_R_BAD_DECRYPT 100

#define EVP_R_BAD_KEY_LENGTH 137

#define EVP_R_BN_DECODE_ERROR 112

#define EVP_R_BN_PUBKEY_ERROR 113

#define EVP_R_BUFFER_TOO_SMALL 155

#define EVP_R_CAMELLIA_KEY_SETUP_FAILED 157

#define EVP_R_CIPHER_PARAMETER_ERROR 122

#define EVP_R_COMMAND_NOT_SUPPORTED 147

#define EVP_R_CTRL_NOT_IMPLEMENTED 132

#define EVP_R_CTRL_OPERATION_NOT_IMPLEMENTED 133

#define EVP_R_DATA_NOT_MULTIPLE_OF_BLOCK_LENGTH 138

#define EVP_R_DECODE_ERROR 114

#define EVP_R_DIFFERENT_KEY_TYPES 101

#define EVP_R_DIFFERENT_PARAMETERS 153

#define EVP_R_DISABLED_FOR_FIPS 163

#define EVP_R_ENCODE_ERROR 115

#define EVP_R_ERROR_LOADING_SECTION 165

#define EVP_R_ERROR_SETTING_FIPS_MODE 166

#define EVP_R_EVP_PBE_CIPHERINIT_ERROR 119

#define EVP_R_EXPECTING_A_DH_KEY 128

#define EVP_R_EXPECTING_A_DSA_KEY 129

#define EVP_R_EXPECTING_A_EC_KEY 142

#define EVP_R_EXPECTING_A_ECDSA_KEY 141

#define EVP_R_EXPECTING_AN_RSA_KEY 127

#define EVP_R_FIPS_MODE_NOT_SUPPORTED 167

#define EVP_R_INITIALIZATION_ERROR 134

#define EVP_R_INPUT_NOT_INITIALIZED 111

#define EVP_R_INVALID_DIGEST 152

#define EVP_R_INVALID_FIPS_MODE 168

#define EVP_R_INVALID_KEY_LENGTH 130

#define EVP_R_INVALID_OPERATION 148

#define EVP_R_IV_TOO_LARGE 102

#define EVP_R_KEYGEN_FAILURE 120

#define EVP_R_MESSAGE_DIGEST_IS_NULL 159

#define EVP_R_METHOD_NOT_SUPPORTED 144

#define EVP_R_MISSING_PARAMETERS 103

#define EVP_R_NO_CIPHER_SET 131

#define EVP_R_NO_DEFAULT_DIGEST 158

#define EVP_R_NO_DIGEST_SET 139

#define EVP_R_NO_DSA_PARAMETERS 116

#define EVP_R_NO_KEY_SET 154

#define EVP_R_NO_OPERATION_SET 149

#define EVP_R_NO_SIGN_FUNCTION_CONFIGURED 104

#define EVP_R_NO_VERIFY_FUNCTION_CONFIGURED 105

#define EVP_R_OPERATION_NOT_SUPPORTED_FOR_THIS_KEYTYPE 150

#define EVP_R_OPERATON_NOT_INITIALIZED 151

#define EVP_R_PKCS8_UNKNOWN_BROKEN_TYPE 117

#define EVP_R_PRIVATE_KEY_DECODE_ERROR 145

#define EVP_R_PRIVATE_KEY_ENCODE_ERROR 146

#define EVP_R_PUBLIC_KEY_NOT_RSA 106

#define EVP_R_TOO_LARGE 164

#define EVP_R_UNKNOWN_CIPHER 160

#define EVP_R_UNKNOWN_DIGEST 161

#define EVP_R_UNKNOWN_OPTION 169

#define EVP_R_UNKNOWN_PBE_ALGORITHM 121

#define EVP_R_UNSUPORTED_NUMBER_OF_ROUNDS 135

#define EVP_R_UNSUPPORTED_ALGORITHM 156

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

typedef int (EVP_PBE_KEYGEN)(EVP_CIPHER_CTX *, char *, int, ASN1_TYPE *, EVP_CIPHER *, EVP_MD *, int);

typedef int (EVP_PKEY_gen_cb)(EVP_PKEY_CTX *);

typedef int (evp_sign_method)(int, uchar *, uint, uchar *, uint *, void *);

typedef int (evp_verify_method)(int, uchar *, uint, uchar *, uint, void *);

#define _FCNTL_H 1

#define AT_EACCESS 512

#define AT_FDCWD -100

#define AT_REMOVEDIR 512

#define AT_SYMLINK_FOLLOW 1024

#define AT_SYMLINK_NOFOLLOW 256

#define DN_ACCESS 1

#define DN_ATTRIB 32

#define DN_CREATE 4

#define DN_DELETE 8

#define DN_MODIFY 2

#define DN_MULTISHOT 2147483648

#define DN_RENAME 16

#define F_DUPFD 0

#define F_DUPFD_CLOEXEC 1030

#define F_EXLCK 4

#define F_GETFD 1

#define F_GETFL 3

#define F_GETLEASE 1025

#define F_GETLK 5

#define F_GETLK64 12

#define F_GETOWN 9

#define F_GETOWN_EX 16

#define F_GETSIG 11

#define F_LOCK 1

#define F_NOTIFY 1026

#define F_OK 0

#define F_RDLCK 0

#define F_SETFD 2

#define F_SETFL 4

#define F_SETLEASE 1024

#define F_SETLK 6

#define F_SETLK64 13

#define F_SETLKW 7

#define F_SETLKW64 14

#define F_SETOWN 8

#define F_SETOWN_EX 15

#define F_SETSIG 10

#define F_SHLCK 8

#define F_TEST 3

#define F_TLOCK 2

#define F_ULOCK 0

#define F_UNLCK 2

#define F_WRLCK 1

#define FAPPEND 1024

#define FASYNC 8192

#define FD_CLOEXEC 1

#define FFSYNC 1052672

#define FNDELAY 2048

#define FNONBLOCK 2048

#define LOCK_EX 2

#define LOCK_MAND 32

#define LOCK_NB 4

#define LOCK_READ 64

#define LOCK_RW 192

#define LOCK_SH 1

#define LOCK_UN 8

#define LOCK_WRITE 128

#define O_ACCMODE 3

#define O_APPEND 1024

#define O_ASYNC 8192

#define O_CLOEXEC 524288

#define O_CREAT 64

#define O_DIRECT 16384

#define O_DIRECTORY 65536

#define O_DSYNC 4096

#define O_EXCL 128

#define O_FSYNC 1052672

#define O_LARGEFILE 32768

#define O_NDELAY 2048

#define O_NOATIME 262144

#define O_NOCTTY 256

#define O_NOFOLLOW 131072

#define O_NONBLOCK 2048

#define O_RDONLY 0

#define O_RDWR 2

#define O_RSYNC 1052672

#define O_SYNC 1052672

#define O_TRUNC 512

#define O_WRONLY 1

#define POSIX_FADV_DONTNEED 4

#define POSIX_FADV_NOREUSE 5

#define POSIX_FADV_NORMAL 0

#define POSIX_FADV_RANDOM 1

#define POSIX_FADV_SEQUENTIAL 2

#define POSIX_FADV_WILLNEED 3

#define R_OK 4

#define S_IFBLK 24576

#define S_IFCHR 8192

#define S_IFDIR 16384

#define S_IFIFO 4096

#define S_IFLNK 40960

#define S_IFMT 61440

#define S_IFREG 32768

#define S_IFSOCK 49152

#define S_IRGRP 50

#define S_IROTH 6

#define S_IRUSR 256

#define S_IRWXG 63

#define S_IRWXO 7

#define S_IRWXU 508

#define S_ISGID 1024

#define S_ISUID 2048

#define S_ISVTX 512

#define S_IWGRP 25

#define S_IWOTH 3

#define S_IWUSR 128

#define S_IXGRP 12

#define S_IXOTH 1

#define S_IXUSR 64

#define SPLICE_F_GIFT 8

#define SPLICE_F_MORE 4

#define SPLICE_F_MOVE 1

#define SPLICE_F_NONBLOCK 2

#define SYNC_FILE_RANGE_WAIT_AFTER 4

#define SYNC_FILE_RANGE_WAIT_BEFORE 1

#define SYNC_FILE_RANGE_WRITE 2

#define W_OK 2

#define X_OK 1

typedef enum __pid_type {
    F_OWNER_GID=3,
    F_OWNER_PGRP=2,
    F_OWNER_PID=1,
    F_OWNER_TID=0
} __pid_type;

typedef struct f_owner_ex f_owner_ex, *Pf_owner_ex;

struct f_owner_ex {
    enum __pid_type type;
    __pid_t pid;
};

typedef struct flock flock, *Pflock;

struct flock {
    short l_type;
    short l_whence;
    __off_t l_start;
    __off_t l_len;
    __pid_t l_pid;
};

typedef struct flock64 flock64, *Pflock64;

struct flock64 {
    short l_type;
    short l_whence;
    __off64_t l_start;
    __off64_t l_len;
    __pid_t l_pid;
};

#define __GLIBC__ 2

#define __GLIBC_MINOR__ 12

#define __GNU_LIBRARY__ 6

#define __STDC_IEC_559__ 1

#define __STDC_IEC_559_COMPLEX__ 1

#define __STDC_ISO_10646__ 200009

#define __USE_ANSI 1

#define __USE_ATFILE 1

#define __USE_BSD 1

#define __USE_FORTIFY_LEVEL 0

#define __USE_GNU 1

#define __USE_ISOC95 1

#define __USE_ISOC99 1

#define __USE_LARGEFILE 1

#define __USE_LARGEFILE64 1

#define __USE_MISC 1

#define __USE_POSIX 1

#define __USE_POSIX199309 1

#define __USE_POSIX199506 1

#define __USE_POSIX2 1

#define __USE_SVID 1

#define __USE_UNIX98 1

#define __USE_XOPEN 1

#define __USE_XOPEN2K 1

#define __USE_XOPEN2K8 1

#define __USE_XOPEN2K8XSI 1

#define __USE_XOPEN2KXSI 1

#define __USE_XOPEN_EXTENDED 1

#define _ATFILE_SOURCE 1

#define _BSD_SOURCE 1

#define _FEATURES_H 1

#define _ISOC95_SOURCE 1

#define _ISOC99_SOURCE 1

#define _LARGEFILE64_SOURCE 1

#define _LARGEFILE_SOURCE 1

#define _POSIX_C_SOURCE 200809

#define _POSIX_SOURCE 1

#define _SVID_SOURCE 1

#define _XOPEN_SOURCE 700

#define _XOPEN_SOURCE_EXTENDED 1

#define _FENV_H 1

#define FE_DFL_ENV -1

#define FE_NOMASK_ENV -2

typedef union anon__struct_1597_bitfield_1 anon__struct_1597_bitfield_1, *Panon__struct_1597_bitfield_1;

union anon__struct_1597_bitfield_1 {
    uint __opcode:11; /* : bits 0-10 */
    uint __unused4:5; /* : bits 11-15 */
};

typedef enum enum_1595 {
    FE_DIVBYZERO=4,
    FE_INEXACT=32,
    FE_INVALID=1,
    FE_OVERFLOW=8,
    FE_UNDERFLOW=16,
    __FE_DENORM=2
} enum_1595;

typedef enum enum_1596 {
    FE_DOWNWARD=1024,
    FE_TONEAREST=0,
    FE_TOWARDZERO=3072,
    FE_UPWARD=2048
} enum_1596;

typedef struct fenv_t fenv_t, *Pfenv_t;

struct fenv_t {
    ushort __control_word;
    ushort __unused1;
    ushort __status_word;
    ushort __unused2;
    ushort __tags;
    ushort __unused3;
    uint __eip;
    ushort __cs_selector;
    union anon__struct_1597_bitfield_1 field_0x12;
    uint __data_offset;
    ushort __data_selector;
    ushort __unused5;
};

typedef ushort fexcept_t;

#define FIPS_F_DH_BUILTIN_GENPARAMS 100

#define FIPS_F_DH_INIT 148

#define FIPS_F_DRBG_RESEED 162

#define FIPS_F_DSA_BUILTIN_PARAMGEN 101

#define FIPS_F_DSA_BUILTIN_PARAMGEN2 107

#define FIPS_F_DSA_DO_SIGN 102

#define FIPS_F_DSA_DO_VERIFY 103

#define FIPS_F_EC_KEY_GENERATE_KEY 166

#define FIPS_F_ECDH_COMPUTE_KEY 163

#define FIPS_F_ECDSA_DO_SIGN 164

#define FIPS_F_ECDSA_DO_VERIFY 165

#define FIPS_F_EVP_CIPHERINIT_EX 124

#define FIPS_F_EVP_DIGESTINIT_EX 125

#define FIPS_F_FIPS_CHECK_DSA 104

#define FIPS_F_FIPS_CHECK_DSA_PRNG 151

#define FIPS_F_FIPS_CHECK_EC 142

#define FIPS_F_FIPS_CHECK_EC_PRNG 152

#define FIPS_F_FIPS_CHECK_INCORE_FINGERPRINT 105

#define FIPS_F_FIPS_CHECK_RSA 106

#define FIPS_F_FIPS_CHECK_RSA_PRNG 150

#define FIPS_F_FIPS_CIPHER 160

#define FIPS_F_FIPS_CIPHER_CTX_CTRL 161

#define FIPS_F_FIPS_CIPHERINIT 143

#define FIPS_F_FIPS_DIGESTFINAL 158

#define FIPS_F_FIPS_DIGESTINIT 128

#define FIPS_F_FIPS_DIGESTUPDATE 159

#define FIPS_F_FIPS_DRBG_BYTES 131

#define FIPS_F_FIPS_DRBG_CHECK 146

#define FIPS_F_FIPS_DRBG_CPRNG_TEST 132

#define FIPS_F_FIPS_DRBG_ERROR_CHECK 136

#define FIPS_F_FIPS_DRBG_GENERATE 134

#define FIPS_F_FIPS_DRBG_INIT 135

#define FIPS_F_FIPS_DRBG_INSTANTIATE 138

#define FIPS_F_FIPS_DRBG_NEW 139

#define FIPS_F_FIPS_DRBG_RESEED 140

#define FIPS_F_FIPS_DRBG_SINGLE_KAT 141

#define FIPS_F_FIPS_DSA_CHECK 107

#define FIPS_F_FIPS_DSA_SIGN_DIGEST 154

#define FIPS_F_FIPS_DSA_VERIFY_DIGEST 155

#define FIPS_F_FIPS_GET_ENTROPY 147

#define FIPS_F_FIPS_MODE_SET 108

#define FIPS_F_FIPS_MODULE_MODE_SET 108

#define FIPS_F_FIPS_PKEY_SIGNATURE_TEST 109

#define FIPS_F_FIPS_RAND_ADD 137

#define FIPS_F_FIPS_RAND_BYTES 122

#define FIPS_F_FIPS_RAND_PSEUDO_BYTES 167

#define FIPS_F_FIPS_RAND_SEED 168

#define FIPS_F_FIPS_RAND_SET_METHOD 126

#define FIPS_F_FIPS_RAND_STATUS 127

#define FIPS_F_FIPS_RSA_SIGN_DIGEST 156

#define FIPS_F_FIPS_RSA_VERIFY_DIGEST 157

#define FIPS_F_FIPS_SELFTEST_AES 110

#define FIPS_F_FIPS_SELFTEST_AES_CCM 145

#define FIPS_F_FIPS_SELFTEST_AES_GCM 129

#define FIPS_F_FIPS_SELFTEST_AES_XTS 144

#define FIPS_F_FIPS_SELFTEST_CMAC 130

#define FIPS_F_FIPS_SELFTEST_DES 111

#define FIPS_F_FIPS_SELFTEST_DSA 112

#define FIPS_F_FIPS_SELFTEST_ECDSA 133

#define FIPS_F_FIPS_SELFTEST_HMAC 113

#define FIPS_F_FIPS_SELFTEST_RNG 114

#define FIPS_F_FIPS_SELFTEST_SHA1 115

#define FIPS_F_FIPS_SELFTEST_X931 114

#define FIPS_F_FIPS_SET_PRNG_KEY 153

#define FIPS_F_HASH_FINAL 123

#define FIPS_F_RSA_BUILTIN_KEYGEN 116

#define FIPS_F_RSA_EAY_INIT 149

#define FIPS_F_RSA_EAY_PRIVATE_DECRYPT 117

#define FIPS_F_RSA_EAY_PRIVATE_ENCRYPT 118

#define FIPS_F_RSA_EAY_PUBLIC_DECRYPT 119

#define FIPS_F_RSA_EAY_PUBLIC_ENCRYPT 120

#define FIPS_F_RSA_X931_GENERATE_KEY_EX 121

#define FIPS_F_SSLEAY_RAND_BYTES 122

#define FIPS_R_ADDITIONAL_INPUT_ERROR_UNDETECTED 150

#define FIPS_R_ADDITIONAL_INPUT_TOO_LONG 125

#define FIPS_R_ALREADY_INSTANTIATED 134

#define FIPS_R_AUTHENTICATION_FAILURE 151

#define FIPS_R_CANNOT_READ_EXE 103

#define FIPS_R_CANNOT_READ_EXE_DIGEST 104

#define FIPS_R_CONTRADICTING_EVIDENCE 114

#define FIPS_R_DRBG_NOT_INITIALISED 152

#define FIPS_R_DRBG_STUCK 103

#define FIPS_R_ENTROPY_ERROR_UNDETECTED 104

#define FIPS_R_ENTROPY_NOT_REQUESTED_FOR_RESEED 105

#define FIPS_R_ENTROPY_SOURCE_STUCK 142

#define FIPS_R_ERROR_INITIALISING_DRBG 115

#define FIPS_R_ERROR_INSTANTIATING_DRBG 127

#define FIPS_R_ERROR_RETRIEVING_ADDITIONAL_INPUT 124

#define FIPS_R_ERROR_RETRIEVING_ENTROPY 122

#define FIPS_R_ERROR_RETRIEVING_NONCE 140

#define FIPS_R_FINGERPRINT_DOES_NOT_MATCH 110

#define FIPS_R_FINGERPRINT_DOES_NOT_MATCH_NONPIC_RELOCATED 111

#define FIPS_R_FINGERPRINT_DOES_NOT_MATCH_SEGMENT_ALIASING 112

#define FIPS_R_FIPS_MODE_ALREADY_SET 102

#define FIPS_R_FIPS_SELFTEST_FAILED 106

#define FIPS_R_FUNCTION_ERROR 116

#define FIPS_R_GENERATE_ERROR 137

#define FIPS_R_GENERATE_ERROR_UNDETECTED 118

#define FIPS_R_IN_ERROR_STATE 123

#define FIPS_R_INSTANTIATE_ERROR 119

#define FIPS_R_INSUFFICIENT_SECURITY_STRENGTH 120

#define FIPS_R_INTERNAL_ERROR 121

#define FIPS_R_INVALID_KEY_LENGTH 109

#define FIPS_R_INVALID_PARAMETERS 144

#define FIPS_R_KEY_TOO_SHORT 108

#define FIPS_R_NON_FIPS_METHOD 100

#define FIPS_R_NONCE_ERROR_UNDETECTED 149

#define FIPS_R_NOPR_TEST1_FAILURE 145

#define FIPS_R_NOPR_TEST2_FAILURE 146

#define FIPS_R_NOT_INSTANTIATED 126

#define FIPS_R_PAIRWISE_TEST_FAILED 107

#define FIPS_R_PERSONALISATION_ERROR_UNDETECTED 128

#define FIPS_R_PERSONALISATION_STRING_TOO_LONG 129

#define FIPS_R_PR_TEST1_FAILURE 147

#define FIPS_R_PR_TEST2_FAILURE 148

#define FIPS_R_PRNG_STRENGTH_TOO_LOW 143

#define FIPS_R_REQUEST_LENGTH_ERROR_UNDETECTED 130

#define FIPS_R_REQUEST_TOO_LARGE_FOR_DRBG 131

#define FIPS_R_RESEED_COUNTER_ERROR 132

#define FIPS_R_RESEED_ERROR 133

#define FIPS_R_RSA_DECRYPT_ERROR 115

#define FIPS_R_RSA_ENCRYPT_ERROR 116

#define FIPS_R_SELFTEST_FAILED 101

#define FIPS_R_SELFTEST_FAILURE 135

#define FIPS_R_STRENGTH_ERROR_UNDETECTED 136

#define FIPS_R_TEST_FAILURE 117

#define FIPS_R_UNINSTANTIATE_ERROR 141

#define FIPS_R_UNINSTANTIATE_ZEROISE_ERROR 138

#define FIPS_R_UNSUPPORTED_DRBG_TYPE 139

#define FIPS_R_UNSUPPORTED_PLATFORM 113

#define DRBG_FLAG_CTR_USE_DF 1

#define DRBG_FLAG_TEST 2

typedef struct drbg_ctx_st drbg_ctx_st, *Pdrbg_ctx_st;

typedef struct drbg_ctx_st DRBG_CTX;

struct drbg_ctx_st {
};

#define FLT_ROUNDS 1

#define __FMTMSG_H 1

#define MM_NULLACT 0

#define MM_NULLLBL 0

#define MM_NULLMC 0

#define MM_NULLSEV 0

#define MM_NULLTAG 0

#define MM_NULLTXT 0

typedef enum enum_1245 {
    MM_APPL=8,
    MM_CONSOLE=512,
    MM_FIRM=4,
    MM_HARD=1,
    MM_NRECOV=128,
    MM_OPSYS=32,
    MM_PRINT=256,
    MM_RECOVER=64,
    MM_SOFT=2,
    MM_UTIL=16
} enum_1245;

typedef enum enum_1246 {
    MM_ERROR=2,
    MM_HALT=1,
    MM_INFO=4,
    MM_NOSEV=0,
    MM_WARNING=3
} enum_1246;

typedef enum enum_1247 {
    MM_NOCON=4,
    MM_NOMSG=1,
    MM_NOTOK=0,
    MM_OK=0
} enum_1247;

#define _FNMATCH_H 1

#define FNM_CASEFOLD 16

#define FNM_EXTMATCH 32

#define FNM_FILE_NAME 1

#define FNM_LEADING_DIR 8

#define FNM_NOESCAPE 2

#define FNM_NOMATCH 1

#define FNM_NOSYS -1

#define FNM_PATHNAME 1

#define FNM_PERIOD 4

#define _SYS_FSUID_H 1

#define _ARPA_FTP_H 1

#define BLK_BYTECOUNT 2

#define BLK_EOF 64

#define BLK_EOR 128

#define BLK_ERRORS 32

#define BLK_RESTART 16

#define COMPLETE 2

#define CONTINUE 3

#define ERROR 5

#define FORM_C 3

#define FORM_N 1

#define FORM_T 2

#define MODE_B 2

#define MODE_C 3

#define MODE_S 1

#define PRELIM 1

#define STRU_F 1

#define STRU_P 3

#define STRU_R 2

#define TRANSIENT 4

#define TYPE_A 1

#define TYPE_E 2

#define TYPE_I 3

#define TYPE_L 4

#define _FTW_H 1

typedef struct stat64 stat64, *Pstat64;

typedef int (* __ftw64_func_t)(char *, struct stat64 *, int);

typedef __u_quad_t __dev_t;

typedef uint __mode_t;

typedef uint __nlink_t;

typedef long __blksize_t;

typedef __quad_t __blkcnt64_t;

typedef struct timespec timespec, *Ptimespec;

struct timespec {
    __time_t tv_sec;
    long tv_nsec;
};

struct stat64 {
    __dev_t st_dev;
    uint __pad1;
    __ino_t __st_ino;
    __mode_t st_mode;
    __nlink_t st_nlink;
    __uid_t st_uid;
    __gid_t st_gid;
    __dev_t st_rdev;
    uint __pad2;
    __off64_t st_size;
    __blksize_t st_blksize;
    __blkcnt64_t st_blocks;
    struct timespec st_atim;
    struct timespec st_mtim;
    struct timespec st_ctim;
    __ino64_t st_ino;
};

typedef struct stat stat, *Pstat;

typedef int (* __ftw_func_t)(char *, struct stat *, int);

typedef long __blkcnt_t;

struct stat {
    __dev_t st_dev;
    ushort __pad1;
    __ino_t st_ino;
    __mode_t st_mode;
    __nlink_t st_nlink;
    __uid_t st_uid;
    __gid_t st_gid;
    __dev_t st_rdev;
    ushort __pad2;
    __off_t st_size;
    __blksize_t st_blksize;
    __blkcnt_t st_blocks;
    struct timespec st_atim;
    struct timespec st_mtim;
    struct timespec st_ctim;
    ulong __unused4;
    ulong __unused5;
};

typedef struct FTW FTW, *PFTW;

typedef int (* __nftw64_func_t)(char *, struct stat64 *, int, struct FTW *);

struct FTW {
    int base;
    int level;
};

typedef int (* __nftw_func_t)(char *, struct stat *, int, struct FTW *);

typedef enum enum_1266 {
    FTW_D=1,
    FTW_DNR=2,
    FTW_DP=5,
    FTW_F=0,
    FTW_NS=3,
    FTW_SL=4,
    FTW_SLN=6
} enum_1266;

typedef enum enum_1267 {
    FTW_ACTIONRETVAL=16,
    FTW_CHDIR=4,
    FTW_DEPTH=8,
    FTW_MOUNT=2,
    FTW_PHYS=1
} enum_1267;

typedef enum enum_1268 {
    FTW_CONTINUE=0,
    FTW_SKIP_SIBLINGS=3,
    FTW_SKIP_SUBTREE=2,
    FTW_STOP=1
} enum_1268;

#define _GLOB_H 1

#define GLOB_ABEND 2

#define GLOB_ABORTED 2

#define GLOB_ALTDIRFUNC 512

#define GLOB_APPEND 32

#define GLOB_BRACE 1024

#define GLOB_DOOFFS 8

#define GLOB_ERR 1

#define GLOB_MAGCHAR 256

#define GLOB_MARK 2

#define GLOB_NOCHECK 16

#define GLOB_NOESCAPE 64

#define GLOB_NOMAGIC 2048

#define GLOB_NOMATCH 3

#define GLOB_NOSORT 4

#define GLOB_NOSPACE 1

#define GLOB_NOSYS 4

#define GLOB_ONLYDIR 8192

#define GLOB_PERIOD 128

#define GLOB_TILDE 4096

#define GLOB_TILDE_CHECK 16384

typedef struct glob64_t glob64_t, *Pglob64_t;

struct glob64_t {
    size_t gl_pathc;
    char * * gl_pathv;
    size_t gl_offs;
    int gl_flags;
    void (* gl_closedir)(void *);
    dirent64 * (* gl_readdir)(void *);
    void * (* gl_opendir)(char *);
    int (* gl_lstat)(char *, struct stat64 *);
    int (* gl_stat)(char *, struct stat64 *);
};

typedef struct glob_t glob_t, *Pglob_t;

struct glob_t {
    size_t gl_pathc;
    char * * gl_pathv;
    size_t gl_offs;
    int gl_flags;
    void (* gl_closedir)(void *);
    dirent * (* gl_readdir)(void *);
    void * (* gl_opendir)(char *);
    int (* gl_lstat)(char *, struct stat *);
    int (* gl_stat)(char *, struct stat *);
};

#define _SYS_GMON_H 1

#define ARCDENSITY 3

#define GMON_PROF_BUSY 1

#define GMON_PROF_ERROR 2

#define GMON_PROF_OFF 3

#define GMON_PROF_ON 0

#define GPROF_COUNT 1

#define GPROF_FROMS 2

#define GPROF_GMONPARAM 4

#define GPROF_STATE 0

#define GPROF_TOS 3

#define HASHFRACTION 2

#define HISTFRACTION 2

#define MAXARCS 1048576

#define MINARCS 50

typedef struct __bb __bb, *P__bb;

struct __bb {
    long zero_word;
    char * filename;
    long * counts;
    long ncounts;
    struct __bb * next;
    ulong * addresses;
};

typedef struct gmonparam gmonparam, *Pgmonparam;

typedef ushort __u_short;

typedef __u_short u_short;

typedef struct tostruct tostruct, *Ptostruct;

struct gmonparam {
    long state;
    u_short * kcount;
    u_long kcountsize;
    u_long * froms;
    u_long fromssize;
    struct tostruct * tos;
    u_long tossize;
    long tolimit;
    u_long lowpc;
    u_long highpc;
    u_long textsize;
    u_long hashfraction;
    long log_hashfraction;
};

struct tostruct {
    u_long selfpc;
    long count;
    u_long link;
};

typedef struct rawarc rawarc, *Prawarc;

struct rawarc {
    u_long raw_frompc;
    u_long raw_selfpc;
    long raw_count;
};

#define _SYS_GMON_OUT_H 1

#define GMON_SHOBJ_VERSION 131071

#define GMON_VERSION 1

typedef enum enum_1637 {
    GMON_TAG_BB_COUNT=2,
    GMON_TAG_CG_ARC=1,
    GMON_TAG_TIME_HIST=0
} enum_1637;

typedef struct gmon_cg_arc_record gmon_cg_arc_record, *Pgmon_cg_arc_record;

struct gmon_cg_arc_record {
    char from_pc[1];
    char self_pc[1];
    char count[4];
};

typedef struct gmon_hdr gmon_hdr, *Pgmon_hdr;

struct gmon_hdr {
    char cookie[4];
    char version[4];
    char spare[12];
};

typedef struct gmon_hist_hdr gmon_hist_hdr, *Pgmon_hist_hdr;

struct gmon_hist_hdr {
    char low_pc[1];
    char high_pc[1];
    char hist_size[4];
    char prof_rate[4];
    char dimen[15];
    char dimen_abbrev;
};

typedef enum enum_1637 GMON_Record_Tag;

#define _GRP_H 1

#define NSS_BUFLEN_GROUP 1024

typedef struct group group, *Pgroup;

struct group {
    char * gr_name;
    char * gr_passwd;
    __gid_t gr_gid;
    char * * gr_mem;
};

#define HMAC_MAX_MD_CBLOCK 128

typedef union __huge_val_t __huge_val_t, *P__huge_val_t;

union __huge_val_t {
    uchar __c[8];
    double __d;
};

typedef union __huge_valf_t __huge_valf_t, *P__huge_valf_t;

union __huge_valf_t {
    uchar __c[4];
    float __f;
};

#define _NETINET_ICMP6_H 1

#define ICMP6_DST_UNREACH 1

#define ICMP6_DST_UNREACH_ADDR 3

#define ICMP6_DST_UNREACH_ADMIN 1

#define ICMP6_DST_UNREACH_BEYONDSCOPE 2

#define ICMP6_DST_UNREACH_NOPORT 4

#define ICMP6_DST_UNREACH_NOROUTE 0

#define ICMP6_ECHO_REPLY 129

#define ICMP6_ECHO_REQUEST 128

#define ICMP6_FILTER 1

#define ICMP6_FILTER_BLOCK 1

#define ICMP6_FILTER_BLOCKOTHERS 3

#define ICMP6_FILTER_PASS 2

#define ICMP6_FILTER_PASSONLY 4

#define ICMP6_INFOMSG_MASK 128

#define ICMP6_PACKET_TOO_BIG 2

#define ICMP6_PARAM_PROB 4

#define ICMP6_PARAMPROB_HEADER 0

#define ICMP6_PARAMPROB_NEXTHEADER 1

#define ICMP6_PARAMPROB_OPTION 2

#define ICMP6_ROUTER_RENUMBERING 138

#define ICMP6_RR_FLAGS_FORCEAPPLY 32

#define ICMP6_RR_FLAGS_PREVDONE 8

#define ICMP6_RR_FLAGS_REQRESULT 64

#define ICMP6_RR_FLAGS_SPECSITE 16

#define ICMP6_RR_FLAGS_TEST 128

#define ICMP6_RR_PCOUSE_FLAGS_DECRPLTIME 64

#define ICMP6_RR_PCOUSE_FLAGS_DECRVLTIME 128

#define ICMP6_RR_PCOUSE_RAFLAGS_AUTO 16

#define ICMP6_RR_PCOUSE_RAFLAGS_ONLINK 32

#define ICMP6_RR_RESULT_FLAGS_FORBIDDEN 256

#define ICMP6_RR_RESULT_FLAGS_OOB 512

#define ICMP6_TIME_EXCEED_REASSEMBLY 1

#define ICMP6_TIME_EXCEED_TRANSIT 0

#define ICMP6_TIME_EXCEEDED 3

#define MLD_LISTENER_QUERY 130

#define MLD_LISTENER_REDUCTION 132

#define MLD_LISTENER_REPORT 131

#define ND_NA_FLAG_OVERRIDE 32

#define ND_NA_FLAG_ROUTER 128

#define ND_NA_FLAG_SOLICITED 64

#define ND_NEIGHBOR_ADVERT 136

#define ND_NEIGHBOR_SOLICIT 135

#define ND_OPT_HOME_AGENT_INFO 8

#define ND_OPT_MTU 5

#define ND_OPT_PI_FLAG_AUTO 64

#define ND_OPT_PI_FLAG_ONLINK 128

#define ND_OPT_PI_FLAG_RADDR 32

#define ND_OPT_PREFIX_INFORMATION 3

#define ND_OPT_REDIRECTED_HEADER 4

#define ND_OPT_RTR_ADV_INTERVAL 7

#define ND_OPT_SOURCE_LINKADDR 1

#define ND_OPT_TARGET_LINKADDR 2

#define ND_RA_FLAG_HOME_AGENT 32

#define ND_RA_FLAG_MANAGED 128

#define ND_RA_FLAG_OTHER 64

#define ND_REDIRECT 137

#define ND_ROUTER_ADVERT 134

#define ND_ROUTER_SOLICIT 133

#define RPM_PCO_ADD 1

#define RPM_PCO_CHANGE 2

#define RPM_PCO_SETGLOBAL 3

typedef union _union_1871 _union_1871, *P_union_1871;

typedef ushort uint16_t;

typedef uchar uint8_t;

union _union_1871 {
    uint32_t icmp6_un_data32[1];
    uint16_t icmp6_un_data16[2];
    uint8_t icmp6_un_data8[4];
};

typedef struct icmp6_filter icmp6_filter, *Picmp6_filter;

struct icmp6_filter {
    uint32_t icmp6_filt[8];
};

typedef struct icmp6_hdr icmp6_hdr, *Picmp6_hdr;

struct icmp6_hdr {
    uint8_t icmp6_type;
    uint8_t icmp6_code;
    uint16_t icmp6_cksum;
    union _union_1871 icmp6_dataun;
};

typedef struct icmp6_router_renum icmp6_router_renum, *Picmp6_router_renum;

struct icmp6_router_renum {
    struct icmp6_hdr rr_hdr;
    uint8_t rr_segnum;
    uint8_t rr_flags;
    uint16_t rr_maxdelay;
    uint32_t rr_reserved;
};

typedef struct mld_hdr mld_hdr, *Pmld_hdr;

typedef struct in6_addr in6_addr, *Pin6_addr;

typedef union _union_1161 _union_1161, *P_union_1161;

union _union_1161 {
    uint8_t __u6_addr8[16];
    uint16_t __u6_addr16[8];
    uint32_t __u6_addr32[4];
};

struct in6_addr {
    union _union_1161 __in6_u;
};

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

typedef struct nd_opt_adv_interval nd_opt_adv_interval, *Pnd_opt_adv_interval;

struct nd_opt_adv_interval {
    uint8_t nd_opt_adv_interval_type;
    uint8_t nd_opt_adv_interval_len;
    uint16_t nd_opt_adv_interval_reserved;
    uint32_t nd_opt_adv_interval_ival;
};

typedef struct nd_opt_hdr nd_opt_hdr, *Pnd_opt_hdr;

struct nd_opt_hdr {
    uint8_t nd_opt_type;
    uint8_t nd_opt_len;
};

typedef struct nd_opt_home_agent_info nd_opt_home_agent_info, *Pnd_opt_home_agent_info;

struct nd_opt_home_agent_info {
    uint8_t nd_opt_home_agent_info_type;
    uint8_t nd_opt_home_agent_info_len;
    uint16_t nd_opt_home_agent_info_reserved;
    uint16_t nd_opt_home_agent_info_preference;
    uint16_t nd_opt_home_agent_info_lifetime;
};

typedef struct nd_opt_mtu nd_opt_mtu, *Pnd_opt_mtu;

struct nd_opt_mtu {
    uint8_t nd_opt_mtu_type;
    uint8_t nd_opt_mtu_len;
    uint16_t nd_opt_mtu_reserved;
    uint32_t nd_opt_mtu_mtu;
};

typedef struct nd_opt_prefix_info nd_opt_prefix_info, *Pnd_opt_prefix_info;

struct nd_opt_prefix_info {
    uint8_t nd_opt_pi_type;
    uint8_t nd_opt_pi_len;
    uint8_t nd_opt_pi_prefix_len;
    uint8_t nd_opt_pi_flags_reserved;
    uint32_t nd_opt_pi_valid_time;
    uint32_t nd_opt_pi_preferred_time;
    uint32_t nd_opt_pi_reserved2;
    struct in6_addr nd_opt_pi_prefix;
};

typedef struct nd_opt_rd_hdr nd_opt_rd_hdr, *Pnd_opt_rd_hdr;

struct nd_opt_rd_hdr {
    uint8_t nd_opt_rh_type;
    uint8_t nd_opt_rh_len;
    uint16_t nd_opt_rh_reserved1;
    uint32_t nd_opt_rh_reserved2;
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
    uint32_t nd_ra_reachable;
    uint32_t nd_ra_retransmit;
};

typedef struct nd_router_solicit nd_router_solicit, *Pnd_router_solicit;

struct nd_router_solicit {
    struct icmp6_hdr nd_rs_hdr;
};

typedef struct rr_pco_match rr_pco_match, *Prr_pco_match;

struct rr_pco_match {
    uint8_t rpm_code;
    uint8_t rpm_len;
    uint8_t rpm_ordinal;
    uint8_t rpm_matchlen;
    uint8_t rpm_minlen;
    uint8_t rpm_maxlen;
    uint16_t rpm_reserved;
    struct in6_addr rpm_prefix;
};

typedef struct rr_pco_use rr_pco_use, *Prr_pco_use;

struct rr_pco_use {
    uint8_t rpu_uselen;
    uint8_t rpu_keeplen;
    uint8_t rpu_ramask;
    uint8_t rpu_raflags;
    uint32_t rpu_vltime;
    uint32_t rpu_pltime;
    uint32_t rpu_flags;
    struct in6_addr rpu_prefix;
};

typedef struct rr_result rr_result, *Prr_result;

struct rr_result {
    uint16_t rrr_flags;
    uint8_t rrr_ordinal;
    uint8_t rrr_matchedlen;
    uint32_t rrr_ifid;
    struct in6_addr rrr_prefix;
};

#define _ICONV_H 1

typedef void * iconv_t;

#define IDEA_BLOCK 8

#define IDEA_DECRYPT 0

#define IDEA_ENCRYPT 1

#define IDEA_KEY_LENGTH 16

typedef struct idea_key_st idea_key_st, *Pidea_key_st;

typedef struct idea_key_st IDEA_KEY_SCHEDULE;

struct idea_key_st {
    uint data[9][6];
};

#define _NET_IF_H 1

#define IF_NAMESIZE 16

#define IFHWADDRLEN 6

#define IFNAMSIZ 16

typedef union _union_1313 _union_1313, *P_union_1313;

typedef struct sockaddr sockaddr, *Psockaddr;

typedef ushort sa_family_t;

struct sockaddr {
    sa_family_t sa_family;
    char sa_data[14];
};

union _union_1313 {
    struct sockaddr ifu_broadaddr;
    struct sockaddr ifu_dstaddr;
};

typedef union _union_1320 _union_1320, *P_union_1320;

union _union_1320 {
    char ifrn_name[16];
};

typedef union _union_1321 _union_1321, *P_union_1321;

typedef struct ifmap ifmap, *Pifmap;

struct ifmap {
    ulong mem_start;
    ulong mem_end;
    ushort base_addr;
    uchar irq;
    uchar dma;
    uchar port;
};

union _union_1321 {
    struct sockaddr ifru_addr;
    struct sockaddr ifru_dstaddr;
    struct sockaddr ifru_broadaddr;
    struct sockaddr ifru_netmask;
    struct sockaddr ifru_hwaddr;
    short ifru_flags;
    int ifru_ivalue;
    int ifru_mtu;
    struct ifmap ifru_map;
    char ifru_slave[16];
    char ifru_newname[16];
    __caddr_t ifru_data;
};

typedef union _union_1329 _union_1329, *P_union_1329;

typedef struct ifreq ifreq, *Pifreq;

struct ifreq {
    union _union_1320 ifr_ifrn;
    union _union_1321 ifr_ifru;
};

union _union_1329 {
    __caddr_t ifcu_buf;
    struct ifreq * ifcu_req;
};

typedef enum enum_1310 {
    IFF_ALLMULTI=512,
    IFF_AUTOMEDIA=16384,
    IFF_BROADCAST=2,
    IFF_DEBUG=4,
    IFF_DYNAMIC=32768,
    IFF_LOOPBACK=8,
    IFF_MASTER=1024,
    IFF_MULTICAST=4096,
    IFF_NOARP=128,
    IFF_NOTRAILERS=32,
    IFF_POINTOPOINT=16,
    IFF_PORTSEL=8192,
    IFF_PROMISC=256,
    IFF_RUNNING=64,
    IFF_SLAVE=2048,
    IFF_UP=1
} enum_1310;

typedef struct if_nameindex if_nameindex, *Pif_nameindex;

struct if_nameindex {
    uint if_index;
    char * if_name;
};

typedef struct iface iface, *Piface;

struct iface {
};

typedef struct ifaddr ifaddr, *Pifaddr;

struct ifaddr {
    struct sockaddr ifa_addr;
    union _union_1313 ifa_ifu;
    struct iface * ifa_ifp;
    struct ifaddr * ifa_next;
};

typedef struct ifconf ifconf, *Pifconf;

struct ifconf {
    int ifc_len;
    union _union_1329 ifc_ifcu;
};

#define _NET_IF_ARP_H 1

#define ARPD_FLUSH 3

#define ARPD_LOOKUP 2

#define ARPD_UPDATE 1

#define ARPHRD_ADAPT 264

#define ARPHRD_APPLETLK 8

#define ARPHRD_ARCNET 7

#define ARPHRD_ASH 781

#define ARPHRD_ATM 19

#define ARPHRD_AX25 3

#define ARPHRD_BIF 775

#define ARPHRD_CHAOS 5

#define ARPHRD_CISCO 513

#define ARPHRD_CSLIP 257

#define ARPHRD_CSLIP6 259

#define ARPHRD_DDCMP 517

#define ARPHRD_DLCI 15

#define ARPHRD_ECONET 782

#define ARPHRD_EETHER 2

#define ARPHRD_ETHER 1

#define ARPHRD_EUI64 27

#define ARPHRD_FCAL 785

#define ARPHRD_FCFABRIC 787

#define ARPHRD_FCPL 786

#define ARPHRD_FCPP 784

#define ARPHRD_FDDI 774

#define ARPHRD_FRAD 770

#define ARPHRD_HDLC 513

#define ARPHRD_HIPPI 780

#define ARPHRD_HWX25 272

#define ARPHRD_IEEE1394 24

#define ARPHRD_IEEE802 6

#define ARPHRD_IEEE80211 801

#define ARPHRD_IEEE80211_PRISM 802

#define ARPHRD_IEEE80211_RADIOTAP 803

#define ARPHRD_IEEE802154 804

#define ARPHRD_IEEE802154_PHY 805

#define ARPHRD_IEEE802_TR 800

#define ARPHRD_INFINIBAND 32

#define ARPHRD_IPDDP 777

#define ARPHRD_IPGRE 778

#define ARPHRD_IRDA 783

#define ARPHRD_LAPB 516

#define ARPHRD_LOCALTLK 773

#define ARPHRD_LOOPBACK 772

#define ARPHRD_METRICOM 23

#define ARPHRD_NETROM 0

#define ARPHRD_NONE 65534

#define ARPHRD_PIMREG 779

#define ARPHRD_PPP 512

#define ARPHRD_PRONET 4

#define ARPHRD_RAWHDLC 518

#define ARPHRD_ROSE 270

#define ARPHRD_RSRVD 260

#define ARPHRD_SIT 776

#define ARPHRD_SKIP 771

#define ARPHRD_SLIP 256

#define ARPHRD_SLIP6 258

#define ARPHRD_TUNNEL 768

#define ARPHRD_TUNNEL6 769

#define ARPHRD_VOID 65535

#define ARPHRD_X25 271

#define ARPOP_InREPLY 9

#define ARPOP_InREQUEST 8

#define ARPOP_NAK 10

#define ARPOP_REPLY 2

#define ARPOP_REQUEST 1

#define ARPOP_RREPLY 4

#define ARPOP_RREQUEST 3

#define ATF_COM 2

#define ATF_DONTPUB 64

#define ATF_MAGIC 128

#define ATF_NETMASK 32

#define ATF_PERM 4

#define ATF_PUBL 8

#define ATF_USETRAILERS 16

#define MAX_ADDR_LEN 7

typedef struct arpd_request arpd_request, *Parpd_request;

struct arpd_request {
    ushort req;
    u_int32_t ip;
    ulong dev;
    ulong stamp;
    ulong updated;
    uchar ha[7];
};

typedef struct arphdr arphdr, *Parphdr;

struct arphdr {
    ushort ar_hrd;
    ushort ar_pro;
    uchar ar_hln;
    uchar ar_pln;
    ushort ar_op;
};

typedef struct arpreq arpreq, *Parpreq;

struct arpreq {
    struct sockaddr arp_pa;
    struct sockaddr arp_ha;
    int arp_flags;
    struct sockaddr arp_netmask;
    char arp_dev[16];
};

typedef struct arpreq_old arpreq_old, *Parpreq_old;

struct arpreq_old {
    struct sockaddr arp_pa;
    struct sockaddr arp_ha;
    int arp_flags;
    struct sockaddr arp_netmask;
};

#define __NETINET_IF_ETHER_H 1

#define ETH_ALEN 6

#define ETH_DATA_LEN 1500

#define ETH_FCS_LEN 4

#define ETH_FRAME_LEN 1514

#define ETH_HLEN 14

#define ETH_P_1588 35063

#define ETH_P_8021AD 34984

#define ETH_P_8021AH 35047

#define ETH_P_8021Q 33024

#define ETH_P_80221 35095

#define ETH_P_802_2 4

#define ETH_P_802_3 1

#define ETH_P_802_3_MIN 1536

#define ETH_P_AARP 33011

#define ETH_P_AF_IUCV 64507

#define ETH_P_ALL 3

#define ETH_P_AOE 34978

#define ETH_P_ARCNET 26

#define ETH_P_ARP 2054

#define ETH_P_ATALK 32923

#define ETH_P_ATMFATE 34948

#define ETH_P_ATMMPOA 34892

#define ETH_P_AX25 2

#define ETH_P_BPQ 2303

#define ETH_P_CAN 12

#define ETH_P_CONTROL 22

#define ETH_P_CUST 24582

#define ETH_P_DDCMP 6

#define ETH_P_DEC 24576

#define ETH_P_DIAG 24581

#define ETH_P_DNA_DL 24577

#define ETH_P_DNA_RC 24578

#define ETH_P_DNA_RT 24579

#define ETH_P_DSA 27

#define ETH_P_ECONET 24

#define ETH_P_EDSA 56026

#define ETH_P_FCOE 35078

#define ETH_P_FIP 35092

#define ETH_P_HDLC 25

#define ETH_P_IEEE802154 246

#define ETH_P_IEEEPUP 2560

#define ETH_P_IEEEPUPAT 2561

#define ETH_P_IP 2048

#define ETH_P_IPV6 34525

#define ETH_P_IPX 33079

#define ETH_P_IRDA 23

#define ETH_P_LAT 24580

#define ETH_P_LINK_CTL 34924

#define ETH_P_LOCALTALK 9

#define ETH_P_LOOP 96

#define ETH_P_LOOPBACK 36864

#define ETH_P_MOBITEX 21

#define ETH_P_MPLS_MC 34888

#define ETH_P_MPLS_UC 34887

#define ETH_P_PAE 34958

#define ETH_P_PAUSE 34824

#define ETH_P_PHONET 245

#define ETH_P_PPP_DISC 34915

#define ETH_P_PPP_MP 8

#define ETH_P_PPP_SES 34916

#define ETH_P_PPPTALK 16

#define ETH_P_PUP 512

#define ETH_P_PUPAT 513

#define ETH_P_QINQ1 37120

#define ETH_P_QINQ2 37376

#define ETH_P_QINQ3 37632

#define ETH_P_RARP 32821

#define ETH_P_SCA 24583

#define ETH_P_SLOW 34825

#define ETH_P_SNAP 5

#define ETH_P_TDLS 35085

#define ETH_P_TEB 25944

#define ETH_P_TIPC 35018

#define ETH_P_TR_802_2 17

#define ETH_P_TRAILER 28

#define ETH_P_WAN_PPP 7

#define ETH_P_WCCP 34878

#define ETH_P_X25 2053

#define ETH_ZLEN 60

typedef struct ether_arp ether_arp, *Pether_arp;

struct ether_arp {
    struct arphdr ea_hdr;
    u_int8_t arp_sha[6];
    u_int8_t arp_spa[4];
    u_int8_t arp_tha[6];
    u_int8_t arp_tpa[4];
};

typedef struct ethhdr ethhdr, *Pethhdr;

typedef ushort __u16;

typedef __u16 __be16;

struct ethhdr {
    uchar h_dest[6];
    uchar h_source[6];
    __be16 h_proto;
};

#define _NETINET_IF_FDDI_H 1

#define FDDI_EXTENDED_SAP 170

#define FDDI_FC_K_ASYNC_LLC_DEF 84

#define FDDI_FC_K_ASYNC_LLC_MAX 95

#define FDDI_FC_K_ASYNC_LLC_MIN 80

#define FDDI_FC_K_IMPLEMENTOR_MAX 111

#define FDDI_FC_K_IMPLEMENTOR_MIN 96

#define FDDI_FC_K_MAC_MAX 207

#define FDDI_FC_K_MAC_MIN 193

#define FDDI_FC_K_NON_RESTRICTED_TOKEN 128

#define FDDI_FC_K_RESERVED_MAX 127

#define FDDI_FC_K_RESERVED_MIN 112

#define FDDI_FC_K_RESTRICTED_TOKEN 192

#define FDDI_FC_K_SMT_MAX 79

#define FDDI_FC_K_SMT_MIN 65

#define FDDI_FC_K_SYNC_LLC_MAX 215

#define FDDI_FC_K_SYNC_LLC_MIN 208

#define FDDI_FC_K_VOID 0

#define FDDI_K_8022_DLEN 4475

#define FDDI_K_8022_HLEN 16

#define FDDI_K_8022_ZLEN 16

#define FDDI_K_ALEN 6

#define FDDI_K_LLC_LEN 4491

#define FDDI_K_LLC_ZLEN 13

#define FDDI_K_OUI_LEN 3

#define FDDI_K_SNAP_DLEN 4470

#define FDDI_K_SNAP_HLEN 21

#define FDDI_K_SNAP_ZLEN 21

#define FDDI_UI_CMD 3

typedef union _union_1846 _union_1846, *P_union_1846;

typedef struct fddi_8022_1_hdr fddi_8022_1_hdr, *Pfddi_8022_1_hdr;

typedef struct fddi_8022_2_hdr fddi_8022_2_hdr, *Pfddi_8022_2_hdr;

typedef struct fddi_snap_hdr fddi_snap_hdr, *Pfddi_snap_hdr;

typedef uchar __u8;

struct fddi_8022_2_hdr {
    __u8 dsap;
    __u8 ssap;
    __u8 ctrl_1;
    __u8 ctrl_2;
};

struct fddi_8022_1_hdr {
    __u8 dsap;
    __u8 ssap;
    __u8 ctrl;
};

struct fddi_snap_hdr {
    __u8 dsap;
    __u8 ssap;
    __u8 ctrl;
    __u8 oui[3];
    __be16 ethertype;
};

union _union_1846 {
    struct fddi_8022_1_hdr llc_8022_1;
    struct fddi_8022_2_hdr llc_8022_2;
    struct fddi_snap_hdr llc_snap;
};

typedef struct fddi_header fddi_header, *Pfddi_header;

struct fddi_header {
    u_int8_t fddi_fc;
    u_int8_t fddi_dhost[6];
    u_int8_t fddi_shost[6];
};

typedef struct fddihdr fddihdr, *Pfddihdr;

struct fddihdr {
    __u8 fc;
    __u8 daddr[6];
    __u8 saddr[6];
    union _union_1846 hdr;
};

typedef struct sockaddr_pkt sockaddr_pkt, *Psockaddr_pkt;

struct sockaddr_pkt {
    sa_family_t spkt_family;
    uchar spkt_device[14];
    ushort spkt_protocol;
};

#define __NET_IF_PPP_H 1

#define PPP_MAGIC 20482

#define PPP_MAXMRU 65000

#define PPP_MTU 1500

#define PROTO_DNA_RT 39

#define PROTO_IPX 43

#define SC_CCP_OPEN 64

#define SC_CCP_UP 128

#define SC_COMP_AC 2

#define SC_COMP_PROT 1

#define SC_COMP_RUN 4096

#define SC_COMP_TCP 4

#define SC_DC_ERROR 4194304

#define SC_DC_FERROR 8388608

#define SC_DEBUG 65536

#define SC_DECOMP_RUN 8192

#define SC_ENABLE_IP 256

#define SC_ESCAPED 2147483648

#define SC_FLUSH 1073741824

#define SC_LOG_FLUSH 1048576

#define SC_LOG_INPKT 131072

#define SC_LOG_OUTPKT 262144

#define SC_LOG_RAWIN 524288

#define SC_MASK 266403839

#define SC_NO_TCP_CCID 8

#define SC_RCV_B7_0 16777216

#define SC_RCV_B7_1 33554432

#define SC_RCV_EVNP 67108864

#define SC_RCV_ODDP 134217728

#define SC_REJ_COMP_AC 16

#define SC_REJ_COMP_TCP 32

#define SC_VJ_RESET 536870912

#define SC_XMIT_BUSY 268435456

#define SIOCGPPPCSTATS 35314

#define SIOCGPPPSTATS 35312

#define SIOCGPPPVER 35313

typedef struct ifpppcstatsreq ifpppcstatsreq, *Pifpppcstatsreq;

typedef struct ppp_comp_stats ppp_comp_stats, *Pppp_comp_stats;

typedef struct compstat compstat, *Pcompstat;

typedef uint __u32;

struct compstat {
    __u32 unc_bytes;
    __u32 unc_packets;
    __u32 comp_bytes;
    __u32 comp_packets;
    __u32 inc_bytes;
    __u32 inc_packets;
    __u32 in_count;
    __u32 bytes_out;
    double ratio;
};

struct ppp_comp_stats {
    struct compstat c;
    struct compstat d;
};

struct ifpppcstatsreq {
    struct ifreq b;
    struct ppp_comp_stats stats;
};

typedef struct ifpppstatsreq ifpppstatsreq, *Pifpppstatsreq;

typedef struct ppp_stats ppp_stats, *Pppp_stats;

typedef struct pppstat pppstat, *Ppppstat;

typedef struct vjstat vjstat, *Pvjstat;

struct pppstat {
    __u32 ppp_discards;
    __u32 ppp_ibytes;
    __u32 ppp_ioctects;
    __u32 ppp_ipackets;
    __u32 ppp_ierrors;
    __u32 ppp_ilqrs;
    __u32 ppp_obytes;
    __u32 ppp_ooctects;
    __u32 ppp_opackets;
    __u32 ppp_oerrors;
    __u32 ppp_olqrs;
};

struct vjstat {
    __u32 vjs_packets;
    __u32 vjs_compressed;
    __u32 vjs_searches;
    __u32 vjs_misses;
    __u32 vjs_uncompressedin;
    __u32 vjs_compressedin;
    __u32 vjs_errorin;
    __u32 vjs_tossed;
};

struct ppp_stats {
    struct pppstat p;
    struct vjstat vj;
};

struct ifpppstatsreq {
    struct ifreq b;
    struct ppp_stats stats;
};

typedef struct npioctl npioctl, *Pnpioctl;

typedef enum NPmode {
    NPMODE_DROP=1,
    NPMODE_ERROR=2,
    NPMODE_PASS=0,
    NPMODE_QUEUE=3
} NPmode;

struct npioctl {
    int protocol;
    enum NPmode mode;
};

typedef struct ppp_option_data ppp_option_data, *Pppp_option_data;

struct ppp_option_data {
    u_int8_t * ptr;
    u_int32_t length;
    int transmit;
};

#define _NET_IF_SHAPER_H 1

#define SHAPER_BURST 2

#define SHAPER_GET_DEV 3

#define SHAPER_GET_SPEED 4

#define SHAPER_LATENCY 500

#define SHAPER_MAXSLIP 2

#define SHAPER_QLEN 10

#define SHAPER_SET_DEV 1

#define SHAPER_SET_SPEED 2

typedef union _union_1818 _union_1818, *P_union_1818;

union _union_1818 {
    char ssu_name[14];
    u_int32_t ssu_speed;
};

typedef struct shaperconf shaperconf, *Pshaperconf;

struct shaperconf {
    u_int16_t ss_cmd;
    union _union_1818 ss_u;
};

#define _NET_IF_SLIP_H 1

#define SIOCGKEEPALIVE 35313

#define SIOCGLEASE 35317

#define SIOCGOUTFILL 35315

#define SIOCSKEEPALIVE 35312

#define SIOCSLEASE 35316

#define SIOCSOUTFILL 35314

#define SL_MODE_CSLIP 1

#define SL_MODE_KISS 4

#define SL_MODE_SLIP 0

#define SL_OPT_ADAPTIVE 8

#define SL_OPT_SIXBIT 2

#define _NETINET_IF_TR_H 1

#define AC 16

#define EXTENDED_SAP 170

#define LLC_FRAME 64

#define TR_ALEN 6

#define TR_MAXRIFLEN 18

#define TR_RCF_BROADCAST 32768

#define TR_RCF_BROADCAST_MASK 49152

#define TR_RCF_DIR_BIT 128

#define TR_RCF_FRAME2K 32

#define TR_RCF_LEN_MASK 7936

#define TR_RCF_LIMITED_BROADCAST 49152

#define TR_RII 128

#define UI_CMD 3

typedef struct tr_statistics tr_statistics, *Ptr_statistics;

struct tr_statistics {
    ulong rx_packets;
    ulong tx_packets;
    ulong rx_bytes;
    ulong tx_bytes;
    ulong rx_errors;
    ulong tx_errors;
    ulong rx_dropped;
    ulong tx_dropped;
    ulong multicast;
    ulong transmit_collision;
    ulong line_errors;
    ulong internal_errors;
    ulong burst_errors;
    ulong A_C_errors;
    ulong abort_delimiters;
    ulong lost_frames;
    ulong recv_congest_count;
    ulong frame_copied_errors;
    ulong frequency_errors;
    ulong token_errors;
    ulong dummy1;
};

typedef struct trh_hdr trh_hdr, *Ptrh_hdr;

struct trh_hdr {
    u_int8_t ac;
    u_int8_t fc;
    u_int8_t daddr[6];
    u_int8_t saddr[6];
    u_int16_t rcf;
    u_int16_t rseg[8];
};

typedef struct trllc trllc, *Ptrllc;

struct trllc {
    u_int8_t dsap;
    u_int8_t ssap;
    u_int8_t llc;
    u_int8_t protid[3];
    u_int16_t ethertype;
};

typedef struct trn_hdr trn_hdr, *Ptrn_hdr;

struct trn_hdr {
    u_int8_t trn_ac;
    u_int8_t trn_fc;
    u_int8_t trn_dhost[6];
    u_int8_t trn_shost[6];
    u_int16_t trn_rcf;
    u_int16_t trn_rseg[8];
};

#define _NETINET_IGMP_H 1

#define IGMP_AWAKENING_MEMBER 5

#define IGMP_DELAYING_MEMBER 1

#define IGMP_DVMRP 19

#define IGMP_HOST_LEAVE_MESSAGE 23

#define IGMP_HOST_MEMBERSHIP_QUERY 17

#define IGMP_HOST_MEMBERSHIP_REPORT 18

#define IGMP_HOST_NEW_MEMBERSHIP_REPORT 22

#define IGMP_IDLE_MEMBER 2

#define IGMP_LAZY_MEMBER 3

#define IGMP_MAX_HOST_REPORT_DELAY 10

#define IGMP_MEMBERSHIP_QUERY 17

#define IGMP_MINLEN 8

#define IGMP_MTRACE 31

#define IGMP_MTRACE_RESP 30

#define IGMP_PIM 20

#define IGMP_SLEEPING_MEMBER 4

#define IGMP_TIMER_SCALE 10

#define IGMP_TRACE 21

#define IGMP_V1_MEMBERSHIP_REPORT 18

#define IGMP_v1_ROUTER 1

#define IGMP_V2_LEAVE_GROUP 23

#define IGMP_V2_MEMBERSHIP_REPORT 22

#define IGMP_v2_ROUTER 2

typedef struct igmp igmp, *Pigmp;

typedef struct in_addr in_addr, *Pin_addr;

typedef uint32_t in_addr_t;

struct in_addr {
    in_addr_t s_addr;
};

struct igmp {
    u_int8_t igmp_type;
    u_int8_t igmp_code;
    u_int16_t igmp_cksum;
    struct in_addr igmp_group;
};

#define _NETINET_IN_H 1

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

#define IN_LOOPBACKNET 127

#define INADDR_ALLHOSTS_GROUP 3758096385

#define INADDR_ALLRTRS_GROUP 3758096386

#define INADDR_ANY 0

#define INADDR_BROADCAST 4294967295

#define INADDR_LOOPBACK 2130706433

#define INADDR_MAX_LOCAL_GROUP 3758096639

#define INADDR_NONE 4294967295

#define INADDR_UNSPEC_GROUP 3758096384

#define INET6_ADDRSTRLEN 46

#define INET_ADDRSTRLEN 16

#define IP_ADD_MEMBERSHIP 35

#define IP_ADD_SOURCE_MEMBERSHIP 39

#define IP_BLOCK_SOURCE 38

#define IP_DEFAULT_MULTICAST_LOOP 1

#define IP_DEFAULT_MULTICAST_TTL 1

#define IP_DROP_MEMBERSHIP 36

#define IP_DROP_SOURCE_MEMBERSHIP 40

#define IP_FREEBIND 15

#define IP_HDRINCL 3

#define IP_IPSEC_POLICY 16

#define IP_MAX_MEMBERSHIPS 20

#define IP_MINTTL 21

#define IP_MSFILTER 41

#define IP_MTU 14

#define IP_MTU_DISCOVER 10

#define IP_MULTICAST_ALL 49

#define IP_MULTICAST_IF 32

#define IP_MULTICAST_LOOP 34

#define IP_MULTICAST_TTL 33

#define IP_OPTIONS 4

#define IP_ORIGDSTADDR 20

#define IP_PASSSEC 18

#define IP_PKTINFO 8

#define IP_PKTOPTIONS 9

#define IP_PMTUDISC 10

#define IP_PMTUDISC_DO 2

#define IP_PMTUDISC_DONT 0

#define IP_PMTUDISC_PROBE 3

#define IP_PMTUDISC_WANT 1

#define IP_RECVERR 11

#define IP_RECVOPTS 6

#define IP_RECVORIGDSTADDR 20

#define IP_RECVRETOPTS 7

#define IP_RECVTOS 13

#define IP_RECVTTL 12

#define IP_RETOPTS 7

#define IP_ROUTER_ALERT 5

#define IP_TOS 1

#define IP_TRANSPARENT 19

#define IP_TTL 2

#define IP_UNBLOCK_SOURCE 37

#define IP_XFRM_POLICY 17

#define IPV6_2292DSTOPTS 4

#define IPV6_2292HOPLIMIT 8

#define IPV6_2292HOPOPTS 3

#define IPV6_2292PKTINFO 2

#define IPV6_2292PKTOPTIONS 6

#define IPV6_2292RTHDR 5

#define IPV6_ADD_MEMBERSHIP 20

#define IPV6_ADDRFORM 1

#define IPV6_AUTHHDR 10

#define IPV6_CHECKSUM 7

#define IPV6_DROP_MEMBERSHIP 21

#define IPV6_DSTOPTS 59

#define IPV6_HOPLIMIT 52

#define IPV6_HOPOPTS 54

#define IPV6_IPSEC_POLICY 34

#define IPV6_JOIN_ANYCAST 27

#define IPV6_JOIN_GROUP 20

#define IPV6_LEAVE_ANYCAST 28

#define IPV6_LEAVE_GROUP 21

#define IPV6_MTU 24

#define IPV6_MTU_DISCOVER 23

#define IPV6_MULTICAST_HOPS 18

#define IPV6_MULTICAST_IF 17

#define IPV6_MULTICAST_LOOP 19

#define IPV6_NEXTHOP 9

#define IPV6_PKTINFO 50

#define IPV6_PMTUDISC_DO 2

#define IPV6_PMTUDISC_DONT 0

#define IPV6_PMTUDISC_PROBE 3

#define IPV6_PMTUDISC_WANT 1

#define IPV6_RECVDSTOPTS 58

#define IPV6_RECVERR 25

#define IPV6_RECVHOPLIMIT 51

#define IPV6_RECVHOPOPTS 53

#define IPV6_RECVPKTINFO 49

#define IPV6_RECVRTHDR 56

#define IPV6_RECVTCLASS 66

#define IPV6_ROUTER_ALERT 22

#define IPV6_RTHDR 57

#define IPV6_RTHDR_LOOSE 0

#define IPV6_RTHDR_STRICT 1

#define IPV6_RTHDR_TYPE_0 0

#define IPV6_RTHDRDSTOPTS 55

#define IPV6_RXDSTOPTS 59

#define IPV6_RXHOPOPTS 54

#define IPV6_TCLASS 67

#define IPV6_UNICAST_HOPS 16

#define IPV6_V6ONLY 26

#define IPV6_XFRM_POLICY 35

#define MCAST_BLOCK_SOURCE 43

#define MCAST_EXCLUDE 0

#define MCAST_INCLUDE 1

#define MCAST_JOIN_GROUP 42

#define MCAST_JOIN_SOURCE_GROUP 46

#define MCAST_LEAVE_GROUP 45

#define MCAST_LEAVE_SOURCE_GROUP 47

#define MCAST_MSFILTER 48

#define MCAST_UNBLOCK_SOURCE 44

#define SOL_ICMPV6 58

#define SOL_IP 0

#define SOL_IPV6 41

typedef enum enum_1157 {
    IPPROTO_AH=51,
    IPPROTO_BEETPH=94,
    IPPROTO_COMP=108,
    IPPROTO_DCCP=33,
    IPPROTO_EGP=8,
    IPPROTO_ENCAP=98,
    IPPROTO_ESP=50,
    IPPROTO_GRE=47,
    IPPROTO_ICMP=1,
    IPPROTO_IDP=22,
    IPPROTO_IGMP=2,
    IPPROTO_IP=0,
    IPPROTO_IPIP=4,
    IPPROTO_IPV6=41,
    IPPROTO_MAX=256,
    IPPROTO_MTP=92,
    IPPROTO_PIM=103,
    IPPROTO_PUP=12,
    IPPROTO_RAW=255,
    IPPROTO_RSVP=46,
    IPPROTO_SCTP=132,
    IPPROTO_TCP=6,
    IPPROTO_TP=29,
    IPPROTO_UDP=17,
    IPPROTO_UDPLITE=136
} enum_1157;

typedef enum enum_1158 {
    IPPROTO_DSTOPTS=60,
    IPPROTO_FRAGMENT=44,
    IPPROTO_HOPOPTS=0,
    IPPROTO_ICMPV6=58,
    IPPROTO_MH=135,
    IPPROTO_NONE=59,
    IPPROTO_ROUTING=43
} enum_1158;

typedef enum enum_1159 {
    IPPORT_BIFFUDP=512,
    IPPORT_CMDSERVER=514,
    IPPORT_DAYTIME=13,
    IPPORT_DISCARD=9,
    IPPORT_ECHO=7,
    IPPORT_EFSSERVER=520,
    IPPORT_EXECSERVER=512,
    IPPORT_FINGER=79,
    IPPORT_FTP=21,
    IPPORT_LOGINSERVER=513,
    IPPORT_MTP=57,
    IPPORT_NAMESERVER=42,
    IPPORT_NETSTAT=15,
    IPPORT_RESERVED=1024,
    IPPORT_RJE=77,
    IPPORT_ROUTESERVER=520,
    IPPORT_SMTP=25,
    IPPORT_SUPDUP=95,
    IPPORT_SYSTAT=11,
    IPPORT_TELNET=23,
    IPPORT_TFTP=69,
    IPPORT_TIMESERVER=37,
    IPPORT_TTYLINK=87,
    IPPORT_USERRESERVED=5000,
    IPPORT_WHOIS=43,
    IPPORT_WHOSERVER=513
} enum_1159;

typedef struct group_filter group_filter, *Pgroup_filter;

typedef struct sockaddr_storage sockaddr_storage, *Psockaddr_storage;

struct sockaddr_storage {
    sa_family_t ss_family;
    char __ss_padding[128];
    ulong __ss_align;
};

struct group_filter {
    uint32_t gf_interface;
    struct sockaddr_storage gf_group;
    uint32_t gf_fmode;
    uint32_t gf_numsrc;
    struct sockaddr_storage gf_slist[1];
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

typedef struct in6_pktinfo in6_pktinfo, *Pin6_pktinfo;

struct in6_pktinfo {
    struct in6_addr ipi6_addr;
    uint ipi6_ifindex;
};

typedef struct in_pktinfo in_pktinfo, *Pin_pktinfo;

struct in_pktinfo {
    int ipi_ifindex;
    struct in_addr ipi_spec_dst;
    struct in_addr ipi_addr;
};

typedef uint16_t in_port_t;

typedef struct ip6_mtuinfo ip6_mtuinfo, *Pip6_mtuinfo;

typedef struct sockaddr_in6 sockaddr_in6, *Psockaddr_in6;

struct sockaddr_in6 {
    sa_family_t sin6_family;
    in_port_t sin6_port;
    uint32_t sin6_flowinfo;
    struct in6_addr sin6_addr;
    uint32_t sin6_scope_id;
};

struct ip6_mtuinfo {
    struct sockaddr_in6 ip6m_addr;
    uint32_t ip6m_mtu;
};

typedef struct ip_mreq ip_mreq, *Pip_mreq;

struct ip_mreq {
    struct in_addr imr_multiaddr;
    struct in_addr imr_interface;
};

typedef struct ip_mreq_source ip_mreq_source, *Pip_mreq_source;

struct ip_mreq_source {
    struct in_addr imr_multiaddr;
    struct in_addr imr_interface;
    struct in_addr imr_sourceaddr;
};

typedef struct ip_mreqn ip_mreqn, *Pip_mreqn;

struct ip_mreqn {
    struct in_addr imr_multiaddr;
    struct in_addr imr_address;
    int imr_ifindex;
};

typedef struct ip_msfilter ip_msfilter, *Pip_msfilter;

struct ip_msfilter {
    struct in_addr imsf_multiaddr;
    struct in_addr imsf_interface;
    uint32_t imsf_fmode;
    uint32_t imsf_numsrc;
    struct in_addr imsf_slist[1];
};

typedef struct ip_opts ip_opts, *Pip_opts;

struct ip_opts {
    struct in_addr ip_dst;
    char ip_opts[40];
};

typedef struct ipv6_mreq ipv6_mreq, *Pipv6_mreq;

struct ipv6_mreq {
    struct in6_addr ipv6mr_multiaddr;
    uint ipv6mr_interface;
};

typedef struct sockaddr_in sockaddr_in, *Psockaddr_in;

struct sockaddr_in {
    sa_family_t sin_family;
    in_port_t sin_port;
    struct in_addr sin_addr;
    uchar sin_zero[16];
};

#define _NETINET_IN_SYSTM_H 1

typedef u_int32_t n_long;

typedef u_int16_t n_short;

typedef u_int32_t n_time;

#define _ARPA_INET_H 1

#define _SYS_INOTIFY_H 1

#define IN_ACCESS 1

#define IN_ATTRIB 4

#define IN_CLOSE 24

#define IN_CLOSE_NOWRITE 16

#define IN_CLOSE_WRITE 8

#define IN_CREATE 256

#define IN_DELETE 512

#define IN_DELETE_SELF 1024

#define IN_DONT_FOLLOW 33554432

#define IN_IGNORED 32768

#define IN_ISDIR 1073741824

#define IN_MASK_ADD 536870912

#define IN_MODIFY 2

#define IN_MOVE 192

#define IN_MOVE_SELF 2048

#define IN_MOVED_FROM 64

#define IN_MOVED_TO 128

#define IN_ONESHOT 2147483648

#define IN_ONLYDIR 16777216

#define IN_OPEN 32

#define IN_Q_OVERFLOW 16384

#define IN_UNMOUNT 8192

typedef enum enum_1640 {
    IN_CLOEXEC=2000000,
    IN_NONBLOCK=4000
} enum_1640;

typedef struct inotify_event inotify_event, *Pinotify_event;

struct inotify_event {
    int wd;
    uint32_t mask;
    uint32_t cookie;
    uint32_t len;
    char name[1];
};

typedef short __s16;

typedef int __s32;

typedef longlong __s64;

typedef char __s8;

typedef ulonglong __u64;

#define ____gwchar_t_defined 1

#define _INTTYPES_H 1

typedef int    wchar_t;
typedef wchar_t __gwchar_t;

typedef struct imaxdiv_t imaxdiv_t, *Pimaxdiv_t;

struct imaxdiv_t {
    longlong quot;
    longlong rem;
};

#define _SYS_IO_H 1

#define N_6PACK 7

#define N_AX25 5

#define N_HCI 15

#define N_HDLC 13

#define N_IRDA 11

#define N_MASC 8

#define N_MOUSE 2

#define N_PPP 3

#define N_PROFIBUS_FDL 10

#define N_R3964 9

#define N_SLIP 1

#define N_SMSBLOCK 12

#define N_STRIP 4

#define N_SYNC_PPP 14

#define N_TTY 0

#define N_X25 6

#define NCC 8

#define TIOCM_CAR 64

#define TIOCM_CD 64

#define TIOCM_CTS 32

#define TIOCM_DSR 256

#define TIOCM_DTR 2

#define TIOCM_LE 1

#define TIOCM_RI 128

#define TIOCM_RNG 128

#define TIOCM_RTS 4

#define TIOCM_SR 16

#define TIOCM_ST 8

typedef struct termio termio, *Ptermio;

struct termio {
    ushort c_iflag;
    ushort c_oflag;
    ushort c_cflag;
    ushort c_lflag;
    uchar c_line;
    uchar c_cc[8];
};

typedef struct winsize winsize, *Pwinsize;

struct winsize {
    ushort ws_row;
    ushort ws_col;
    ushort ws_xpixel;
    ushort ws_ypixel;
};

#define _IOC_DIRBITS 2

#define _IOC_DIRMASK 3

#define _IOC_DIRSHIFT 30

#define _IOC_NONE 0

#define _IOC_NRBITS 8

#define _IOC_NRMASK 255

#define _IOC_NRSHIFT 0

#define _IOC_READ 2

#define _IOC_SIZEBITS 14

#define _IOC_SIZEMASK 16383

#define _IOC_SIZESHIFT 16

#define _IOC_TYPEBITS 8

#define _IOC_TYPEMASK 255

#define _IOC_TYPESHIFT 8

#define _IOC_WRITE 1

#define _SYS_IOCTL_H 1

#define IOC_IN 1073741824

#define IOC_INOUT 3221225472

#define IOC_OUT 2147483648

#define IOCSIZE_MASK 1073676288

#define IOCSIZE_SHIFT 16

#define FIOASYNC 21586

#define FIOCLEX 21585

#define FIONBIO 21537

#define FIONCLEX 21584

#define FIONREAD 21531

#define FIOQSIZE 21600

#define SIOCADDDLCI 35200

#define SIOCADDMULTI 35121

#define SIOCADDRT 35083

#define SIOCDARP 35155

#define SIOCDELDLCI 35201

#define SIOCDELMULTI 35122

#define SIOCDELRT 35084

#define SIOCDEVPRIVATE 35312

#define SIOCDIFADDR 35126

#define SIOCDRARP 35168

#define SIOCGARP 35156

#define SIOCGIFADDR 35093

#define SIOCGIFBR 35136

#define SIOCGIFBRDADDR 35097

#define SIOCGIFCONF 35090

#define SIOCGIFCOUNT 35128

#define SIOCGIFDSTADDR 35095

#define SIOCGIFENCAP 35109

#define SIOCGIFFLAGS 35091

#define SIOCGIFHWADDR 35111

#define SIOCGIFINDEX 35123

#define SIOCGIFMAP 35184

#define SIOCGIFMEM 35103

#define SIOCGIFMETRIC 35101

#define SIOCGIFMTU 35105

#define SIOCGIFNAME 35088

#define SIOCGIFNETMASK 35099

#define SIOCGIFPFLAGS 35125

#define SIOCGIFSLAVE 35113

#define SIOCGIFTXQLEN 35138

#define SIOCGRARP 35169

#define SIOCPROTOPRIVATE 35296

#define SIOCRTMSG 35085

#define SIOCSARP 35157

#define SIOCSIFADDR 35094

#define SIOCSIFBR 35137

#define SIOCSIFBRDADDR 35098

#define SIOCSIFDSTADDR 35096

#define SIOCSIFENCAP 35110

#define SIOCSIFFLAGS 35092

#define SIOCSIFHWADDR 35108

#define SIOCSIFHWBROADCAST 35127

#define SIOCSIFLINK 35089

#define SIOCSIFMAP 35185

#define SIOCSIFMEM 35104

#define SIOCSIFMETRIC 35102

#define SIOCSIFMTU 35106

#define SIOCSIFNAME 35107

#define SIOCSIFNETMASK 35100

#define SIOCSIFPFLAGS 35124

#define SIOCSIFSLAVE 35120

#define SIOCSIFTXQLEN 35139

#define SIOCSRARP 35170

#define SIOGIFINDEX 35123

#define TCFLSH 21515

#define TCGETA 21509

#define TCGETS 21505

#define TCGETX 21554

#define TCSBRK 21513

#define TCSBRKP 21541

#define TCSETA 21510

#define TCSETAF 21512

#define TCSETAW 21511

#define TCSETS 21506

#define TCSETSF 21508

#define TCSETSW 21507

#define TCSETX 21555

#define TCSETXF 21556

#define TCSETXW 21557

#define TCXONC 21514

#define TIOCCBRK 21544

#define TIOCCONS 21533

#define TIOCEXCL 21516

#define TIOCGETD 21540

#define TIOCGHAYESESP 21598

#define TIOCGICOUNT 21597

#define TIOCGLCKTRMIOS 21590

#define TIOCGPGRP 21519

#define TIOCGRS485 21550

#define TIOCGSERIAL 21534

#define TIOCGSID 21545

#define TIOCGSOFTCAR 21529

#define TIOCGWINSZ 21523

#define TIOCINQ 21531

#define TIOCLINUX 21532

#define TIOCMBIC 21527

#define TIOCMBIS 21526

#define TIOCMGET 21525

#define TIOCMIWAIT 21596

#define TIOCMSET 21528

#define TIOCNOTTY 21538

#define TIOCNXCL 21517

#define TIOCOUTQ 21521

#define TIOCPKT 21536

#define TIOCPKT_DATA 0

#define TIOCPKT_DOSTOP 32

#define TIOCPKT_FLUSHREAD 1

#define TIOCPKT_FLUSHWRITE 2

#define TIOCPKT_NOSTOP 16

#define TIOCPKT_START 8

#define TIOCPKT_STOP 4

#define TIOCSBRK 21543

#define TIOCSCTTY 21518

#define TIOCSER_TEMT 1

#define TIOCSERCONFIG 21587

#define TIOCSERGETLSR 21593

#define TIOCSERGETMULTI 21594

#define TIOCSERGSTRUCT 21592

#define TIOCSERGWILD 21588

#define TIOCSERSETMULTI 21595

#define TIOCSERSWILD 21589

#define TIOCSETD 21539

#define TIOCSHAYESESP 21599

#define TIOCSLCKTRMIOS 21591

#define TIOCSPGRP 21520

#define TIOCSRS485 21551

#define TIOCSSERIAL 21535

#define TIOCSSOFTCAR 21530

#define TIOCSTI 21522

#define TIOCSWINSZ 21524

#define __NETINET_IP_H 1

#define IP_DF 16384

#define IP_MAXPACKET 65535

#define IP_MF 8192

#define IP_MSS 576

#define IP_OFFMASK 8191

#define IP_RF 32768

#define IPDEFTTL 64

#define IPFRAGTTL 60

#define IPOPT_CLASS_MASK 96

#define IPOPT_CONTROL 0

#define IPOPT_COPY 128

#define IPOPT_DEBMEAS 64

#define IPOPT_END 0

#define IPOPT_EOL 0

#define IPOPT_LSRR 131

#define IPOPT_MEASUREMENT 64

#define IPOPT_MINOFF 4

#define IPOPT_NOOP 1

#define IPOPT_NOP 1

#define IPOPT_NUMBER_MASK 31

#define IPOPT_OFFSET 2

#define IPOPT_OLEN 1

#define IPOPT_OPTVAL 0

#define IPOPT_RA 148

#define IPOPT_RESERVED1 32

#define IPOPT_RESERVED2 96

#define IPOPT_RR 7

#define IPOPT_SATID 136

#define IPOPT_SEC 130

#define IPOPT_SECUR_CONFID 61749

#define IPOPT_SECUR_EFTO 30874

#define IPOPT_SECUR_MMMM 48205

#define IPOPT_SECUR_RESTR 44819

#define IPOPT_SECUR_SECRET 55176

#define IPOPT_SECUR_TOPSECRET 27589

#define IPOPT_SECUR_UNCLASS 0

#define IPOPT_SECURITY 130

#define IPOPT_SID 136

#define IPOPT_SSRR 137

#define IPOPT_TIMESTAMP 68

#define IPOPT_TS 68

#define IPOPT_TS_PRESPEC 3

#define IPOPT_TS_TSANDADDR 1

#define IPOPT_TS_TSONLY 0

#define IPTOS_CLASS_CS0 0

#define IPTOS_CLASS_CS1 32

#define IPTOS_CLASS_CS2 64

#define IPTOS_CLASS_CS3 96

#define IPTOS_CLASS_CS4 128

#define IPTOS_CLASS_CS5 160

#define IPTOS_CLASS_CS6 192

#define IPTOS_CLASS_CS7 224

#define IPTOS_CLASS_DEFAULT 0

#define IPTOS_CLASS_MASK 224

#define IPTOS_DSCP_AF11 40

#define IPTOS_DSCP_AF12 48

#define IPTOS_DSCP_AF13 56

#define IPTOS_DSCP_AF21 72

#define IPTOS_DSCP_AF22 80

#define IPTOS_DSCP_AF23 88

#define IPTOS_DSCP_AF31 104

#define IPTOS_DSCP_AF32 112

#define IPTOS_DSCP_AF33 120

#define IPTOS_DSCP_AF41 136

#define IPTOS_DSCP_AF42 144

#define IPTOS_DSCP_AF43 152

#define IPTOS_DSCP_EF 184

#define IPTOS_DSCP_MASK 252

#define IPTOS_ECN_CE 3

#define IPTOS_ECN_ECT0 2

#define IPTOS_ECN_ECT1 1

#define IPTOS_ECN_MASK 3

#define IPTOS_ECN_NOT_ECT 0

#define IPTOS_LOWCOST 2

#define IPTOS_LOWDELAY 16

#define IPTOS_MINCOST 2

#define IPTOS_PREC_CRITIC_ECP 160

#define IPTOS_PREC_FLASH 96

#define IPTOS_PREC_FLASHOVERRIDE 128

#define IPTOS_PREC_IMMEDIATE 64

#define IPTOS_PREC_INTERNETCONTROL 192

#define IPTOS_PREC_MASK 224

#define IPTOS_PREC_NETCONTROL 224

#define IPTOS_PREC_PRIORITY 32

#define IPTOS_PREC_ROUTINE 0

#define IPTOS_RELIABILITY 4

#define IPTOS_THROUGHPUT 8

#define IPTOS_TOS_MASK 30

#define IPTTLDEC 1

#define IPVERSION 4

#define MAX_IPOPTLEN 40

#define MAXTTL 255

typedef union anon__struct_1912_bitfield_1 anon__struct_1912_bitfield_1, *Panon__struct_1912_bitfield_1;

union anon__struct_1912_bitfield_1 {
    uint flags:4; /* : bits 0-3 */
    uint overflow:4; /* : bits 4-7 */
};

typedef union anon__struct_1913_bitfield_1 anon__struct_1913_bitfield_1, *Panon__struct_1913_bitfield_1;

union anon__struct_1913_bitfield_1 {
    uint ihl:4; /* : bits 0-3 */
    uint version:4; /* : bits 4-7 */
};

typedef union anon__struct_1914_bitfield_1 anon__struct_1914_bitfield_1, *Panon__struct_1914_bitfield_1;

union anon__struct_1914_bitfield_1 {
    uint ip_hl:4; /* : bits 0-3 */
    uint ip_v:4; /* : bits 4-7 */
};

typedef union anon__struct_1916_bitfield_1 anon__struct_1916_bitfield_1, *Panon__struct_1916_bitfield_1;

union anon__struct_1916_bitfield_1 {
    uint ipt_flg:4; /* : bits 0-3 */
    uint ipt_oflw:4; /* : bits 4-7 */
};

typedef struct ip ip, *Pip;

struct ip {
    union anon__struct_1914_bitfield_1 field_0x0;
    u_int8_t ip_tos;
    u_short ip_len;
    u_short ip_id;
    u_short ip_off;
    u_int8_t ip_ttl;
    u_int8_t ip_p;
    u_short ip_sum;
    struct in_addr ip_src;
    struct in_addr ip_dst;
};

typedef struct ip_timestamp ip_timestamp, *Pip_timestamp;

struct ip_timestamp {
    u_int8_t ipt_code;
    u_int8_t ipt_len;
    u_int8_t ipt_ptr;
    union anon__struct_1916_bitfield_1 field_0x3;
    u_int32_t data[9];
};

typedef struct iphdr iphdr, *Piphdr;

struct iphdr {
    union anon__struct_1913_bitfield_1 field_0x0;
    u_int8_t tos;
    u_int16_t tot_len;
    u_int16_t id;
    u_int16_t frag_off;
    u_int8_t ttl;
    u_int8_t protocol;
    u_int16_t check;
    u_int32_t saddr;
    u_int32_t daddr;
};

typedef struct timestamp timestamp, *Ptimestamp;

struct timestamp {
    u_int8_t len;
    u_int8_t ptr;
    union anon__struct_1912_bitfield_1 field_0x2;
    u_int32_t data[9];
};

#define _NETINET_IP6_H 1

#define IP6_ALERT_AN 512

#define IP6_ALERT_MLD 0

#define IP6_ALERT_RSVP 256

#define IP6F_MORE_FRAG 256

#define IP6F_OFF_MASK 63743

#define IP6F_RESERVED_MASK 1536

#define IP6OPT_JUMBO 194

#define IP6OPT_JUMBO_LEN 6

#define IP6OPT_NSAP_ADDR 195

#define IP6OPT_PAD1 0

#define IP6OPT_PADN 1

#define IP6OPT_ROUTER_ALERT 5

#define IP6OPT_TUNNEL_LIMIT 4

#define IP6OPT_TYPE_DISCARD 64

#define IP6OPT_TYPE_FORCEICMP 128

#define IP6OPT_TYPE_ICMP 192

#define IP6OPT_TYPE_MUTABLE 32

#define IP6OPT_TYPE_SKIP 0

typedef union _union_1852 _union_1852, *P_union_1852;

typedef struct ip6_hdrctl ip6_hdrctl, *Pip6_hdrctl;

struct ip6_hdrctl {
    uint32_t ip6_un1_flow;
    uint16_t ip6_un1_plen;
    uint8_t ip6_un1_nxt;
    uint8_t ip6_un1_hlim;
};

union _union_1852 {
    struct ip6_hdrctl ip6_un1;
    uint8_t ip6_un2_vfc;
};

typedef struct ip6_dest ip6_dest, *Pip6_dest;

struct ip6_dest {
    uint8_t ip6d_nxt;
    uint8_t ip6d_len;
};

typedef struct ip6_ext ip6_ext, *Pip6_ext;

struct ip6_ext {
    uint8_t ip6e_nxt;
    uint8_t ip6e_len;
};

typedef struct ip6_frag ip6_frag, *Pip6_frag;

struct ip6_frag {
    uint8_t ip6f_nxt;
    uint8_t ip6f_reserved;
    uint16_t ip6f_offlg;
    uint32_t ip6f_ident;
};

typedef struct ip6_hbh ip6_hbh, *Pip6_hbh;

struct ip6_hbh {
    uint8_t ip6h_nxt;
    uint8_t ip6h_len;
};

typedef struct ip6_hdr ip6_hdr, *Pip6_hdr;

struct ip6_hdr {
    union _union_1852 ip6_ctlun;
    struct in6_addr ip6_src;
    struct in6_addr ip6_dst;
};

typedef struct ip6_opt ip6_opt, *Pip6_opt;

struct ip6_opt {
    uint8_t ip6o_type;
    uint8_t ip6o_len;
};

typedef struct ip6_opt_jumbo ip6_opt_jumbo, *Pip6_opt_jumbo;

struct ip6_opt_jumbo {
    uint8_t ip6oj_type;
    uint8_t ip6oj_len;
    uint8_t ip6oj_jumbo_len[4];
};

typedef struct ip6_opt_nsap ip6_opt_nsap, *Pip6_opt_nsap;

struct ip6_opt_nsap {
    uint8_t ip6on_type;
    uint8_t ip6on_len;
    uint8_t ip6on_src_nsap_len;
    uint8_t ip6on_dst_nsap_len;
};

typedef struct ip6_opt_router ip6_opt_router, *Pip6_opt_router;

struct ip6_opt_router {
    uint8_t ip6or_type;
    uint8_t ip6or_len;
    uint8_t ip6or_value[2];
};

typedef struct ip6_opt_tunnel ip6_opt_tunnel, *Pip6_opt_tunnel;

struct ip6_opt_tunnel {
    uint8_t ip6ot_type;
    uint8_t ip6ot_len;
    uint8_t ip6ot_encap_limit;
};

typedef struct ip6_rthdr ip6_rthdr, *Pip6_rthdr;

struct ip6_rthdr {
    uint8_t ip6r_nxt;
    uint8_t ip6r_len;
    uint8_t ip6r_type;
    uint8_t ip6r_segleft;
};

typedef struct ip6_rthdr0 ip6_rthdr0, *Pip6_rthdr0;

struct ip6_rthdr0 {
    uint8_t ip6r0_nxt;
    uint8_t ip6r0_len;
    uint8_t ip6r0_type;
    uint8_t ip6r0_segleft;
    uint8_t ip6r0_reserved;
    uint8_t ip6r0_slmap[3];
    struct in6_addr[0] ip6r0_addr;
};

#define __NETINET_IP_ICMP_H 1

#define ICMP_ADDRESS 17

#define ICMP_ADDRESSREPLY 18

#define ICMP_DEST_UNREACH 3

#define ICMP_ECHO 8

#define ICMP_ECHOREPLY 0

#define ICMP_EXC_FRAGTIME 1

#define ICMP_EXC_TTL 0

#define ICMP_FRAG_NEEDED 4

#define ICMP_HOST_ANO 10

#define ICMP_HOST_ISOLATED 8

#define ICMP_HOST_UNKNOWN 7

#define ICMP_HOST_UNR_TOS 12

#define ICMP_HOST_UNREACH 1

#define ICMP_INFO_REPLY 16

#define ICMP_INFO_REQUEST 15

#define ICMP_IREQ 15

#define ICMP_IREQREPLY 16

#define ICMP_MASKLEN 12

#define ICMP_MASKREPLY 18

#define ICMP_MASKREQ 17

#define ICMP_MAXTYPE 18

#define ICMP_MINLEN 8

#define ICMP_NET_ANO 9

#define ICMP_NET_UNKNOWN 6

#define ICMP_NET_UNR_TOS 11

#define ICMP_NET_UNREACH 0

#define ICMP_PARAMETERPROB 12

#define ICMP_PARAMPROB 12

#define ICMP_PARAMPROB_OPTABSENT 1

#define ICMP_PKT_FILTERED 13

#define ICMP_PORT_UNREACH 3

#define ICMP_PREC_CUTOFF 15

#define ICMP_PREC_VIOLATION 14

#define ICMP_PROT_UNREACH 2

#define ICMP_REDIR_HOST 1

#define ICMP_REDIR_HOSTTOS 3

#define ICMP_REDIR_NET 0

#define ICMP_REDIR_NETTOS 2

#define ICMP_REDIRECT 5

#define ICMP_REDIRECT_HOST 1

#define ICMP_REDIRECT_NET 0

#define ICMP_REDIRECT_TOSHOST 3

#define ICMP_REDIRECT_TOSNET 2

#define ICMP_ROUTERADVERT 9

#define ICMP_ROUTERSOLICIT 10

#define ICMP_SOURCE_QUENCH 4

#define ICMP_SOURCEQUENCH 4

#define ICMP_SR_FAILED 5

#define ICMP_TIME_EXCEEDED 11

#define ICMP_TIMESTAMP 13

#define ICMP_TIMESTAMPREPLY 14

#define ICMP_TIMXCEED 11

#define ICMP_TIMXCEED_INTRANS 0

#define ICMP_TIMXCEED_REASS 1

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

#define NR_ICMP_TYPES 18

#define NR_ICMP_UNREACH 15

typedef struct _struct_1910 _struct_1910, *P_struct_1910;

struct _struct_1910 {
    u_int16_t id;
    u_int16_t sequence;
};

typedef struct _struct_1911 _struct_1911, *P_struct_1911;

struct _struct_1911 {
    u_int16_t __unused;
    u_int16_t mtu;
};

typedef struct _struct_1925 _struct_1925, *P_struct_1925;

struct _struct_1925 {
    u_int32_t its_otime;
    u_int32_t its_rtime;
    u_int32_t its_ttime;
};

typedef struct _struct_1926 _struct_1926, *P_struct_1926;

struct _struct_1926 {
    struct ip idi_ip;
};

typedef union _union_1909 _union_1909, *P_union_1909;

union _union_1909 {
    struct _struct_1910 echo;
    u_int32_t gateway;
    struct _struct_1911 frag;
};

typedef union _union_1919 _union_1919, *P_union_1919;

typedef uchar __u_char;

typedef __u_char u_char;

typedef struct ih_idseq ih_idseq, *Pih_idseq;

typedef struct ih_pmtu ih_pmtu, *Pih_pmtu;

typedef struct ih_rtradv ih_rtradv, *Pih_rtradv;

struct ih_pmtu {
    u_int16_t ipm_void;
    u_int16_t ipm_nextmtu;
};

struct ih_rtradv {
    u_int8_t irt_num_addrs;
    u_int8_t irt_wpa;
    u_int16_t irt_lifetime;
};

struct ih_idseq {
    u_int16_t icd_id;
    u_int16_t icd_seq;
};

union _union_1919 {
    u_char ih_pptr;
    struct in_addr ih_gwaddr;
    struct ih_idseq ih_idseq;
    u_int32_t ih_void;
    struct ih_pmtu ih_pmtu;
    struct ih_rtradv ih_rtradv;
};

typedef union _union_1924 _union_1924, *P_union_1924;

typedef struct icmp_ra_addr icmp_ra_addr, *Picmp_ra_addr;

struct icmp_ra_addr {
    u_int32_t ira_addr;
    u_int32_t ira_preference;
};

union _union_1924 {
    struct _struct_1925 id_ts;
    struct _struct_1926 id_ip;
    struct icmp_ra_addr id_radv;
    u_int32_t id_mask;
    u_int8_t id_data[1];
};

typedef struct icmp icmp, *Picmp;

struct icmp {
    u_int8_t icmp_type;
    u_int8_t icmp_code;
    u_int16_t icmp_cksum;
    union _union_1919 icmp_hun;
    union _union_1924 icmp_dun;
};

typedef struct icmphdr icmphdr, *Picmphdr;

struct icmphdr {
    u_int8_t type;
    u_int8_t code;
    u_int16_t checksum;
    union _union_1909 un;
};

#define _SYS_IPC_H 1

#define IPC_CREAT 512

#define IPC_EXCL 1024

#define IPC_INFO 3

#define IPC_NOWAIT 2048

#define IPC_PRIVATE 0

#define IPC_RMID 0

#define IPC_SET 1

#define IPC_STAT 2

typedef struct ipc_perm ipc_perm, *Pipc_perm;

typedef int __key_t;

struct ipc_perm {
    __key_t __key;
    __uid_t uid;
    __gid_t gid;
    __uid_t cuid;
    __gid_t cgid;
    ushort mode;
    ushort __pad1;
    ushort __seq;
    ushort __pad2;
    ulong __unused1;
    ulong __unused2;
};

#define _BITS_IPCTYPES_H 1

typedef ushort __ipc_pid_t;

#define _SYS_KD_H 1

#define E_TABSZ 256

#define GIO_CMAP 19312

#define GIO_FONT 19296

#define GIO_FONTX 19307

#define GIO_SCRNMAP 19264

#define GIO_UNIMAP 19302

#define GIO_UNISCRNMAP 19305

#define K_ALTSHIFTTAB 3

#define K_ALTTAB 2

#define K_CAPSLOCK 4

#define K_ESCPREFIX 4

#define K_MEDIUMRAW 2

#define K_METABIT 3

#define K_NORMTAB 0

#define K_NUMLOCK 2

#define K_RAW 0

#define K_SCROLLLOCK 1

#define K_SHIFTTAB 1

#define K_UNICODE 3

#define K_XLATE 1

#define KB_101 2

#define KB_84 1

#define KB_OTHER 3

#define KD_FONT_FLAG_DONT_RECALC 1

#define KD_FONT_OP_COPY 3

#define KD_FONT_OP_GET 1

#define KD_FONT_OP_SET 0

#define KD_FONT_OP_SET_DEFAULT 2

#define KD_GRAPHICS 1

#define KD_TEXT 0

#define KD_TEXT0 2

#define KD_TEXT1 3

#define KDADDIO 19252

#define KDDELIO 19253

#define KDDISABIO 19255

#define KDENABIO 19254

#define KDFONTOP 19314

#define KDGETKEYCODE 19276

#define KDGETLED 19249

#define KDGETMODE 19259

#define KDGKBDIACR 19274

#define KDGKBDIACRUC 19450

#define KDGKBENT 19270

#define KDGKBLED 19300

#define KDGKBMETA 19298

#define KDGKBMODE 19268

#define KDGKBSENT 19272

#define KDGKBTYPE 19251

#define KDKBDREP 19282

#define KDMAPDISP 19260

#define KDMKTONE 19248

#define KDSETKEYCODE 19277

#define KDSETLED 19250

#define KDSETMODE 19258

#define KDSIGACCEPT 19278

#define KDSKBDIACR 19275

#define KDSKBDIACRUC 19451

#define KDSKBENT 19271

#define KDSKBLED 19301

#define KDSKBMETA 19299

#define KDSKBMODE 19269

#define KDSKBSENT 19273

#define KDUNMAPDISP 19261

#define KIOCSOUND 19247

#define LED_CAP 4

#define LED_NUM 2

#define LED_SCR 1

#define PIO_CMAP 19313

#define PIO_FONT 19297

#define PIO_FONTRESET 19309

#define PIO_FONTX 19308

#define PIO_SCRNMAP 19265

#define PIO_UNIMAP 19303

#define PIO_UNIMAPCLR 19304

#define PIO_UNISCRNMAP 19306

#define UNI_DIRECT_BASE 61440

#define UNI_DIRECT_MASK 511

typedef struct console_font console_font, *Pconsole_font;

struct console_font {
    uint width;
    uint height;
    uint charcount;
    uchar * data;
};

typedef struct console_font_op console_font_op, *Pconsole_font_op;

struct console_font_op {
    uint op;
    uint flags;
    uint width;
    uint height;
    uint charcount;
    uchar * data;
};

typedef struct consolefontdesc consolefontdesc, *Pconsolefontdesc;

struct consolefontdesc {
    ushort charcount;
    ushort charheight;
    char * chardata;
};

typedef struct kbd_repeat kbd_repeat, *Pkbd_repeat;

struct kbd_repeat {
    int delay;
    int period;
};

typedef struct kbdiacr kbdiacr, *Pkbdiacr;

struct kbdiacr {
    uchar diacr;
    uchar base;
    uchar result;
};

typedef struct kbdiacrs kbdiacrs, *Pkbdiacrs;

struct kbdiacrs {
    uint kb_cnt;
    struct kbdiacr kbdiacr[256];
};

typedef struct kbdiacrsuc kbdiacrsuc, *Pkbdiacrsuc;

typedef struct kbdiacruc kbdiacruc, *Pkbdiacruc;

struct kbdiacruc {
    uint diacr;
    uint base;
    uint result;
};

struct kbdiacrsuc {
    uint kb_cnt;
    struct kbdiacruc kbdiacruc[256];
};

typedef struct kbentry kbentry, *Pkbentry;

struct kbentry {
    uchar kb_table;
    uchar kb_index;
    ushort kb_value;
};

typedef struct kbkeycode kbkeycode, *Pkbkeycode;

struct kbkeycode {
    uint scancode;
    uint keycode;
};

typedef struct kbsentry kbsentry, *Pkbsentry;

struct kbsentry {
    uchar kb_func;
    uchar kb_string[512];
};

typedef char scrnmap_t;

typedef struct unimapdesc unimapdesc, *Punimapdesc;

typedef struct unipair unipair, *Punipair;

struct unimapdesc {
    ushort entry_ct;
    struct unipair * entries;
};

struct unipair {
    ushort unicode;
    ushort fontpos;
};

typedef struct unimapinit unimapinit, *Punimapinit;

struct unimapinit {
    ushort advised_hashsize;
    ushort advised_hashstep;
    ushort advised_hashlevel;
};

#define _SYS_KDAEMON_H 1

#define COMPACTION_BUILD 0

#define NUMA_BUILD 0

#define SI_LOAD_SHIFT 16

typedef struct module module, *Pmodule;

struct module {
};

typedef struct sysinfo sysinfo, *Psysinfo;

struct sysinfo {
    long uptime;
    ulong loads[3];
    ulong totalram;
    ulong freeram;
    ulong sharedram;
    ulong bufferram;
    ulong totalswap;
    ulong freeswap;
    ushort procs;
    ushort pad;
    ulong totalhigh;
    ulong freehigh;
    uint mem_unit;
    char _f[18];
};

#define HEXKEYBYTES 48

#define KEY_DECRYPT 3

#define KEY_DECRYPT_PK 7

#define KEY_ENCRYPT 2

#define KEY_ENCRYPT_PK 6

#define KEY_GEN 4

#define KEY_GET_CONV 10

#define KEY_GETCRED 5

#define KEY_NET_GET 9

#define KEY_NET_PUT 8

#define KEY_PROG 100029

#define KEY_SET 1

#define KEY_VERS 1

#define KEY_VERS2 2

#define KEYBYTES 24

#define KEYCHECKSUMSIZE 16

#define KEYSIZE 192

#define MAXGIDS 16

#define PROOT 3

typedef struct _struct_2042 _struct_2042, *P_struct_2042;

struct _struct_2042 {
    u_int gids_len;
    u_int * gids_val;
};

typedef union _union_2039 _union_2039, *P_union_2039;

union _union_2039 {
    union des_block deskey;
};

typedef union _union_2045 _union_2045, *P_union_2045;

typedef struct unixcred unixcred, *Punixcred;

struct unixcred {
    u_int uid;
    u_int gid;
    struct _struct_2042 gids;
};

union _union_2045 {
    struct unixcred cred;
};

typedef union _union_2050 _union_2050, *P_union_2050;

typedef struct key_netstarg key_netstarg, *Pkey_netstarg;

typedef char keybuf[48];

typedef char * netnamestr;

struct key_netstarg {
    keybuf st_priv_key;
    keybuf st_pub_key;
    netnamestr st_netname;
};

union _union_2050 {
    struct key_netstarg knet;
};

typedef struct cryptkeyarg cryptkeyarg, *Pcryptkeyarg;

struct cryptkeyarg {
    netnamestr remotename;
    union des_block deskey;
};

typedef struct cryptkeyarg2 cryptkeyarg2, *Pcryptkeyarg2;

typedef struct netobj netobj, *Pnetobj;

struct netobj {
    u_int n_len;
    char * n_bytes;
};

struct cryptkeyarg2 {
    netnamestr remotename;
    struct netobj remotekey;
    union des_block deskey;
};

typedef struct cryptkeyres cryptkeyres, *Pcryptkeyres;

typedef enum keystatus {
    KEY_NOSECRET=1,
    KEY_SUCCESS=0,
    KEY_SYSTEMERR=3,
    KEY_UNKNOWN=2
} keystatus;

struct cryptkeyres {
    enum keystatus status;
    union _union_2039 cryptkeyres_u;
};

typedef struct getcredres getcredres, *Pgetcredres;

struct getcredres {
    enum keystatus status;
    union _union_2045 getcredres_u;
};

typedef struct key_netstres key_netstres, *Pkey_netstres;

struct key_netstres {
    enum keystatus status;
    union _union_2050 key_netstres_u;
};

#define _SYS_KLOG_H 1

#define AD_TYPE_EXTERNAL 16384

#define AD_TYPE_FIELD_TYPE_MASK 8191

#define AD_TYPE_REGISTERED 8192

#define AD_TYPE_RESERVED 32768

#define ADDRTYPE_ADDRPORT 256

#define ADDRTYPE_CHAOS 5

#define ADDRTYPE_DDP 16

#define ADDRTYPE_INET 2

#define ADDRTYPE_INET6 24

#define ADDRTYPE_IPPORT 257

#define ADDRTYPE_ISO 7

#define ADDRTYPE_NETBIOS 20

#define ADDRTYPE_XNS 6

#define AP_OPTS_ETYPE_NEGOTIATION 2

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

#define CKSUMTYPE_MD5_HMAC_ARCFOUR -137

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

#define ERROR_TABLE_BASE_k5e1 -1750600192

#define ERROR_TABLE_BASE_kdb5 -1780008448

#define ERROR_TABLE_BASE_krb5 -1765328384

#define ERROR_TABLE_BASE_kv5m -1760647424

#define FALSE 0

#define k524_err_base -1750206208

#define k5e1_err_base -1750600192

#define kdb5_err_base -1780008448

#define KDC_OPT_ALLOW_POSTDATE 67108864

#define KDC_OPT_CANONICALIZE 65536

#define KDC_OPT_CNAME_IN_ADDL_TKT 131072

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

#define KDC_OPT_REQUEST_ANONYMOUS 32768

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

#define KRB5_AUTHDATA_ETYPE_NEGOTIATION 129

#define KRB5_AUTHDATA_FX_ARMOR 71

#define KRB5_AUTHDATA_IF_RELEVANT 1

#define KRB5_AUTHDATA_INITIAL_VERIFIED_CAS 9

#define KRB5_AUTHDATA_KDC_ISSUED 4

#define KRB5_AUTHDATA_MANDATORY_FOR_KDC 8

#define KRB5_AUTHDATA_OSF_DCE 64

#define KRB5_AUTHDATA_SESAME 65

#define KRB5_AUTHDATA_SIGNTICKET 512

#define KRB5_AUTHDATA_WIN2K_PAC 128

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

#define KRB5_CRYPTO_TYPE_CHECKSUM 6

#define KRB5_CRYPTO_TYPE_DATA 2

#define KRB5_CRYPTO_TYPE_EMPTY 0

#define KRB5_CRYPTO_TYPE_HEADER 1

#define KRB5_CRYPTO_TYPE_PADDING 4

#define KRB5_CRYPTO_TYPE_SIGN_ONLY 3

#define KRB5_CRYPTO_TYPE_STREAM 7

#define KRB5_CRYPTO_TYPE_TRAILER 5

#define KRB5_CYBERSAFE_SECUREID 9

#define KRB5_DCC_CANNOT_CREATE -1750600188

#define KRB5_DELTAT_BADFORMAT -1765328136

#define KRB5_DEPRECATED 0

#define KRB5_DOMAIN_X500_COMPRESS 1

#define KRB5_EAI_FAIL -1765328145

#define KRB5_EAI_NODATA -1765328144

#define KRB5_EAI_NONAME -1765328143

#define KRB5_EAI_SERVICE -1765328142

#define KRB5_ENCPADATA_REQ_ENC_PA_REP 149

#define KRB5_ERR_BAD_HOSTNAME -1765328168

#define KRB5_ERR_BAD_S2K_PARAMS -1765328140

#define krb5_err_base -1765328384

#define KRB5_ERR_FAST_REQUIRED -1765328132

#define KRB5_ERR_HOST_REALM_UNKNOWN -1765328167

#define KRB5_ERR_INVALID_UTF8 -1765328133

#define KRB5_ERR_NO_SERVICE -1765328139

#define KRB5_ERR_NUMERIC_REALM -1765328141

#define KRB5_ERR_RCSID -1765328256

#define KRB5_ERROR 30

#define KRB5_FAST_REQUIRED 1

#define KRB5_FCC_INTERNAL -1765328188

#define KRB5_FCC_NOFILE -1765328189

#define KRB5_FCC_PERM -1765328190

#define KRB5_FWD_BAD_PRINCIPAL -1765328162

#define KRB5_GC_CACHED 2

#define KRB5_GC_CANONICALIZE 4

#define KRB5_GC_CONSTRAINED_DELEGATION 64

#define KRB5_GC_FORWARDABLE 16

#define KRB5_GC_NO_STORE 8

#define KRB5_GC_NO_TRANSIT_CHECK 32

#define KRB5_GC_USER_USER 1

#define KRB5_GET_IN_TKT_LOOP -1765328161

#define KRB5_GET_INIT_CREDS_OPT_ADDRESS_LIST 32

#define KRB5_GET_INIT_CREDS_OPT_ANONYMOUS 1024

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

#define KRB5_INIT_CONTEXT_KDC 2

#define KRB5_INIT_CONTEXT_SECURE 1

#define KRB5_INIT_CREDS_STEP_FLAG_CONTINUE 1

#define KRB5_INT16_MAX 65535

#define KRB5_INT16_MIN -65536

#define KRB5_INT32_MAX 2147483647

#define KRB5_INT32_MIN -2147483648

#define KRB5_INVALID_FLAGS -1765328183

#define KRB5_KDB_ACCESS_ERROR -1780008412

#define KRB5_KDB_BAD_CREATEFLAGS -1780008419

#define KRB5_KDB_BAD_ENCTYPE -1780008420

#define KRB5_KDB_BAD_SALTTYPE -1780008421

#define KRB5_KDB_BAD_VERSION -1780008422

#define KRB5_KDB_BADLOCKMODE -1780008436

#define KRB5_KDB_BADMASTERKEY -1780008431

#define KRB5_KDB_BADSTORED_MKEY -1780008428

#define KRB5_KDB_CANTLOCK_DB -1780008424

#define KRB5_KDB_CANTREAD_STORED -1780008429

#define KRB5_KDB_CONSTRAINT_VIOLATION -1780008410

#define KRB5_KDB_DB_CHANGED -1780008440

#define KRB5_KDB_DB_CORRUPT -1780008423

#define KRB5_KDB_DB_INUSE -1780008441

#define KRB5_KDB_DBINITED -1780008434

#define KRB5_KDB_DBNOTINITED -1780008435

#define KRB5_KDB_DBTYPE_INIT -1780008414

#define KRB5_KDB_DBTYPE_MISMATCH -1780008405

#define KRB5_KDB_DBTYPE_NOSUP -1780008415

#define KRB5_KDB_DBTYPE_NOTFOUND -1780008416

#define KRB5_KDB_ILL_WILDCARD -1780008442

#define KRB5_KDB_ILLDIRECTION -1780008433

#define KRB5_KDB_INTERNAL_ERROR -1780008411

#define KRB5_KDB_INUSE -1780008447

#define KRB5_KDB_INVALIDKEYSIZE -1780008430

#define KRB5_KDB_KVNONOMATCH -1780008426

#define KRB5_KDB_NO_MATCHING_KEY -1780008417

#define KRB5_KDB_NO_PERMITTED_KEY -1780008418

#define KRB5_KDB_NOACTMASTERKEY -1780008427

#define KRB5_KDB_NOENTRY -1780008443

#define KRB5_KDB_NOMASTERKEY -1780008432

#define KRB5_KDB_NOTLOCKED -1780008437

#define KRB5_KDB_POLICY_REF -1780008404

#define KRB5_KDB_RCSID -1780008448

#define KRB5_KDB_RECURSIVELOCK -1780008438

#define KRB5_KDB_SERVER_INTERNAL_ERR -1780008413

#define KRB5_KDB_STORED_MKEY_NOTCURRENT -1780008425

#define KRB5_KDB_STRINGS_TOOLONG -1780008403

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

#define KRB5_KEYUSAGE_AD_SIGNEDPATH -21

#define KRB5_KEYUSAGE_AP_REP_ENCPART 12

#define KRB5_KEYUSAGE_AP_REQ_AUTH 11

#define KRB5_KEYUSAGE_AP_REQ_AUTH_CKSUM 10

#define KRB5_KEYUSAGE_APP_DATA_CKSUM 17

#define KRB5_KEYUSAGE_APP_DATA_ENCRYPT 16

#define KRB5_KEYUSAGE_AS_REP_ENCPART 3

#define KRB5_KEYUSAGE_AS_REQ 56

#define KRB5_KEYUSAGE_AS_REQ_PA_ENC_TS 1

#define KRB5_KEYUSAGE_ENC_CHALLENGE_CLIENT 54

#define KRB5_KEYUSAGE_ENC_CHALLENGE_KDC 55

#define KRB5_KEYUSAGE_FAST_ENC 51

#define KRB5_KEYUSAGE_FAST_FINISHED 53

#define KRB5_KEYUSAGE_FAST_REP 52

#define KRB5_KEYUSAGE_FAST_REQ_CHKSUM 50

#define KRB5_KEYUSAGE_GSS_TOK_MIC 22

#define KRB5_KEYUSAGE_GSS_TOK_WRAP_INTEG 23

#define KRB5_KEYUSAGE_GSS_TOK_WRAP_PRIV 24

#define KRB5_KEYUSAGE_IAKERB_FINISHED 42

#define KRB5_KEYUSAGE_KDC_REP_TICKET 2

#define KRB5_KEYUSAGE_KRB_CRED_ENCPART 14

#define KRB5_KEYUSAGE_KRB_ERROR_CKSUM 18

#define KRB5_KEYUSAGE_KRB_PRIV_ENCPART 13

#define KRB5_KEYUSAGE_KRB_SAFE_CKSUM 15

#define KRB5_KEYUSAGE_PA_PKINIT_KX 44

#define KRB5_KEYUSAGE_PA_REFERRAL 26

#define KRB5_KEYUSAGE_PA_S4U_X509_USER_REPLY 27

#define KRB5_KEYUSAGE_PA_S4U_X509_USER_REQUEST 26

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

#define KRB5_LOCAL_ADDR_REQUIRED -1765328131

#define KRB5_LOG_CONV -1780008409

#define KRB5_LOG_CORRUPT -1780008407

#define KRB5_LOG_ERROR -1780008406

#define KRB5_LOG_UNSTABLE -1780008408

#define KRB5_LRQ_ALL_ACCT_EXPTIME 7

#define KRB5_LRQ_ALL_LAST_INITIAL 2

#define KRB5_LRQ_ALL_LAST_RENEWAL 4

#define KRB5_LRQ_ALL_LAST_REQ 5

#define KRB5_LRQ_ALL_LAST_TGT 1

#define KRB5_LRQ_ALL_LAST_TGT_ISSUED 3

#define KRB5_LRQ_ALL_PW_EXPTIME 6

#define KRB5_LRQ_NONE 0

#define KRB5_LRQ_ONE_ACCT_EXPTIME -7

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

#define KRB5_NT_WELLKNOWN 11

#define KRB5_NT_X500_PRINCIPAL 6

#define KRB5_OBSOLETE_FN -1765328146

#define KRB5_PAC_CLIENT_INFO 10

#define KRB5_PAC_CREDENTIALS_INFO 2

#define KRB5_PAC_DELEGATION_INFO 11

#define KRB5_PAC_LOGON_INFO 1

#define KRB5_PAC_PRIVSVR_CHECKSUM 7

#define KRB5_PAC_SERVER_CHECKSUM 6

#define KRB5_PAC_UPN_DNS_INFO 12

#define KRB5_PADATA_AFS3_SALT 10

#define KRB5_PADATA_AP_REQ 1

#define KRB5_PADATA_ENC_SANDIA_SECURID 6

#define KRB5_PADATA_ENC_TIMESTAMP 2

#define KRB5_PADATA_ENC_UNIX_TIME 5

#define KRB5_PADATA_ENCRYPTED_CHALLENGE 138

#define KRB5_PADATA_ETYPE_INFO 11

#define KRB5_PADATA_ETYPE_INFO2 19

#define KRB5_PADATA_FOR_USER 129

#define KRB5_PADATA_FX_COOKIE 133

#define KRB5_PADATA_FX_ERROR 137

#define KRB5_PADATA_FX_FAST 136

#define KRB5_PADATA_GET_FROM_TYPED_DATA 22

#define KRB5_PADATA_NONE 0

#define KRB5_PADATA_OSF_DCE 8

#define KRB5_PADATA_PAC_REQUEST 128

#define KRB5_PADATA_PK_AS_REP 17

#define KRB5_PADATA_PK_AS_REP_OLD 15

#define KRB5_PADATA_PK_AS_REQ 16

#define KRB5_PADATA_PK_AS_REQ_OLD 14

#define KRB5_PADATA_PKINIT_KX 147

#define KRB5_PADATA_PW_SALT 3

#define KRB5_PADATA_REFERRAL 25

#define KRB5_PADATA_S4U_X509_USER 130

#define KRB5_PADATA_SAM_CHALLENGE 12

#define KRB5_PADATA_SAM_CHALLENGE_2 30

#define KRB5_PADATA_SAM_REDIRECT 21

#define KRB5_PADATA_SAM_RESPONSE 13

#define KRB5_PADATA_SAM_RESPONSE_2 31

#define KRB5_PADATA_SESAME 7

#define KRB5_PADATA_SVR_REFERRAL_INFO 20

#define KRB5_PADATA_TGS_REQ 1

#define KRB5_PADATA_USE_SPECIFIED_KVNO 20

#define KRB5_PARSE_ILLCHAR -1765328251

#define KRB5_PARSE_MALFORMED -1765328250

#define KRB5_PLUGIN_BAD_MODULE_SPEC -1750600191

#define KRB5_PLUGIN_NAME_NOTFOUND -1750600190

#define KRB5_PLUGIN_NO_HANDLE -1765328135

#define KRB5_PLUGIN_OP_NOTSUPP -1765328134

#define KRB5_PLUGIN_VER_NOTSUPP -1750600192

#define KRB5_PREAUTH_BAD_TYPE -1765328176

#define KRB5_PREAUTH_FAILED -1765328174

#define KRB5_PREAUTH_NO_KEY -1765328175

#define KRB5_PRINC_NOMATCH -1765328238

#define KRB5_PRINCIPAL_COMPARE_CASEFOLD 4

#define KRB5_PRINCIPAL_COMPARE_ENTERPRISE 2

#define KRB5_PRINCIPAL_COMPARE_IGNORE_REALM 1

#define KRB5_PRINCIPAL_COMPARE_UTF8 8

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

#define KRB5_REMOTE_ADDR_REQUIRED -1765328130

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

#define KRB5_TKT_CREDS_STEP_FLAG_CONTINUE 1

#define KRB5_TKT_NOT_FORWARDABLE -1765328163

#define KRB5_TRACE_NOSUPP -1765328129

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

#define KRB5KDC_ERR_DISCARD -1750600189

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

#define KRB5KDC_ERR_NO_ACCEPTABLE_KDF -1765328302

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

#define KRB5KDC_ERR_UNKNOWN_CRITICAL_FAST_OPTION -1765328291

#define KRB5KDC_ERR_WRONG_REALM -1765328316

#define KRB5KRB_AP_ERR_BAD_INTEGRITY -1765328353

#define KRB5KRB_AP_ERR_BADADDR -1765328346

#define KRB5KRB_AP_ERR_BADDIRECTION -1765328337

#define KRB5KRB_AP_ERR_BADKEYVER -1765328340

#define KRB5KRB_AP_ERR_BADMATCH -1765328348

#define KRB5KRB_AP_ERR_BADORDER -1765328342

#define KRB5KRB_AP_ERR_BADSEQ -1765328335

#define KRB5KRB_AP_ERR_BADVERSION -1765328345

#define KRB5KRB_AP_ERR_IAKERB_KDC_NO_RESPONSE -1765328298

#define KRB5KRB_AP_ERR_IAKERB_KDC_NOT_FOUND -1765328299

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

#define KRB5PLACEHOLD_83 -1765328301

#define KRB5PLACEHOLD_84 -1765328300

#define KRB5PLACEHOLD_87 -1765328297

#define KRB5PLACEHOLD_88 -1765328296

#define KRB5PLACEHOLD_89 -1765328295

#define KRB5PLACEHOLD_90 -1765328294

#define KRB5PLACEHOLD_91 -1765328293

#define KRB5PLACEHOLD_92 -1765328292

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

#define KV5M_AUTHDATA_CONTEXT -1760647364

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

#define KV5M_FAST_ARMORED_REQ -1760647367

#define KV5M_FAST_REQ -1760647366

#define KV5M_FAST_RESPONSE -1760647365

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

#define TKT_FLG_ANONYMOUS 32768

#define TKT_FLG_ENC_PA_REP 65536

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

#define TRUE 1

#define VALID_INT_BITS 2147483647

#define VALID_UINT_BITS 4294967295

typedef struct _krb5_address _krb5_address, *P_krb5_address;

typedef krb5_int32 krb5_error_code;

typedef krb5_error_code krb5_magic;

typedef krb5_int32 krb5_addrtype;

struct _krb5_address {
    krb5_magic magic;
    krb5_addrtype addrtype;
    uint length;
    krb5_octet * contents;
};

typedef struct _krb5_ap_rep _krb5_ap_rep, *P_krb5_ap_rep;

typedef struct _krb5_enc_data _krb5_enc_data, *P_krb5_enc_data;

typedef struct _krb5_enc_data krb5_enc_data;

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

struct krb5_principal_data {
    krb5_magic magic;
    krb5_data realm;
    krb5_data * data;
    krb5_int32 length;
    krb5_int32 type;
};

struct _krb5_ticket {
    krb5_magic magic;
    krb5_principal server;
    krb5_enc_data enc_part;
    krb5_enc_tkt_part * enc_part2;
};

struct _krb5_transited {
    krb5_magic magic;
    krb5_octet tr_type;
    krb5_data tr_contents;
};

struct _krb5_ap_req {
    krb5_magic magic;
    krb5_flags ap_options;
    krb5_ticket * ticket;
    krb5_enc_data authenticator;
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

typedef struct _krb5_crypto_iov _krb5_crypto_iov, *P_krb5_crypto_iov;

typedef krb5_int32 krb5_cryptotype;

struct _krb5_crypto_iov {
    krb5_cryptotype flags;
    krb5_data data;
};

typedef struct _krb5_cryptosystem_entry _krb5_cryptosystem_entry, *P_krb5_cryptosystem_entry;

struct _krb5_cryptosystem_entry {
};

typedef struct _krb5_enc_kdc_rep_part _krb5_enc_kdc_rep_part, *P_krb5_enc_kdc_rep_part;

typedef uint krb5_msgtype;

typedef struct _krb5_last_req_entry _krb5_last_req_entry, *P_krb5_last_req_entry;

typedef struct _krb5_last_req_entry krb5_last_req_entry;

typedef struct _krb5_pa_data _krb5_pa_data, *P_krb5_pa_data;

typedef struct _krb5_pa_data krb5_pa_data;

typedef krb5_int32 krb5_preauthtype;

struct _krb5_last_req_entry {
    krb5_magic magic;
    krb5_int32 lr_type;
    krb5_timestamp value;
};

struct _krb5_pa_data {
    krb5_magic magic;
    krb5_preauthtype pa_type;
    uint length;
    krb5_octet * contents;
};

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
    krb5_pa_data * * enc_padata;
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

typedef struct _krb5_init_creds_context _krb5_init_creds_context, *P_krb5_init_creds_context;

struct _krb5_init_creds_context {
};

typedef struct _krb5_kdc_rep _krb5_kdc_rep, *P_krb5_kdc_rep;

typedef struct _krb5_enc_kdc_rep_part krb5_enc_kdc_rep_part;

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

typedef struct _krb5_pa_pac_req _krb5_pa_pac_req, *P_krb5_pa_pac_req;

struct _krb5_pa_pac_req {
    krb5_boolean include_pac;
};

typedef struct _krb5_pa_server_referral_data _krb5_pa_server_referral_data, *P_krb5_pa_server_referral_data;

struct _krb5_pa_server_referral_data {
    krb5_data * referred_realm;
    krb5_principal true_principal_name;
    krb5_principal requested_principal_name;
    krb5_timestamp referral_valid_until;
    krb5_checksum rep_cksum;
};

typedef struct _krb5_pa_svr_referral_data _krb5_pa_svr_referral_data, *P_krb5_pa_svr_referral_data;

struct _krb5_pa_svr_referral_data {
    krb5_principal principal;
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

typedef struct _krb5_tkt_creds_context _krb5_tkt_creds_context, *P_krb5_tkt_creds_context;

struct _krb5_tkt_creds_context {
};

typedef struct _krb5_typed_data _krb5_typed_data, *P_krb5_typed_data;

struct _krb5_typed_data {
    krb5_magic magic;
    krb5_int32 type;
    uint length;
    krb5_octet * data;
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

typedef enum enum_514 {
    KRB5_C_RANDSOURCE_EXTERNAL_PROTOCOL=4,
    KRB5_C_RANDSOURCE_MAX=5,
    KRB5_C_RANDSOURCE_OLDAPI=0,
    KRB5_C_RANDSOURCE_OSRAND=1,
    KRB5_C_RANDSOURCE_TIMING=3,
    KRB5_C_RANDSOURCE_TRUSTEDPARTY=2
} enum_514;

typedef struct error_table error_table, *Perror_table;

struct error_table {
};

typedef struct et_list et_list, *Pet_list;

struct et_list {
};

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

typedef struct _krb5_crypto_iov krb5_crypto_iov;

typedef struct _krb5_encrypt_block krb5_encrypt_block;

typedef struct _krb5_error krb5_error;

typedef void (* krb5_expire_callback_func)(krb5_context, void *, krb5_timestamp, krb5_timestamp, krb5_boolean);

typedef struct _krb5_get_init_creds_opt krb5_get_init_creds_opt;

typedef struct _krb5_gic_opt_pa_data krb5_gic_opt_pa_data;

typedef struct _krb5_init_creds_context * krb5_init_creds_context;

typedef short krb5_int16;

typedef struct _krb5_kdc_rep krb5_kdc_rep;

typedef struct _krb5_kdc_req krb5_kdc_req;

typedef struct krb5_key_st krb5_key_st, *Pkrb5_key_st;

typedef struct krb5_key_st * krb5_key;

struct krb5_key_st {
};

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

typedef struct _krb5_pa_pac_req krb5_pa_pac_req;

typedef struct _krb5_pa_server_referral_data krb5_pa_server_referral_data;

typedef struct _krb5_pa_svr_referral_data krb5_pa_svr_referral_data;

typedef struct krb5_pac_data krb5_pac_data, *Pkrb5_pac_data;

typedef struct krb5_pac_data * krb5_pac;

struct krb5_pac_data {
};

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

typedef struct _krb5_tkt_creds_context * krb5_tkt_creds_context;

typedef struct krb5_trace_info krb5_trace_info, *Pkrb5_trace_info;

typedef void (* krb5_trace_callback)(krb5_context, struct krb5_trace_info *, void *);

struct krb5_trace_info {
    char * message;
};

typedef struct _krb5_typed_data krb5_typed_data;

typedef ushort krb5_ui_2;

typedef struct _krb5_verify_init_creds_opt krb5_verify_init_creds_opt;

typedef struct krb5_ap_req_st krb5_ap_req_st, *Pkrb5_ap_req_st;

typedef struct stack_st_KRB5_TKTBODY stack_st_KRB5_TKTBODY, *Pstack_st_KRB5_TKTBODY;

typedef struct stack_st_KRB5_TKTBODY KRB5_TICKET;

typedef struct krb5_encdata_st krb5_encdata_st, *Pkrb5_encdata_st;

typedef struct krb5_encdata_st KRB5_ENCDATA;

struct krb5_encdata_st {
    ASN1_INTEGER * etype;
    ASN1_INTEGER * kvno;
    ASN1_OCTET_STRING * cipher;
};

struct stack_st_KRB5_TKTBODY {
    _STACK stack;
};

struct krb5_ap_req_st {
    ASN1_INTEGER * pvno;
    ASN1_INTEGER * msgtype;
    ASN1_BIT_STRING * apoptions;
    KRB5_TICKET * ticket;
    KRB5_ENCDATA * authenticator;
};

typedef struct stack_st_KRB5_APREQBODY stack_st_KRB5_APREQBODY, *Pstack_st_KRB5_APREQBODY;

typedef struct stack_st_KRB5_APREQBODY KRB5_APREQ;

struct stack_st_KRB5_APREQBODY {
    _STACK stack;
};

typedef struct krb5_ap_req_st KRB5_APREQBODY;

typedef struct krb5_authorization_st krb5_authorization_st, *Pkrb5_authorization_st;

typedef struct krb5_authorization_st KRB5_AUTHDATA;

struct krb5_authorization_st {
    ASN1_INTEGER * adtype;
    ASN1_OCTET_STRING * addata;
};

typedef struct stack_st_KRB5_AUTHENTBODY stack_st_KRB5_AUTHENTBODY, *Pstack_st_KRB5_AUTHENTBODY;

typedef struct stack_st_KRB5_AUTHENTBODY KRB5_AUTHENT;

struct stack_st_KRB5_AUTHENTBODY {
    _STACK stack;
};

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
    struct stack_st_ASN1_GENERALSTRING * namestring;
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

typedef struct stack_st_KRB5_AUTHDATA stack_st_KRB5_AUTHDATA, *Pstack_st_KRB5_AUTHDATA;

struct stack_st_KRB5_AUTHDATA {
    _STACK stack;
};

typedef struct stack_st_KRB5_CHECKSUM stack_st_KRB5_CHECKSUM, *Pstack_st_KRB5_CHECKSUM;

struct stack_st_KRB5_CHECKSUM {
    _STACK stack;
};

typedef struct stack_st_KRB5_ENCDATA stack_st_KRB5_ENCDATA, *Pstack_st_KRB5_ENCDATA;

struct stack_st_KRB5_ENCDATA {
    _STACK stack;
};

typedef struct stack_st_KRB5_ENCKEY stack_st_KRB5_ENCKEY, *Pstack_st_KRB5_ENCKEY;

struct stack_st_KRB5_ENCKEY {
    _STACK stack;
};

typedef struct stack_st_KRB5_PRINCNAME stack_st_KRB5_PRINCNAME, *Pstack_st_KRB5_PRINCNAME;

struct stack_st_KRB5_PRINCNAME {
    _STACK stack;
};

#define KRB5CHECKAUTH 1

#define KRB5SENDAUTH 1

#define KSSL_CLIENT 1

#define KSSL_CTX_ERR 1

#define KSSL_CTX_OK 0

#define KSSL_ERR_MAX 255

#define KSSL_KEYTAB 4

#define KSSL_NOMEM 2

#define KSSL_SERVER 2

#define KSSL_SERVICE 3

typedef struct kssl_err_st kssl_err_st, *Pkssl_err_st;

typedef struct kssl_err_st KSSL_ERR;

struct kssl_err_st {
    int reason;
    char text[256];
};

#define _LANGINFO_H 1

typedef enum enum_1301 {
    ABDAY_1=0,
    ABDAY_2=1,
    ABDAY_3=2,
    ABDAY_4=3,
    ABDAY_5=4,
    ABDAY_6=5,
    ABDAY_7=6,
    ABMON_1=14,
    ABMON_10=23,
    ABMON_11=24,
    ABMON_12=25,
    ABMON_2=15,
    ABMON_3=16,
    ABMON_4=17,
    ABMON_5=18,
    ABMON_6=19,
    ABMON_7=20,
    ABMON_8=21,
    ABMON_9=22,
    ALT_DIGITS=47,
    AM_STR=38,
    CODESET=147,
    DAY_1=7,
    DAY_2=8,
    DAY_3=9,
    DAY_4=10,
    DAY_5=11,
    DAY_6=12,
    DAY_7=13,
    D_FMT=41,
    D_T_FMT=40,
    ERA=44,
    ERA_D_FMT=46,
    ERA_D_T_FMT=48,
    ERA_T_FMT=49,
    MON_1=26,
    MON_10=35,
    MON_11=36,
    MON_12=37,
    MON_2=27,
    MON_3=28,
    MON_4=29,
    MON_5=30,
    MON_6=31,
    MON_7=32,
    MON_8=33,
    MON_9=34,
    PM_STR=39,
    RADIXCHAR=268,
    THOUSEP=270,
    T_FMT=42,
    T_FMT_AMPM=43,
    _DATE_FMT=108,
    _NL_ADDRESS_CODESET=306,
    _NL_ADDRESS_COUNTRY_AB2=297,
    _NL_ADDRESS_COUNTRY_AB3=298,
    _NL_ADDRESS_COUNTRY_CAR=299,
    _NL_ADDRESS_COUNTRY_ISBN=301,
    _NL_ADDRESS_COUNTRY_NAME=295,
    _NL_ADDRESS_COUNTRY_NUM=300,
    _NL_ADDRESS_COUNTRY_POST=296,
    _NL_ADDRESS_LANG_AB=303,
    _NL_ADDRESS_LANG_LIB=305,
    _NL_ADDRESS_LANG_NAME=302,
    _NL_ADDRESS_LANG_TERM=304,
    _NL_ADDRESS_POSTAL_FMT=294,
    _NL_COLLATE_CODESET=130,
    _NL_COLLATE_COLLSEQMB=128,
    _NL_COLLATE_COLLSEQWC=129,
    _NL_COLLATE_EXTRAMB=116,
    _NL_COLLATE_EXTRAWC=123,
    _NL_COLLATE_GAP1=118,
    _NL_COLLATE_GAP2=119,
    _NL_COLLATE_GAP3=120,
    _NL_COLLATE_INDIRECTMB=117,
    _NL_COLLATE_INDIRECTWC=124,
    _NL_COLLATE_NRULES=112,
    _NL_COLLATE_RULESETS=113,
    _NL_COLLATE_SYMB_EXTRAMB=127,
    _NL_COLLATE_SYMB_HASH_SIZEMB=125,
    _NL_COLLATE_SYMB_TABLEMB=126,
    _NL_COLLATE_TABLEMB=114,
    _NL_COLLATE_TABLEWC=121,
    _NL_COLLATE_WEIGHTMB=115,
    _NL_COLLATE_WEIGHTWC=122,
    _NL_CTYPE_CLASS=132,
    _NL_CTYPE_CLASS32=137,
    _NL_CTYPE_CLASS_NAMES=142,
    _NL_CTYPE_CLASS_OFFSET=150,
    _NL_CTYPE_CODESET_NAME=146,
    _NL_CTYPE_EXTRA_MAP_1=205,
    _NL_CTYPE_EXTRA_MAP_10=214,
    _NL_CTYPE_EXTRA_MAP_11=215,
    _NL_CTYPE_EXTRA_MAP_12=216,
    _NL_CTYPE_EXTRA_MAP_13=217,
    _NL_CTYPE_EXTRA_MAP_14=218,
    _NL_CTYPE_EXTRA_MAP_2=206,
    _NL_CTYPE_EXTRA_MAP_3=207,
    _NL_CTYPE_EXTRA_MAP_4=208,
    _NL_CTYPE_EXTRA_MAP_5=209,
    _NL_CTYPE_EXTRA_MAP_6=210,
    _NL_CTYPE_EXTRA_MAP_7=211,
    _NL_CTYPE_EXTRA_MAP_8=212,
    _NL_CTYPE_EXTRA_MAP_9=213,
    _NL_CTYPE_GAP1=134,
    _NL_CTYPE_GAP2=136,
    _NL_CTYPE_GAP3=138,
    _NL_CTYPE_GAP4=139,
    _NL_CTYPE_GAP5=140,
    _NL_CTYPE_GAP6=141,
    _NL_CTYPE_INDIGITS0_MB=153,
    _NL_CTYPE_INDIGITS0_WC=164,
    _NL_CTYPE_INDIGITS1_MB=154,
    _NL_CTYPE_INDIGITS1_WC=165,
    _NL_CTYPE_INDIGITS2_MB=155,
    _NL_CTYPE_INDIGITS2_WC=166,
    _NL_CTYPE_INDIGITS3_MB=156,
    _NL_CTYPE_INDIGITS3_WC=167,
    _NL_CTYPE_INDIGITS4_MB=157,
    _NL_CTYPE_INDIGITS4_WC=168,
    _NL_CTYPE_INDIGITS5_MB=158,
    _NL_CTYPE_INDIGITS5_WC=169,
    _NL_CTYPE_INDIGITS6_MB=159,
    _NL_CTYPE_INDIGITS6_WC=170,
    _NL_CTYPE_INDIGITS7_MB=160,
    _NL_CTYPE_INDIGITS7_WC=171,
    _NL_CTYPE_INDIGITS8_MB=161,
    _NL_CTYPE_INDIGITS8_WC=172,
    _NL_CTYPE_INDIGITS9_MB=162,
    _NL_CTYPE_INDIGITS9_WC=173,
    _NL_CTYPE_INDIGITS_MB_LEN=152,
    _NL_CTYPE_INDIGITS_WC_LEN=163,
    _NL_CTYPE_MAP_NAMES=143,
    _NL_CTYPE_MAP_OFFSET=151,
    _NL_CTYPE_MAP_TO_NONASCII=203,
    _NL_CTYPE_MB_CUR_MAX=145,
    _NL_CTYPE_NONASCII_CASE=204,
    _NL_CTYPE_OUTDIGIT0_MB=174,
    _NL_CTYPE_OUTDIGIT0_WC=184,
    _NL_CTYPE_OUTDIGIT1_MB=175,
    _NL_CTYPE_OUTDIGIT1_WC=185,
    _NL_CTYPE_OUTDIGIT2_MB=176,
    _NL_CTYPE_OUTDIGIT2_WC=186,
    _NL_CTYPE_OUTDIGIT3_MB=177,
    _NL_CTYPE_OUTDIGIT3_WC=187,
    _NL_CTYPE_OUTDIGIT4_MB=178,
    _NL_CTYPE_OUTDIGIT4_WC=188,
    _NL_CTYPE_OUTDIGIT5_MB=179,
    _NL_CTYPE_OUTDIGIT5_WC=189,
    _NL_CTYPE_OUTDIGIT6_MB=180,
    _NL_CTYPE_OUTDIGIT6_WC=190,
    _NL_CTYPE_OUTDIGIT7_MB=181,
    _NL_CTYPE_OUTDIGIT7_WC=191,
    _NL_CTYPE_OUTDIGIT8_MB=182,
    _NL_CTYPE_OUTDIGIT8_WC=192,
    _NL_CTYPE_OUTDIGIT9_MB=183,
    _NL_CTYPE_OUTDIGIT9_WC=193,
    _NL_CTYPE_TOLOWER=135,
    _NL_CTYPE_TOLOWER32=149,
    _NL_CTYPE_TOUPPER=133,
    _NL_CTYPE_TOUPPER32=148,
    _NL_CTYPE_TRANSLIT_DEFAULT_MISSING=200,
    _NL_CTYPE_TRANSLIT_DEFAULT_MISSING_LEN=199,
    _NL_CTYPE_TRANSLIT_FROM_IDX=195,
    _NL_CTYPE_TRANSLIT_FROM_TBL=196,
    _NL_CTYPE_TRANSLIT_IGNORE=202,
    _NL_CTYPE_TRANSLIT_IGNORE_LEN=201,
    _NL_CTYPE_TRANSLIT_TAB_SIZE=194,
    _NL_CTYPE_TRANSLIT_TO_IDX=197,
    _NL_CTYPE_TRANSLIT_TO_TBL=198,
    _NL_CTYPE_WIDTH=144,
    _NL_IDENTIFICATION_ABBREVIATION=328,
    _NL_IDENTIFICATION_ADDRESS=319,
    _NL_IDENTIFICATION_APPLICATION=327,
    _NL_IDENTIFICATION_AUDIENCE=326,
    _NL_IDENTIFICATION_CATEGORY=331,
    _NL_IDENTIFICATION_CODESET=332,
    _NL_IDENTIFICATION_CONTACT=320,
    _NL_IDENTIFICATION_DATE=330,
    _NL_IDENTIFICATION_EMAIL=321,
    _NL_IDENTIFICATION_FAX=323,
    _NL_IDENTIFICATION_LANGUAGE=324,
    _NL_IDENTIFICATION_REVISION=329,
    _NL_IDENTIFICATION_SOURCE=318,
    _NL_IDENTIFICATION_TEL=322,
    _NL_IDENTIFICATION_TERRITORY=325,
    _NL_IDENTIFICATION_TITLE=317,
    _NL_MEASUREMENT_CODESET=315,
    _NL_MEASUREMENT_MEASUREMENT=314,
    _NL_MESSAGES_CODESET=280,
    _NL_MONETARY_CODESET=265,
    _NL_MONETARY_CONVERSION_RATE=262,
    _NL_MONETARY_CRNCYSTR=235,
    _NL_MONETARY_DECIMAL_POINT_WC=263,
    _NL_MONETARY_DUO_CURRENCY_SYMBOL=243,
    _NL_MONETARY_DUO_FRAC_DIGITS=245,
    _NL_MONETARY_DUO_INT_CURR_SYMBOL=242,
    _NL_MONETARY_DUO_INT_FRAC_DIGITS=244,
    _NL_MONETARY_DUO_INT_N_CS_PRECEDES=252,
    _NL_MONETARY_DUO_INT_N_SEP_BY_SPACE=253,
    _NL_MONETARY_DUO_INT_N_SIGN_POSN=257,
    _NL_MONETARY_DUO_INT_P_CS_PRECEDES=250,
    _NL_MONETARY_DUO_INT_P_SEP_BY_SPACE=251,
    _NL_MONETARY_DUO_INT_P_SIGN_POSN=256,
    _NL_MONETARY_DUO_N_CS_PRECEDES=248,
    _NL_MONETARY_DUO_N_SEP_BY_SPACE=249,
    _NL_MONETARY_DUO_N_SIGN_POSN=255,
    _NL_MONETARY_DUO_P_CS_PRECEDES=246,
    _NL_MONETARY_DUO_P_SEP_BY_SPACE=247,
    _NL_MONETARY_DUO_P_SIGN_POSN=254,
    _NL_MONETARY_DUO_VALID_FROM=260,
    _NL_MONETARY_DUO_VALID_TO=261,
    _NL_MONETARY_THOUSANDS_SEP_WC=264,
    _NL_MONETARY_UNO_VALID_FROM=258,
    _NL_MONETARY_UNO_VALID_TO=259,
    _NL_NAME_CODESET=292,
    _NL_NAME_NAME_FMT=286,
    _NL_NAME_NAME_GEN=287,
    _NL_NAME_NAME_MISS=290,
    _NL_NAME_NAME_MR=288,
    _NL_NAME_NAME_MRS=289,
    _NL_NAME_NAME_MS=291,
    _NL_NUM=334,
    _NL_NUMERIC_CODESET=274,
    _NL_NUMERIC_DECIMAL_POINT_WC=272,
    _NL_NUMERIC_THOUSANDS_SEP_WC=273,
    _NL_NUM_LC_ADDRESS=307,
    _NL_NUM_LC_COLLATE=131,
    _NL_NUM_LC_CTYPE=219,
    _NL_NUM_LC_IDENTIFICATION=333,
    _NL_NUM_LC_MEASUREMENT=316,
    _NL_NUM_LC_MESSAGES=281,
    _NL_NUM_LC_MONETARY=266,
    _NL_NUM_LC_NAME=293,
    _NL_NUM_LC_NUMERIC=275,
    _NL_NUM_LC_PAPER=285,
    _NL_NUM_LC_TELEPHONE=313,
    _NL_NUM_LC_TIME=111,
    _NL_PAPER_CODESET=284,
    _NL_PAPER_HEIGHT=282,
    _NL_PAPER_WIDTH=283,
    _NL_TELEPHONE_CODESET=312,
    _NL_TELEPHONE_INT_PREFIX=311,
    _NL_TELEPHONE_INT_SELECT=310,
    _NL_TELEPHONE_TEL_DOM_FMT=309,
    _NL_TELEPHONE_TEL_INT_FMT=308,
    _NL_TIME_CAL_DIRECTION=106,
    _NL_TIME_CODESET=110,
    _NL_TIME_ERA_ENTRIES=51,
    _NL_TIME_ERA_NUM_ENTRIES=50,
    _NL_TIME_FIRST_WEEKDAY=104,
    _NL_TIME_FIRST_WORKDAY=105,
    _NL_TIME_TIMEZONE=107,
    _NL_TIME_WEEK_1STDAY=102,
    _NL_TIME_WEEK_1STWEEK=103,
    _NL_TIME_WEEK_NDAYS=101,
    _NL_WABDAY_1=52,
    _NL_WABDAY_2=53,
    _NL_WABDAY_3=54,
    _NL_WABDAY_4=55,
    _NL_WABDAY_5=56,
    _NL_WABDAY_6=57,
    _NL_WABDAY_7=58,
    _NL_WABMON_1=66,
    _NL_WABMON_10=75,
    _NL_WABMON_11=76,
    _NL_WABMON_12=77,
    _NL_WABMON_2=67,
    _NL_WABMON_3=68,
    _NL_WABMON_4=69,
    _NL_WABMON_5=70,
    _NL_WABMON_6=71,
    _NL_WABMON_7=72,
    _NL_WABMON_8=73,
    _NL_WABMON_9=74,
    _NL_WALT_DIGITS=98,
    _NL_WAM_STR=90,
    _NL_WDAY_1=59,
    _NL_WDAY_2=60,
    _NL_WDAY_3=61,
    _NL_WDAY_4=62,
    _NL_WDAY_5=63,
    _NL_WDAY_6=64,
    _NL_WDAY_7=65,
    _NL_WD_FMT=93,
    _NL_WD_T_FMT=92,
    _NL_WERA_D_FMT=97,
    _NL_WERA_D_T_FMT=99,
    _NL_WERA_T_FMT=100,
    _NL_WERA_YEAR=96,
    _NL_WMON_1=78,
    _NL_WMON_10=87,
    _NL_WMON_11=88,
    _NL_WMON_12=89,
    _NL_WMON_2=79,
    _NL_WMON_3=80,
    _NL_WMON_4=81,
    _NL_WMON_5=82,
    _NL_WMON_6=83,
    _NL_WMON_7=84,
    _NL_WMON_8=85,
    _NL_WMON_9=86,
    _NL_WPM_STR=91,
    _NL_WT_FMT=94,
    _NL_WT_FMT_AMPM=95,
    _NL_W_DATE_FMT=109,
    __CURRENCY_SYMBOL=221,
    __DECIMAL_POINT=267,
    __ERA_YEAR=45,
    __FRAC_DIGITS=228,
    __GROUPING=271,
    __INT_CURR_SYMBOL=220,
    __INT_FRAC_DIGITS=227,
    __INT_N_CS_PRECEDES=238,
    __INT_N_SEP_BY_SPACE=239,
    __INT_N_SIGN_POSN=241,
    __INT_P_CS_PRECEDES=236,
    __INT_P_SEP_BY_SPACE=237,
    __INT_P_SIGN_POSN=240,
    __MON_DECIMAL_POINT=222,
    __MON_GROUPING=224,
    __MON_THOUSANDS_SEP=223,
    __NEGATIVE_SIGN=226,
    __NOEXPR=277,
    __NOSTR=279,
    __N_CS_PRECEDES=231,
    __N_SEP_BY_SPACE=232,
    __N_SIGN_POSN=234,
    __POSITIVE_SIGN=225,
    __P_CS_PRECEDES=229,
    __P_SEP_BY_SPACE=230,
    __P_SIGN_POSN=233,
    __THOUSANDS_SEP=269,
    __YESEXPR=276,
    __YESSTR=278
} enum_1301;

#define LH_LOAD_MULT 256

typedef struct lhash_st lhash_st, *Plhash_st;

typedef struct lhash_st _LHASH;

typedef struct lhash_node_st lhash_node_st, *Plhash_node_st;

typedef struct lhash_node_st LHASH_NODE;

typedef int (* LHASH_COMP_FN_TYPE)(void *, void *);

typedef ulong (* LHASH_HASH_FN_TYPE)(void *);

struct lhash_node_st {
    void * data;
    struct lhash_node_st * next;
    ulong hash;
};

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

typedef void (* LHASH_DOALL_ARG_FN_TYPE)(void *, void *);

typedef void (* LHASH_DOALL_FN_TYPE)(void *);

typedef struct lhash_st_OPENSSL_CSTRING lhash_st_OPENSSL_CSTRING, *Plhash_st_OPENSSL_CSTRING;

struct lhash_st_OPENSSL_CSTRING {
    int dummy;
};

typedef struct lhash_st_OPENSSL_STRING lhash_st_OPENSSL_STRING, *Plhash_st_OPENSSL_STRING;

struct lhash_st_OPENSSL_STRING {
    int dummy;
};

#define _LIBGEN_H 1

#define _IO_BAD_SEEN 16384

#define _IO_BOOLALPHA 65536

#define _IO_BUFSIZ 8192

#define _IO_CURRENTLY_PUTTING 2048

#define _IO_DEC 16

#define _IO_DELETE_DONT_CLOSE 64

#define _IO_DONT_CLOSE 32768

#define _IO_EOF_SEEN 16

#define _IO_ERR_SEEN 32

#define _IO_FIXED 4096

#define _IO_FLAGS2_MMAP 1

#define _IO_FLAGS2_NOTCANCEL 2

#define _IO_FLAGS2_USER_WBUF 8

#define _IO_HAVE_SYS_WAIT 1

#define _IO_HEX 64

#define _IO_IN_BACKUP 256

#define _IO_INTERNAL 8

#define _IO_IS_APPENDING 4096

#define _IO_IS_FILEBUF 8192

#define _IO_LEFT 2

#define _IO_LINE_BUF 512

#define _IO_LINKED 128

#define _IO_MAGIC 4222418944

#define _IO_MAGIC_MASK 4294901760

#define _IO_NO_READS 4

#define _IO_NO_WRITES 8

#define _IO_OCT 32

#define _IO_RIGHT 4

#define _IO_SCIENTIFIC 2048

#define _IO_SHOWBASE 128

#define _IO_SHOWPOINT 256

#define _IO_SHOWPOS 1024

#define _IO_SKIPWS 1

#define _IO_STDIO 16384

#define _IO_TIED_PUT_GET 1024

#define _IO_UNBUFFERED 2

#define _IO_UNIFIED_JUMPTABLES 1

#define _IO_UNITBUF 8192

#define _IO_UPPERCASE 512

#define _IO_USER_BUF 1

#define _IO_USER_LOCK 32768

#define _IOS_APPEND 8

#define _IOS_ATEND 4

#define _IOS_BIN 128

#define _IOS_INPUT 1

#define _IOS_NOCREATE 32

#define _IOS_NOREPLACE 64

#define _IOS_OUTPUT 2

#define _IOS_TRUNC 16

#define _OLD_STDIO_MAGIC 4206624768

#define EOF -1

typedef enum __codecvt_result {
    __codecvt_error=2,
    __codecvt_noconv=3,
    __codecvt_ok=0,
    __codecvt_partial=1
} __codecvt_result;

typedef int (__io_close_fn)(void *);

typedef __ssize_t (__io_read_fn)(void *, char *, size_t);

typedef int (__io_seek_fn)(void *, __off64_t *, int);

typedef __ssize_t (__io_write_fn)(void *, char *, size_t);

typedef struct _IO_cookie_file _IO_cookie_file, *P_IO_cookie_file;

struct _IO_cookie_file {
};

typedef struct _IO_cookie_io_functions_t _IO_cookie_io_functions_t, *P_IO_cookie_io_functions_t;

struct _IO_cookie_io_functions_t {
    __io_read_fn * read;
    __io_write_fn * write;
    __io_seek_fn * seek;
    __io_close_fn * close;
};

typedef struct _IO_FILE_plus _IO_FILE_plus, *P_IO_FILE_plus;

struct _IO_FILE_plus {
};

typedef struct _IO_jump_t _IO_jump_t, *P_IO_jump_t;

struct _IO_jump_t {
};

typedef void _IO_lock_t;

typedef struct _IO_marker _IO_marker, *P_IO_marker;

typedef struct _IO_FILE _IO_FILE, *P_IO_FILE;

struct _IO_marker {
    struct _IO_marker * _next;
    struct _IO_FILE * _sbuf;
    int _pos;
};

struct _IO_FILE {
    int _flags;
    char * _IO_read_ptr;
    char * _IO_read_end;
    char * _IO_read_base;
    char * _IO_write_base;
    char * _IO_write_ptr;
    char * _IO_write_end;
    char * _IO_buf_base;
    char * _IO_buf_end;
    char * _IO_save_base;
    char * _IO_backup_base;
    char * _IO_save_end;
    struct _IO_marker * _markers;
    struct _IO_FILE * _chain;
    int _fileno;
    int _flags2;
    __off_t _old_offset;
    ushort _cur_column;
    char _vtable_offset;
    char _shortbuf[1];
    _IO_lock_t * _lock;
    __off64_t _offset;
    void * __pad1;
    void * __pad2;
    void * __pad3;
    void * __pad4;
    size_t __pad5;
    int _mode;
    char _unused2[15];
};

typedef __io_close_fn cookie_close_function_t;

typedef struct _IO_cookie_io_functions_t cookie_io_functions_t;

typedef __io_read_fn cookie_read_function_t;

typedef __io_seek_fn cookie_seek_function_t;

typedef __io_write_fn cookie_write_function_t;

#define _LIBC_LIMITS_H_ 1

#define _LIMITS_H 1

#define CHAR_BIT 8

#define CHAR_MAX 127

#define CHAR_MIN -128

#define INT_MAX 2147483647

#define INT_MIN -2147483648

#define LLONG_MAX 9223372036854775807

#define LONG_MAX 2147483647

#define LONG_MIN -2147483648

#define MAX_CANON 255

#define MAX_INPUT 255

#define MB_LEN_MAX 16

#define NAME_MAX 255

#define NGROUPS_MAX 65536

#define PATH_MAX 4096

#define PIPE_BUF 4096

#define RTSIG_MAX 32

#define SCHAR_MAX 127

#define SCHAR_MIN -128

#define SHRT_MAX 32767

#define SHRT_MIN -32768

#define UCHAR_MAX 255

#define UINT_MAX 4294967295

#define ULONG_MAX 4294967295

#define USHRT_MAX 65535

#define XATTR_LIST_MAX 65536

#define XATTR_NAME_MAX 255

#define XATTR_SIZE_MAX 65536

#define _POSIX_THREAD_DESTRUCTOR_ITERATIONS 4

#define _POSIX_THREAD_KEYS_MAX 128

#define _POSIX_THREAD_THREADS_MAX 64

#define AIO_PRIO_DELTA_MAX 20

#define DELAYTIMER_MAX 2147483647

#define HOST_NAME_MAX 64

#define LOGIN_NAME_MAX 256

#define MQ_PRIO_MAX 32768

#define PTHREAD_DESTRUCTOR_ITERATIONS 4

#define PTHREAD_KEYS_MAX 1024

#define PTHREAD_STACK_MIN 16384

#define SEM_VALUE_MAX 2147483647

#define TTY_NAME_MAX 32

#define _BITS_LOCALE_H 1

#define _LOCALE_H 1

#define LC_GLOBAL_LOCALE -1

typedef enum enum_1300 {
    __LC_ADDRESS=9,
    __LC_ALL=6,
    __LC_COLLATE=3,
    __LC_CTYPE=0,
    __LC_IDENTIFICATION=12,
    __LC_MEASUREMENT=11,
    __LC_MESSAGES=5,
    __LC_MONETARY=4,
    __LC_NAME=8,
    __LC_NUMERIC=1,
    __LC_PAPER=7,
    __LC_TELEPHONE=10,
    __LC_TIME=2
} enum_1300;

typedef struct lconv lconv, *Plconv;

struct lconv {
    char * decimal_point;
    char * thousands_sep;
    char * grouping;
    char * int_curr_symbol;
    char * currency_symbol;
    char * mon_decimal_point;
    char * mon_thousands_sep;
    char * mon_grouping;
    char * positive_sign;
    char * negative_sign;
    char int_frac_digits;
    char frac_digits;
    char p_cs_precedes;
    char p_sep_by_space;
    char n_cs_precedes;
    char n_sep_by_space;
    char p_sign_posn;
    char n_sign_posn;
    char int_p_cs_precedes;
    char int_p_sep_by_space;
    char int_n_cs_precedes;
    char int_n_sep_by_space;
    char int_p_sign_posn;
    char int_n_sign_posn;
};

#define _MATH_H 1

#define DOMAIN 1

#define MATH_ERREXCEPT 2

#define math_errhandling 3

#define MATH_ERRNO 1

#define OVERFLOW 3

#define PLOSS 6

#define SING 2

#define TLOSS 5

#define UNDERFLOW 4

typedef enum enum_1605 {
    _IEEE_=0,
    _ISOC_=4,
    _POSIX_=3,
    _SVID_=1,
    _XOPEN_=2
} enum_1605;

typedef enum enum_1605 _LIB_VERSION_TYPE;

typedef enum enum_1604 {
    FP_INFINITE=1,
    FP_NAN=0,
    FP_NORMAL=4,
    FP_SUBNORMAL=3,
    FP_ZERO=2
} enum_1604;

typedef struct exception exception, *Pexception;

struct exception {
    int type;
    char * name;
    double arg1;
    double arg2;
    double retval;
};

#define _MATH_H_MATHDEF 1

#define FP_ILOGB0 -2147483648

#define FP_ILOGBNAN -2147483648

typedef double double_t;

typedef double float_t;

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

#define _SYS_MMAN_H 1

#define MADV_DODUMP 17

#define MADV_DOFORK 11

#define MADV_DONTDUMP 16

#define MADV_DONTFORK 10

#define MADV_DONTNEED 4

#define MADV_HWPOISON 100

#define MADV_MERGEABLE 12

#define MADV_NORMAL 0

#define MADV_RANDOM 1

#define MADV_REMOVE 9

#define MADV_SEQUENTIAL 2

#define MADV_UNMERGEABLE 13

#define MADV_WILLNEED 3

#define MAP_32BIT 64

#define MAP_ANON 32

#define MAP_ANONYMOUS 32

#define MAP_DENYWRITE 2048

#define MAP_EXECUTABLE 4096

#define MAP_FAILED -1

#define MAP_FILE 0

#define MAP_FIXED 16

#define MAP_GROWSDOWN 256

#define MAP_HUGETLB 262144

#define MAP_LOCKED 8192

#define MAP_NONBLOCK 65536

#define MAP_NORESERVE 16384

#define MAP_POPULATE 32768

#define MAP_PRIVATE 2

#define MAP_SHARED 1

#define MAP_STACK 131072

#define MAP_TYPE 15

#define MCL_CURRENT 1

#define MCL_FUTURE 2

#define MREMAP_FIXED 2

#define MREMAP_MAYMOVE 1

#define MS_ASYNC 1

#define MS_INVALIDATE 2

#define MS_SYNC 4

#define POSIX_MADV_DONTNEED 4

#define POSIX_MADV_NORMAL 0

#define POSIX_MADV_RANDOM 1

#define POSIX_MADV_SEQUENTIAL 2

#define POSIX_MADV_WILLNEED 3

#define PROT_EXEC 4

#define PROT_GROWSDOWN 16777216

#define PROT_GROWSUP 33554432

#define PROT_NONE 0

#define PROT_READ 1

#define PROT_WRITE 2

#define _MONETARY_H 1

#define _SYS_MOUNT_H 1

#define BLOCK_SIZE 1024

#define BLOCK_SIZE_BITS 10

#define FHSIZE 32

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

#define MS_MGC_MSK 4294901760

#define MS_MGC_VAL 3236757504

typedef union _union_2277 _union_2277, *P_union_2277;

typedef char fhandle[32];

union _union_2277 {
    fhandle fhs_fhandle;
};

typedef char * dirpath;

typedef enum enum_1661 {
    MS_ACTIVE=1073741824,
    MS_BIND=4096,
    MS_DIRSYNC=128,
    MS_I_VERSION=8388608,
    MS_KERNMOUNT=4194304,
    MS_MANDLOCK=64,
    MS_MOVE=8192,
    MS_NOATIME=1024,
    MS_NODEV=4,
    MS_NODIRATIME=2048,
    MS_NOEXEC=8,
    MS_NOSUID=2,
    MS_NOUSER=-2147483648,
    MS_POSIXACL=65536,
    MS_PRIVATE=262144,
    MS_RDONLY=1,
    MS_REC=16384,
    MS_RELATIME=2097152,
    MS_REMOUNT=32,
    MS_SHARED=1048576,
    MS_SILENT=32768,
    MS_SLAVE=524288,
    MS_STRICTATIME=16777216,
    MS_SYNCHRONOUS=16,
    MS_UNBINDABLE=131072
} enum_1661;

typedef enum enum_1662 {
    MNT_DETACH=2,
    MNT_EXPIRE=4,
    MNT_FORCE=1,
    UMOUNT_NOFOLLOW=8
} enum_1662;

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

typedef struct fhstatus fhstatus, *Pfhstatus;

struct fhstatus {
    u_int fhs_status;
    union _union_2277 fhstatus_u;
};

typedef struct mountbody mountbody, *Pmountbody;

typedef struct mountbody * mountlist;

struct mountbody {
    name ml_hostname;
    dirpath ml_directory;
    mountlist ml_next;
};

#define _MQUEUE_H 1

typedef struct mq_attr mq_attr, *Pmq_attr;

struct mq_attr {
    long mq_flags;
    long mq_maxmsg;
    long mq_msgsize;
    long mq_curmsgs;
    long __pad[4];
};

typedef int mqd_t;

typedef struct msgbuf msgbuf, *Pmsgbuf;

struct msgbuf {
    long mtype;
    char mtext[1];
};

#define MSG_EXCEPT 8192

#define MSG_INFO 12

#define MSG_NOERROR 4096

#define MSG_STAT 11

typedef struct msginfo msginfo, *Pmsginfo;

struct msginfo {
    int msgpool;
    int msgmap;
    int msgmax;
    int msgmnb;
    int msgmni;
    int msgssz;
    int msgtql;
    ushort msgseg;
};

typedef ulong msglen_t;

typedef ulong msgqnum_t;

typedef struct msqid_ds msqid_ds, *Pmsqid_ds;

struct msqid_ds {
    struct ipc_perm msg_perm;
    __time_t msg_stime;
    ulong __unused1;
    __time_t msg_rtime;
    ulong __unused2;
    __time_t msg_ctime;
    ulong __unused3;
    ulong __msg_cbytes;
    msgqnum_t msg_qnum;
    msglen_t msg_qbytes;
    __pid_t msg_lspid;
    __pid_t msg_lrpid;
    ulong __unused4;
    ulong __unused5;
};

#define _SYS_MTIO_H 1

#define MT_ISARCHIVE_2060L 9

#define MT_ISARCHIVE_2150L 8

#define MT_ISARCHIVE_5945L2 4

#define MT_ISARCHIVE_VP60I 7

#define MT_ISARCHIVESC499 10

#define MT_ISCMSJ500 5

#define MT_ISDDS1 81

#define MT_ISDDS2 82

#define MT_ISEVEREX_FT40A 50

#define MT_ISFTAPE_FLAG 8388608

#define MT_ISFTAPE_UNKNOWN 8388608

#define MT_ISQIC02 2

#define MT_ISQIC02_ALL_FEATURES 15

#define MT_ISSCSI1 113

#define MT_ISSCSI2 114

#define MT_ISTDC3610 6

#define MT_ISTEAC_MT2ST 18

#define MT_ISUNKNOWN 1

#define MT_ISWT5099EEN24 17

#define MT_ISWT5150 3

#define MT_ST_ASYNC_WRITES 2

#define MT_ST_AUTO_LOCK 64

#define MT_ST_BLKSIZE_MASK 16777215

#define MT_ST_BLKSIZE_SHIFT 0

#define MT_ST_BOOLEANS 268435456

#define MT_ST_BUFFER_WRITES 1

#define MT_ST_CAN_BSR 256

#define MT_ST_CAN_PARTITIONS 1024

#define MT_ST_CLEAR_DEFAULT 1048575

#define MT_ST_CLEARBOOLEANS 1073741824

#define MT_ST_DEBUGGING 8

#define MT_ST_DEF_BLKSIZE 1342177280

#define MT_ST_DEF_COMPRESSION 1612709888

#define MT_ST_DEF_DENSITY 1611661312

#define MT_ST_DEF_DRVBUFFER 1613758464

#define MT_ST_DEF_OPTIONS 1610612736

#define MT_ST_DEF_WRITES 128

#define MT_ST_DENSITY_MASK 4278190080

#define MT_ST_DENSITY_SHIFT 24

#define MT_ST_FAST_MTEOM 32

#define MT_ST_HPLOADER_OFFSET 10000

#define MT_ST_NO_BLKLIMS 512

#define MT_ST_OPTIONS 4026531840

#define MT_ST_READ_AHEAD 4

#define MT_ST_SCSI2LOGICAL 2048

#define MT_ST_SETBOOLEANS 805306368

#define MT_ST_SOFTERR_MASK 65535

#define MT_ST_SOFTERR_SHIFT 0

#define MT_ST_TWO_FM 16

#define MT_ST_WRITE_THRESHOLD 536870912

#define MTBSF 2

#define MTBSFM 10

#define MTBSR 4

#define MTBSS 26

#define MTCOMPRESSION 32

#define MTEOM 12

#define MTERASE 13

#define MTFSF 1

#define MTFSFM 11

#define MTFSR 3

#define MTFSS 25

#define MTLOAD 30

#define MTLOCK 28

#define MTMKPART 34

#define MTNOP 8

#define MTOFFL 7

#define MTRAS1 14

#define MTRAS2 15

#define MTRAS3 16

#define MTRESET 0

#define MTRETEN 9

#define MTREW 6

#define MTSEEK 22

#define MTSETBLK 20

#define MTSETDENSITY 21

#define MTSETDRVBUFFER 24

#define MTSETPART 33

#define MTTELL 23

#define MTUNLOAD 31

#define MTUNLOCK 29

#define MTWEOF 5

#define MTWSM 27

typedef union anon__struct_1667_bitfield_1 anon__struct_1667_bitfield_1, *Panon__struct_1667_bitfield_1;

union anon__struct_1667_bitfield_1 {
    uint have_dens:1; /* : bits 0 */
    uint have_bsf:1; /* : bits 1 */
    uint have_fsr:1; /* : bits 2 */
    uint have_bsr:1; /* : bits 3 */
    uint have_eod:1; /* : bits 4 */
    uint have_seek:1; /* : bits 5 */
    uint have_tell:1; /* : bits 6 */
    uint have_ras1:1; /* : bits 7 */
    uint have_ras2:1; /* : bits 8 */
    uint have_ras3:1; /* : bits 9 */
    uint have_qfa:1; /* : bits 10 */
    uint pad1:5; /* : bits 11-15 */
};

typedef struct mt_tape_info mt_tape_info, *Pmt_tape_info;

struct mt_tape_info {
    long t_type;
    char * t_name;
};

typedef struct mtconfiginfo mtconfiginfo, *Pmtconfiginfo;

struct mtconfiginfo {
    long mt_type;
    long ifc_type;
    ushort irqnr;
    ushort dmanr;
    ushort port;
    ulong debug;
    union anon__struct_1667_bitfield_1 field_0x14;
    char reserved[10];
};

typedef struct mtget mtget, *Pmtget;

typedef int __daddr_t;

struct mtget {
    long mt_type;
    long mt_resid;
    long mt_dsreg;
    long mt_gstat;
    long mt_erreg;
    __daddr_t mt_fileno;
    __daddr_t mt_blkno;
};

typedef struct mtop mtop, *Pmtop;

struct mtop {
    short mt_op;
    int mt_count;
};

typedef struct mtpos mtpos, *Pmtpos;

struct mtpos {
    long mt_blkno;
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

#define NS_MAXMSG 65535

#define NS_MD5RSA_MAX_BASE64 10928

#define NS_MD5RSA_MAX_BITS 4096

#define NS_MD5RSA_MAX_BYTES 8195

#define NS_MD5RSA_MAX_SIZE 512

#define NS_MD5RSA_MIN_BITS 512

#define NS_MD5RSA_MIN_SIZE 64

#define NS_NXT_BITS 8

#define NS_NXT_MAX 127

#define NS_OPT_DNSSEC_OK 32768

#define NS_OPT_NSID 3

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

typedef enum __ns_sect ns_sect;

struct __ns_msg {
    u_char * _msg;
    u_char * * _eom;
    u_int16_t _id;
    u_int16_t _flags;
    ns_sect _sect;
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
    ns_t_apl=42,
    ns_t_atma=34,
    ns_t_axfr=252,
    ns_t_cert=37,
    ns_t_cname=5,
    ns_t_dname=39,
    ns_t_dnskey=48,
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
    ns_t_nsec=47,
    ns_t_null=10,
    ns_t_nxt=30,
    ns_t_opt=41,
    ns_t_ptr=12,
    ns_t_px=26,
    ns_t_rp=17,
    ns_t_rrsig=46,
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

typedef struct _ns_flagdata _ns_flagdata, *P_ns_flagdata;

struct _ns_flagdata {
    int mask;
    int shift;
};

typedef struct dst_key dst_key, *Pdst_key;

struct dst_key {
};

typedef enum __ns_cert_types ns_cert_types;

typedef enum __ns_class ns_class;

typedef enum __ns_flag ns_flag;

typedef enum __ns_key_types ns_key_types;

typedef struct __ns_msg ns_msg;

typedef enum __ns_opcode ns_opcode;

typedef enum __ns_rcode ns_rcode;

typedef struct __ns_rr ns_rr;

typedef struct ns_tcp_tsig_state ns_tcp_tsig_state, *Pns_tcp_tsig_state;

struct ns_tcp_tsig_state {
    int counter;
    struct dst_key * key;
    void * ctx;
    uchar sig[512];
    int siglen;
};

typedef struct ns_tsig_key ns_tsig_key, *Pns_tsig_key;

struct ns_tsig_key {
    char name[1025];
    char alg[1025];
    uchar * data;
    int len;
};

typedef enum __ns_type ns_type;

typedef enum __ns_update_operation ns_update_operation;

#define __BIND 19950621

#define HFIXEDSZ 12

#define IN6ADDRSZ 16

#define INADDRSZ 4

#define INDIR_MASK 192

#define INT16SZ 2

#define INT32SZ 4

#define INT8SZ 1

#define MAXCDNAME 255

#define MAXDNAME 1025

#define MAXLABEL 63

#define NAMESERVER_PORT 53

#define PACKETSZ 512

#define QFIXEDSZ 4

#define RRFIXEDSZ 10

typedef union anon__struct_2322_bitfield_1 anon__struct_2322_bitfield_1, *Panon__struct_2322_bitfield_1;

union anon__struct_2322_bitfield_1 {
    uint id:16; /* : bits 0-15 */
    uint rd:1; /* : bits 16 */
    uint tc:1; /* : bits 17 */
    uint aa:1; /* : bits 18 */
    uint opcode:4; /* : bits 19-22 */
    uint qr:1; /* : bits 23 */
    uint rcode:4; /* : bits 24-27 */
    uint cd:1; /* : bits 28 */
    uint ad:1; /* : bits 29 */
    uint unused:1; /* : bits 30 */
    uint ra:1; /* : bits 31 */
};

typedef union anon__struct_2322_bitfield_2 anon__struct_2322_bitfield_2, *Panon__struct_2322_bitfield_2;

union anon__struct_2322_bitfield_2 {
    uint qdcount:16; /* : bits 0-15 */
    uint ancount:16; /* : bits 16-31 */
};

typedef union anon__struct_2322_bitfield_3 anon__struct_2322_bitfield_3, *Panon__struct_2322_bitfield_3;

union anon__struct_2322_bitfield_3 {
    uint nscount:16; /* : bits 0-15 */
    uint arcount:16; /* : bits 16-31 */
};

typedef struct HEADER HEADER, *PHEADER;

struct HEADER {
    union anon__struct_2322_bitfield_1 field_0x0;
    union anon__struct_2322_bitfield_2 field_0x4;
    union anon__struct_2322_bitfield_3 field_0x8;
};

#define _NETDB_H 1

#define _RPC_NETDB_H 1

#define AI_ADDRCONFIG 32

#define AI_ALL 16

#define AI_CANONIDN 128

#define AI_CANONNAME 2

#define AI_IDN 64

#define AI_IDN_ALLOW_UNASSIGNED 256

#define AI_IDN_USE_STD3_ASCII_RULES 512

#define AI_NUMERICHOST 4

#define AI_NUMERICSERV 1024

#define AI_PASSIVE 1

#define AI_V4MAPPED 8

#define EAI_ADDRFAMILY -9

#define EAI_AGAIN -3

#define EAI_ALLDONE -103

#define EAI_BADFLAGS -1

#define EAI_CANCELED -101

#define EAI_FAIL -4

#define EAI_FAMILY -6

#define EAI_IDN_ENCODE -105

#define EAI_INPROGRESS -100

#define EAI_INTR -104

#define EAI_MEMORY -10

#define EAI_NODATA -5

#define EAI_NONAME -2

#define EAI_NOTCANCELED -102

#define EAI_OVERFLOW -12

#define EAI_SERVICE -8

#define EAI_SOCKTYPE -7

#define EAI_SYSTEM -11

#define GAI_NOWAIT 1

#define GAI_WAIT 0

#define HOST_NOT_FOUND 1

#define IPPORT_RESERVED 1024

#define NETDB_INTERNAL -1

#define NETDB_SUCCESS 0

#define NI_DGRAM 16

#define NI_IDN 32

#define NI_IDN_ALLOW_UNASSIGNED 64

#define NI_IDN_USE_STD3_ASCII_RULES 128

#define NI_MAXHOST 1025

#define NI_MAXSERV 32

#define NI_NAMEREQD 8

#define NI_NOFQDN 4

#define NI_NUMERICHOST 1

#define NI_NUMERICSERV 2

#define NO_ADDRESS 4

#define NO_DATA 4

#define NO_RECOVERY 3

#define TRY_AGAIN 2

typedef struct addrinfo addrinfo, *Paddrinfo;

typedef uint __socklen_t;

typedef __socklen_t socklen_t;

struct addrinfo {
    int ai_flags;
    int ai_family;
    int ai_socktype;
    int ai_protocol;
    socklen_t ai_addrlen;
    struct sockaddr * ai_addr;
    char * ai_canonname;
    struct addrinfo * ai_next;
};

typedef struct gaicb gaicb, *Pgaicb;

struct gaicb {
    char * ar_name;
    char * ar_service;
    struct addrinfo * ar_request;
    struct addrinfo * ar_result;
    int __return;
    int __unused[5];
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

#define NFS_COOKIESIZE 4

#define NFS_FHSIZE 32

#define NFS_FIFO_DEV -1

#define NFS_MAXDATA 8192

#define NFS_MAXGROUPS 16

#define NFS_MAXNAMLEN 255

#define NFS_MAXPATHLEN 1024

#define NFS_MNT3_VERSION 3

#define NFS_MNT_PROGRAM 100005

#define NFS_MNT_VERSION 1

#define NFS_PORT 2049

#define NFS_PROGRAM 100003

#define NFSMODE_BLK 24576

#define NFSMODE_CHR 8192

#define NFSMODE_DIR 16384

#define NFSMODE_FIFO 4096

#define NFSMODE_FMT 61440

#define NFSMODE_LNK 40960

#define NFSMODE_REG 32768

#define NFSMODE_SOCK 49152

typedef enum nfs_ftype {
    NFBAD=7,
    NFBLK=3,
    NFCHR=4,
    NFDIR=2,
    NFFIFO=8,
    NFLNK=5,
    NFNON=0,
    NFREG=1,
    NFSOCK=6
} nfs_ftype;

typedef enum nfs_stat {
    NFSERR_ACCES=13,
    NFSERR_ADMIN_REVOKED=10047,
    NFSERR_ATTRNOTSUPP=10032,
    NFSERR_BADCHAR=10040,
    NFSERR_BADHANDLE=10001,
    NFSERR_BADNAME=10041,
    NFSERR_BADOWNER=10039,
    NFSERR_BADTYPE=10007,
    NFSERR_BAD_COOKIE=10003,
    NFSERR_BAD_RANGE=10042,
    NFSERR_BAD_SEQID=10026,
    NFSERR_BAD_STATEID=10025,
    NFSERR_BAD_XDR=10036,
    NFSERR_CB_PATH_DOWN=10048,
    NFSERR_CLID_INUSE=10017,
    NFSERR_DEADLOCK=10045,
    NFSERR_DENIED=10010,
    NFSERR_DQUOT=69,
    NFSERR_EAGAIN=11,
    NFSERR_EXIST=17,
    NFSERR_EXPIRED=10011,
    NFSERR_FBIG=27,
    NFSERR_FHEXPIRED=10014,
    NFSERR_FILE_OPEN=10046,
    NFSERR_GRACE=10013,
    NFSERR_INVAL=22,
    NFSERR_IO=5,
    NFSERR_ISDIR=21,
    NFSERR_JUKEBOX=10008,
    NFSERR_LEASE_MOVED=10031,
    NFSERR_LOCKED=10012,
    NFSERR_LOCKS_HELD=10037,
    NFSERR_LOCK_NOTSUPP=10043,
    NFSERR_LOCK_RANGE=10028,
    NFSERR_MINOR_VERS_MISMATCH=10021,
    NFSERR_MLINK=31,
    NFSERR_MOVED=10019,
    NFSERR_NAMETOOLONG=63,
    NFSERR_NODEV=19,
    NFSERR_NOENT=2,
    NFSERR_NOFILEHANDLE=10020,
    NFSERR_NOSPC=28,
    NFSERR_NOTDIR=20,
    NFSERR_NOTEMPTY=66,
    NFSERR_NOTSUPP=10004,
    NFSERR_NOT_SAME=10027,
    NFSERR_NOT_SYNC=10002,
    NFSERR_NO_GRACE=10033,
    NFSERR_NXIO=6,
    NFSERR_OLD_STATEID=10024,
    NFSERR_OPENMODE=10038,
    NFSERR_OPNOTSUPP=45,
    NFSERR_OP_ILLEGAL=10044,
    NFSERR_PERM=1,
    NFSERR_RECLAIM_BAD=10034,
    NFSERR_RECLAIM_CONFLICT=10035,
    NFSERR_REMOTE=71,
    NFSERR_RESOURCE=10018,
    NFSERR_RESTOREFH=10030,
    NFSERR_ROFS=30,
    NFSERR_SAME=10009,
    NFSERR_SERVERFAULT=10006,
    NFSERR_SHARE_DENIED=10015,
    NFSERR_STALE=70,
    NFSERR_STALE_CLIENTID=10022,
    NFSERR_STALE_STATEID=10023,
    NFSERR_SYMLINK=10029,
    NFSERR_TOOSMALL=10005,
    NFSERR_WFLUSH=99,
    NFSERR_WRONGSEC=10016,
    NFSERR_XDEV=18,
    NFS_OK=0
} nfs_stat;

#define _RPCSVC_NIS_H 1

#define DEFAULT_RIGHTS 983297

#define EN_ASN1 64

#define EN_BINARY 1

#define EN_CRYPT 2

#define EN_MODIFIED 8

#define EN_XDR 4

#define GROUP_DEFAULT 256

#define NIS_ADD 2

#define NIS_CALLBACK 17

#define NIS_CHECKPOINT 19

#define NIS_CPTIME 18

#define NIS_CREATE_ACC 4

#define NIS_DESTROY_ACC 8

#define NIS_DUMP 16

#define NIS_DUMPLOG 15

#define NIS_FINDDIRECTORY 12

#define NIS_IBADD 6

#define NIS_IBFIRST 9

#define NIS_IBLIST 5

#define NIS_IBMODIFY 7

#define NIS_IBNEXT 10

#define NIS_IBREMOVE 8

#define NIS_LOOKUP 1

#define NIS_MAXATTR 16

#define NIS_MAXATTRNAME 32

#define NIS_MAXATTRVAL 2048

#define NIS_MAXCOLUMNS 64

#define NIS_MAXLINKS 16

#define NIS_MAXNAMELEN 1024

#define NIS_MAXPATH 1024

#define NIS_MAXREPLICAS 128

#define NIS_MAXSTRINGLEN 255

#define NIS_MKDIR 22

#define NIS_MODIFY 3

#define NIS_MODIFY_ACC 2

#define NIS_PING 20

#define NIS_PK_DH 1

#define NIS_PK_DHEXT 4

#define NIS_PK_KERB 3

#define NIS_PK_NONE 0

#define NIS_PK_RSA 2

#define NIS_PROG 100300

#define NIS_READ_ACC 1

#define NIS_REMOVE 4

#define NIS_RMDIR 23

#define NIS_SERVSTATE 21

#define NIS_STATUS 14

#define NIS_UPDKEYS 24

#define NIS_VERSION 3

#define TA_ASN1 64

#define TA_BINARY 1

#define TA_CASE 16

#define TA_CRYPT 2

#define TA_MODIFIED 32

#define TA_SEARCHABLE 8

#define TA_XDR 4

#define WORLD_DEFAULT 1

#define ZMH_AUTH 4

#define ZMH_DG 2

#define ZMH_VC 1

typedef struct _struct_2080 _struct_2080, *P_struct_2080;

struct _struct_2080 {
    u_int zattr_val_len;
    char * zattr_val_val;
};

typedef struct _struct_2087 _struct_2087, *P_struct_2087;

typedef struct endpoint endpoint, *Pendpoint;

struct _struct_2087 {
    u_int ep_len;
    struct endpoint * ep_val;
};

struct endpoint {
    char * uaddr;
    char * family;
    char * proto;
};

typedef struct _struct_2090 _struct_2090, *P_struct_2090;

typedef struct nis_server nis_server, *Pnis_server;

typedef char * nis_name;

struct _struct_2090 {
    u_int do_servers_len;
    struct nis_server * do_servers_val;
};

struct nis_server {
    nis_name name;
    struct _struct_2087 ep;
    uint32_t key_type;
    struct netobj pkey;
};

typedef struct _struct_2091 _struct_2091, *P_struct_2091;

typedef struct oar_mask oar_mask, *Poar_mask;

typedef enum zotypes {
    BOGUS_OBJ=0,
    DIRECTORY_OBJ=2,
    ENTRY_OBJ=5,
    GROUP_OBJ=3,
    LINK_OBJ=6,
    NIS_BOGUS_OBJ=0,
    NIS_DIRECTORY_OBJ=2,
    NIS_ENTRY_OBJ=5,
    NIS_GROUP_OBJ=3,
    NIS_LINK_OBJ=6,
    NIS_NO_OBJ=1,
    NIS_PRIVATE_OBJ=7,
    NIS_TABLE_OBJ=4,
    NO_OBJ=1,
    PRIVATE_OBJ=7,
    TABLE_OBJ=4
} zotypes;

struct _struct_2091 {
    u_int do_armask_len;
    struct oar_mask * do_armask_val;
};

struct oar_mask {
    uint32_t oa_rights;
    enum zotypes oa_otype;
};

typedef struct _struct_2094 _struct_2094, *P_struct_2094;

struct _struct_2094 {
    u_int ec_value_len;
    char * ec_value_val;
};

typedef struct _struct_2097 _struct_2097, *P_struct_2097;

typedef struct entry_col entry_col, *Pentry_col;

struct entry_col {
    uint32_t ec_flags;
    struct _struct_2094 ec_value;
};

struct _struct_2097 {
    u_int en_cols_len;
    struct entry_col * en_cols_val;
};

typedef struct _struct_2100 _struct_2100, *P_struct_2100;

struct _struct_2100 {
    u_int gr_members_len;
    nis_name * gr_members_val;
};

typedef struct _struct_2103 _struct_2103, *P_struct_2103;

typedef struct nis_attr nis_attr, *Pnis_attr;

struct _struct_2103 {
    u_int li_attrs_len;
    struct nis_attr * li_attrs_val;
};

struct nis_attr {
    char * zattr_ndx;
    struct _struct_2080 zattr_val;
};

typedef struct _struct_2108 _struct_2108, *P_struct_2108;

typedef struct table_col table_col, *Ptable_col;

struct _struct_2108 {
    u_int ta_cols_len;
    struct table_col * ta_cols_val;
};

struct table_col {
    char * tc_name;
    uint32_t tc_flags;
    uint32_t tc_rights;
};

typedef struct _struct_2117 _struct_2117, *P_struct_2117;

struct _struct_2117 {
    u_int po_data_len;
    char * po_data_val;
};

typedef struct _struct_2124 _struct_2124, *P_struct_2124;

typedef struct nis_object nis_object, *Pnis_object;

typedef struct nis_oid nis_oid, *Pnis_oid;

typedef struct objdata objdata, *Pobjdata;

typedef union _union_2111 _union_2111, *P_union_2111;

typedef struct directory_obj directory_obj, *Pdirectory_obj;

typedef struct group_obj group_obj, *Pgroup_obj;

typedef struct table_obj table_obj, *Ptable_obj;

typedef struct entry_obj entry_obj, *Pentry_obj;

typedef struct link_obj link_obj, *Plink_obj;

typedef enum nstype {
    CDS=8,
    DNANS=6,
    DNS=4,
    IVY=3,
    NIS=1,
    SUNYP=2,
    UNKNOWN=0,
    X500=5,
    XCHS=7
} nstype;

struct link_obj {
    enum zotypes li_rtype;
    struct _struct_2103 li_attrs;
    nis_name li_name;
};

struct _struct_2124 {
    u_int objects_len;
    struct nis_object * objects_val;
};

struct group_obj {
    uint32_t gr_flags;
    struct _struct_2100 gr_members;
};

struct entry_obj {
    char * en_type;
    struct _struct_2097 en_cols;
};

struct table_obj {
    char * ta_type;
    int ta_maxcol;
    u_char ta_sep;
    struct _struct_2108 ta_cols;
    char * ta_path;
};

struct directory_obj {
    nis_name do_name;
    enum nstype do_type;
    struct _struct_2090 do_servers;
    uint32_t do_ttl;
    struct _struct_2091 do_armask;
};

union _union_2111 {
    struct directory_obj di_data;
    struct group_obj gr_data;
    struct table_obj ta_data;
    struct entry_obj en_data;
    struct link_obj li_data;
    struct _struct_2117 po_data;
};

struct objdata {
    enum zotypes zo_type;
    union _union_2111 objdata_u;
};

struct nis_oid {
    uint32_t ctime;
    uint32_t mtime;
};

struct nis_object {
    struct nis_oid zo_oid;
    nis_name zo_name;
    nis_name zo_owner;
    nis_name zo_group;
    nis_name zo_domain;
    uint32_t zo_access;
    uint32_t zo_ttl;
    struct objdata zo_data;
};

typedef struct _struct_2127 _struct_2127, *P_struct_2127;

struct _struct_2127 {
    u_int ns_object_len;
    struct nis_object * ns_object_val;
};

typedef struct _struct_2130 _struct_2130, *P_struct_2130;

struct _struct_2130 {
    u_int ibr_srch_len;
    struct nis_attr * ibr_srch_val;
};

typedef struct _struct_2131 _struct_2131, *P_struct_2131;

struct _struct_2131 {
    u_int ibr_obj_len;
    struct nis_object * ibr_obj_val;
};

typedef struct _struct_2132 _struct_2132, *P_struct_2132;

struct _struct_2132 {
    u_int ibr_cbhost_len;
    struct nis_server * ibr_cbhost_val;
};

typedef struct _struct_2137 _struct_2137, *P_struct_2137;

struct _struct_2137 {
    u_int le_attrs_len;
    struct nis_attr * le_attrs_val;
};

typedef struct _struct_2140 _struct_2140, *P_struct_2140;

typedef struct log_entry log_entry, *Plog_entry;

typedef enum log_entry_t {
    ADD_IBASE=5,
    ADD_NAME=1,
    LOG_NOP=0,
    MOD_IBASE=7,
    MOD_NAME_NEW=4,
    MOD_NAME_OLD=3,
    REM_IBASE=6,
    REM_NAME=2,
    UPD_STAMP=8
} log_entry_t;

struct _struct_2140 {
    u_int lr_entries_len;
    struct log_entry * lr_entries_val;
};

struct log_entry {
    uint32_t le_time;
    enum log_entry_t le_type;
    nis_name le_princp;
    nis_name le_name;
    struct _struct_2137 le_attrs;
    struct nis_object le_object;
};

typedef struct _struct_2147 _struct_2147, *P_struct_2147;

typedef struct nis_tag nis_tag, *Pnis_tag;

struct _struct_2147 {
    u_int tags_len;
    struct nis_tag * tags_val;
};

struct nis_tag {
    uint32_t tag_type;
    char * tag_val;
};

typedef struct _struct_2150 _struct_2150, *P_struct_2150;

struct _struct_2150 {
    u_int da_cbhost_len;
    struct nis_server * da_cbhost_val;
};

typedef struct _struct_2155 _struct_2155, *P_struct_2155;

struct _struct_2155 {
    u_int dir_data_len;
    char * dir_data_val;
};

typedef struct _struct_2156 _struct_2156, *P_struct_2156;

struct _struct_2156 {
    u_int signature_len;
    char * signature_val;
};

typedef struct cp_result cp_result, *Pcp_result;

typedef enum nis_error {
    NIS_BADATTRIBUTE=29,
    NIS_BADNAME=17,
    NIS_BADOBJECT=33,
    NIS_BADREQUEST=36,
    NIS_CACHEEXPIRED=4,
    NIS_CBERROR=31,
    NIS_CBRESULTS=19,
    NIS_CHAINBROKEN=9,
    NIS_CLNTAUTH=44,
    NIS_COLDSTART_ERR=38,
    NIS_DUMPLATER=47,
    NIS_FAIL=40,
    NIS_FOREIGNNS=32,
    NIS_IBMODERROR=22,
    NIS_INVALIDOBJ=16,
    NIS_LINKNAMEERROR=25,
    NIS_MODFAIL=35,
    NIS_NAMEEXISTS=14,
    NIS_NAMEUNREACHABLE=5,
    NIS_NOCALLBACK=18,
    NIS_NOFILESPACE=45,
    NIS_NOMEMORY=13,
    NIS_NOPROC=46,
    NIS_NOSUCHNAME=20,
    NIS_NOSUCHTABLE=23,
    NIS_NOTEMPTY=37,
    NIS_NOTFOUND=2,
    NIS_NOTMASTER=15,
    NIS_NOTOWNER=11,
    NIS_NOTSAMEOBJ=34,
    NIS_NOTSEARCHABLE=30,
    NIS_NOTUNIQUE=21,
    NIS_NOT_ME=12,
    NIS_PARTIAL=26,
    NIS_PERMISSION=10,
    NIS_RES2BIG=42,
    NIS_RESYNC=39,
    NIS_RPCERROR=28,
    NIS_SRVAUTH=43,
    NIS_SUCCESS=0,
    NIS_SYSTEMERROR=8,
    NIS_S_NOTFOUND=3,
    NIS_S_SUCCESS=1,
    NIS_TOOMANYATTRS=27,
    NIS_TRYAGAIN=7,
    NIS_TYPEMISMATCH=24,
    NIS_UNAVAIL=41,
    NIS_UNKNOWNOBJ=6
} nis_error;

struct cp_result {
    enum nis_error cp_status;
    uint32_t cp_zticks;
    uint32_t cp_dticks;
};

typedef struct dump_args dump_args, *Pdump_args;

struct dump_args {
    nis_name da_dir;
    uint32_t da_time;
    struct _struct_2150 da_cbhost;
};

typedef struct fd_args fd_args, *Pfd_args;

struct fd_args {
    nis_name dir_name;
    nis_name requester;
};

typedef struct fd_result fd_result, *Pfd_result;

struct fd_result {
    enum nis_error status;
    nis_name source;
    struct _struct_2155 dir_data;
    struct _struct_2156 signature;
};

typedef struct ib_request ib_request, *Pib_request;

struct ib_request {
    nis_name ibr_name;
    struct _struct_2130 ibr_srch;
    uint32_t ibr_flags;
    struct _struct_2131 ibr_obj;
    struct _struct_2132 ibr_cbhost;
    u_int ibr_bufsize;
    struct netobj ibr_cookie;
};

typedef struct log_result log_result, *Plog_result;

struct log_result {
    enum nis_error lr_status;
    struct netobj lr_cookie;
    struct _struct_2140 lr_entries;
};

typedef enum name_pos {
    BAD_NAME=4,
    HIGHER_NAME=1,
    LOWER_NAME=2,
    NOT_SEQUENTIAL=3,
    SAME_NAME=0
} name_pos;

typedef struct nis_result nis_result, *Pnis_result;

struct nis_result {
    enum nis_error status;
    struct _struct_2124 objects;
    struct netobj cookie;
    uint32_t zticks;
    uint32_t dticks;
    uint32_t aticks;
    uint32_t cticks;
};

typedef struct nis_taglist nis_taglist, *Pnis_taglist;

struct nis_taglist {
    struct _struct_2147 tags;
};

typedef struct ns_request ns_request, *Pns_request;

struct ns_request {
    nis_name ns_name;
    struct _struct_2127 ns_object;
};

typedef struct ping_args ping_args, *Pping_args;

struct ping_args {
    nis_name dir;
    uint32_t stamp;
};

#define _RPCSVC_NIS_CALLBACK_H 1

#define CB_PROG 100302

#define CB_VERS 1

#define CBPROC_ERROR 3

#define CBPROC_FINISH 2

#define CBPROC_RECEIVE 1

typedef struct _struct_2181 _struct_2181, *P_struct_2181;

typedef struct nis_object * obj_p;

struct _struct_2181 {
    u_int entries_len;
    obj_p * entries_val;
};

typedef struct cback_data cback_data, *Pcback_data;

struct cback_data {
    struct _struct_2181 entries;
};

#define ADD_OVERWRITE 256

#define ADD_RESERVED 2048

#define ALL_RESULTS 8

#define EXPAND_NAME 64

#define FOLLOW_LINKS 1

#define FOLLOW_PATH 2

#define HARD_LOOKUP 4

#define IMPMEM_GROUPS 1

#define MASTER_ONLY 32

#define MOD_EXCLUSIVE 8192

#define MOD_SAMEOBJ 1024

#define NEGMEM_GROUPS 4

#define NO_AUTHINFO 131072

#define NO_CACHE 16

#define RECURS_GROUPS 2

#define REM_MULTIPLE 512

#define REM_RESERVED 4096

#define RETURN_RESULT 128

#define SOFT_LOOKUP 16384

#define TAG_DCACHE 4

#define TAG_DCACHE_ALL 8

#define TAG_DCACHE_ONE 4

#define TAG_DCACHE_ONE_REFRESH 11

#define TAG_DEBUG 1

#define TAG_DIRLIST 2058

#define TAG_DNSFORWARDING 2060

#define TAG_GCACHE 3

#define TAG_GCACHE_ALL 3

#define TAG_GCACHE_ONE 10

#define TAG_HEAP 2050

#define TAG_NISCOMPAT 2059

#define TAG_OCACHE 5

#define TAG_OPSTATS 2048

#define TAG_READONLY 12

#define TAG_READWRITE 14

#define TAG_ROOTSERVER 2062

#define TAG_S_DCACHE 2053

#define TAG_S_GCACHE 2055

#define TAG_S_OCACHE 2054

#define TAG_S_STORAGE 2056

#define TAG_SECURE 6

#define TAG_SECURITY_LEVEL 2061

#define TAG_STATS 2

#define TAG_TCACHE_ALL 9

#define TAG_TCACHE_ONE 7

#define TAG_THREADS 2049

#define TAG_UPDATES 2051

#define TAG_UPTIME 2057

#define TAG_VISIBLE 2052

#define USE_DGRAM 65536

typedef char * const_nis_name;

#define _NL_TYPES_H 1

#define NL_CAT_LOCALE 1

#define NL_SETD 1

typedef void * nl_catd;

typedef int nl_item;

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

#define NID_aes_128_cbc_hmac_sha1 916

#define NID_aes_128_ccm 896

#define NID_aes_128_cfb1 650

#define NID_aes_128_cfb128 421

#define NID_aes_128_cfb8 653

#define NID_aes_128_ctr 904

#define NID_aes_128_ecb 418

#define NID_aes_128_gcm 895

#define NID_aes_128_ofb128 420

#define NID_aes_128_xts 913

#define NID_aes_192_cbc 423

#define NID_aes_192_cbc_hmac_sha1 917

#define NID_aes_192_ccm 899

#define NID_aes_192_cfb1 651

#define NID_aes_192_cfb128 425

#define NID_aes_192_cfb8 654

#define NID_aes_192_ctr 905

#define NID_aes_192_ecb 422

#define NID_aes_192_gcm 898

#define NID_aes_192_ofb128 424

#define NID_aes_256_cbc 427

#define NID_aes_256_cbc_hmac_sha1 918

#define NID_aes_256_ccm 902

#define NID_aes_256_cfb1 652

#define NID_aes_256_cfb128 429

#define NID_aes_256_cfb8 655

#define NID_aes_256_ctr 906

#define NID_aes_256_ecb 426

#define NID_aes_256_gcm 901

#define NID_aes_256_ofb128 428

#define NID_aes_256_xts 914

#define NID_algorithm 376

#define NID_ansi_X9_62 405

#define NID_any_policy 746

#define NID_anyExtendedKeyUsage 910

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

#define NID_cmac 894

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

#define NID_id_aes128_wrap_pad 897

#define NID_id_aes192_wrap 789

#define NID_id_aes192_wrap_pad 900

#define NID_id_aes256_wrap 790

#define NID_id_aes256_wrap_pad 903

#define NID_id_alg 262

#define NID_id_alg_des40 323

#define NID_id_alg_dh_pop 326

#define NID_id_alg_dh_sig_hmac_sha1 325

#define NID_id_alg_noSignature 324

#define NID_id_alg_PWRI_KEK 893

#define NID_id_camellia128_wrap 907

#define NID_id_camellia192_wrap 908

#define NID_id_camellia256_wrap 909

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

#define NID_mgf1 911

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

#define NID_rc4_hmac_md5 915

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

#define NID_rsaesOaep 919

#define NID_rsaOAEPEncryptionSET 644

#define NID_rsaSignature 377

#define NID_rsassaPss 912

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

#define OCSP_F_OCSP_SENDREQ_NBIO 117

#define OCSP_F_PARSE_HTTP_LINE1 118

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

typedef union _union_958 _union_958, *P_union_958;

union _union_958 {
    X509_NAME * byName;
    ASN1_OCTET_STRING * byKey;
};

typedef union _union_962 _union_962, *P_union_962;

typedef struct ocsp_revoked_info_st ocsp_revoked_info_st, *Pocsp_revoked_info_st;

typedef struct ocsp_revoked_info_st OCSP_REVOKEDINFO;

union _union_962 {
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

typedef struct stack_st_OCSP_SINGLERESP stack_st_OCSP_SINGLERESP, *Pstack_st_OCSP_SINGLERESP;

struct ocsp_response_data_st {
    ASN1_INTEGER * version;
    OCSP_RESPID * responderId;
    ASN1_GENERALIZEDTIME * producedAt;
    struct stack_st_OCSP_SINGLERESP * responses;
    struct stack_st_X509_EXTENSION * responseExtensions;
};

struct ocsp_responder_id_st {
    int type;
    union _union_958 value;
};

struct ocsp_basic_response_st {
    OCSP_RESPDATA * tbsResponseData;
    X509_ALGOR * signatureAlgorithm;
    ASN1_BIT_STRING * signature;
    struct stack_st_X509 * certs;
};

struct stack_st_OCSP_SINGLERESP {
    _STACK stack;
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
    union _union_962 value;
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
    struct stack_st_X509_EXTENSION * singleRequestExtensions;
};

typedef struct ocsp_one_request_st OCSP_ONEREQ;

typedef struct ocsp_req_info_st ocsp_req_info_st, *Pocsp_req_info_st;

typedef struct GENERAL_NAME_st GENERAL_NAME_st, *PGENERAL_NAME_st;

typedef struct GENERAL_NAME_st GENERAL_NAME;

typedef struct stack_st_OCSP_ONEREQ stack_st_OCSP_ONEREQ, *Pstack_st_OCSP_ONEREQ;

typedef union _union_848 _union_848, *P_union_848;

typedef struct otherName_st otherName_st, *PotherName_st;

typedef struct otherName_st OTHERNAME;

typedef struct EDIPartyName_st EDIPartyName_st, *PEDIPartyName_st;

typedef struct EDIPartyName_st EDIPARTYNAME;

struct stack_st_OCSP_ONEREQ {
    _STACK stack;
};

union _union_848 {
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
    struct stack_st_OCSP_ONEREQ * requestList;
    struct stack_st_X509_EXTENSION * requestExtensions;
};

struct EDIPartyName_st {
    ASN1_STRING * nameAssigner;
    ASN1_STRING * partyName;
};

struct GENERAL_NAME_st {
    int type;
    union _union_848 d;
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
    struct stack_st_X509 * certs;
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

typedef struct stack_st_ACCESS_DESCRIPTION stack_st_ACCESS_DESCRIPTION, *Pstack_st_ACCESS_DESCRIPTION;

struct ocsp_service_locator_st {
    X509_NAME * issuer;
    struct stack_st_ACCESS_DESCRIPTION * locator;
};

struct stack_st_ACCESS_DESCRIPTION {
    _STACK stack;
};

typedef struct ocsp_service_locator_st OCSP_SERVICELOC;

typedef struct ocsp_single_response_st ocsp_single_response_st, *Pocsp_single_response_st;

struct ocsp_single_response_st {
    OCSP_CERTID * certId;
    OCSP_CERTSTATUS * certStatus;
    ASN1_GENERALIZEDTIME * thisUpdate;
    ASN1_GENERALIZEDTIME * nextUpdate;
    struct stack_st_X509_EXTENSION * singleExtensions;
};

typedef struct ocsp_single_response_st OCSP_SINGLERESP;

typedef struct stack_st_OCSP_CERTID stack_st_OCSP_CERTID, *Pstack_st_OCSP_CERTID;

struct stack_st_OCSP_CERTID {
    _STACK stack;
};

#define OPENSSL_VERSION_NUMBER 268439647

typedef struct bn_recp_ctx_st bn_recp_ctx_st, *Pbn_recp_ctx_st;

typedef struct bn_recp_ctx_st BN_RECP_CTX;

struct bn_recp_ctx_st {
    BIGNUM N;
    BIGNUM Nr;
    int num_bits;
    int shift;
    int flags;
};

typedef struct DIST_POINT_st DIST_POINT_st, *PDIST_POINT_st;

typedef struct DIST_POINT_st DIST_POINT;

struct DIST_POINT_st {
    DIST_POINT_NAME * distpoint;
    ASN1_BIT_STRING * reasons;
    GENERAL_NAMES * CRLissuer;
    int dp_reasons;
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

typedef struct pkcs8_priv_key_info_st pkcs8_priv_key_info_st, *Ppkcs8_priv_key_info_st;

typedef struct pkcs8_priv_key_info_st PKCS8_PRIV_KEY_INFO;

struct pkcs8_priv_key_info_st {
    int broken;
    ASN1_INTEGER * version;
    X509_ALGOR * pkeyalg;
    ASN1_TYPE * pkey;
    struct stack_st_X509_ATTRIBUTE * attributes;
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

typedef struct X509V3_CONF_METHOD_st X509V3_CONF_METHOD_st, *PX509V3_CONF_METHOD_st;

typedef struct X509V3_CONF_METHOD_st X509V3_CONF_METHOD;

typedef struct X509_req_info_st X509_req_info_st, *PX509_req_info_st;

typedef struct X509_req_info_st X509_REQ_INFO;

struct X509_req_info_st {
    ASN1_ENCODING enc;
    ASN1_INTEGER * version;
    X509_NAME * subject;
    X509_PUBKEY * pubkey;
    struct stack_st_X509_ATTRIBUTE * attributes;
};

struct X509_req_st {
    X509_REQ_INFO * req_info;
    X509_ALGOR * sig_alg;
    ASN1_BIT_STRING * signature;
    int references;
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
    stack_st_CONF_VALUE * (* get_section)(void *, char *);
    void (* free_string)(void *, char *);
    void (* free_section)(void *, struct stack_st_CONF_VALUE *);
};

typedef struct X509_POLICY_LEVEL_st X509_POLICY_LEVEL_st, *PX509_POLICY_LEVEL_st;

typedef struct X509_POLICY_LEVEL_st X509_POLICY_LEVEL;

struct X509_POLICY_LEVEL_st {
};

typedef struct X509_POLICY_NODE_st X509_POLICY_NODE_st, *PX509_POLICY_NODE_st;

typedef struct X509_POLICY_NODE_st X509_POLICY_NODE;

struct X509_POLICY_NODE_st {
};

typedef struct x509_revoked_st x509_revoked_st, *Px509_revoked_st;

typedef struct x509_revoked_st X509_REVOKED;

struct x509_revoked_st {
    ASN1_INTEGER * serialNumber;
    ASN1_TIME * revocationDate;
    struct stack_st_X509_EXTENSION * extensions;
    struct stack_st_GENERAL_NAME * issuer;
    int reason;
    int sequence;
};

typedef struct v3_ext_ctx X509V3_CTX;

#define _SYS_PARAM_H 1

#define CANBSIZ 255

#define DEV_BSIZE 512

#define EXEC_PAGESIZE 4096

#define HZ 100

#define MAXHOSTNAMELEN 64

#define MAXPATHLEN 4096

#define MAXSYMLINKS 20

#define NBBY 8

#define NCARGS 131072

#define NGROUPS 65536

#define NOFILE 256

#define NOGROUP -1

#define _SYS_PCI_H 1

#define HT_3BIT_CAP_MASK 224

#define HT_5BIT_CAP_MASK 248

#define HT_CAPTYPE_DIRECT_ROUTE 176

#define HT_CAPTYPE_ERROR_RETRY 192

#define HT_CAPTYPE_EXTCONF 152

#define HT_CAPTYPE_GEN3 208

#define HT_CAPTYPE_HOST 32

#define HT_CAPTYPE_IRQ 128

#define HT_CAPTYPE_MSI_MAPPING 168

#define HT_CAPTYPE_PM 224

#define HT_CAPTYPE_REMAPPING_40 160

#define HT_CAPTYPE_REMAPPING_64 162

#define HT_CAPTYPE_SLAVE 0

#define HT_CAPTYPE_UNITID_CLUMP 144

#define HT_CAPTYPE_VCSET 184

#define HT_MSI_ADDR_HI 8

#define HT_MSI_ADDR_LO 4

#define HT_MSI_ADDR_LO_MASK 4293918720

#define HT_MSI_FLAGS 2

#define HT_MSI_FLAGS_ENABLE 1

#define HT_MSI_FLAGS_FIXED 2

#define PCI_ACS_CAP 4

#define PCI_ACS_CR 8

#define PCI_ACS_CTRL 6

#define PCI_ACS_DT 64

#define PCI_ACS_EC 32

#define PCI_ACS_EGRESS_CTL_V 8

#define PCI_ACS_RR 4

#define PCI_ACS_SV 1

#define PCI_ACS_TB 2

#define PCI_ACS_UF 16

#define PCI_AF_CAP 3

#define PCI_AF_CAP_FLR 2

#define PCI_AF_CAP_TP 1

#define PCI_AF_CTRL 4

#define PCI_AF_CTRL_FLR 1

#define PCI_AF_LENGTH 2

#define PCI_AF_STATUS 5

#define PCI_AF_STATUS_TP 1

#define PCI_AGP_COMMAND 8

#define PCI_AGP_COMMAND_64BIT 32

#define PCI_AGP_COMMAND_AGP 256

#define PCI_AGP_COMMAND_FW 16

#define PCI_AGP_COMMAND_RATE1 1

#define PCI_AGP_COMMAND_RATE2 2

#define PCI_AGP_COMMAND_RATE4 4

#define PCI_AGP_COMMAND_RQ_MASK 4278190080

#define PCI_AGP_COMMAND_SBA 512

#define PCI_AGP_RFU 3

#define PCI_AGP_SIZEOF 12

#define PCI_AGP_STATUS 4

#define PCI_AGP_STATUS_64BIT 32

#define PCI_AGP_STATUS_FW 16

#define PCI_AGP_STATUS_RATE1 1

#define PCI_AGP_STATUS_RATE2 2

#define PCI_AGP_STATUS_RATE4 4

#define PCI_AGP_STATUS_RQ_MASK 4278190080

#define PCI_AGP_STATUS_SBA 512

#define PCI_AGP_VERSION 2

#define PCI_ARI_CAP 4

#define PCI_ARI_CAP_ACS 2

#define PCI_ARI_CAP_MFVC 1

#define PCI_ARI_CTRL 6

#define PCI_ARI_CTRL_ACS 2

#define PCI_ARI_CTRL_MFVC 1

#define PCI_ATS_CAP 4

#define PCI_ATS_CTRL 6

#define PCI_ATS_CTRL_ENABLE 32768

#define PCI_ATS_MAX_QDEP 32

#define PCI_ATS_MIN_STU 12

#define PCI_BASE_ADDRESS_0 16

#define PCI_BASE_ADDRESS_1 20

#define PCI_BASE_ADDRESS_2 24

#define PCI_BASE_ADDRESS_3 28

#define PCI_BASE_ADDRESS_4 32

#define PCI_BASE_ADDRESS_5 36

#define PCI_BASE_ADDRESS_IO_MASK -4

#define PCI_BASE_ADDRESS_MEM_MASK -16

#define PCI_BASE_ADDRESS_MEM_PREFETCH 8

#define PCI_BASE_ADDRESS_MEM_TYPE_1M 2

#define PCI_BASE_ADDRESS_MEM_TYPE_32 0

#define PCI_BASE_ADDRESS_MEM_TYPE_64 4

#define PCI_BASE_ADDRESS_MEM_TYPE_MASK 6

#define PCI_BASE_ADDRESS_SPACE 1

#define PCI_BASE_ADDRESS_SPACE_IO 1

#define PCI_BASE_ADDRESS_SPACE_MEMORY 0

#define PCI_BIST 15

#define PCI_BIST_CAPABLE 128

#define PCI_BIST_CODE_MASK 15

#define PCI_BIST_START 64

#define PCI_BRIDGE_CONTROL 62

#define PCI_BRIDGE_CTL_BUS_RESET 64

#define PCI_BRIDGE_CTL_FAST_BACK 128

#define PCI_BRIDGE_CTL_ISA 4

#define PCI_BRIDGE_CTL_MASTER_ABORT 32

#define PCI_BRIDGE_CTL_PARITY 1

#define PCI_BRIDGE_CTL_SERR 2

#define PCI_BRIDGE_CTL_VGA 8

#define PCI_CACHE_LINE_SIZE 12

#define PCI_CAP_FLAGS 2

#define PCI_CAP_ID_AF 19

#define PCI_CAP_ID_AGP 2

#define PCI_CAP_ID_AGP3 14

#define PCI_CAP_ID_CCRC 11

#define PCI_CAP_ID_CHSWP 6

#define PCI_CAP_ID_DBG 10

#define PCI_CAP_ID_EXP 16

#define PCI_CAP_ID_HT 8

#define PCI_CAP_ID_MSI 5

#define PCI_CAP_ID_MSIX 17

#define PCI_CAP_ID_PCIX 7

#define PCI_CAP_ID_PM 1

#define PCI_CAP_ID_SHPC 12

#define PCI_CAP_ID_SLOTID 4

#define PCI_CAP_ID_SSVID 13

#define PCI_CAP_ID_VNDR 9

#define PCI_CAP_ID_VPD 3

#define PCI_CAP_LIST_ID 0

#define PCI_CAP_LIST_NEXT 1

#define PCI_CAP_SIZEOF 4

#define PCI_CAPABILITY_LIST 52

#define PCI_CARDBUS_CIS 40

#define PCI_CB_BRIDGE_CONTROL 62

#define PCI_CB_BRIDGE_CTL_16BIT_INT 128

#define PCI_CB_BRIDGE_CTL_CB_RESET 64

#define PCI_CB_BRIDGE_CTL_ISA 4

#define PCI_CB_BRIDGE_CTL_MASTER_ABORT 32

#define PCI_CB_BRIDGE_CTL_PARITY 1

#define PCI_CB_BRIDGE_CTL_POST_WRITES 1024

#define PCI_CB_BRIDGE_CTL_PREFETCH_MEM0 256

#define PCI_CB_BRIDGE_CTL_PREFETCH_MEM1 512

#define PCI_CB_BRIDGE_CTL_SERR 2

#define PCI_CB_BRIDGE_CTL_VGA 8

#define PCI_CB_CAPABILITY_LIST 20

#define PCI_CB_CARD_BUS 25

#define PCI_CB_IO_BASE_0 44

#define PCI_CB_IO_BASE_0_HI 46

#define PCI_CB_IO_BASE_1 52

#define PCI_CB_IO_BASE_1_HI 54

#define PCI_CB_IO_LIMIT_0 48

#define PCI_CB_IO_LIMIT_0_HI 50

#define PCI_CB_IO_LIMIT_1 56

#define PCI_CB_IO_LIMIT_1_HI 58

#define PCI_CB_IO_RANGE_MASK -4

#define PCI_CB_LATENCY_TIMER 27

#define PCI_CB_LEGACY_MODE_BASE 68

#define PCI_CB_MEMORY_BASE_0 28

#define PCI_CB_MEMORY_BASE_1 36

#define PCI_CB_MEMORY_LIMIT_0 32

#define PCI_CB_MEMORY_LIMIT_1 40

#define PCI_CB_PRIMARY_BUS 24

#define PCI_CB_SEC_STATUS 22

#define PCI_CB_SUBORDINATE_BUS 26

#define PCI_CB_SUBSYSTEM_ID 66

#define PCI_CB_SUBSYSTEM_VENDOR_ID 64

#define PCI_CHSWP_CSR 2

#define PCI_CHSWP_DHA 1

#define PCI_CHSWP_EIM 2

#define PCI_CHSWP_EXT 64

#define PCI_CHSWP_INS 128

#define PCI_CHSWP_LOO 8

#define PCI_CHSWP_PI 48

#define PCI_CHSWP_PIE 4

#define PCI_CLASS_DEVICE 10

#define PCI_CLASS_PROG 9

#define PCI_CLASS_REVISION 8

#define PCI_COMMAND 4

#define PCI_COMMAND_FAST_BACK 512

#define PCI_COMMAND_INTX_DISABLE 1024

#define PCI_COMMAND_INVALIDATE 16

#define PCI_COMMAND_IO 1

#define PCI_COMMAND_MASTER 4

#define PCI_COMMAND_MEMORY 2

#define PCI_COMMAND_PARITY 64

#define PCI_COMMAND_SERR 256

#define PCI_COMMAND_SPECIAL 8

#define PCI_COMMAND_VGA_PALETTE 32

#define PCI_COMMAND_WAIT 128

#define PCI_DEVICE_ID 2

#define PCI_ERR_CAP 24

#define PCI_ERR_CAP_ECRC_CHKC 128

#define PCI_ERR_CAP_ECRC_CHKE 256

#define PCI_ERR_CAP_ECRC_GENC 32

#define PCI_ERR_CAP_ECRC_GENE 64

#define PCI_ERR_COR_BAD_DLLP 128

#define PCI_ERR_COR_BAD_TLP 64

#define PCI_ERR_COR_MASK 20

#define PCI_ERR_COR_RCVR 1

#define PCI_ERR_COR_REP_ROLL 256

#define PCI_ERR_COR_REP_TIMER 4096

#define PCI_ERR_COR_STATUS 16

#define PCI_ERR_HEADER_LOG 28

#define PCI_ERR_ROOT_CMD_COR_EN 1

#define PCI_ERR_ROOT_CMD_FATAL_EN 4

#define PCI_ERR_ROOT_CMD_NONFATAL_EN 2

#define PCI_ERR_ROOT_COMMAND 44

#define PCI_ERR_ROOT_COR_RCV 1

#define PCI_ERR_ROOT_ERR_SRC 52

#define PCI_ERR_ROOT_FATAL_RCV 64

#define PCI_ERR_ROOT_FIRST_FATAL 16

#define PCI_ERR_ROOT_MULTI_COR_RCV 2

#define PCI_ERR_ROOT_MULTI_UNCOR_RCV 8

#define PCI_ERR_ROOT_NONFATAL_RCV 32

#define PCI_ERR_ROOT_STATUS 48

#define PCI_ERR_ROOT_UNCOR_RCV 4

#define PCI_ERR_UNC_COMP_ABORT 32768

#define PCI_ERR_UNC_COMP_TIME 16384

#define PCI_ERR_UNC_DLP 16

#define PCI_ERR_UNC_ECRC 524288

#define PCI_ERR_UNC_FCP 8192

#define PCI_ERR_UNC_MALF_TLP 262144

#define PCI_ERR_UNC_POISON_TLP 4096

#define PCI_ERR_UNC_RX_OVER 131072

#define PCI_ERR_UNC_TRAIN 1

#define PCI_ERR_UNC_UNSUP 1048576

#define PCI_ERR_UNC_UNX_COMP 65536

#define PCI_ERR_UNCOR_MASK 8

#define PCI_ERR_UNCOR_SEVER 12

#define PCI_ERR_UNCOR_STATUS 4

#define PCI_EXP_DEVCAP 4

#define PCI_EXP_DEVCAP2 36

#define PCI_EXP_DEVCAP2_ARI 32

#define PCI_EXP_DEVCAP2_LTR 2048

#define PCI_EXP_DEVCAP2_OBFF_MASK 786432

#define PCI_EXP_DEVCAP2_OBFF_MSG 262144

#define PCI_EXP_DEVCAP2_OBFF_WAKE 524288

#define PCI_EXP_DEVCAP_ATN_BUT 4096

#define PCI_EXP_DEVCAP_ATN_IND 8192

#define PCI_EXP_DEVCAP_EXT_TAG 32

#define PCI_EXP_DEVCAP_FLR 268435456

#define PCI_EXP_DEVCAP_L0S 448

#define PCI_EXP_DEVCAP_L1 3584

#define PCI_EXP_DEVCAP_PAYLOAD 7

#define PCI_EXP_DEVCAP_PHANTOM 24

#define PCI_EXP_DEVCAP_PWR_IND 16384

#define PCI_EXP_DEVCAP_PWR_SCL 201326592

#define PCI_EXP_DEVCAP_PWR_VAL 66846720

#define PCI_EXP_DEVCAP_RBER 32768

#define PCI_EXP_DEVCTL 8

#define PCI_EXP_DEVCTL2 40

#define PCI_EXP_DEVCTL2_ARI 32

#define PCI_EXP_DEVCTL2_IDO_CMP_EN 512

#define PCI_EXP_DEVCTL2_IDO_REQ_EN 256

#define PCI_EXP_DEVCTL2_LTR_EN 1024

#define PCI_EXP_DEVCTL2_OBFF_MSGA_EN 8192

#define PCI_EXP_DEVCTL2_OBFF_MSGB_EN 16384

#define PCI_EXP_DEVCTL2_OBFF_WAKE_EN 24576

#define PCI_EXP_DEVCTL_AUX_PME 1024

#define PCI_EXP_DEVCTL_BCR_FLR 32768

#define PCI_EXP_DEVCTL_CERE 1

#define PCI_EXP_DEVCTL_EXT_TAG 256

#define PCI_EXP_DEVCTL_FERE 4

#define PCI_EXP_DEVCTL_NFERE 2

#define PCI_EXP_DEVCTL_NOSNOOP_EN 2048

#define PCI_EXP_DEVCTL_PAYLOAD 224

#define PCI_EXP_DEVCTL_PHANTOM 512

#define PCI_EXP_DEVCTL_READRQ 28672

#define PCI_EXP_DEVCTL_RELAX_EN 16

#define PCI_EXP_DEVCTL_URRE 8

#define PCI_EXP_DEVSTA 10

#define PCI_EXP_DEVSTA2 42

#define PCI_EXP_DEVSTA_AUXPD 16

#define PCI_EXP_DEVSTA_CED 1

#define PCI_EXP_DEVSTA_FED 4

#define PCI_EXP_DEVSTA_NFED 2

#define PCI_EXP_DEVSTA_TRPND 32

#define PCI_EXP_DEVSTA_URD 8

#define PCI_EXP_FLAGS 2

#define PCI_EXP_FLAGS_IRQ 15872

#define PCI_EXP_FLAGS_SLOT 256

#define PCI_EXP_FLAGS_TYPE 240

#define PCI_EXP_FLAGS_VERS 15

#define PCI_EXP_LNKCAP 12

#define PCI_EXP_LNKCAP2 44

#define PCI_EXP_LNKCAP2_CROSSLINK 256

#define PCI_EXP_LNKCAP2_SLS_2_5GB 2

#define PCI_EXP_LNKCAP2_SLS_5_0GB 4

#define PCI_EXP_LNKCAP2_SLS_8_0GB 8

#define PCI_EXP_LNKCAP_ASPMS 3072

#define PCI_EXP_LNKCAP_CLKPM 262144

#define PCI_EXP_LNKCAP_DLLLARC 1048576

#define PCI_EXP_LNKCAP_L0SEL 28672

#define PCI_EXP_LNKCAP_L1EL 229376

#define PCI_EXP_LNKCAP_LBNC 2097152

#define PCI_EXP_LNKCAP_MLW 1008

#define PCI_EXP_LNKCAP_PN 4278190080

#define PCI_EXP_LNKCAP_SDERC 524288

#define PCI_EXP_LNKCAP_SLS 15

#define PCI_EXP_LNKCAP_SLS_2_5GB 1

#define PCI_EXP_LNKCAP_SLS_5_0GB 2

#define PCI_EXP_LNKCTL 16

#define PCI_EXP_LNKCTL2 48

#define PCI_EXP_LNKCTL_ASPM_L0S 1

#define PCI_EXP_LNKCTL_ASPM_L1 2

#define PCI_EXP_LNKCTL_ASPMC 3

#define PCI_EXP_LNKCTL_CCC 64

#define PCI_EXP_LNKCTL_CLKREQ_EN 256

#define PCI_EXP_LNKCTL_ES 128

#define PCI_EXP_LNKCTL_HAWD 512

#define PCI_EXP_LNKCTL_LABIE 2048

#define PCI_EXP_LNKCTL_LBMIE 1024

#define PCI_EXP_LNKCTL_LD 16

#define PCI_EXP_LNKCTL_RCB 8

#define PCI_EXP_LNKCTL_RL 32

#define PCI_EXP_LNKSTA 18

#define PCI_EXP_LNKSTA2 50

#define PCI_EXP_LNKSTA_CLS 15

#define PCI_EXP_LNKSTA_CLS_2_5GB 1

#define PCI_EXP_LNKSTA_CLS_5_0GB 2

#define PCI_EXP_LNKSTA_CLS_8_0GB 3

#define PCI_EXP_LNKSTA_DLLLA 8192

#define PCI_EXP_LNKSTA_LABS 32768

#define PCI_EXP_LNKSTA_LBMS 16384

#define PCI_EXP_LNKSTA_LT 2048

#define PCI_EXP_LNKSTA_NLW 1008

#define PCI_EXP_LNKSTA_NLW_SHIFT 4

#define PCI_EXP_LNKSTA_NLW_X1 16

#define PCI_EXP_LNKSTA_NLW_X2 32

#define PCI_EXP_LNKSTA_NLW_X4 64

#define PCI_EXP_LNKSTA_NLW_X8 128

#define PCI_EXP_LNKSTA_SLC 4096

#define PCI_EXP_RTCAP 30

#define PCI_EXP_RTCTL 28

#define PCI_EXP_RTCTL_CRSSVE 16

#define PCI_EXP_RTCTL_PMEIE 8

#define PCI_EXP_RTCTL_SECEE 1

#define PCI_EXP_RTCTL_SEFEE 4

#define PCI_EXP_RTCTL_SENFEE 2

#define PCI_EXP_RTSTA 32

#define PCI_EXP_SLTCAP 20

#define PCI_EXP_SLTCAP2 52

#define PCI_EXP_SLTCAP_ABP 1

#define PCI_EXP_SLTCAP_AIP 8

#define PCI_EXP_SLTCAP_EIP 131072

#define PCI_EXP_SLTCAP_HPC 64

#define PCI_EXP_SLTCAP_HPS 32

#define PCI_EXP_SLTCAP_MRLSP 4

#define PCI_EXP_SLTCAP_NCCS 262144

#define PCI_EXP_SLTCAP_PCP 2

#define PCI_EXP_SLTCAP_PIP 16

#define PCI_EXP_SLTCAP_PSN 4294443008

#define PCI_EXP_SLTCAP_SPLS 98304

#define PCI_EXP_SLTCAP_SPLV 32640

#define PCI_EXP_SLTCTL 24

#define PCI_EXP_SLTCTL2 56

#define PCI_EXP_SLTCTL_ABPE 1

#define PCI_EXP_SLTCTL_AIC 192

#define PCI_EXP_SLTCTL_CCIE 16

#define PCI_EXP_SLTCTL_DLLSCE 4096

#define PCI_EXP_SLTCTL_EIC 2048

#define PCI_EXP_SLTCTL_HPIE 32

#define PCI_EXP_SLTCTL_MRLSCE 4

#define PCI_EXP_SLTCTL_PCC 1024

#define PCI_EXP_SLTCTL_PDCE 8

#define PCI_EXP_SLTCTL_PFDE 2

#define PCI_EXP_SLTCTL_PIC 768

#define PCI_EXP_SLTSTA 26

#define PCI_EXP_SLTSTA2 58

#define PCI_EXP_SLTSTA_ABP 1

#define PCI_EXP_SLTSTA_CC 16

#define PCI_EXP_SLTSTA_DLLSC 256

#define PCI_EXP_SLTSTA_EIS 128

#define PCI_EXP_SLTSTA_MRLSC 4

#define PCI_EXP_SLTSTA_MRLSS 32

#define PCI_EXP_SLTSTA_PDC 8

#define PCI_EXP_SLTSTA_PDS 64

#define PCI_EXP_SLTSTA_PFD 2

#define PCI_EXP_TYPE_DOWNSTREAM 6

#define PCI_EXP_TYPE_ENDPOINT 0

#define PCI_EXP_TYPE_LEG_END 1

#define PCI_EXP_TYPE_PCI_BRIDGE 7

#define PCI_EXP_TYPE_PCIE_BRIDGE 8

#define PCI_EXP_TYPE_RC_EC 16

#define PCI_EXP_TYPE_RC_END 9

#define PCI_EXP_TYPE_ROOT_PORT 4

#define PCI_EXP_TYPE_UPSTREAM 5

#define PCI_EXT_CAP_ID_ACS 13

#define PCI_EXT_CAP_ID_ARI 14

#define PCI_EXT_CAP_ID_ATS 15

#define PCI_EXT_CAP_ID_DSN 3

#define PCI_EXT_CAP_ID_ERR 1

#define PCI_EXT_CAP_ID_LTR 24

#define PCI_EXT_CAP_ID_PWR 4

#define PCI_EXT_CAP_ID_SRIOV 16

#define PCI_EXT_CAP_ID_VC 2

#define PCI_HEADER_TYPE 14

#define PCI_HEADER_TYPE_BRIDGE 1

#define PCI_HEADER_TYPE_CARDBUS 2

#define PCI_HEADER_TYPE_NORMAL 0

#define PCI_INTERRUPT_LINE 60

#define PCI_INTERRUPT_PIN 61

#define PCI_IO_BASE 28

#define PCI_IO_BASE_UPPER16 48

#define PCI_IO_LIMIT 29

#define PCI_IO_LIMIT_UPPER16 50

#define PCI_IO_RANGE_MASK -16

#define PCI_IO_RANGE_TYPE_16 0

#define PCI_IO_RANGE_TYPE_32 1

#define PCI_IO_RANGE_TYPE_MASK 15

#define PCI_LATENCY_TIMER 13

#define PCI_LTR_MAX_NOSNOOP_LAT 6

#define PCI_LTR_MAX_SNOOP_LAT 4

#define PCI_LTR_SCALE_MASK 7168

#define PCI_LTR_SCALE_SHIFT 10

#define PCI_LTR_VALUE_MASK 1023

#define PCI_MAX_LAT 63

#define PCI_MEMORY_BASE 32

#define PCI_MEMORY_LIMIT 34

#define PCI_MEMORY_RANGE_MASK -16

#define PCI_MEMORY_RANGE_TYPE_MASK 15

#define PCI_MIN_GNT 62

#define PCI_MSI_ADDRESS_HI 8

#define PCI_MSI_ADDRESS_LO 4

#define PCI_MSI_DATA_32 8

#define PCI_MSI_DATA_64 12

#define PCI_MSI_FLAGS 2

#define PCI_MSI_FLAGS_64BIT 128

#define PCI_MSI_FLAGS_ENABLE 1

#define PCI_MSI_FLAGS_MASKBIT 256

#define PCI_MSI_FLAGS_QMASK 14

#define PCI_MSI_FLAGS_QSIZE 112

#define PCI_MSI_MASK_32 12

#define PCI_MSI_MASK_64 16

#define PCI_MSI_RFU 3

#define PCI_MSIX_ENTRY_DATA 8

#define PCI_MSIX_ENTRY_LOWER_ADDR 0

#define PCI_MSIX_ENTRY_SIZE 16

#define PCI_MSIX_ENTRY_UPPER_ADDR 4

#define PCI_MSIX_ENTRY_VECTOR_CTRL 12

#define PCI_MSIX_FLAGS 2

#define PCI_MSIX_FLAGS_BIRMASK 7

#define PCI_MSIX_FLAGS_ENABLE 32768

#define PCI_MSIX_FLAGS_MASKALL 16384

#define PCI_MSIX_FLAGS_QSIZE 2047

#define PCI_MSIX_PBA 8

#define PCI_MSIX_PBA_BIR 7

#define PCI_MSIX_PBA_OFFSET 4294967288

#define PCI_MSIX_TABLE 4

#define PCI_MSIX_TABLE_BIR 7

#define PCI_MSIX_TABLE_OFFSET 4294967288

#define PCI_PM_BPCC_ENABLE 128

#define PCI_PM_CAP_AUX_POWER 448

#define PCI_PM_CAP_D1 512

#define PCI_PM_CAP_D2 1024

#define PCI_PM_CAP_DSI 32

#define PCI_PM_CAP_PME 2048

#define PCI_PM_CAP_PME_CLOCK 8

#define PCI_PM_CAP_PME_D0 2048

#define PCI_PM_CAP_PME_D1 4096

#define PCI_PM_CAP_PME_D2 8192

#define PCI_PM_CAP_PME_D3 16384

#define PCI_PM_CAP_PME_D3cold 32768

#define PCI_PM_CAP_PME_MASK 63488

#define PCI_PM_CAP_PME_SHIFT 11

#define PCI_PM_CAP_RESERVED 16

#define PCI_PM_CAP_VER_MASK 7

#define PCI_PM_CTRL 4

#define PCI_PM_CTRL_DATA_SCALE_MASK 24576

#define PCI_PM_CTRL_DATA_SEL_MASK 7680

#define PCI_PM_CTRL_NO_SOFT_RESET 8

#define PCI_PM_CTRL_PME_ENABLE 256

#define PCI_PM_CTRL_PME_STATUS 32768

#define PCI_PM_CTRL_STATE_MASK 3

#define PCI_PM_DATA_REGISTER 7

#define PCI_PM_PMC 2

#define PCI_PM_PPB_B2_B3 64

#define PCI_PM_PPB_EXTENSIONS 6

#define PCI_PM_SIZEOF 8

#define PCI_PREF_BASE_UPPER32 40

#define PCI_PREF_LIMIT_UPPER32 44

#define PCI_PREF_MEMORY_BASE 36

#define PCI_PREF_MEMORY_LIMIT 38

#define PCI_PREF_RANGE_MASK -16

#define PCI_PREF_RANGE_TYPE_32 0

#define PCI_PREF_RANGE_TYPE_64 1

#define PCI_PREF_RANGE_TYPE_MASK 15

#define PCI_PRIMARY_BUS 24

#define PCI_PWR_CAP 12

#define PCI_PWR_DATA 8

#define PCI_PWR_DSR 4

#define PCI_REVISION_ID 8

#define PCI_ROM_ADDRESS 48

#define PCI_ROM_ADDRESS1 56

#define PCI_ROM_ADDRESS_ENABLE 1

#define PCI_ROM_ADDRESS_MASK -2048

#define PCI_SEC_LATENCY_TIMER 27

#define PCI_SEC_STATUS 30

#define PCI_SECONDARY_BUS 25

#define PCI_SID_CHASSIS_NR 3

#define PCI_SID_ESR 2

#define PCI_SID_ESR_FIC 32

#define PCI_SID_ESR_NSLOTS 31

#define PCI_SRIOV_BAR 36

#define PCI_SRIOV_CAP 4

#define PCI_SRIOV_CAP_VFM 1

#define PCI_SRIOV_CTRL 8

#define PCI_SRIOV_CTRL_ARI 16

#define PCI_SRIOV_CTRL_INTR 4

#define PCI_SRIOV_CTRL_MSE 8

#define PCI_SRIOV_CTRL_VFE 1

#define PCI_SRIOV_CTRL_VFM 2

#define PCI_SRIOV_FUNC_LINK 18

#define PCI_SRIOV_INITIAL_VF 12

#define PCI_SRIOV_NUM_BARS 6

#define PCI_SRIOV_NUM_VF 16

#define PCI_SRIOV_STATUS 10

#define PCI_SRIOV_STATUS_VFM 1

#define PCI_SRIOV_SUP_PGSIZE 28

#define PCI_SRIOV_SYS_PGSIZE 32

#define PCI_SRIOV_TOTAL_VF 14

#define PCI_SRIOV_VF_DID 26

#define PCI_SRIOV_VF_OFFSET 20

#define PCI_SRIOV_VF_STRIDE 22

#define PCI_SRIOV_VFM 60

#define PCI_SRIOV_VFM_AV 3

#define PCI_SRIOV_VFM_MI 1

#define PCI_SRIOV_VFM_MO 2

#define PCI_SRIOV_VFM_UA 0

#define PCI_STATUS 6

#define PCI_STATUS_66MHZ 32

#define PCI_STATUS_CAP_LIST 16

#define PCI_STATUS_DETECTED_PARITY 32768

#define PCI_STATUS_DEVSEL_FAST 0

#define PCI_STATUS_DEVSEL_MASK 1536

#define PCI_STATUS_DEVSEL_MEDIUM 512

#define PCI_STATUS_DEVSEL_SLOW 1024

#define PCI_STATUS_FAST_BACK 128

#define PCI_STATUS_INTERRUPT 8

#define PCI_STATUS_PARITY 256

#define PCI_STATUS_REC_MASTER_ABORT 8192

#define PCI_STATUS_REC_TARGET_ABORT 4096

#define PCI_STATUS_SIG_SYSTEM_ERROR 16384

#define PCI_STATUS_SIG_TARGET_ABORT 2048

#define PCI_STATUS_UDF 64

#define PCI_SUBORDINATE_BUS 26

#define PCI_SUBSYSTEM_ID 46

#define PCI_SUBSYSTEM_VENDOR_ID 44

#define PCI_VC_PORT_CTRL 12

#define PCI_VC_PORT_REG1 4

#define PCI_VC_PORT_REG2 8

#define PCI_VC_PORT_STATUS 14

#define PCI_VC_RES_CAP 16

#define PCI_VC_RES_CTRL 20

#define PCI_VC_RES_STATUS 26

#define PCI_VENDOR_ID 0

#define PCI_VPD_ADDR 2

#define PCI_VPD_ADDR_F 32768

#define PCI_VPD_ADDR_MASK 32767

#define PCI_VPD_DATA 4

#define PCI_X_CMD 2

#define PCI_X_CMD_DPERR_E 1

#define PCI_X_CMD_ERO 2

#define PCI_X_CMD_MAX_READ 12

#define PCI_X_CMD_MAX_SPLIT 112

#define PCI_X_CMD_READ_1K 4

#define PCI_X_CMD_READ_2K 8

#define PCI_X_CMD_READ_4K 12

#define PCI_X_CMD_READ_512 0

#define PCI_X_CMD_SPLIT_1 0

#define PCI_X_CMD_SPLIT_12 80

#define PCI_X_CMD_SPLIT_16 96

#define PCI_X_CMD_SPLIT_2 16

#define PCI_X_CMD_SPLIT_3 32

#define PCI_X_CMD_SPLIT_32 112

#define PCI_X_CMD_SPLIT_4 48

#define PCI_X_CMD_SPLIT_8 64

#define PCI_X_STATUS 4

#define PCI_X_STATUS_133MHZ 131072

#define PCI_X_STATUS_266MHZ 1073741824

#define PCI_X_STATUS_533MHZ 2147483648

#define PCI_X_STATUS_64BIT 65536

#define PCI_X_STATUS_BUS 65280

#define PCI_X_STATUS_COMPLEX 1048576

#define PCI_X_STATUS_DEVFN 255

#define PCI_X_STATUS_MAX_CUM 469762048

#define PCI_X_STATUS_MAX_READ 6291456

#define PCI_X_STATUS_MAX_SPLIT 58720256

#define PCI_X_STATUS_SPL_DISC 262144

#define PCI_X_STATUS_SPL_ERR 536870912

#define PCI_X_STATUS_UNX_SPL 524288

#define PEM_BUFSIZE 1024

#define PEM_DEK_DES_CBC 40

#define PEM_DEK_DES_ECB 60

#define PEM_DEK_DES_EDE 50

#define PEM_DEK_IDEA_CBC 45

#define PEM_DEK_RSA 70

#define PEM_DEK_RSA_MD2 80

#define PEM_DEK_RSA_MD5 90

#define PEM_ERROR 30

#define PEM_F_B2I_DSS 127

#define PEM_F_B2I_PVK_BIO 128

#define PEM_F_B2I_RSA 129

#define PEM_F_CHECK_BITLEN_DSA 130

#define PEM_F_CHECK_BITLEN_RSA 131

#define PEM_F_D2I_PKCS8PRIVATEKEY_BIO 120

#define PEM_F_D2I_PKCS8PRIVATEKEY_FP 121

#define PEM_F_DO_B2I 132

#define PEM_F_DO_B2I_BIO 133

#define PEM_F_DO_BLOB_HEADER 134

#define PEM_F_DO_PK8PKEY 126

#define PEM_F_DO_PK8PKEY_FP 125

#define PEM_F_DO_PVK_BODY 135

#define PEM_F_DO_PVK_HEADER 136

#define PEM_F_I2B_PVK 137

#define PEM_F_I2B_PVK_BIO 138

#define PEM_F_LOAD_IV 101

#define PEM_F_PEM_ASN1_READ 102

#define PEM_F_PEM_ASN1_READ_BIO 103

#define PEM_F_PEM_ASN1_WRITE 104

#define PEM_F_PEM_ASN1_WRITE_BIO 105

#define PEM_F_PEM_DEF_CALLBACK 100

#define PEM_F_PEM_DO_HEADER 106

#define PEM_F_PEM_F_PEM_WRITE_PKCS8PRIVATEKEY 118

#define PEM_F_PEM_GET_EVP_CIPHER_INFO 107

#define PEM_F_PEM_PK8PKEY 119

#define PEM_F_PEM_READ 108

#define PEM_F_PEM_READ_BIO 109

#define PEM_F_PEM_READ_BIO_PARAMETERS 140

#define PEM_F_PEM_READ_BIO_PRIVATEKEY 123

#define PEM_F_PEM_READ_PRIVATEKEY 124

#define PEM_F_PEM_SEALFINAL 110

#define PEM_F_PEM_SEALINIT 111

#define PEM_F_PEM_SIGNFINAL 112

#define PEM_F_PEM_WRITE 113

#define PEM_F_PEM_WRITE_BIO 114

#define PEM_F_PEM_WRITE_PRIVATEKEY 139

#define PEM_F_PEM_X509_INFO_READ 115

#define PEM_F_PEM_X509_INFO_READ_BIO 116

#define PEM_F_PEM_X509_INFO_WRITE_BIO 117

#define PEM_MD_MD2 3

#define PEM_MD_MD2_RSA 7

#define PEM_MD_MD5 4

#define PEM_MD_MD5_RSA 8

#define PEM_MD_SHA 41

#define PEM_MD_SHA_RSA 65

#define PEM_OBJ_CRL 3

#define PEM_OBJ_DHPARAMS 17

#define PEM_OBJ_DSAPARAMS 18

#define PEM_OBJ_ECPARAMETERS 22

#define PEM_OBJ_PRIV_DH 13

#define PEM_OBJ_PRIV_DSA 12

#define PEM_OBJ_PRIV_ECDSA 20

#define PEM_OBJ_PRIV_KEY 10

#define PEM_OBJ_PRIV_RSA 11

#define PEM_OBJ_PRIV_RSA_PUBLIC 19

#define PEM_OBJ_PUB_DH 16

#define PEM_OBJ_PUB_DSA 15

#define PEM_OBJ_PUB_ECDSA 21

#define PEM_OBJ_PUB_RSA 14

#define PEM_OBJ_SSL_SESSION 4

#define PEM_OBJ_UNDEF 0

#define PEM_OBJ_X509 1

#define PEM_OBJ_X509_REQ 2

#define PEM_R_BAD_BASE64_DECODE 100

#define PEM_R_BAD_DECRYPT 101

#define PEM_R_BAD_END_LINE 102

#define PEM_R_BAD_IV_CHARS 103

#define PEM_R_BAD_MAGIC_NUMBER 116

#define PEM_R_BAD_PASSWORD_READ 104

#define PEM_R_BAD_VERSION_NUMBER 117

#define PEM_R_BIO_WRITE_FAILURE 118

#define PEM_R_CIPHER_IS_NULL 127

#define PEM_R_ERROR_CONVERTING_PRIVATE_KEY 115

#define PEM_R_EXPECTING_PRIVATE_KEY_BLOB 119

#define PEM_R_EXPECTING_PUBLIC_KEY_BLOB 120

#define PEM_R_INCONSISTENT_HEADER 121

#define PEM_R_KEYBLOB_HEADER_PARSE_ERROR 122

#define PEM_R_KEYBLOB_TOO_SHORT 123

#define PEM_R_NO_START_LINE 108

#define PEM_R_NOT_DEK_INFO 105

#define PEM_R_NOT_ENCRYPTED 106

#define PEM_R_NOT_PROC_TYPE 107

#define PEM_R_PROBLEMS_GETTING_PASSWORD 109

#define PEM_R_PUBLIC_KEY_NO_RSA 110

#define PEM_R_PVK_DATA_TOO_SHORT 124

#define PEM_R_PVK_TOO_SHORT 125

#define PEM_R_READ_KEY 111

#define PEM_R_SHORT_HEADER 112

#define PEM_R_UNSUPPORTED_CIPHER 113

#define PEM_R_UNSUPPORTED_ENCRYPTION 114

#define PEM_R_UNSUPPORTED_KEY_COMPONENTS 126

#define PEM_TYPE_CLEAR 40

#define PEM_TYPE_ENCRYPTED 10

#define PEM_TYPE_MIC_CLEAR 30

#define PEM_TYPE_MIC_ONLY 20

typedef struct _struct_489 _struct_489, *P_struct_489;

struct _struct_489 {
    int version;
    int mode;
};

typedef struct _struct_490 _struct_490, *P_struct_490;

struct _struct_490 {
    int cipher;
};

typedef struct pem_ctx_st pem_ctx_st, *Ppem_ctx_st;

typedef struct pem_ctx_st PEM_CTX;

typedef struct pem_recip_st pem_recip_st, *Ppem_recip_st;

typedef struct pem_recip_st PEM_USER;

struct pem_recip_st {
    char * name;
    X509_NAME * dn;
    int cipher;
    int key_enc;
};

struct pem_ctx_st {
    int type;
    struct _struct_489 proc_type;
    char * domain;
    struct _struct_490 DEK_info;
    PEM_USER * originator;
    int num_recipient;
    PEM_USER * * recipient;
    EVP_MD * md;
    int md_enc;
    int md_len;
    char * md_data;
    EVP_CIPHER * dec;
    int key_len;
    uchar * key;
    int data_enc;
    int data_len;
    uchar * data;
};

typedef struct PEM_Encode_Seal_st PEM_Encode_Seal_st, *PPEM_Encode_Seal_st;

typedef struct PEM_Encode_Seal_st PEM_ENCODE_SEAL_CTX;

struct PEM_Encode_Seal_st {
    EVP_ENCODE_CTX encode;
    EVP_MD_CTX md;
    EVP_CIPHER_CTX cipher;
};

#define _SYS_PERM_H 1

#define _SYS_PERSONALITY_H 1

typedef enum enum_1668 {
    ADDR_COMPAT_LAYOUT=2097152,
    ADDR_LIMIT_32BIT=8388608,
    ADDR_LIMIT_3GB=134217728,
    ADDR_NO_RANDOMIZE=262144,
    MMAP_PAGE_ZERO=1048576,
    READ_IMPLIES_EXEC=4194304,
    SHORT_INODE=16777216,
    STICKY_TIMEOUTS=67108864,
    WHOLE_SECONDS=33554432
} enum_1668;

typedef enum enum_1669 {
    PER_BSD=6,
    PER_HPUX=16,
    PER_IRIX32=10,
    PER_IRIX64=12,
    PER_IRIXN32=11,
    PER_ISCR4=7,
    PER_LINUX=0,
    PER_LINUX32=8,
    PER_LINUX32_3GB=9,
    PER_LINUX_32BIT=1,
    PER_MASK=255,
    PER_OSF4=15,
    PER_OSR5=5,
    PER_RISCOS=12,
    PER_SCOSVR3=4,
    PER_SOLARIS=13,
    PER_SUNOS=7,
    PER_SVR3=3,
    PER_SVR4=2,
    PER_UW7=14,
    PER_WYSEV386=6,
    PER_XENIX=8
} enum_1669;

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

typedef union _union_981 _union_981, *P_union_981;

typedef struct pkcs12_bag_st pkcs12_bag_st, *Ppkcs12_bag_st;

typedef struct X509_sig_st X509_sig_st, *PX509_sig_st;

typedef struct X509_sig_st X509_SIG;

typedef struct stack_st_PKCS12_SAFEBAG stack_st_PKCS12_SAFEBAG, *Pstack_st_PKCS12_SAFEBAG;

typedef union _union_988 _union_988, *P_union_988;

union _union_988 {
    ASN1_OCTET_STRING * x509cert;
    ASN1_OCTET_STRING * x509crl;
    ASN1_OCTET_STRING * octet;
    ASN1_IA5STRING * sdsicert;
    ASN1_TYPE * other;
};

struct pkcs12_bag_st {
    ASN1_OBJECT * type;
    union _union_988 value;
};

union _union_981 {
    struct pkcs12_bag_st * bag;
    struct pkcs8_priv_key_info_st * keybag;
    X509_SIG * shkeybag;
    struct stack_st_PKCS12_SAFEBAG * safes;
    ASN1_TYPE * other;
};

struct stack_st_PKCS12_SAFEBAG {
    _STACK stack;
};

struct X509_sig_st {
    X509_ALGOR * algor;
    ASN1_OCTET_STRING * digest;
};

typedef struct PKCS12 PKCS12, *PPKCS12;

typedef struct PKCS12_MAC_DATA PKCS12_MAC_DATA, *PPKCS12_MAC_DATA;

typedef struct pkcs7_st pkcs7_st, *Ppkcs7_st;

typedef struct pkcs7_st PKCS7;

typedef union _union_444 _union_444, *P_union_444;

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

typedef struct stack_st_PKCS7_SIGNER_INFO stack_st_PKCS7_SIGNER_INFO, *Pstack_st_PKCS7_SIGNER_INFO;

typedef struct stack_st_PKCS7_RECIP_INFO stack_st_PKCS7_RECIP_INFO, *Pstack_st_PKCS7_RECIP_INFO;

typedef struct pkcs7_enc_content_st pkcs7_enc_content_st, *Ppkcs7_enc_content_st;

typedef struct pkcs7_enc_content_st PKCS7_ENC_CONTENT;

struct stack_st_PKCS7_RECIP_INFO {
    _STACK stack;
};

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

union _union_444 {
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
    union _union_444 d;
};

struct pkcs7_encrypted_st {
    ASN1_INTEGER * version;
    PKCS7_ENC_CONTENT * enc_data;
};

struct pkcs7_signedandenveloped_st {
    ASN1_INTEGER * version;
    struct stack_st_X509_ALGOR * md_algs;
    struct stack_st_X509 * cert;
    struct stack_st_X509_CRL * crl;
    struct stack_st_PKCS7_SIGNER_INFO * signer_info;
    PKCS7_ENC_CONTENT * enc_data;
    struct stack_st_PKCS7_RECIP_INFO * recipientinfo;
};

struct PKCS12_MAC_DATA {
    X509_SIG * dinfo;
    ASN1_OCTET_STRING * salt;
    ASN1_INTEGER * iter;
};

struct pkcs7_enveloped_st {
    ASN1_INTEGER * version;
    struct stack_st_PKCS7_RECIP_INFO * recipientinfo;
    PKCS7_ENC_CONTENT * enc_data;
};

struct pkcs7_signed_st {
    ASN1_INTEGER * version;
    struct stack_st_X509_ALGOR * md_algs;
    struct stack_st_X509 * cert;
    struct stack_st_X509_CRL * crl;
    struct stack_st_PKCS7_SIGNER_INFO * signer_info;
    struct pkcs7_st * contents;
};

struct stack_st_PKCS7_SIGNER_INFO {
    _STACK stack;
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
    union _union_981 value;
    struct stack_st_X509_ATTRIBUTE * attrib;
};

#define PKCS7_BINARY 128

#define PKCS7_CRLFEOL 2048

#define PKCS7_DETACHED 64

#define PKCS7_F_B64_READ_PKCS7 120

#define PKCS7_F_B64_WRITE_PKCS7 121

#define PKCS7_F_DO_PKCS7_SIGNED_ATTRIB 136

#define PKCS7_F_I2D_PKCS7_BIO_STREAM 140

#define PKCS7_F_PKCS7_ADD0_ATTRIB_SIGNING_TIME 135

#define PKCS7_F_PKCS7_ADD_ATTRIB_SMIMECAP 118

#define PKCS7_F_PKCS7_ADD_CERTIFICATE 100

#define PKCS7_F_PKCS7_ADD_CRL 101

#define PKCS7_F_PKCS7_ADD_RECIPIENT_INFO 102

#define PKCS7_F_PKCS7_ADD_SIGNATURE 131

#define PKCS7_F_PKCS7_ADD_SIGNER 103

#define PKCS7_F_PKCS7_BIO_ADD_DIGEST 125

#define PKCS7_F_PKCS7_COPY_EXISTING_DIGEST 138

#define PKCS7_F_PKCS7_CTRL 104

#define PKCS7_F_PKCS7_DATADECODE 112

#define PKCS7_F_PKCS7_DATAFINAL 128

#define PKCS7_F_PKCS7_DATAINIT 105

#define PKCS7_F_PKCS7_DATASIGN 106

#define PKCS7_F_PKCS7_DATAVERIFY 107

#define PKCS7_F_PKCS7_DECRYPT 114

#define PKCS7_F_PKCS7_DECRYPT_RINFO 133

#define PKCS7_F_PKCS7_ENCODE_RINFO 132

#define PKCS7_F_PKCS7_ENCRYPT 115

#define PKCS7_F_PKCS7_FINAL 134

#define PKCS7_F_PKCS7_FIND_DIGEST 127

#define PKCS7_F_PKCS7_GET0_SIGNERS 124

#define PKCS7_F_PKCS7_RECIP_INFO_SET 130

#define PKCS7_F_PKCS7_SET_CIPHER 108

#define PKCS7_F_PKCS7_SET_CONTENT 109

#define PKCS7_F_PKCS7_SET_DIGEST 126

#define PKCS7_F_PKCS7_SET_TYPE 110

#define PKCS7_F_PKCS7_SIGN 116

#define PKCS7_F_PKCS7_SIGN_ADD_SIGNER 137

#define PKCS7_F_PKCS7_SIGNATUREVERIFY 113

#define PKCS7_F_PKCS7_SIGNER_INFO_SET 129

#define PKCS7_F_PKCS7_SIGNER_INFO_SIGN 139

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

#define PKCS7_PARTIAL 16384

#define PKCS7_R_CERTIFICATE_VERIFY_ERROR 117

#define PKCS7_R_CIPHER_HAS_NO_OBJECT_IDENTIFIER 144

#define PKCS7_R_CIPHER_NOT_INITIALIZED 116

#define PKCS7_R_CONTENT_AND_DATA_PRESENT 118

#define PKCS7_R_CTRL_ERROR 152

#define PKCS7_R_DECODE_ERROR 130

#define PKCS7_R_DECRYPT_ERROR 119

#define PKCS7_R_DECRYPTED_KEY_IS_WRONG_LENGTH 100

#define PKCS7_R_DIGEST_FAILURE 101

#define PKCS7_R_ENCRYPTION_CTRL_FAILURE 149

#define PKCS7_R_ENCRYPTION_NOT_SUPPORTED_FOR_THIS_KEY_TYPE 150

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

#define PKCS7_R_NO_DEFAULT_DIGEST 151

#define PKCS7_R_NO_MATCHING_DIGEST_TYPE_FOUND 154

#define PKCS7_R_NO_MULTIPART_BODY_FAILURE 136

#define PKCS7_R_NO_MULTIPART_BOUNDARY 137

#define PKCS7_R_NO_RECIPIENT_MATCHES_CERTIFICATE 115

#define PKCS7_R_NO_RECIPIENT_MATCHES_KEY 146

#define PKCS7_R_NO_SIG_CONTENT_TYPE 138

#define PKCS7_R_NO_SIGNATURES_ON_DATA 123

#define PKCS7_R_NO_SIGNERS 142

#define PKCS7_R_OPERATION_NOT_SUPPORTED_ON_THIS_TYPE 104

#define PKCS7_R_PKCS7_ADD_SIGNATURE_ERROR 124

#define PKCS7_R_PKCS7_ADD_SIGNER_ERROR 153

#define PKCS7_R_PKCS7_DATAFINAL 126

#define PKCS7_R_PKCS7_DATAFINAL_ERROR 125

#define PKCS7_R_PKCS7_DATASIGN 145

#define PKCS7_R_PKCS7_PARSE_ERROR 139

#define PKCS7_R_PKCS7_SIG_PARSE_ERROR 140

#define PKCS7_R_PRIVATE_KEY_DOES_NOT_MATCH_CERTIFICATE 127

#define PKCS7_R_SIG_INVALID_MIME_TYPE 141

#define PKCS7_R_SIGNATURE_FAILURE 105

#define PKCS7_R_SIGNER_CERTIFICATE_NOT_FOUND 128

#define PKCS7_R_SIGNING_CTRL_FAILURE 147

#define PKCS7_R_SIGNING_NOT_SUPPORTED_FOR_THIS_KEY_TYPE 148

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

#define PKCS7_REUSE_DIGEST 32768

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
    struct stack_st_X509_ATTRIBUTE * auth_attr;
    X509_ALGOR * digest_enc_alg;
    ASN1_OCTET_STRING * enc_digest;
    struct stack_st_X509_ATTRIBUTE * unauth_attr;
    EVP_PKEY * pkey;
};

typedef struct stack_st_PKCS7 stack_st_PKCS7, *Pstack_st_PKCS7;

struct stack_st_PKCS7 {
    _STACK stack;
};

#define _RPC_PMAP_CLNT_H 1

typedef bool_t (* resultproc_t)(caddr_t, struct sockaddr_in *);

#define _RPC_PMAP_PROT_H 1

#define PMAPPORT 111

#define PMAPPROC_CALLIT 5

#define PMAPPROC_DUMP 4

#define PMAPPROC_GETPORT 3

#define PMAPPROC_NULL 0

#define PMAPPROC_SET 1

#define PMAPPROC_UNSET 2

#define PMAPPROG 100000

#define PMAPVERS 2

#define PMAPVERS_ORIG 1

#define PMAPVERS_PROTO 2

typedef struct pmap pmap, *Ppmap;

struct pmap {
    ulong pm_prog;
    ulong pm_vers;
    ulong pm_prot;
    ulong pm_port;
};

typedef struct pmaplist pmaplist, *Ppmaplist;

struct pmaplist {
    struct pmap pml_map;
    struct pmaplist * pml_next;
};

#define _RPC_PMAP_RMT_H 1

typedef struct rmtcallargs rmtcallargs, *Prmtcallargs;

struct rmtcallargs {
    u_long prog;
    u_long vers;
    u_long proc;
    u_long arglen;
    caddr_t args_ptr;
    xdrproc_t xdr_args;
};

typedef struct rmtcallres rmtcallres, *Prmtcallres;

struct rmtcallres {
    u_long * port_ptr;
    u_long resultslen;
    caddr_t results_ptr;
    xdrproc_t xdr_results;
};

#define _SYS_POLL_H 1

#define POLLERR 8

#define POLLHUP 16

#define POLLIN 1

#define POLLMSG 1024

#define POLLNVAL 32

#define POLLOUT 4

#define POLLPRI 2

#define POLLRDBAND 128

#define POLLRDHUP 8192

#define POLLRDNORM 64

#define POLLREMOVE 4096

#define POLLWRBAND 512

#define POLLWRNORM 256

typedef ulong nfds_t;

typedef struct pollfd pollfd, *Ppollfd;

struct pollfd {
    int fd;
    short events;
    short revents;
};

#define _BITS_POSIX1_LIM_H 1

#define _POSIX_AIO_LISTIO_MAX 2

#define _POSIX_AIO_MAX 1

#define _POSIX_ARG_MAX 4096

#define _POSIX_CHILD_MAX 25

#define _POSIX_CLOCKRES_MIN 20000000

#define _POSIX_DELAYTIMER_MAX 32

#define _POSIX_FD_SETSIZE 20

#define _POSIX_HIWAT 512

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

#define _POSIX_QLIMIT 1

#define _POSIX_RE_DUP_MAX 255

#define _POSIX_RTSIG_MAX 8

#define _POSIX_SEM_NSEMS_MAX 256

#define _POSIX_SEM_VALUE_MAX 32767

#define _POSIX_SIGQUEUE_MAX 32

#define _POSIX_SSIZE_MAX 32767

#define _POSIX_STREAM_MAX 8

#define _POSIX_SYMLINK_MAX 255

#define _POSIX_SYMLOOP_MAX 8

#define _POSIX_TIMER_MAX 32

#define _POSIX_TTY_NAME_MAX 9

#define _POSIX_TZNAME_MAX 6

#define _POSIX_UIO_MAXIOV 16

#define SSIZE_MAX 2147483647

#define _BITS_POSIX2_LIM_H 1

#define _POSIX2_BC_BASE_MAX 99

#define _POSIX2_BC_DIM_MAX 2048

#define _POSIX2_BC_SCALE_MAX 99

#define _POSIX2_BC_STRING_MAX 1000

#define _POSIX2_CHARCLASS_NAME_MAX 14

#define _POSIX2_COLL_WEIGHTS_MAX 2

#define _POSIX2_EXPR_NEST_MAX 32

#define _POSIX2_LINE_MAX 2048

#define _POSIX2_RE_DUP_MAX 255

#define BC_BASE_MAX 99

#define BC_DIM_MAX 2048

#define BC_SCALE_MAX 99

#define BC_STRING_MAX 1000

#define CHARCLASS_NAME_MAX 2048

#define COLL_WEIGHTS_MAX 255

#define EXPR_NEST_MAX 32

#define LINE_MAX 2048

#define _BITS_POSIX_OPT_H 1

#define _LFS64_ASYNCHRONOUS_IO 1

#define _LFS64_LARGEFILE 1

#define _LFS64_STDIO 1

#define _LFS_ASYNCHRONOUS_IO 1

#define _LFS_LARGEFILE 1

#define _POSIX2_CHAR_TERM 200809

#define _POSIX_ADVISORY_INFO 200809

#define _POSIX_ASYNC_IO 1

#define _POSIX_ASYNCHRONOUS_IO 200809

#define _POSIX_BARRIERS 200809

#define _POSIX_CHOWN_RESTRICTED 0

#define _POSIX_CLOCK_SELECTION 200809

#define _POSIX_CPUTIME 0

#define _POSIX_FSYNC 200809

#define _POSIX_IPV6 200809

#define _POSIX_JOB_CONTROL 1

#define _POSIX_MAPPED_FILES 200809

#define _POSIX_MEMLOCK 200809

#define _POSIX_MEMLOCK_RANGE 200809

#define _POSIX_MEMORY_PROTECTION 200809

#define _POSIX_MESSAGE_PASSING 200809

#define _POSIX_MONOTONIC_CLOCK 0

#define _POSIX_NO_TRUNC 1

#define _POSIX_PRIORITIZED_IO 200809

#define _POSIX_PRIORITY_SCHEDULING 200809

#define _POSIX_RAW_SOCKETS 200809

#define _POSIX_READER_WRITER_LOCKS 200809

#define _POSIX_REALTIME_SIGNALS 200809

#define _POSIX_REENTRANT_FUNCTIONS 1

#define _POSIX_REGEXP 1

#define _POSIX_SAVED_IDS 1

#define _POSIX_SEMAPHORES 200809

#define _POSIX_SHARED_MEMORY_OBJECTS 200809

#define _POSIX_SHELL 1

#define _POSIX_SPAWN 200809

#define _POSIX_SPIN_LOCKS 200809

#define _POSIX_SPORADIC_SERVER -1

#define _POSIX_SYNCHRONIZED_IO 200809

#define _POSIX_THREAD_ATTR_STACKADDR 200809

#define _POSIX_THREAD_ATTR_STACKSIZE 200809

#define _POSIX_THREAD_CPUTIME 0

#define _POSIX_THREAD_PRIO_INHERIT 200809

#define _POSIX_THREAD_PRIO_PROTECT 200809

#define _POSIX_THREAD_PRIORITY_SCHEDULING 200809

#define _POSIX_THREAD_PROCESS_SHARED 200809

#define _POSIX_THREAD_ROBUST_PRIO_INHERIT 200809

#define _POSIX_THREAD_ROBUST_PRIO_PROTECT -1

#define _POSIX_THREAD_SAFE_FUNCTIONS 200809

#define _POSIX_THREAD_SPORADIC_SERVER -1

#define _POSIX_THREADS 200809

#define _POSIX_TIMEOUTS 200809

#define _POSIX_TIMERS 200809

#define _POSIX_TRACE -1

#define _POSIX_TRACE_EVENT_FILTER -1

#define _POSIX_TRACE_INHERIT -1

#define _POSIX_TRACE_LOG -1

#define _POSIX_TYPED_MEMORY_OBJECTS -1

#define _XOPEN_REALTIME 1

#define _XOPEN_REALTIME_THREADS 1

#define _XOPEN_SHM 1

#define _XOPEN_STREAMS -1

#define __FD_SETSIZE 1024

typedef struct __kernel_fd_set __kernel_fd_set, *P__kernel_fd_set;

struct __kernel_fd_set {
    ulong fds_bits[128];
};

typedef int __kernel_key_t;

typedef int __kernel_mqd_t;

typedef void (* __kernel_sighandler_t)(int);

typedef char * __kernel_caddr_t;

typedef long __kernel_clock_t;

typedef int __kernel_clockid_t;

typedef int __kernel_daddr_t;

typedef struct __kernel_fsid_t __kernel_fsid_t, *P__kernel_fsid_t;

struct __kernel_fsid_t {
    int val[2];
};

typedef ushort __kernel_gid16_t;

typedef uint __kernel_gid_t;

typedef __kernel_gid_t __kernel_gid32_t;

typedef ulong __kernel_ino_t;

typedef int __kernel_ipc_pid_t;

typedef uint __kernel_mode_t;

typedef ulong __kernel_nlink_t;

typedef long __kernel_off_t;

typedef ulong __kernel_old_dev_t;

typedef ushort __kernel_old_gid_t;

typedef ushort __kernel_old_uid_t;

typedef int __kernel_pid_t;

typedef long __kernel_ptrdiff_t;

typedef ulong __kernel_size_t;

typedef long __kernel_ssize_t;

typedef long __kernel_suseconds_t;

typedef long __kernel_time_t;

typedef int __kernel_timer_t;

typedef ushort __kernel_uid16_t;

typedef uint __kernel_uid_t;

typedef __kernel_uid_t __kernel_uid32_t;

#define BSD_CURRENT_VERSION 1

#define BSD_MAX_BITS 15

#define BSD_MIN_BITS 9

#define CCP_CONFACK 2

#define CCP_CONFREQ 1

#define CCP_HDRLEN 4

#define CCP_MAX_OPTION_LENGTH 32

#define CCP_OPT_MINLEN 2

#define CCP_RESETACK 15

#define CCP_RESETREQ 14

#define CCP_TERMACK 6

#define CCP_TERMREQ 5

#define CI_BSD_COMPRESS 21

#define CI_DEFLATE 26

#define CI_DEFLATE_DRAFT 24

#define CI_MPPE 18

#define CI_PREDICTOR_1 1

#define CI_PREDICTOR_2 2

#define CILEN_BSD_COMPRESS 3

#define CILEN_DEFLATE 4

#define CILEN_MPPE 6

#define CILEN_PREDICTOR_1 2

#define CILEN_PREDICTOR_2 2

#define DECOMP_ERROR -1

#define DECOMP_FATALERROR -2

#define DEFLATE_CHK_SEQUENCE 0

#define DEFLATE_MAX_SIZE 15

#define DEFLATE_METHOD_VAL 8

#define DEFLATE_MIN_SIZE 9

#define DO_BSD_COMPRESS 1

#define DO_DEFLATE 1

#define DO_PREDICTOR_1 0

#define DO_PREDICTOR_2 0

typedef struct compressor compressor, *Pcompressor;

struct compressor {
    int compress_proto;
    void * (* comp_alloc)(uchar *, int);
    void (* comp_free)(void *);
    int (* comp_init)(void *, uchar *, int, int, int, int);
    void (* comp_reset)(void *);
    int (* compress)(void *, uchar *, uchar *, int, int);
    void (* comp_stat)(void *, struct compstat *);
    void * (* decomp_alloc)(uchar *, int);
    void (* decomp_free)(void *);
    int (* decomp_init)(void *, uchar *, int, int, int, int, int);
    void (* decomp_reset)(void *);
    int (* decompress)(void *, uchar *, int, uchar *, int);
    void (* incomp)(void *, uchar *, int);
    void (* decomp_stat)(void *, struct compstat *);
    struct module * owner;
    uint comp_extra;
};

#define _NET_PPP_DEFS_H 1

#define PPP_ALLSTATIONS 255

#define PPP_AT 41

#define PPP_ATCP 32809

#define PPP_CBCP 49193

#define PPP_CCP 33021

#define PPP_CCPFRAG 33019

#define PPP_CHAP 49699

#define PPP_COMP 253

#define PPP_COMPFRAG 251

#define PPP_ESCAPE 125

#define PPP_FCSLEN 2

#define PPP_FLAG 126

#define PPP_GOODFCS 61624

#define PPP_HDRLEN 4

#define PPP_INITFCS 65535

#define PPP_IP 33

#define PPP_IPCP 32801

#define PPP_IPV6 87

#define PPP_IPV6CP 32855

#define PPP_IPX 43

#define PPP_IPXCP 32811

#define PPP_LCP 49185

#define PPP_LQR 49189

#define PPP_MP 61

#define PPP_MPLS_MC 643

#define PPP_MPLS_UC 641

#define PPP_MPLSCP 33021

#define PPP_MRU 1500

#define PPP_PAP 49187

#define PPP_TRANS 32

#define PPP_UI 3

#define PPP_VJC_COMP 45

#define PPP_VJC_UNCOMP 47

typedef __u32 ext_accm[8];

typedef struct ppp_idle ppp_idle, *Pppp_idle;

struct ppp_idle {
    __kernel_time_t xmit_idle;
    __kernel_time_t recv_idle;
};

typedef struct _pitem _pitem, *P_pitem;

struct _pitem {
    uchar priority[8];
    void * data;
    struct _pitem * next;
};

typedef struct _pitem pitem;

typedef struct _pitem * piterator;

#define _SYS_PRCTL_H 1

#define PR_CAPBSET_DROP 24

#define PR_CAPBSET_READ 23

#define PR_ENDIAN_BIG 0

#define PR_ENDIAN_LITTLE 1

#define PR_ENDIAN_PPC_LITTLE 2

#define PR_FP_EXC_ASYNC 2

#define PR_FP_EXC_DISABLED 0

#define PR_FP_EXC_DIV 65536

#define PR_FP_EXC_INV 1048576

#define PR_FP_EXC_NONRECOV 1

#define PR_FP_EXC_OVF 131072

#define PR_FP_EXC_PRECISE 3

#define PR_FP_EXC_RES 524288

#define PR_FP_EXC_SW_ENABLE 128

#define PR_FP_EXC_UND 262144

#define PR_FPEMU_NOPRINT 1

#define PR_FPEMU_SIGFPE 2

#define PR_GET_DUMPABLE 3

#define PR_GET_ENDIAN 19

#define PR_GET_FPEMU 9

#define PR_GET_FPEXC 11

#define PR_GET_KEEPCAPS 7

#define PR_GET_NAME 16

#define PR_GET_NO_NEW_PRIVS 39

#define PR_GET_PDEATHSIG 2

#define PR_GET_SECCOMP 21

#define PR_GET_SECUREBITS 27

#define PR_GET_TIMERSLACK 30

#define PR_GET_TIMING 13

#define PR_GET_TSC 25

#define PR_GET_UNALIGN 5

#define PR_MCE_KILL 33

#define PR_MCE_KILL_CLEAR 0

#define PR_MCE_KILL_DEFAULT 2

#define PR_MCE_KILL_EARLY 1

#define PR_MCE_KILL_GET 34

#define PR_MCE_KILL_LATE 0

#define PR_MCE_KILL_SET 1

#define PR_SET_DUMPABLE 4

#define PR_SET_ENDIAN 20

#define PR_SET_FPEMU 10

#define PR_SET_FPEXC 12

#define PR_SET_KEEPCAPS 8

#define PR_SET_NAME 15

#define PR_SET_NO_NEW_PRIVS 38

#define PR_SET_PDEATHSIG 1

#define PR_SET_SECCOMP 22

#define PR_SET_SECUREBITS 28

#define PR_SET_TIMERSLACK 29

#define PR_SET_TIMING 14

#define PR_SET_TSC 26

#define PR_SET_UNALIGN 6

#define PR_TASK_PERF_EVENTS_DISABLE 31

#define PR_TASK_PERF_EVENTS_ENABLE 32

#define PR_TIMING_STATISTICAL 0

#define PR_TIMING_TIMESTAMP 1

#define PR_TSC_ENABLE 1

#define PR_TSC_SIGSEGV 2

#define PR_UNALIGN_NOPRINT 1

#define PR_UNALIGN_SIGBUS 2

#define _PROFIL_H 1

typedef enum enum_1671 {
    PROF_FAST=2,
    PROF_UINT=1,
    PROF_USHORT=0
} enum_1671;

typedef struct prof prof, *Pprof;

struct prof {
    void * pr_base;
    size_t pr_size;
    size_t pr_off;
    ulong pr_scale;
};

#define _PTHREAD_H 1

#define PTHREAD_BARRIER_SERIAL_THREAD -1

#define PTHREAD_CANCELED -1

#define PTHREAD_ONCE_INIT 0

typedef struct __jmp_buf_tag __jmp_buf_tag, *P__jmp_buf_tag;

typedef int __jmp_buf[6];

typedef struct __sigset_t __sigset_t, *P__sigset_t;

struct __sigset_t {
    ulong __val[128];
};

struct __jmp_buf_tag {
    __jmp_buf __jmpbuf;
    int __mask_was_saved;
    struct __sigset_t __saved_mask;
};

typedef struct __pthread_cleanup_frame __pthread_cleanup_frame, *P__pthread_cleanup_frame;

struct __pthread_cleanup_frame {
    void (* __cancel_routine)(void *);
    void * __cancel_arg;
    int __do_it;
    int __cancel_type;
};

typedef struct __pthread_unwind_buf_t __pthread_unwind_buf_t, *P__pthread_unwind_buf_t;

typedef struct _struct_1436 _struct_1436, *P_struct_1436;

struct _struct_1436 {
    __jmp_buf __cancel_jmp_buf;
    int __mask_was_saved;
};

struct __pthread_unwind_buf_t {
    struct _struct_1436 __cancel_jmp_buf[1];
    void * __pad[4];
};

typedef struct _pthread_cleanup_buffer _pthread_cleanup_buffer, *P_pthread_cleanup_buffer;

struct _pthread_cleanup_buffer {
    void (* __routine)(void *);
    void * __arg;
    int __canceltype;
    struct _pthread_cleanup_buffer * __prev;
};

typedef enum enum_1418 {
    PTHREAD_CREATE_DETACHED=1,
    PTHREAD_CREATE_JOINABLE=0
} enum_1418;

typedef enum enum_1419 {
    PTHREAD_MUTEX_ADAPTIVE_NP=3,
    PTHREAD_MUTEX_DEFAULT=7,
    PTHREAD_MUTEX_ERRORCHECK=6,
    PTHREAD_MUTEX_ERRORCHECK_NP=2,
    PTHREAD_MUTEX_FAST_NP=8,
    PTHREAD_MUTEX_NORMAL=4,
    PTHREAD_MUTEX_RECURSIVE=5,
    PTHREAD_MUTEX_RECURSIVE_NP=1,
    PTHREAD_MUTEX_TIMED_NP=0
} enum_1419;

typedef enum enum_1420 {
    PTHREAD_MUTEX_ROBUST=2,
    PTHREAD_MUTEX_ROBUST_NP=3,
    PTHREAD_MUTEX_STALLED=0,
    PTHREAD_MUTEX_STALLED_NP=1
} enum_1420;

typedef enum enum_1421 {
    PTHREAD_PRIO_INHERIT=1,
    PTHREAD_PRIO_NONE=0,
    PTHREAD_PRIO_PROTECT=2
} enum_1421;

typedef enum enum_1422 {
    PTHREAD_RWLOCK_DEFAULT_NP=3,
    PTHREAD_RWLOCK_PREFER_READER_NP=0,
    PTHREAD_RWLOCK_PREFER_WRITER_NONRECURSIVE_NP=2,
    PTHREAD_RWLOCK_PREFER_WRITER_NP=1
} enum_1422;

typedef enum enum_1423 {
    PTHREAD_EXPLICIT_SCHED=1,
    PTHREAD_INHERIT_SCHED=0
} enum_1423;

typedef enum enum_1424 {
    PTHREAD_SCOPE_PROCESS=1,
    PTHREAD_SCOPE_SYSTEM=0
} enum_1424;

typedef enum enum_1425 {
    PTHREAD_PROCESS_PRIVATE=0,
    PTHREAD_PROCESS_SHARED=1
} enum_1425;

typedef enum enum_1428 {
    PTHREAD_CANCEL_DISABLE=1,
    PTHREAD_CANCEL_ENABLE=0
} enum_1428;

typedef enum enum_1429 {
    PTHREAD_CANCEL_ASYNCHRONOUS=1,
    PTHREAD_CANCEL_DEFERRED=0
} enum_1429;

#define __SIZEOF_PTHREAD_ATTR_T 36

#define __SIZEOF_PTHREAD_BARRIER_T 20

#define __SIZEOF_PTHREAD_BARRIERATTR_T 4

#define __SIZEOF_PTHREAD_COND_T 48

#define __SIZEOF_PTHREAD_CONDATTR_T 4

#define __SIZEOF_PTHREAD_MUTEX_T 24

#define __SIZEOF_PTHREAD_MUTEXATTR_T 4

#define __SIZEOF_PTHREAD_RWLOCK_T 32

#define __SIZEOF_PTHREAD_RWLOCKATTR_T 8

#define _BITS_PTHREADTYPES_H 1

typedef struct __pthread_internal_slist __pthread_internal_slist, *P__pthread_internal_slist;

struct __pthread_internal_slist {
    struct __pthread_internal_slist * __next;
};

typedef struct __pthread_mutex_s __pthread_mutex_s, *P__pthread_mutex_s;

typedef union _union_13 _union_13, *P_union_13;

typedef struct __pthread_internal_slist __pthread_slist_t;

union _union_13 {
    int __spins;
    __pthread_slist_t __list;
};

struct __pthread_mutex_s {
    int __lock;
    uint __count;
    int __owner;
    int __kind;
    uint __nusers;
    union _union_13 field_0x14;
};

typedef struct _struct_16 _struct_16, *P_struct_16;

struct _struct_16 {
    int __lock;
    uint __futex;
    ulonglong __total_seq;
    ulonglong __wakeup_seq;
    ulonglong __woken_seq;
    void * __mutex;
    uint __nwaiters;
    uint __broadcast_seq;
};

typedef struct _struct_19 _struct_19, *P_struct_19;

struct _struct_19 {
    int __lock;
    uint __nr_readers;
    uint __readers_wakeup;
    uint __writer_wakeup;
    uint __nr_readers_queued;
    uint __nr_writers_queued;
    uchar __flags;
    uchar __shared;
    uchar __pad1;
    uchar __pad2;
    int __writer;
};

typedef union pthread_attr_t pthread_attr_t, *Ppthread_attr_t;

union pthread_attr_t {
    char __size[36];
    long __align;
};

typedef union pthread_barrier_t pthread_barrier_t, *Ppthread_barrier_t;

union pthread_barrier_t {
    char __size[20];
    long __align;
};

typedef union pthread_barrierattr_t pthread_barrierattr_t, *Ppthread_barrierattr_t;

union pthread_barrierattr_t {
    char __size[4];
    int __align;
};

typedef union pthread_cond_t pthread_cond_t, *Ppthread_cond_t;

union pthread_cond_t {
    struct _struct_16 __data;
    char __size[48];
    longlong __align;
};

typedef union pthread_condattr_t pthread_condattr_t, *Ppthread_condattr_t;

union pthread_condattr_t {
    char __size[4];
    int __align;
};

typedef uint pthread_key_t;

typedef union pthread_mutex_t pthread_mutex_t, *Ppthread_mutex_t;

union pthread_mutex_t {
    struct __pthread_mutex_s __data;
    char __size[24];
    long __align;
};

typedef union pthread_mutexattr_t pthread_mutexattr_t, *Ppthread_mutexattr_t;

union pthread_mutexattr_t {
    char __size[4];
    int __align;
};

typedef int pthread_once_t;

typedef union pthread_rwlock_t pthread_rwlock_t, *Ppthread_rwlock_t;

union pthread_rwlock_t {
    struct _struct_19 __data;
    char __size[32];
    long __align;
};

typedef union pthread_rwlockattr_t pthread_rwlockattr_t, *Ppthread_rwlockattr_t;

union pthread_rwlockattr_t {
    char __size[8];
    long __align;
};

typedef int pthread_spinlock_t;

typedef ulong pthread_t;

#define _SYS_PTRACE_H 1

typedef enum __ptrace_eventcodes {
    PTRACE_EVENT_CLONE=3,
    PTRACE_EVENT_EXEC=4,
    PTRACE_EVENT_EXIT=6,
    PTRACE_EVENT_FORK=1,
    PTRACE_EVENT_VFORK=2,
    PTRACE_EVENT_VFORK_DONE=5
} __ptrace_eventcodes;

typedef enum __ptrace_request {
    PTRACE_ATTACH=16,
    PTRACE_CONT=7,
    PTRACE_DETACH=17,
    PTRACE_GETEVENTMSG=16897,
    PTRACE_GETFPREGS=14,
    PTRACE_GETFPXREGS=18,
    PTRACE_GETREGS=12,
    PTRACE_GETSIGINFO=16898,
    PTRACE_KILL=8,
    PTRACE_PEEKDATA=2,
    PTRACE_PEEKTEXT=1,
    PTRACE_PEEKUSER=3,
    PTRACE_POKEDATA=5,
    PTRACE_POKETEXT=4,
    PTRACE_POKEUSER=6,
    PTRACE_SETFPREGS=15,
    PTRACE_SETFPXREGS=19,
    PTRACE_SETOPTIONS=16896,
    PTRACE_SETREGS=13,
    PTRACE_SETSIGINFO=16899,
    PTRACE_SINGLESTEP=9,
    PTRACE_SYSCALL=24,
    PTRACE_TRACEME=0
} __ptrace_request;

typedef enum __ptrace_setoptions {
    PTRACE_O_MASK=127,
    PTRACE_O_TRACECLONE=8,
    PTRACE_O_TRACEEXEC=16,
    PTRACE_O_TRACEEXIT=64,
    PTRACE_O_TRACEFORK=2,
    PTRACE_O_TRACESYSGOOD=1,
    PTRACE_O_TRACEVFORK=4,
    PTRACE_O_TRACEVFORKDONE=32
} __ptrace_setoptions;

#define _PWD_H 1

#define NSS_BUFLEN_PASSWD 1024

typedef struct passwd passwd, *Ppasswd;

struct passwd {
    char * pw_name;
    char * pw_passwd;
    __uid_t pw_uid;
    __gid_t pw_gid;
    char * pw_gecos;
    char * pw_dir;
    char * pw_shell;
};

#define _LINUX_QUOTA_VERSION 2

#define _SYS_QUOTA_H 1

#define GRPQUOTA 1

#define IIF_ALL 7

#define IIF_BGRACE 1

#define IIF_FLAGS 4

#define IIF_IGRACE 2

#define MAX_DQ_TIME 604800

#define MAX_IQ_TIME 604800

#define MAXQUOTAS 2

#define NR_DQHASH 43

#define NR_DQUOTS 256

#define Q_GETFMT 8388612

#define Q_GETINFO 8388613

#define Q_GETQUOTA 8388615

#define Q_QUOTAOFF 8388611

#define Q_QUOTAON 8388610

#define Q_SETINFO 8388614

#define Q_SETQUOTA 8388616

#define Q_SYNC 8388609

#define QIF_ALL 63

#define QIF_BLIMITS 1

#define QIF_BTIME 16

#define QIF_ILIMITS 4

#define QIF_INODES 8

#define QIF_ITIME 32

#define QIF_LIMITS 5

#define QIF_SPACE 2

#define QIF_TIMES 48

#define QIF_USAGE 10

#define SUBCMDMASK 255

#define SUBCMDSHIFT 8

#define USRQUOTA 0

typedef struct dqblk dqblk, *Pdqblk;

typedef ulonglong u_int64_t;

struct dqblk {
    u_int64_t dqb_bhardlimit;
    u_int64_t dqb_bsoftlimit;
    u_int64_t dqb_curspace;
    u_int64_t dqb_ihardlimit;
    u_int64_t dqb_isoftlimit;
    u_int64_t dqb_curinodes;
    u_int64_t dqb_btime;
    u_int64_t dqb_itime;
    u_int32_t dqb_valid;
};

typedef struct dqinfo dqinfo, *Pdqinfo;

struct dqinfo {
    u_int64_t dqi_bgrace;
    u_int64_t dqi_igrace;
    u_int32_t dqi_flags;
    u_int32_t dqi_valid;
};

#define RAND_F_ENG_RAND_GET_RAND_METHOD 108

#define RAND_F_FIPS_RAND 103

#define RAND_F_FIPS_RAND_BYTES 102

#define RAND_F_FIPS_RAND_SET_DT 106

#define RAND_F_FIPS_SET_DT 104

#define RAND_F_FIPS_SET_PRNG_SEED 107

#define RAND_F_FIPS_SET_TEST_MODE 105

#define RAND_F_FIPS_X931_SET_DT 106

#define RAND_F_RAND_GET_RAND_METHOD 101

#define RAND_F_RAND_INIT_FIPS 109

#define RAND_F_SSLEAY_RAND_BYTES 100

#define RAND_R_ERROR_INITIALISING_DRBG 112

#define RAND_R_ERROR_INSTANTIATING_DRBG 113

#define RAND_R_NO_FIPS_RANDOM_METHOD_SET 111

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

#define _SYS_RAW_H 1

#define RAW_MAJOR 162

typedef struct raw_config_request raw_config_request, *Praw_config_request;

struct raw_config_request {
    int raw_minor;
    uint64_t block_major;
    uint64_t block_minor;
};

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
    uint x;
    uint y;
    uint data[256];
};

#define _SYS_REBOOT_H 1

#define RB_AUTOBOOT 19088743

#define RB_DISABLE_CAD 0

#define RB_ENABLE_CAD 2309737967

#define RB_HALT_SYSTEM 3454992675

#define RB_POWER_OFF 1126301404

#define _SYS_REG_H 1

#define CS 13

#define DS 7

#define EAX 6

#define EBP 5

#define EBX 0

#define ECX 1

#define EDI 4

#define EDX 2

#define EFL 14

#define EIP 12

#define ES 8

#define ESI 3

#define FS 9

#define GS 10

#define ORIG_EAX 11

#define SS 16

#define UESP 15

#define _REGEX_H 1

#define RE_BACKSLASH_ESCAPE_IN_LISTS 1

#define RE_BK_PLUS_QM 2

#define RE_CARET_ANCHORS_HERE 8388608

#define RE_CHAR_CLASSES 4

#define RE_CONTEXT_INDEP_ANCHORS 8

#define RE_CONTEXT_INDEP_OPS 16

#define RE_CONTEXT_INVALID_DUP 16777216

#define RE_CONTEXT_INVALID_OPS 32

#define RE_DEBUG 1048576

#define RE_DOT_NEWLINE 64

#define RE_DOT_NOT_NULL 128

#define RE_DUP_MAX 32767

#define RE_HAT_LISTS_NOT_NEWLINE 256

#define RE_ICASE 4194304

#define RE_INTERVALS 512

#define RE_INVALID_INTERVAL_ORD 2097152

#define RE_LIMITED_OPS 1024

#define RE_NEWLINE_ALT 2048

#define RE_NO_BK_BRACES 4096

#define RE_NO_BK_PARENS 8192

#define RE_NO_BK_REFS 16384

#define RE_NO_BK_VBAR 32768

#define RE_NO_EMPTY_RANGES 65536

#define RE_NO_GNU_OPS 524288

#define RE_NO_POSIX_BACKTRACKING 262144

#define RE_NO_SUB 33554432

#define RE_NREGS 30

#define RE_SYNTAX_EMACS 0

#define RE_UNMATCHED_RIGHT_PAREN_ORD 131072

#define REG_EXTENDED 1

#define REG_ICASE 2

#define REG_NEWLINE 4

#define REG_NOSUB 8

#define REG_NOTBOL 1

#define REG_NOTEOL 2

#define REG_STARTEND 4

#define REGS_FIXED 2

#define REGS_REALLOCATE 1

#define REGS_UNALLOCATED 0

typedef ulong active_reg_t;

typedef union anon__struct_1459_bitfield_1 anon__struct_1459_bitfield_1, *Panon__struct_1459_bitfield_1;

union anon__struct_1459_bitfield_1 {
    uint can_be_null:1; /* : bits 0 */
    uint regs_allocated:2; /* : bits 1-2 */
    uint fastmap_accurate:1; /* : bits 3 */
    uint no_sub:1; /* : bits 4 */
    uint not_bol:1; /* : bits 5 */
    uint not_eol:1; /* : bits 6 */
    uint newline_anchor:1; /* : bits 7 */
};

typedef enum enum_1458 {
    REG_BADBR=10,
    REG_BADPAT=2,
    REG_BADRPT=13,
    REG_EBRACE=9,
    REG_EBRACK=7,
    REG_ECOLLATE=3,
    REG_ECTYPE=4,
    REG_EEND=14,
    REG_EESCAPE=5,
    REG_ENOSYS=0,
    REG_EPAREN=8,
    REG_ERANGE=11,
    REG_ERPAREN=16,
    REG_ESIZE=15,
    REG_ESPACE=12,
    REG_ESUBREG=6,
    REG_NOERROR=0,
    REG_NOMATCH=1
} enum_1458;

typedef struct re_pattern_buffer re_pattern_buffer, *Pre_pattern_buffer;

typedef ulong reg_syntax_t;

struct re_pattern_buffer {
    uchar * buffer;
    ulong allocated;
    ulong used;
    reg_syntax_t syntax;
    char * fastmap;
    uchar * translate;
    size_t re_nsub;
    union anon__struct_1459_bitfield_1 field_0x1c;
};

typedef struct re_registers re_registers, *Pre_registers;

typedef int regoff_t;

struct re_registers {
    uint num_regs;
    regoff_t * start;
    regoff_t * end;
};

typedef enum enum_1458 reg_errcode_t;

typedef struct re_pattern_buffer regex_t;

typedef struct regmatch_t regmatch_t, *Pregmatch_t;

struct regmatch_t {
    regoff_t rm_so;
    regoff_t rm_eo;
};

typedef long s_reg_t;

#define _SYS_RESOURCE_H 1

#define PRIO_MAX 20

#define PRIO_MIN -20

#define RLIM_INFINITY -1

#define RLIM_SAVED_CUR -1

#define RLIM_SAVED_MAX -1

typedef enum __priority_which {
    PRIO_PGRP=1,
    PRIO_PROCESS=0,
    PRIO_USER=2
} __priority_which;

typedef enum __priority_which __priority_which_t;

typedef enum __rlimit_resource {
    RLIMIT_AS=9,
    RLIMIT_CORE=4,
    RLIMIT_CPU=0,
    RLIMIT_DATA=2,
    RLIMIT_FSIZE=1,
    RLIMIT_NOFILE=7,
    RLIMIT_STACK=3,
    __RLIMIT_LOCKS=10,
    __RLIMIT_MEMLOCK=8,
    __RLIMIT_MSGQUEUE=12,
    __RLIMIT_NICE=13,
    __RLIMIT_NLIMITS=15,
    __RLIMIT_NPROC=6,
    __RLIMIT_OFILE=8,
    __RLIMIT_RSS=5,
    __RLIMIT_RTPRIO=14,
    __RLIMIT_SIGPENDING=11,
    __RLIM_NLIMITS=16
} __rlimit_resource;

typedef enum __rlimit_resource __rlimit_resource_t;

typedef enum __rusage_who {
    RUSAGE_CHILDREN=1,
    RUSAGE_SELF=0,
    RUSAGE_THREAD=1
} __rusage_who;

typedef enum __rusage_who __rusage_who_t;

typedef __u_quad_t __rlim64_t;

typedef __rlim64_t rlim64_t;

typedef ulong __rlim_t;

typedef __rlim_t rlim_t;

typedef struct rlimit rlimit, *Prlimit;

struct rlimit {
    rlim_t rlim_cur;
    rlim_t rlim_max;
};

typedef struct rlimit64 rlimit64, *Prlimit64;

struct rlimit64 {
    rlim64_t rlim_cur;
    rlim64_t rlim_max;
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

#define _NET_ROUTE_H 1

#define RT_CLASS_DEFAULT 253

#define RT_CLASS_LOCAL 255

#define RT_CLASS_MAIN 254

#define RT_CLASS_MAX 255

#define RT_CLASS_UNSPEC 0

#define RTCF_DIRECTSRC 67108864

#define RTCF_DOREDIRECT 16777216

#define RTCF_LOG 33554432

#define RTCF_MASQ 4194304

#define RTCF_NAT 8388608

#define RTCF_VALVE 2097152

#define RTF_ADDRCLASSMASK 4160749568

#define RTF_ADDRCONF 262144

#define RTF_ALLONLINK 131072

#define RTF_BROADCAST 268435456

#define RTF_CACHE 16777216

#define RTF_DEFAULT 65536

#define RTF_DYNAMIC 16

#define RTF_FLOW 33554432

#define RTF_GATEWAY 2

#define RTF_HOST 4

#define RTF_INTERFACE 1073741824

#define RTF_IRTT 256

#define RTF_LINKRT 1048576

#define RTF_LOCAL 2147483648

#define RTF_MODIFIED 32

#define RTF_MSS 64

#define RTF_MTU 64

#define RTF_MULTICAST 536870912

#define RTF_NAT 134217728

#define RTF_NOFORWARD 4096

#define RTF_NONEXTHOP 2097152

#define RTF_NOPMTUDISC 16384

#define RTF_POLICY 67108864

#define RTF_REINSTATE 8

#define RTF_REJECT 512

#define RTF_STATIC 1024

#define RTF_THROW 8192

#define RTF_UP 1

#define RTF_WINDOW 128

#define RTF_XRESOLVE 2048

#define RTMSG_AR_FAILED 81

#define RTMSG_CONTROL 64

#define RTMSG_DELDEVICE 18

#define RTMSG_DELROUTE 34

#define RTMSG_DELRULE 50

#define RTMSG_NEWDEVICE 17

#define RTMSG_NEWROUTE 33

#define RTMSG_NEWRULE 49

typedef struct in6_rtmsg in6_rtmsg, *Pin6_rtmsg;

struct in6_rtmsg {
    struct in6_addr rtmsg_dst;
    struct in6_addr rtmsg_src;
    struct in6_addr rtmsg_gateway;
    u_int32_t rtmsg_type;
    u_int16_t rtmsg_dst_len;
    u_int16_t rtmsg_src_len;
    u_int32_t rtmsg_metric;
    ulong rtmsg_info;
    u_int32_t rtmsg_flags;
    int rtmsg_ifindex;
};

typedef struct rtentry rtentry, *Prtentry;

struct rtentry {
    ulong rt_pad1;
    struct sockaddr rt_dst;
    struct sockaddr rt_gateway;
    struct sockaddr rt_genmask;
    ushort rt_flags;
    short rt_pad2;
    ulong rt_pad3;
    uchar rt_tos;
    uchar rt_class;
    short rt_pad4;
    short rt_metric;
    char * rt_dev;
    ulong rt_mtu;
    ulong rt_window;
    ushort rt_irtt;
};

#define _PROTOCOLS_ROUTED_H 1

#define EXPIRE_TIME 180

#define GARBAGE_TIME 240

#define HOPCNT_INFINITY 16

#define MAX_WAITTIME 5

#define MAXPACKETSIZE 512

#define MIN_WAITTIME 2

#define RIPCMD_MAX 5

#define RIPCMD_REQUEST 1

#define RIPCMD_RESPONSE 2

#define RIPCMD_TRACEOFF 4

#define RIPCMD_TRACEON 3

#define RIPVERSION 1

#define SUPPLY_INTERVAL 30

#define TIMER_RATE 30

typedef union _union_2298 _union_2298, *P_union_2298;

typedef struct netinfo netinfo, *Pnetinfo;

struct netinfo {
    struct sockaddr rip_dst;
    int rip_metric;
};

union _union_2298 {
    struct netinfo ru_nets[1];
    char ru_tracefile[1];
};

typedef struct rip rip, *Prip;

struct rip {
    u_char rip_cmd;
    u_char rip_vers;
    u_char rip_res1[2];
    union _union_2298 ripun;
};

#define _RPC_RPC_H 1

#define DES_MAXLEN 65536

#define DES_QUICKLEN 16

typedef union _union_2063 _union_2063, *P_union_2063;

union _union_2063 {
    u_char UDES_data[16];
    u_char * UDES_buf;
};

typedef enum desdir {
    DECRYPT=1,
    ENCRYPT=0
} desdir;

typedef enum desmode {
    CBC=0,
    ECB=1
} desmode;

typedef struct desparams desparams, *Pdesparams;

struct desparams {
    u_char des_key[8];
    enum desdir des_dir;
    enum desmode des_mode;
    u_char des_ivec[8];
    uint des_len;
    union _union_2063 UDES;
};

#define _RPC_MSG_H 1

#define RPC_MSG_VERSION 2

#define RPC_SERVICE_PORT 2048

typedef struct _struct_1982 _struct_1982, *P_struct_1982;

struct _struct_1982 {
    u_long low;
    u_long high;
};

typedef struct _struct_1983 _struct_1983, *P_struct_1983;

struct _struct_1983 {
    caddr_t where;
    xdrproc_t proc;
};

typedef struct _struct_1986 _struct_1986, *P_struct_1986;

struct _struct_1986 {
    u_long low;
    u_long high;
};

typedef union _union_1981 _union_1981, *P_union_1981;

union _union_1981 {
    struct _struct_1982 AR_versions;
    struct _struct_1983 AR_results;
};

typedef union _union_1985 _union_1985, *P_union_1985;

union _union_1985 {
    struct _struct_1986 RJ_versions;
    enum auth_stat RJ_why;
};

typedef union _union_1988 _union_1988, *P_union_1988;

typedef struct accepted_reply accepted_reply, *Paccepted_reply;

typedef struct rejected_reply rejected_reply, *Prejected_reply;

typedef enum accept_stat {
    GARBAGE_ARGS=4,
    PROC_UNAVAIL=3,
    PROG_MISMATCH=2,
    PROG_UNAVAIL=1,
    SUCCESS=0,
    SYSTEM_ERR=5
} accept_stat;

typedef enum reject_stat {
    AUTH_ERROR=1,
    RPC_MISMATCH=0
} reject_stat;

struct accepted_reply {
    struct opaque_auth ar_verf;
    enum accept_stat ar_stat;
    union _union_1981 ru;
};

struct rejected_reply {
    enum reject_stat rj_stat;
    union _union_1985 ru;
};

union _union_1988 {
    struct accepted_reply RP_ar;
    struct rejected_reply RP_dr;
};

typedef union _union_1995 _union_1995, *P_union_1995;

typedef struct call_body call_body, *Pcall_body;

typedef struct reply_body reply_body, *Preply_body;

typedef enum reply_stat {
    MSG_ACCEPTED=0,
    MSG_DENIED=1
} reply_stat;

struct call_body {
    u_long cb_rpcvers;
    u_long cb_prog;
    u_long cb_vers;
    u_long cb_proc;
    struct opaque_auth cb_cred;
    struct opaque_auth cb_verf;
};

struct reply_body {
    enum reply_stat rp_stat;
    union _union_1988 ru;
};

union _union_1995 {
    struct call_body RM_cmb;
    struct reply_body RM_rmb;
};

typedef enum msg_type {
    CALL=0,
    REPLY=1
} msg_type;

typedef struct rpc_msg rpc_msg, *Prpc_msg;

struct rpc_msg {
    u_long rm_xid;
    enum msg_type rm_direction;
    union _union_1995 ru;
};

#define EVP_PKEY_CTRL_GET_RSA_MGF1_MD 4104

#define EVP_PKEY_CTRL_GET_RSA_PADDING 4102

#define EVP_PKEY_CTRL_GET_RSA_PSS_SALTLEN 4103

#define EVP_PKEY_CTRL_RSA_KEYGEN_BITS 4099

#define EVP_PKEY_CTRL_RSA_KEYGEN_PUBEXP 4100

#define EVP_PKEY_CTRL_RSA_MGF1_MD 4101

#define EVP_PKEY_CTRL_RSA_PADDING 4097

#define EVP_PKEY_CTRL_RSA_PSS_SALTLEN 4098

#define OPENSSL_RSA_FIPS_MIN_MODULUS_BITS 1024

#define OPENSSL_RSA_MAX_MODULUS_BITS 16384

#define OPENSSL_RSA_MAX_PUBEXP_BITS 64

#define OPENSSL_RSA_SMALL_MODULUS_BITS 3072

#define RSA_3 3

#define RSA_F4 65537

#define RSA_F_CHECK_PADDING_MD 140

#define RSA_F_DO_RSA_PRINT 146

#define RSA_F_INT_RSA_VERIFY 145

#define RSA_F_MEMORY_LOCK 100

#define RSA_F_OLD_RSA_PRIV_DECODE 147

#define RSA_F_PKEY_RSA_CTRL 143

#define RSA_F_PKEY_RSA_CTRL_STR 144

#define RSA_F_PKEY_RSA_SIGN 142

#define RSA_F_PKEY_RSA_VERIFY 154

#define RSA_F_PKEY_RSA_VERIFYRECOVER 141

#define RSA_F_RSA_BUILTIN_KEYGEN 129

#define RSA_F_RSA_CHECK_KEY 123

#define RSA_F_RSA_EAY_PRIVATE_DECRYPT 101

#define RSA_F_RSA_EAY_PRIVATE_ENCRYPT 102

#define RSA_F_RSA_EAY_PUBLIC_DECRYPT 103

#define RSA_F_RSA_EAY_PUBLIC_ENCRYPT 104

#define RSA_F_RSA_GENERATE_KEY 105

#define RSA_F_RSA_GENERATE_KEY_EX 155

#define RSA_F_RSA_ITEM_VERIFY 156

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

#define RSA_F_RSA_PADDING_ADD_PKCS1_PSS_MGF1 158

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

#define RSA_F_RSA_PRIV_DECODE 137

#define RSA_F_RSA_PRIV_ENCODE 138

#define RSA_F_RSA_PRIVATE_DECRYPT 157

#define RSA_F_RSA_PRIVATE_ENCRYPT 148

#define RSA_F_RSA_PUB_DECODE 139

#define RSA_F_RSA_PUBLIC_DECRYPT 149

#define RSA_F_RSA_PUBLIC_ENCRYPT 153

#define RSA_F_RSA_SET_DEFAULT_METHOD 150

#define RSA_F_RSA_SET_METHOD 151

#define RSA_F_RSA_SETUP_BLINDING 136

#define RSA_F_RSA_SIGN 117

#define RSA_F_RSA_SIGN_ASN1_OCTET_STRING 118

#define RSA_F_RSA_VERIFY 119

#define RSA_F_RSA_VERIFY_ASN1_OCTET_STRING 120

#define RSA_F_RSA_VERIFY_PKCS1_PSS 126

#define RSA_F_RSA_VERIFY_PKCS1_PSS_MGF1 152

#define RSA_FLAG_BLINDING 8

#define RSA_FLAG_CACHE_PRIVATE 4

#define RSA_FLAG_CACHE_PUBLIC 2

#define RSA_FLAG_CHECKED 2048

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

#define RSA_PKCS1_PSS_PADDING 6

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

#define RSA_R_ILLEGAL_OR_UNSUPPORTED_PADDING_MODE 144

#define RSA_R_INVALID_DIGEST_LENGTH 143

#define RSA_R_INVALID_HEADER 137

#define RSA_R_INVALID_KEYBITS 145

#define RSA_R_INVALID_MESSAGE_LENGTH 131

#define RSA_R_INVALID_MGF1_MD 156

#define RSA_R_INVALID_PADDING 138

#define RSA_R_INVALID_PADDING_MODE 141

#define RSA_R_INVALID_PSS_PARAMETERS 157

#define RSA_R_INVALID_PSS_SALTLEN 146

#define RSA_R_INVALID_SALT_LENGTH 158

#define RSA_R_INVALID_TRAILER 139

#define RSA_R_INVALID_X931_DIGEST 142

#define RSA_R_IQMP_NOT_INVERSE_OF_Q 126

#define RSA_R_KEY_SIZE_TOO_SMALL 120

#define RSA_R_LAST_OCTET_INVALID 134

#define RSA_R_MODULUS_TOO_LARGE 105

#define RSA_R_N_DOES_NOT_EQUAL_P_Q 127

#define RSA_R_NO_PUBLIC_EXPONENT 140

#define RSA_R_NON_FIPS_METHOD 149

#define RSA_R_NON_FIPS_RSA_METHOD 149

#define RSA_R_NULL_BEFORE_BLOCK_MISSING 113

#define RSA_R_OAEP_DECODING_ERROR 121

#define RSA_R_OPERATION_NOT_ALLOWED_IN_FIPS_MODE 150

#define RSA_R_OPERATION_NOT_SUPPORTED_FOR_THIS_KEYTYPE 148

#define RSA_R_P_NOT_PRIME 128

#define RSA_R_PADDING_CHECK_FAILED 114

#define RSA_R_Q_NOT_PRIME 129

#define RSA_R_RSA_OPERATIONS_NOT_SUPPORTED 130

#define RSA_R_SLEN_CHECK_FAILED 136

#define RSA_R_SLEN_RECOVERY_FAILED 135

#define RSA_R_SSLV3_ROLLBACK_ATTACK 115

#define RSA_R_THE_ASN1_OBJECT_IDENTIFIER_IS_NOT_KNOWN_FOR_THIS_MD 116

#define RSA_R_UNKNOWN_ALGORITHM_TYPE 117

#define RSA_R_UNKNOWN_MASK_DIGEST 151

#define RSA_R_UNKNOWN_PADDING_TYPE 118

#define RSA_R_UNKNOWN_PSS_DIGEST 152

#define RSA_R_UNSUPPORTED_MASK_ALGORITHM 153

#define RSA_R_UNSUPPORTED_MASK_PARAMETER 154

#define RSA_R_UNSUPPORTED_SIGNATURE_TYPE 155

#define RSA_R_VALUE_MISSING 147

#define RSA_R_WRONG_SIGNATURE_LENGTH 119

#define RSA_SSLV23_PADDING 2

#define RSA_X931_PADDING 5

typedef struct rsa_pss_params_st rsa_pss_params_st, *Prsa_pss_params_st;

typedef struct rsa_pss_params_st RSA_PSS_PARAMS;

struct rsa_pss_params_st {
    X509_ALGOR * hashAlgorithm;
    X509_ALGOR * maskGenAlgorithm;
    ASN1_INTEGER * saltLength;
    ASN1_INTEGER * trailerField;
};

#define CPUSTATES 4

#define DK_NDRIVE 4

#define FSCALE 256

#define FSHIFT 8

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

#define MAXUSERS 100

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

#define RUSERSPROC_ALLNAMES 3

#define RUSERSPROC_NAMES 2

#define RUSERSPROC_NUM 1

#define RUSERSPROG 100002

#define RUSERSVERS 3

#define RUSERSVERS_3 3

#define RUSERSVERS_IDLE 2

typedef struct ru_utmp ru_utmp, *Pru_utmp;

struct ru_utmp {
    char ut_line[8];
    char ut_name[8];
    char ut_host[16];
    long ut_time;
};

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

typedef struct utmparr utmparr, *Putmparr;

struct utmparr {
    struct ru_utmp * * uta_arr;
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

#define _PROTOCOLS_RWHOD_H 1

#define WHODTYPE_STATUS 1

#define WHODVERSION 1

typedef struct outmp outmp, *Poutmp;

struct outmp {
    char out_line[8];
    char out_name[8];
    int32_t out_time;
};

typedef struct whod whod, *Pwhod;

typedef struct whoent whoent, *Pwhoent;

struct whoent {
    struct outmp we_utmp;
    int we_idle;
};

struct whod {
    char wd_vers;
    char wd_type;
    char wd_pad[2];
    int wd_sendtime;
    int wd_recvtime;
    char wd_hostname[32];
    int wd_loadav[3];
    int wd_boottime;
    struct whoent wd_we[1024];
};

typedef void * OPENSSL_BLOCK;

typedef char * OPENSSL_CSTRING;

typedef char * OPENSSL_STRING;

typedef struct stack_st_OPENSSL_BLOCK stack_st_OPENSSL_BLOCK, *Pstack_st_OPENSSL_BLOCK;

struct stack_st_OPENSSL_BLOCK {
    _STACK stack;
};

typedef struct stack_st_OPENSSL_STRING stack_st_OPENSSL_STRING, *Pstack_st_OPENSSL_STRING;

struct stack_st_OPENSSL_STRING {
    _STACK stack;
};

#define __CPU_SETSIZE 1024

#define __defined_schedparam 1

#define _SCHED_H 1

#define CLONE_CHILD_CLEARTID 2097152

#define CLONE_CHILD_SETTID 16777216

#define CLONE_DETACHED 4194304

#define CLONE_FILES 1024

#define CLONE_FS 512

#define CLONE_IO 2147483648

#define CLONE_NEWIPC 134217728

#define CLONE_NEWNET 1073741824

#define CLONE_NEWNS 131072

#define CLONE_NEWPID 536870912

#define CLONE_NEWUSER 268435456

#define CLONE_NEWUTS 67108864

#define CLONE_PARENT 32768

#define CLONE_PARENT_SETTID 1048576

#define CLONE_PTRACE 8192

#define CLONE_SETTLS 524288

#define CLONE_SIGHAND 2048

#define CLONE_SYSVSEM 262144

#define CLONE_THREAD 65536

#define CLONE_UNTRACED 8388608

#define CLONE_VFORK 16384

#define CLONE_VM 256

#define CPU_SETSIZE 1024

#define CSIGNAL 255

#define SCHED_BATCH 3

#define SCHED_FIFO 1

#define SCHED_IDLE 5

#define SCHED_OTHER 0

#define SCHED_RESET_ON_FORK 1073741824

#define SCHED_RR 2

typedef ulong __cpu_mask;

typedef struct __sched_param __sched_param, *P__sched_param;

struct __sched_param {
    int __sched_priority;
};

typedef struct cpu_set_t cpu_set_t, *Pcpu_set_t;

struct cpu_set_t {
    __cpu_mask __bits[128];
};

typedef struct sched_param sched_param, *Psched_param;

struct sched_param {
    int __sched_priority;
};

#define _SEARCH_H 1

typedef enum enum_1486 {
    endorder=2,
    leaf=3,
    postorder=1,
    preorder=0
} enum_1486;

typedef enum enum_1486 VISIT;

typedef void (* __action_fn_t)(void *, VISIT, int);

typedef void (* __free_fn_t)(void *);

typedef struct _ENTRY _ENTRY, *P_ENTRY;

struct _ENTRY {
};

typedef enum enum_1478 {
    ENTER=1,
    FIND=0
} enum_1478;

typedef enum enum_1478 ACTION;

typedef struct entry entry, *Pentry;

typedef struct entry ENTRY;

struct entry {
    char * key;
    void * data;
};

typedef struct hsearch_data hsearch_data, *Phsearch_data;

struct hsearch_data {
    struct _ENTRY * table;
    uint size;
    uint filled;
};

typedef struct qelem qelem, *Pqelem;

struct qelem {
    struct qelem * q_forw;
    struct qelem * q_back;
    char q_data[1];
};

#define SEED_BLOCK_SIZE 16

#define SEED_KEY_LENGTH 16

typedef struct seed_key_st seed_key_st, *Pseed_key_st;

typedef struct seed_key_st SEED_KEY_SCHEDULE;

struct seed_key_st {
    uint data[32];
};

#define _SYS_SELECT_H 1

#define FD_SETSIZE 1024

typedef long __fd_mask;

typedef __fd_mask fd_mask;

typedef struct fd_set fd_set, *Pfd_set;

struct fd_set {
    __fd_mask fds_bits[128];
};

typedef struct __sigset_t sigset_t;

#define _SEM_SEMUN_UNDEFINED 1

#define _SYS_SEM_H 1

#define GETALL 13

#define GETNCNT 14

#define GETPID 11

#define GETVAL 12

#define GETZCNT 15

#define SEM_INFO 19

#define SEM_STAT 18

#define SEM_UNDO 4096

#define SETALL 17

#define SETVAL 16

typedef struct sembuf sembuf, *Psembuf;

struct sembuf {
    ushort sem_num;
    short sem_op;
    short sem_flg;
};

typedef struct semid_ds semid_ds, *Psemid_ds;

struct semid_ds {
    struct ipc_perm sem_perm;
    __time_t sem_otime;
    ulong __unused1;
    __time_t sem_ctime;
    ulong __unused2;
    ulong sem_nsems;
    ulong __unused3;
    ulong __unused4;
};

typedef struct seminfo seminfo, *Pseminfo;

struct seminfo {
    int semmap;
    int semmni;
    int semmns;
    int semmnu;
    int semmsl;
    int semopm;
    int semume;
    int semusz;
    int semvmx;
    int semaem;
};

#define __SIZEOF_SEM_T 16

#define _SEMAPHORE_H 1

#define SEM_FAILED 0

typedef union sem_t sem_t, *Psem_t;

union sem_t {
    char __size[16];
    long __align;
};

#define _SYS_SENDFILE_H 1

#define _BITS_SETJMP_H 1

#define _SETJMP_H 1

typedef struct __jmp_buf_tag jmp_buf[1];

typedef struct __jmp_buf_tag sigjmp_buf[1];

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

typedef union _union_314 _union_314, *P_union_314;

union _union_314 {
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
    union _union_314 u;
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

#define _SYS_SHM_H 1

#define SHM_DEST 512

#define SHM_EXEC 32768

#define SHM_HUGETLB 2048

#define SHM_INFO 14

#define SHM_LOCK 11

#define SHM_LOCKED 1024

#define SHM_NORESERVE 4096

#define SHM_R 256

#define SHM_RDONLY 4096

#define SHM_REMAP 16384

#define SHM_RND 8192

#define SHM_STAT 13

#define SHM_UNLOCK 12

#define SHM_W 128

typedef struct shm_info shm_info, *Pshm_info;

struct shm_info {
    int used_ids;
    ulong shm_tot;
    ulong shm_rss;
    ulong shm_swp;
    ulong swap_attempts;
    ulong swap_successes;
};

typedef ulong shmatt_t;

typedef struct shmid_ds shmid_ds, *Pshmid_ds;

struct shmid_ds {
    struct ipc_perm shm_perm;
    size_t shm_segsz;
    __time_t shm_atime;
    ulong __unused1;
    __time_t shm_dtime;
    ulong __unused2;
    __time_t shm_ctime;
    ulong __unused3;
    __pid_t shm_cpid;
    __pid_t shm_lpid;
    shmatt_t shm_nattch;
    ulong __unused4;
    ulong __unused5;
};

typedef struct shminfo shminfo, *Pshminfo;

struct shminfo {
    ulong shmmax;
    ulong shmmin;
    ulong shmmni;
    ulong shmseg;
    ulong shmall;
    ulong __unused1;
    ulong __unused2;
    ulong __unused3;
    ulong __unused4;
};

#define SA_INTERRUPT 536870912

#define SA_NOCLDSTOP 1

#define SA_NOCLDWAIT 2

#define SA_NODEFER 1073741824

#define SA_NOMASK 1073741824

#define SA_ONESHOT 2147483648

#define SA_ONSTACK 134217728

#define SA_RESETHAND 2147483648

#define SA_RESTART 268435456

#define SA_SIGINFO 4

#define SA_STACK 134217728

#define SIG_BLOCK 0

#define SIG_SETMASK 2

#define SIG_UNBLOCK 1

typedef union _union_1048 _union_1048, *P_union_1048;

typedef struct siginfo siginfo, *Psiginfo;

typedef struct siginfo siginfo_t;

typedef void (* __sighandler_t)(int);

typedef union _union_1028 _union_1028, *P_union_1028;

typedef struct _struct_1029 _struct_1029, *P_struct_1029;

typedef struct _struct_1030 _struct_1030, *P_struct_1030;

typedef struct _struct_1031 _struct_1031, *P_struct_1031;

typedef struct _struct_1032 _struct_1032, *P_struct_1032;

typedef struct _struct_1033 _struct_1033, *P_struct_1033;

typedef struct _struct_1034 _struct_1034, *P_struct_1034;

typedef long __clock_t;

struct _struct_1031 {
    __pid_t si_pid;
    __uid_t si_uid;
    sigval_t si_sigval;
};

struct _struct_1033 {
    void * si_addr;
};

struct _struct_1029 {
    __pid_t si_pid;
    __uid_t si_uid;
};

struct _struct_1030 {
    int si_tid;
    int si_overrun;
    sigval_t si_sigval;
};

struct _struct_1034 {
    long si_band;
    int si_fd;
};

struct _struct_1032 {
    __pid_t si_pid;
    __uid_t si_uid;
    int si_status;
    __clock_t si_utime;
    __clock_t si_stime;
};

union _union_1028 {
    int _pad[125];
    struct _struct_1029 _kill;
    struct _struct_1030 _timer;
    struct _struct_1031 _rt;
    struct _struct_1032 _sigchld;
    struct _struct_1033 _sigfault;
    struct _struct_1034 _sigpoll;
};

struct siginfo {
    int si_signo;
    int si_errno;
    int si_code;
    union _union_1028 _sifields;
};

union _union_1048 {
    __sighandler_t sa_handler;
    void (* sa_sigaction)(int, siginfo_t *, void *);
};

typedef struct sigaction sigaction, *Psigaction;

struct sigaction {
    union _union_1048 __sigaction_handler;
    struct __sigset_t sa_mask;
    int sa_flags;
    void (* sa_restorer)(void);
};

#define _BITS_SIGCONTEXT_H 1

typedef struct _fpreg _fpreg, *P_fpreg;

struct _fpreg {
    ushort significand[4];
    ushort exponent;
};

typedef struct _fpstate _fpstate, *P_fpstate;

typedef uint __uint32_t;

typedef struct _fpxreg _fpxreg, *P_fpxreg;

typedef struct _xmmreg _xmmreg, *P_xmmreg;

struct _fpxreg {
    ushort significand[4];
    ushort exponent;
    ushort padding[3];
};

struct _xmmreg {
    __uint32_t element[4];
};

struct _fpstate {
    __uint32_t cw;
    __uint32_t sw;
    __uint32_t tag;
    __uint32_t ipoff;
    __uint32_t cssel;
    __uint32_t dataoff;
    __uint32_t datasel;
    struct _fpreg _st[8];
    ushort status;
    ushort magic;
    __uint32_t _fxsr_env[6];
    __uint32_t mxcsr;
    __uint32_t reserved;
    struct _fpxreg _fxsr_st[8];
    struct _xmmreg _xmm[8];
    __uint32_t padding[56];
};

typedef struct sigcontext sigcontext, *Psigcontext;

struct sigcontext {
    ushort gs;
    ushort __gsh;
    ushort fs;
    ushort __fsh;
    ushort es;
    ushort __esh;
    ushort ds;
    ushort __dsh;
    ulong edi;
    ulong esi;
    ulong ebp;
    ulong esp;
    ulong ebx;
    ulong edx;
    ulong ecx;
    ulong eax;
    ulong trapno;
    ulong err;
    ulong eip;
    ushort cs;
    ushort __csh;
    ulong eflags;
    ulong esp_at_signal;
    ushort ss;
    ushort __ssh;
    struct _fpstate * fpstate;
    ulong oldmask;
    ulong cr2;
};

#define __have_sigevent_t 1

#define __have_siginfo_t 1

#define __have_sigval_t 1

#define __SI_MAX_SIZE 128

#define __SIGEV_MAX_SIZE 64

typedef enum enum_1035 {
    SI_ASYNCIO=3,
    SI_ASYNCNL=0,
    SI_KERNEL=128,
    SI_MESGQ=4,
    SI_QUEUE=6,
    SI_SIGIO=2,
    SI_TIMER=5,
    SI_TKILL=1,
    SI_USER=7
} enum_1035;

typedef enum enum_1036 {
    ILL_BADSTK=8,
    ILL_COPROC=7,
    ILL_ILLADR=3,
    ILL_ILLOPC=1,
    ILL_ILLOPN=2,
    ILL_ILLTRP=4,
    ILL_PRVOPC=5,
    ILL_PRVREG=6
} enum_1036;

typedef enum enum_1037 {
    FPE_FLTDIV=3,
    FPE_FLTINV=7,
    FPE_FLTOVF=4,
    FPE_FLTRES=6,
    FPE_FLTSUB=8,
    FPE_FLTUND=5,
    FPE_INTDIV=1,
    FPE_INTOVF=2
} enum_1037;

typedef enum enum_1038 {
    SEGV_ACCERR=2,
    SEGV_MAPERR=1
} enum_1038;

typedef enum enum_1039 {
    BUS_ADRALN=1,
    BUS_ADRERR=2,
    BUS_OBJERR=3
} enum_1039;

typedef enum enum_1040 {
    TRAP_BRKPT=1,
    TRAP_TRACE=2
} enum_1040;

typedef enum enum_1041 {
    CLD_CONTINUED=6,
    CLD_DUMPED=3,
    CLD_EXITED=1,
    CLD_KILLED=2,
    CLD_STOPPED=5,
    CLD_TRAPPED=4
} enum_1041;

typedef enum enum_1042 {
    POLL_ERR=4,
    POLL_HUP=6,
    POLL_IN=1,
    POLL_MSG=3,
    POLL_OUT=2,
    POLL_PRI=5
} enum_1042;

typedef enum enum_1046 {
    SIGEV_NONE=1,
    SIGEV_SIGNAL=0,
    SIGEV_THREAD=2,
    SIGEV_THREAD_ID=4
} enum_1046;

typedef struct sigevent sigevent_t;

#define NSIG 65

#define SV_INTERRUPT 2

#define SV_ONSTACK 1

#define SV_RESETHAND 4

typedef int __sig_atomic_t;

typedef __sig_atomic_t sig_atomic_t;

typedef __sighandler_t sig_t;

typedef __sighandler_t sighandler_t;

typedef struct sigvec sigvec, *Psigvec;

struct sigvec {
    __sighandler_t sv_handler;
    int sv_mask;
    int sv_flags;
};

#define _SYS_SIGNALFD_H 1

typedef enum enum_1678 {
    SFD_CLOEXEC=2000000,
    SFD_NONBLOCK=4000
} enum_1678;

typedef struct signalfd_siginfo signalfd_siginfo, *Psignalfd_siginfo;

struct signalfd_siginfo {
    uint32_t ssi_signo;
    int32_t ssi_errno;
    int32_t ssi_code;
    uint32_t ssi_pid;
    uint32_t ssi_uid;
    int32_t ssi_fd;
    uint32_t ssi_tid;
    uint32_t ssi_band;
    uint32_t ssi_overrun;
    uint32_t ssi_trapno;
    int32_t ssi_status;
    int32_t ssi_int;
    uint64_t ssi_ptr;
    uint64_t ssi_utime;
    uint64_t ssi_stime;
    uint64_t ssi_addr;
    uint8_t __pad[48];
};

#define __SIGRTMAX 64

#define __SIGRTMIN 32

#define _NSIG 65

#define SIG_DFL 0

#define SIG_ERR -1

#define SIG_HOLD 2

#define SIG_IGN 1

#define SIGABRT 6

#define SIGALRM 14

#define SIGBUS 7

#define SIGCHLD 17

#define SIGCLD 17

#define SIGCONT 18

#define SIGFPE 8

#define SIGHUP 1

#define SIGILL 4

#define SIGINT 2

#define SIGIO 29

#define SIGIOT 6

#define SIGKILL 9

#define SIGPIPE 13

#define SIGPOLL 29

#define SIGPROF 27

#define SIGPWR 30

#define SIGQUIT 3

#define SIGSEGV 11

#define SIGSTKFLT 16

#define SIGSTOP 19

#define SIGSYS 31

#define SIGTERM 15

#define SIGTRAP 5

#define SIGTSTP 20

#define SIGTTIN 21

#define SIGTTOU 22

#define SIGUNUSED 31

#define SIGURG 23

#define SIGUSR1 10

#define SIGUSR2 12

#define SIGVTALRM 26

#define SIGWINCH 28

#define SIGXCPU 24

#define SIGXFSZ 25

#define _SIGSET_H_fns 1

#define _SIGSET_H_types 1

#define MINSIGSTKSZ 2048

#define SIGSTKSZ 8192

typedef enum enum_1067 {
    SS_DISABLE=2,
    SS_ONSTACK=1
} enum_1067;

typedef struct sigaltstack sigaltstack, *Psigaltstack;

struct sigaltstack {
    void * ss_sp;
    int ss_flags;
    size_t ss_size;
};

typedef struct sigstack sigstack, *Psigstack;

struct sigstack {
    void * ss_sp;
    int ss_onstack;
};

typedef struct sigaltstack stack_t;

#define _BITS_SIGTHREAD_H 1

#define _BITS_SOCKADDR_H 1

#define _SS_SIZE 128

#define _SYS_SOCKET_H 1

#define AF_APPLETALK 5

#define AF_ASH 18

#define AF_ATMPVC 8

#define AF_ATMSVC 20

#define AF_AX25 3

#define AF_BLUETOOTH 31

#define AF_BRIDGE 7

#define AF_CAN 29

#define AF_DECnet 12

#define AF_ECONET 19

#define AF_FILE 1

#define AF_IEEE802154 36

#define AF_INET 2

#define AF_INET6 10

#define AF_IPX 4

#define AF_IRDA 23

#define AF_ISDN 34

#define AF_IUCV 32

#define AF_KEY 15

#define AF_LLC 26

#define AF_LOCAL 1

#define AF_MAX 37

#define AF_NETBEUI 13

#define AF_NETLINK 16

#define AF_NETROM 6

#define AF_PACKET 17

#define AF_PHONET 35

#define AF_PPPOX 24

#define AF_RDS 21

#define AF_ROSE 11

#define AF_ROUTE 16

#define AF_RXRPC 33

#define AF_SECURITY 14

#define AF_SNA 22

#define AF_TIPC 30

#define AF_UNIX 1

#define AF_UNSPEC 0

#define AF_WANPIPE 25

#define AF_X25 9

#define PF_APPLETALK 5

#define PF_ASH 18

#define PF_ATMPVC 8

#define PF_ATMSVC 20

#define PF_AX25 3

#define PF_BLUETOOTH 31

#define PF_BRIDGE 7

#define PF_CAN 29

#define PF_DECnet 12

#define PF_ECONET 19

#define PF_FILE 1

#define PF_IEEE802154 36

#define PF_INET 2

#define PF_INET6 10

#define PF_IPX 4

#define PF_IRDA 23

#define PF_ISDN 34

#define PF_IUCV 32

#define PF_KEY 15

#define PF_LLC 26

#define PF_LOCAL 1

#define PF_MAX 37

#define PF_NETBEUI 13

#define PF_NETLINK 16

#define PF_NETROM 6

#define PF_PACKET 17

#define PF_PHONET 35

#define PF_PPPOX 24

#define PF_RDS 21

#define PF_ROSE 11

#define PF_ROUTE 16

#define PF_RXRPC 33

#define PF_SECURITY 14

#define PF_SNA 22

#define PF_TIPC 30

#define PF_UNIX 1

#define PF_UNSPEC 0

#define PF_WANPIPE 25

#define PF_X25 9

#define SCM_TIMESTAMP 29

#define SCM_TIMESTAMPING 37

#define SCM_TIMESTAMPNS 35

#define SO_ACCEPTCONN 30

#define SO_ATTACH_FILTER 26

#define SO_BINDTODEVICE 25

#define SO_BPF_EXTENSIONS 48

#define SO_BROADCAST 6

#define SO_BSDCOMPAT 14

#define SO_BUSY_POLL 46

#define SO_DEBUG 1

#define SO_DETACH_FILTER 27

#define SO_DOMAIN 39

#define SO_DONTROUTE 5

#define SO_ERROR 4

#define SO_KEEPALIVE 9

#define SO_LINGER 13

#define SO_MARK 36

#define SO_NO_CHECK 11

#define SO_OOBINLINE 10

#define SO_PASSCRED 16

#define SO_PASSSEC 34

#define SO_PEERCRED 17

#define SO_PEERNAME 28

#define SO_PEERSEC 31

#define SO_PRIORITY 12

#define SO_PROTOCOL 38

#define SO_RCVBUF 8

#define SO_RCVBUFFORCE 33

#define SO_RCVLOWAT 18

#define SO_RCVTIMEO 20

#define SO_REUSEADDR 2

#define SO_REUSEPORT 15

#define SO_RXQ_OVFL 40

#define SO_SECURITY_AUTHENTICATION 22

#define SO_SECURITY_ENCRYPTION_NETWORK 24

#define SO_SECURITY_ENCRYPTION_TRANSPORT 23

#define SO_SNDBUF 7

#define SO_SNDBUFFORCE 32

#define SO_SNDLOWAT 19

#define SO_SNDTIMEO 21

#define SO_TIMESTAMP 29

#define SO_TIMESTAMPING 37

#define SO_TIMESTAMPNS 35

#define SO_TYPE 3

#define SOL_AAL 265

#define SOL_ATM 264

#define SOL_DECNET 261

#define SOL_IRDA 266

#define SOL_PACKET 263

#define SOL_RAW 255

#define SOL_SOCKET 1

#define SOL_X25 262

#define SOMAXCONN 128

typedef enum __socket_type {
    SOCK_CLOEXEC=2000000,
    SOCK_DCCP=6,
    SOCK_DGRAM=2,
    SOCK_NONBLOCK=4000,
    SOCK_PACKET=10,
    SOCK_RAW=3,
    SOCK_RDM=4,
    SOCK_SEQPACKET=5,
    SOCK_STREAM=1
} __socket_type;

typedef struct cmsghdr cmsghdr, *Pcmsghdr;

struct cmsghdr {
    size_t cmsg_len;
    int cmsg_level;
    int cmsg_type;
};

typedef enum enum_1122 {
    MSG_CMSG_CLOEXEC=1073741824,
    MSG_CONFIRM=2048,
    MSG_CTRUNC=8,
    MSG_DONTROUTE=4,
    MSG_DONTWAIT=64,
    MSG_EOR=128,
    MSG_ERRQUEUE=8192,
    MSG_FIN=512,
    MSG_MORE=32768,
    MSG_NOSIGNAL=16384,
    MSG_OOB=1,
    MSG_PEEK=2,
    MSG_PROXY=16,
    MSG_RST=4096,
    MSG_SYN=1024,
    MSG_TRUNC=32,
    MSG_TRYHARD=5,
    MSG_WAITALL=256,
    MSG_WAITFORONE=65536
} enum_1122;

typedef enum enum_1131 {
    SCM_CREDENTIALS=2,
    SCM_RIGHTS=1
} enum_1131;

typedef enum enum_1137 {
    SHUT_RD=0,
    SHUT_RDWR=2,
    SHUT_WR=1
} enum_1137;

typedef struct linger linger, *Plinger;

struct linger {
    int l_onoff;
    int l_linger;
};

typedef struct mmsghdr mmsghdr, *Pmmsghdr;

typedef struct msghdr msghdr, *Pmsghdr;

typedef struct iovec iovec, *Piovec;

struct msghdr {
    void * msg_name;
    socklen_t msg_namelen;
    struct iovec * msg_iov;
    size_t msg_iovlen;
    void * msg_control;
    size_t msg_controllen;
    int msg_flags;
};

struct mmsghdr {
    struct msghdr msg_hdr;
    uint msg_len;
};

struct iovec {
    void * iov_base;
    size_t iov_len;
};

typedef struct osockaddr osockaddr, *Posockaddr;

struct osockaddr {
    ushort sa_family;
    uchar sa_data[14];
};

typedef struct ucred ucred, *Pucred;

typedef __pid_t pid_t;

typedef __uid_t uid_t;

typedef __gid_t gid_t;

struct ucred {
    pid_t pid;
    uid_t uid;
    gid_t gid;
};

#define FIOGETOWN 35075

#define FIOSETOWN 35073

#define SIOCATMARK 35077

#define SIOCGPGRP 35076

#define SIOCGSTAMP 35078

#define SIOCGSTAMPNS 35079

#define SIOCSPGRP 35074

#define _SIOC_NONE 0

#define _SIOC_READ 2

#define _SIOC_WRITE 1

#define AFMT_A_LAW 2

#define AFMT_AC3 1024

#define AFMT_IMA_ADPCM 4

#define AFMT_MPEG 512

#define AFMT_MU_LAW 1

#define AFMT_QUERY 0

#define AFMT_S16_BE 32

#define AFMT_S16_LE 16

#define AFMT_S16_NE 16

#define AFMT_S8 64

#define AFMT_U16_BE 256

#define AFMT_U16_LE 128

#define AFMT_U8 8

#define APF_CPUINTENS 2

#define APF_NETWORK 1

#define APF_NORMAL 0

#define CPF_FIRST 1

#define CPF_LAST 2

#define CPF_NONE 0

#define CTL_BALANCE 8

#define CTL_BANK_SELECT 0

#define CTL_BREATH 2

#define CTL_CELESTE_DEPTH 94

#define CTL_CHORUS_DEPTH 93

#define CTL_DAMPER_PEDAL 64

#define CTL_DATA_DECREMENT 97

#define CTL_DATA_ENTRY 6

#define CTL_DATA_INCREMENT 96

#define CTL_DETUNE_DEPTH 94

#define CTL_EXPRESSION 11

#define CTL_EXT_EFF_DEPTH 91

#define CTL_FOOT 4

#define CTL_GENERAL_PURPOSE1 16

#define CTL_GENERAL_PURPOSE2 17

#define CTL_GENERAL_PURPOSE3 18

#define CTL_GENERAL_PURPOSE4 19

#define CTL_GENERAL_PURPOSE5 80

#define CTL_GENERAL_PURPOSE6 81

#define CTL_GENERAL_PURPOSE7 82

#define CTL_GENERAL_PURPOSE8 83

#define CTL_HOLD 64

#define CTL_HOLD2 69

#define CTL_MAIN_VOLUME 7

#define CTL_MODWHEEL 1

#define CTL_NONREG_PARM_NUM_LSB 98

#define CTL_NONREG_PARM_NUM_MSB 99

#define CTL_PAN 10

#define CTL_PHASER_DEPTH 95

#define CTL_PORTAMENTO 65

#define CTL_PORTAMENTO_TIME 5

#define CTL_REGIST_PARM_NUM_LSB 100

#define CTL_REGIST_PARM_NUM_MSB 101

#define CTL_SOFT_PEDAL 67

#define CTL_SOSTENUTO 66

#define CTL_SUSTAIN 64

#define CTL_TREMOLO_DEPTH 92

#define CTRL_EXPRESSION 253

#define CTRL_MAIN_VOLUME 252

#define CTRL_PITCH_BENDER 255

#define CTRL_PITCH_BENDER_RANGE 254

#define DSP_BIND_CENTER_LFE 4

#define DSP_BIND_FRONT 1

#define DSP_BIND_HANDSET 8

#define DSP_BIND_I2S 128

#define DSP_BIND_MIC 16

#define DSP_BIND_MODEM1 32

#define DSP_BIND_MODEM2 64

#define DSP_BIND_QUERY 0

#define DSP_BIND_SPDIF 256

#define DSP_BIND_SURR 2

#define DSP_CAP_BATCH 1024

#define DSP_CAP_BIND 32768

#define DSP_CAP_COPROC 2048

#define DSP_CAP_DUPLEX 256

#define DSP_CAP_MMAP 8192

#define DSP_CAP_MULTI 16384

#define DSP_CAP_REALTIME 512

#define DSP_CAP_REVISION 255

#define DSP_CAP_TRIGGER 4096

#define EV_CHN_COMMON 146

#define EV_CHN_VOICE 147

#define EV_SEQ_LOCAL 128

#define EV_SYSEX 148

#define EV_TIMING 129

#define FM_PATCH 509

#define FM_TYPE_ADLIB 0

#define FM_TYPE_OPL3 1

#define GUS_PATCH 1277

#define LOCL_STARTAUDIO 1

#define MAUI_PATCH 1789

#define MIDI_CAP_MPU401 1

#define MIDI_CHN_PRESSURE 208

#define MIDI_CTL_CHANGE 176

#define MIDI_KEY_PRESSURE 160

#define MIDI_NOTEOFF 128

#define MIDI_NOTEON 144

#define MIDI_PGM_CHANGE 192

#define MIDI_PITCH_BEND 224

#define MIDI_SYSTEM_PREFIX 240

#define MIDI_TYPE_MPU401 1025

#define OPL3_PATCH 1021

#define PCM_ENABLE_INPUT 1

#define PCM_ENABLE_OUTPUT 2

#define SAMPLE_TYPE_BASIC 16

#define SAMPLE_TYPE_GUS 16

#define SAMPLE_TYPE_WAVEFRONT 17

#define SEQ_AFTERTOUCH 9

#define SEQ_BALANCE 11

#define SEQ_CONTROLLER 10

#define SEQ_DRUMOFF 7

#define SEQ_DRUMON 6

#define SEQ_ECHO 8

#define SEQ_EXTENDED 255

#define SEQ_FMNOTEOFF 0

#define SEQ_FMNOTEON 1

#define SEQ_FMPGMCHANGE 3

#define SEQ_FULLSIZE 253

#define SEQ_MIDIPUTC 5

#define SEQ_NOTEOFF 0

#define SEQ_NOTEON 1

#define SEQ_PGMCHANGE 3

#define SEQ_PRIVATE 254

#define SEQ_SYNCTIMER 4

#define SEQ_VOLMODE 12

#define SEQ_WAIT 2

#define SIOC_IN 1073741824

#define SIOC_INOUT 3221225472

#define SIOC_OUT 2147483648

#define SNDCARD_ADLIB 1

#define SNDCARD_CS4232 21

#define SNDCARD_CS4232_MPU 22

#define SNDCARD_GUS 4

#define SNDCARD_GUS16 9

#define SNDCARD_GUSPNP 25

#define SNDCARD_MAD16 19

#define SNDCARD_MAD16_MPU 20

#define SNDCARD_MAUI 23

#define SNDCARD_MPU401 5

#define SNDCARD_MSS 10

#define SNDCARD_PAS 3

#define SNDCARD_PSEUDO_MSS 24

#define SNDCARD_PSS 11

#define SNDCARD_PSS_MPU 13

#define SNDCARD_PSS_MSS 14

#define SNDCARD_SB 2

#define SNDCARD_SB16 6

#define SNDCARD_SB16MIDI 7

#define SNDCARD_SSCAPE 12

#define SNDCARD_SSCAPE_MSS 15

#define SNDCARD_TRXPRO 16

#define SNDCARD_TRXPRO_MPU 18

#define SNDCARD_TRXPRO_SB 17

#define SNDCARD_UART401 26

#define SNDCARD_UART6850 8

#define SOUND_CAP_EXCL_INPUT 1

#define SOUND_MASK_ALTPCM 1024

#define SOUND_MASK_BASS 2

#define SOUND_MASK_CD 256

#define SOUND_MASK_DIGITAL1 131072

#define SOUND_MASK_DIGITAL2 262144

#define SOUND_MASK_DIGITAL3 524288

#define SOUND_MASK_ENHANCE 2147483648

#define SOUND_MASK_IGAIN 4096

#define SOUND_MASK_IMIX 512

#define SOUND_MASK_LINE 64

#define SOUND_MASK_LINE1 16384

#define SOUND_MASK_LINE2 32768

#define SOUND_MASK_LINE3 65536

#define SOUND_MASK_LOUD 2147483648

#define SOUND_MASK_MIC 128

#define SOUND_MASK_MONITOR 16777216

#define SOUND_MASK_MUTE 2147483648

#define SOUND_MASK_OGAIN 8192

#define SOUND_MASK_PCM 16

#define SOUND_MASK_PHONEIN 1048576

#define SOUND_MASK_PHONEOUT 2097152

#define SOUND_MASK_RADIO 8388608

#define SOUND_MASK_RECLEV 2048

#define SOUND_MASK_SPEAKER 32

#define SOUND_MASK_SYNTH 8

#define SOUND_MASK_TREBLE 4

#define SOUND_MASK_VIDEO 4194304

#define SOUND_MASK_VOLUME 1

#define SOUND_MIXER_ALTPCM 10

#define SOUND_MIXER_BASS 1

#define SOUND_MIXER_CAPS 252

#define SOUND_MIXER_CD 8

#define SOUND_MIXER_DEVMASK 254

#define SOUND_MIXER_DIGITAL1 17

#define SOUND_MIXER_DIGITAL2 18

#define SOUND_MIXER_DIGITAL3 19

#define SOUND_MIXER_ENHANCE 31

#define SOUND_MIXER_IGAIN 12

#define SOUND_MIXER_IMIX 9

#define SOUND_MIXER_LINE 6

#define SOUND_MIXER_LINE1 14

#define SOUND_MIXER_LINE2 15

#define SOUND_MIXER_LINE3 16

#define SOUND_MIXER_LOUD 31

#define SOUND_MIXER_MIC 7

#define SOUND_MIXER_MONITOR 24

#define SOUND_MIXER_MUTE 31

#define SOUND_MIXER_NONE 31

#define SOUND_MIXER_NRDEVICES 25

#define SOUND_MIXER_OGAIN 13

#define SOUND_MIXER_OUTMASK 249

#define SOUND_MIXER_OUTSRC 250

#define SOUND_MIXER_PCM 4

#define SOUND_MIXER_PHONEIN 20

#define SOUND_MIXER_PHONEOUT 21

#define SOUND_MIXER_RADIO 23

#define SOUND_MIXER_RECLEV 11

#define SOUND_MIXER_RECMASK 253

#define SOUND_MIXER_RECSRC 255

#define SOUND_MIXER_SPEAKER 5

#define SOUND_MIXER_STEREODEVS 251

#define SOUND_MIXER_SYNTH 3

#define SOUND_MIXER_TREBLE 2

#define SOUND_MIXER_VIDEO 22

#define SOUND_MIXER_VOLUME 0

#define SOUND_ONOFF_MAX 30

#define SOUND_ONOFF_MIN 28

#define SOUND_VERSION 198658

#define SPDIF_CC 2032

#define SPDIF_COPY 4

#define SPDIF_DRS 16384

#define SPDIF_L 2048

#define SPDIF_N_AUD 2

#define SPDIF_PRE 8

#define SPDIF_PRO 1

#define SPDIF_V 32768

#define SYNTH_CAP_INPUT 4

#define SYNTH_CAP_OPL3 2

#define SYNTH_CAP_PERCMODE 1

#define SYNTH_TYPE_FM 0

#define SYNTH_TYPE_MIDI 2

#define SYNTH_TYPE_SAMPLE 1

#define SYSEX_PATCH 1533

#define TMR_CLOCK 9

#define TMR_CONTINUE 5

#define TMR_ECHO 8

#define TMR_EXTERNAL 2

#define TMR_INTERNAL 1

#define TMR_MODE_CLS 64

#define TMR_MODE_FSK 32

#define TMR_MODE_MIDI 16

#define TMR_MODE_SMPTE 128

#define TMR_SPP 10

#define TMR_START 4

#define TMR_STOP 3

#define TMR_TEMPO 6

#define TMR_TIMESIG 11

#define TMR_WAIT_ABS 2

#define TMR_WAIT_REL 1

#define VOL_METHOD_ADAGIO 1

#define VOL_METHOD_LINEAR 2

#define WAVE_16_BITS 1

#define WAVE_BIDIR_LOOP 8

#define WAVE_ENVELOPES 64

#define WAVE_FAST_RELEASE 128

#define WAVE_FRACTIONS 524288

#define WAVE_LOOP_BACK 16

#define WAVE_LOOPING 4

#define WAVE_MULAW 536870912

#define WAVE_PATCH 1277

#define WAVE_ROM 1073741824

#define WAVE_SCALE 262144

#define WAVE_SUSTAIN_ON 32

#define WAVE_TREMOLO 131072

#define WAVE_UNSIGNED 2

#define WAVE_VIBRATO 65536

#define WAVEFRONT_PATCH 1789

typedef struct _old_mixer_info _old_mixer_info, *P_old_mixer_info;

struct _old_mixer_info {
    char id[16];
    char name[32];
};

typedef struct audio_buf_info audio_buf_info, *Paudio_buf_info;

struct audio_buf_info {
    int fragments;
    int fragstotal;
    int fragsize;
    int bytes;
};

typedef struct buffmem_desc buffmem_desc, *Pbuffmem_desc;

struct buffmem_desc {
    uint * buffer;
    int size;
};

typedef struct copr_buffer copr_buffer, *Pcopr_buffer;

struct copr_buffer {
    int command;
    int flags;
    int len;
    int offs;
    uchar data[4000];
};

typedef struct copr_debug_buf copr_debug_buf, *Pcopr_debug_buf;

struct copr_debug_buf {
    int command;
    int parm1;
    int parm2;
    int flags;
    int len;
};

typedef struct copr_msg copr_msg, *Pcopr_msg;

struct copr_msg {
    int len;
    uchar data[4000];
};

typedef struct count_info count_info, *Pcount_info;

struct count_info {
    int bytes;
    int blocks;
    int ptr;
};

typedef struct midi_info midi_info, *Pmidi_info;

struct midi_info {
    char name[30];
    int device;
    uint capabilities;
    int dev_type;
    int dummies[18];
};

typedef struct mixer_info mixer_info, *Pmixer_info;

struct mixer_info {
    char id[16];
    char name[32];
    int modify_counter;
    int fillers[10];
};

typedef uchar mixer_record[128];

typedef struct mixer_vol_table mixer_vol_table, *Pmixer_vol_table;

struct mixer_vol_table {
    int num;
    char name[32];
    int levels[32];
};

typedef struct mpu_command_rec mpu_command_rec, *Pmpu_command_rec;

struct mpu_command_rec {
    uchar cmd;
    char nr_args;
    char nr_returns;
    uchar data[30];
};

typedef struct patch_info patch_info, *Ppatch_info;

struct patch_info {
    ushort key;
    short device_no;
    short instr_no;
    uint mode;
    int len;
    int loop_start;
    int loop_end;
    uint base_freq;
    uint base_note;
    uint high_note;
    uint low_note;
    int panning;
    int detuning;
    uchar env_rate[6];
    uchar env_offset[6];
    uchar tremolo_sweep;
    uchar tremolo_rate;
    uchar tremolo_depth;
    uchar vibrato_sweep;
    uchar vibrato_rate;
    uchar vibrato_depth;
    int scale_frequency;
    uint scale_factor;
    int volume;
    int fractions;
    int reserved1;
    int spare[2];
    char data[1];
};

typedef struct remove_sample remove_sample, *Premove_sample;

struct remove_sample {
    int devno;
    int bankno;
    int instrno;
};

typedef uchar sbi_instr_data[32];

typedef struct sbi_instrument sbi_instrument, *Psbi_instrument;

struct sbi_instrument {
    ushort key;
    short device;
    int channel;
    sbi_instr_data operators;
};

typedef struct seq_event_rec seq_event_rec, *Pseq_event_rec;

struct seq_event_rec {
    uchar arr[8];
};

typedef struct sound_timer_info sound_timer_info, *Psound_timer_info;

struct sound_timer_info {
    char name[32];
    int caps;
};

typedef struct synth_control synth_control, *Psynth_control;

struct synth_control {
    int devno;
    char data[4000];
};

typedef struct synth_info synth_info, *Psynth_info;

struct synth_info {
    char name[30];
    int device;
    int synth_type;
    int synth_subtype;
    int perc_mode;
    int nr_voices;
    int nr_drums;
    int instr_bank_size;
    uint capabilities;
    int dummies[19];
};

typedef struct sysex_info sysex_info, *Psysex_info;

struct sysex_info {
    short key;
    short device_no;
    int len;
    uchar data[1];
};

#define _SPAWN_H 1

#define POSIX_SPAWN_RESETIDS 1

#define POSIX_SPAWN_SETPGROUP 2

#define POSIX_SPAWN_SETSCHEDPARAM 16

#define POSIX_SPAWN_SETSCHEDULER 32

#define POSIX_SPAWN_SETSIGDEF 4

#define POSIX_SPAWN_SETSIGMASK 8

#define POSIX_SPAWN_USEVFORK 64

typedef struct __spawn_action __spawn_action, *P__spawn_action;

struct __spawn_action {
};

typedef struct posix_spawn_file_actions_t posix_spawn_file_actions_t, *Pposix_spawn_file_actions_t;

struct posix_spawn_file_actions_t {
    int __allocated;
    int __used;
    struct __spawn_action * __actions;
    int __pad[16];
};

typedef struct posix_spawnattr_t posix_spawnattr_t, *Pposix_spawnattr_t;

struct posix_spawnattr_t {
    short __flags;
    pid_t __pgrp;
    sigset_t __sd;
    sigset_t __ss;
    struct sched_param __sp;
    int __policy;
    int __pad[16];
};

#define SPRAYMAX 8845

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

#define SRTP_AES128_CM_SHA1_32 2

#define SRTP_AES128_CM_SHA1_80 1

#define SRTP_AES128_F8_SHA1_32 4

#define SRTP_AES128_F8_SHA1_80 3

#define SRTP_NULL_SHA1_32 6

#define SRTP_NULL_SHA1_80 5

#define OPENSSL_NPN_NEGOTIATED 1

#define OPENSSL_NPN_NO_OVERLAP 2

#define OPENSSL_NPN_UNSUPPORTED 0

#define PSK_MAX_IDENTITY_LEN 128

#define PSK_MAX_PSK_LEN 256

#define SSL_FILETYPE_ASN1 2

#define SSL_FILETYPE_PEM 1

#define SSL_MAC_FLAG_READ_MAC_STREAM 1

#define SSL_MAC_FLAG_WRITE_MAC_STREAM 2

#define SSL_MAX_BUF_FREELIST_LEN_DEFAULT 32

#define SSL_MAX_CERT_LIST_DEFAULT 102400

#define SSL_MAX_KEY_ARG_LENGTH 8

#define SSL_MAX_KRB5_PRINCIPAL_LENGTH 256

#define SSL_MAX_MASTER_KEY_LENGTH 48

#define SSL_MAX_SID_CTX_LENGTH 32

#define SSL_MAX_SSL_SESSION_ID_LENGTH 32

#define SSL_MIN_RSA_MODULUS_LENGTH_IN_BYTES 64

#define SSL_MODE_ACCEPT_MOVING_WRITE_BUFFER 2

#define SSL_MODE_AUTO_RETRY 4

#define SSL_MODE_ENABLE_PARTIAL_WRITE 1

#define SSL_MODE_NO_AUTO_CHAIN 8

#define SSL_MODE_RELEASE_BUFFERS 16

#define SSL_MODE_SEND_FALLBACK_SCSV 128

#define SSL_NOTHING 1

#define SSL_OP_ALL 2147486711

#define SSL_OP_ALLOW_UNSAFE_LEGACY_RENEGOTIATION 262144

#define SSL_OP_CIPHER_SERVER_PREFERENCE 4194304

#define SSL_OP_CISCO_ANYCONNECT 32768

#define SSL_OP_COOKIE_EXCHANGE 8192

#define SSL_OP_CRYPTOPRO_TLSEXT_BUG 2147483648

#define SSL_OP_DONT_INSERT_EMPTY_FRAGMENTS 2048

#define SSL_OP_EPHEMERAL_RSA 0

#define SSL_OP_LEGACY_SERVER_CONNECT 4

#define SSL_OP_MICROSOFT_BIG_SSLV3_BUFFER 32

#define SSL_OP_MICROSOFT_SESS_ID_BUG 1

#define SSL_OP_MSIE_SSLV2_RSA_PADDING 64

#define SSL_OP_NETSCAPE_CA_DN_BUG 536870912

#define SSL_OP_NETSCAPE_CHALLENGE_BUG 2

#define SSL_OP_NETSCAPE_DEMO_CIPHER_CHANGE_BUG 1073741824

#define SSL_OP_NETSCAPE_REUSE_CIPHER_CHANGE_BUG 8

#define SSL_OP_NO_COMPRESSION 131072

#define SSL_OP_NO_QUERY_MTU 4096

#define SSL_OP_NO_SESSION_RESUMPTION_ON_RENEGOTIATION 65536

#define SSL_OP_NO_SSLv2 16777216

#define SSL_OP_NO_SSLv3 33554432

#define SSL_OP_NO_TICKET 16384

#define SSL_OP_NO_TLSv1 67108864

#define SSL_OP_NO_TLSv1_1 268435456

#define SSL_OP_NO_TLSv1_2 134217728

#define SSL_OP_PKCS1_CHECK_1 0

#define SSL_OP_PKCS1_CHECK_2 0

#define SSL_OP_SINGLE_DH_USE 1048576

#define SSL_OP_SINGLE_ECDH_USE 524288

#define SSL_OP_SSLEAY_080_CLIENT_DH_BUG 128

#define SSL_OP_SSLREF2_REUSE_CERT_TYPE_BUG 16

#define SSL_OP_TLS_BLOCK_PADDING_BUG 512

#define SSL_OP_TLS_D5_BUG 256

#define SSL_OP_TLS_ROLLBACK_BUG 8388608

#define SSL_READING 3

#define SSL_RECEIVED_SHUTDOWN 2

#define SSL_SENT_SHUTDOWN 1

#define SSL_SESS_CACHE_BOTH 3

#define SSL_SESS_CACHE_CLIENT 1

#define SSL_SESS_CACHE_NO_AUTO_CLEAR 128

#define SSL_SESS_CACHE_NO_INTERNAL 768

#define SSL_SESS_CACHE_NO_INTERNAL_LOOKUP 256

#define SSL_SESS_CACHE_NO_INTERNAL_STORE 512

#define SSL_SESS_CACHE_OFF 0

#define SSL_SESS_CACHE_SERVER 2

#define SSL_SESSION_ASN1_VERSION 1

#define SSL_SESSION_CACHE_MAX_SIZE_DEFAULT 20480

#define SSL_WRITING 2

#define SSL_X509_LOOKUP 4

typedef struct ssl_st * ssl_crock_st;

#define SSL2_AT_MD5_WITH_RSA_ENCRYPTION 1

#define SSL2_CF_5_BYTE_ENC 1

#define SSL2_CF_8_BYTE_ENC 2

#define SSL2_CHALLENGE_LENGTH 16

#define SSL2_CK_DES_192_EDE3_CBC_WITH_MD5 34013376

#define SSL2_CK_DES_192_EDE3_CBC_WITH_SHA 34013632

#define SSL2_CK_DES_64_CBC_WITH_MD5 33947712

#define SSL2_CK_DES_64_CBC_WITH_SHA 33947968

#define SSL2_CK_DES_64_CFB64_WITH_MD5_1 50268160

#define SSL2_CK_IDEA_128_CBC_WITH_MD5 33882240

#define SSL2_CK_NULL 50268176

#define SSL2_CK_NULL_WITH_MD5 33554432

#define SSL2_CK_RC2_128_CBC_EXPORT40_WITH_MD5 33816704

#define SSL2_CK_RC2_128_CBC_WITH_MD5 33751168

#define SSL2_CK_RC4_128_EXPORT40_WITH_MD5 33685632

#define SSL2_CK_RC4_128_WITH_MD5 33620096

#define SSL2_CK_RC4_64_WITH_MD5 34078848

#define SSL2_CONNECTION_ID_LENGTH 16

#define SSL2_CT_X509_CERTIFICATE 1

#define SSL2_MAX_CERT_CHALLENGE_LENGTH 32

#define SSL2_MAX_CHALLENGE_LENGTH 32

#define SSL2_MAX_CONNECTION_ID_LENGTH 16

#define SSL2_MAX_KEY_MATERIAL_LENGTH 24

#define SSL2_MAX_MASTER_KEY_LENGTH_IN_BITS 256

#define SSL2_MAX_RECORD_LENGTH_2_BYTE_HEADER 32767

#define SSL2_MAX_RECORD_LENGTH_3_BYTE_HEADER 16383

#define SSL2_MAX_SSL_SESSION_ID_LENGTH 32

#define SSL2_MIN_CERT_CHALLENGE_LENGTH 16

#define SSL2_MIN_CHALLENGE_LENGTH 16

#define SSL2_MT_CLIENT_CERTIFICATE 8

#define SSL2_MT_CLIENT_FINISHED 3

#define SSL2_MT_CLIENT_HELLO 1

#define SSL2_MT_CLIENT_MASTER_KEY 2

#define SSL2_MT_ERROR 0

#define SSL2_MT_REQUEST_CERTIFICATE 7

#define SSL2_MT_SERVER_FINISHED 6

#define SSL2_MT_SERVER_HELLO 4

#define SSL2_MT_SERVER_VERIFY 5

#define SSL2_PE_BAD_CERTIFICATE 4

#define SSL2_PE_NO_CERTIFICATE 2

#define SSL2_PE_NO_CIPHER 1

#define SSL2_PE_UNDEFINED_ERROR 0

#define SSL2_PE_UNSUPPORTED_CERTIFICATE_TYPE 6

#define SSL2_SSL_SESSION_ID_LENGTH 16

#define SSL2_ST_CLIENT_START_ENCRYPTION 4224

#define SSL2_ST_GET_CLIENT_FINISHED_A 8272

#define SSL2_ST_GET_CLIENT_FINISHED_B 8273

#define SSL2_ST_GET_CLIENT_HELLO_A 8208

#define SSL2_ST_GET_CLIENT_HELLO_B 8209

#define SSL2_ST_GET_CLIENT_HELLO_C 8210

#define SSL2_ST_GET_CLIENT_MASTER_KEY_A 8240

#define SSL2_ST_GET_CLIENT_MASTER_KEY_B 8241

#define SSL2_ST_GET_SERVER_FINISHED_A 4208

#define SSL2_ST_GET_SERVER_FINISHED_B 4209

#define SSL2_ST_GET_SERVER_HELLO_A 4128

#define SSL2_ST_GET_SERVER_HELLO_B 4129

#define SSL2_ST_GET_SERVER_VERIFY_A 4192

#define SSL2_ST_GET_SERVER_VERIFY_B 4193

#define SSL2_ST_SEND_CLIENT_CERTIFICATE_A 4176

#define SSL2_ST_SEND_CLIENT_CERTIFICATE_B 4177

#define SSL2_ST_SEND_CLIENT_CERTIFICATE_C 4178

#define SSL2_ST_SEND_CLIENT_CERTIFICATE_D 4179

#define SSL2_ST_SEND_CLIENT_FINISHED_A 4160

#define SSL2_ST_SEND_CLIENT_FINISHED_B 4161

#define SSL2_ST_SEND_CLIENT_HELLO_A 4112

#define SSL2_ST_SEND_CLIENT_HELLO_B 4113

#define SSL2_ST_SEND_CLIENT_MASTER_KEY_A 4144

#define SSL2_ST_SEND_CLIENT_MASTER_KEY_B 4145

#define SSL2_ST_SEND_REQUEST_CERTIFICATE_A 8304

#define SSL2_ST_SEND_REQUEST_CERTIFICATE_B 8305

#define SSL2_ST_SEND_REQUEST_CERTIFICATE_C 8306

#define SSL2_ST_SEND_REQUEST_CERTIFICATE_D 8307

#define SSL2_ST_SEND_SERVER_FINISHED_A 8288

#define SSL2_ST_SEND_SERVER_FINISHED_B 8289

#define SSL2_ST_SEND_SERVER_HELLO_A 8224

#define SSL2_ST_SEND_SERVER_HELLO_B 8225

#define SSL2_ST_SEND_SERVER_VERIFY_A 8256

#define SSL2_ST_SEND_SERVER_VERIFY_B 8257

#define SSL2_ST_SEND_SERVER_VERIFY_C 8258

#define SSL2_ST_SERVER_START_ENCRYPTION 8320

#define SSL2_ST_X509_GET_CLIENT_CERTIFICATE 4240

#define SSL2_ST_X509_GET_SERVER_CERTIFICATE 8336

#define SSL2_VERSION 2

#define SSL2_VERSION_MAJOR 0

#define SSL2_VERSION_MINOR 2

typedef struct ssl2_state_st SSL2_STATE;

#define SSL23_ST_CR_SRVR_HELLO_A 4640

#define SSL23_ST_CR_SRVR_HELLO_B 4641

#define SSL23_ST_CW_CLNT_HELLO_A 4624

#define SSL23_ST_CW_CLNT_HELLO_B 4625

#define SSL23_ST_SR_CLNT_HELLO_A 8720

#define SSL23_ST_SR_CLNT_HELLO_B 8721

#define DTLS1_MT_HELLO_VERIFY_REQUEST 3

#define DTLS1_ST_CR_HELLO_VERIFY_REQUEST_A 4390

#define DTLS1_ST_CR_HELLO_VERIFY_REQUEST_B 4391

#define DTLS1_ST_SW_HELLO_VERIFY_REQUEST_A 8467

#define DTLS1_ST_SW_HELLO_VERIFY_REQUEST_B 8468

#define SSL3_AD_BAD_CERTIFICATE 42

#define SSL3_AD_BAD_RECORD_MAC 20

#define SSL3_AD_CERTIFICATE_EXPIRED 45

#define SSL3_AD_CERTIFICATE_REVOKED 44

#define SSL3_AD_CERTIFICATE_UNKNOWN 46

#define SSL3_AD_CLOSE_NOTIFY 0

#define SSL3_AD_DECOMPRESSION_FAILURE 30

#define SSL3_AD_HANDSHAKE_FAILURE 40

#define SSL3_AD_ILLEGAL_PARAMETER 47

#define SSL3_AD_NO_CERTIFICATE 41

#define SSL3_AD_UNEXPECTED_MESSAGE 10

#define SSL3_AD_UNSUPPORTED_CERTIFICATE 43

#define SSL3_AL_FATAL 2

#define SSL3_AL_WARNING 1

#define SSL3_ALIGN_PAYLOAD 8

#define SSL3_CC_CLIENT 16

#define SSL3_CC_READ 1

#define SSL3_CC_SERVER 32

#define SSL3_CC_WRITE 2

#define SSL3_CHANGE_CIPHER_CLIENT_READ 17

#define SSL3_CHANGE_CIPHER_CLIENT_WRITE 18

#define SSL3_CHANGE_CIPHER_SERVER_READ 33

#define SSL3_CHANGE_CIPHER_SERVER_WRITE 34

#define SSL3_CK_ADH_DES_192_CBC_SHA 50331675

#define SSL3_CK_ADH_DES_40_CBC_SHA 50331673

#define SSL3_CK_ADH_DES_64_CBC_SHA 50331674

#define SSL3_CK_ADH_RC4_128_MD5 50331672

#define SSL3_CK_ADH_RC4_40_MD5 50331671

#define SSL3_CK_DH_DSS_DES_192_CBC3_SHA 50331661

#define SSL3_CK_DH_DSS_DES_40_CBC_SHA 50331659

#define SSL3_CK_DH_DSS_DES_64_CBC_SHA 50331660

#define SSL3_CK_DH_RSA_DES_192_CBC3_SHA 50331664

#define SSL3_CK_DH_RSA_DES_40_CBC_SHA 50331662

#define SSL3_CK_DH_RSA_DES_64_CBC_SHA 50331663

#define SSL3_CK_EDH_DSS_DES_192_CBC3_SHA 50331667

#define SSL3_CK_EDH_DSS_DES_40_CBC_SHA 50331665

#define SSL3_CK_EDH_DSS_DES_64_CBC_SHA 50331666

#define SSL3_CK_EDH_RSA_DES_192_CBC3_SHA 50331670

#define SSL3_CK_EDH_RSA_DES_40_CBC_SHA 50331668

#define SSL3_CK_EDH_RSA_DES_64_CBC_SHA 50331669

#define SSL3_CK_FALLBACK_SCSV 50353664

#define SSL3_CK_KRB5_DES_192_CBC3_MD5 50331683

#define SSL3_CK_KRB5_DES_192_CBC3_SHA 50331679

#define SSL3_CK_KRB5_DES_40_CBC_MD5 50331689

#define SSL3_CK_KRB5_DES_40_CBC_SHA 50331686

#define SSL3_CK_KRB5_DES_64_CBC_MD5 50331682

#define SSL3_CK_KRB5_DES_64_CBC_SHA 50331678

#define SSL3_CK_KRB5_IDEA_128_CBC_MD5 50331685

#define SSL3_CK_KRB5_IDEA_128_CBC_SHA 50331681

#define SSL3_CK_KRB5_RC2_40_CBC_MD5 50331690

#define SSL3_CK_KRB5_RC2_40_CBC_SHA 50331687

#define SSL3_CK_KRB5_RC4_128_MD5 50331684

#define SSL3_CK_KRB5_RC4_128_SHA 50331680

#define SSL3_CK_KRB5_RC4_40_MD5 50331691

#define SSL3_CK_KRB5_RC4_40_SHA 50331688

#define SSL3_CK_RSA_DES_192_CBC3_SHA 50331658

#define SSL3_CK_RSA_DES_40_CBC_SHA 50331656

#define SSL3_CK_RSA_DES_64_CBC_SHA 50331657

#define SSL3_CK_RSA_IDEA_128_SHA 50331655

#define SSL3_CK_RSA_NULL_MD5 50331649

#define SSL3_CK_RSA_NULL_SHA 50331650

#define SSL3_CK_RSA_RC2_40_MD5 50331654

#define SSL3_CK_RSA_RC4_128_MD5 50331652

#define SSL3_CK_RSA_RC4_128_SHA 50331653

#define SSL3_CK_RSA_RC4_40_MD5 50331651

#define SSL3_CK_SCSV 50331903

#define SSL3_CT_DSS_EPHEMERAL_DH 6

#define SSL3_CT_DSS_FIXED_DH 4

#define SSL3_CT_DSS_SIGN 2

#define SSL3_CT_FORTEZZA_DMS 20

#define SSL3_CT_NUMBER 9

#define SSL3_CT_RSA_EPHEMERAL_DH 5

#define SSL3_CT_RSA_FIXED_DH 3

#define SSL3_CT_RSA_SIGN 1

#define SSL3_FLAGS_CCS_OK 128

#define SSL3_FLAGS_DELAY_CLIENT_FINISHED 2

#define SSL3_FLAGS_NO_RENEGOTIATE_CIPHERS 1

#define SSL3_FLAGS_POP_BUFFER 4

#define SSL3_FLAGS_SGC_RESTART_DONE 64

#define SSL3_MASTER_SECRET_SIZE 48

#define SSL3_MAX_SSL_SESSION_ID_LENGTH 32

#define SSL3_MT_CCS 1

#define SSL3_MT_CERTIFICATE 11

#define SSL3_MT_CERTIFICATE_REQUEST 13

#define SSL3_MT_CERTIFICATE_STATUS 22

#define SSL3_MT_CERTIFICATE_VERIFY 15

#define SSL3_MT_CLIENT_HELLO 1

#define SSL3_MT_CLIENT_KEY_EXCHANGE 16

#define SSL3_MT_FINISHED 20

#define SSL3_MT_HELLO_REQUEST 0

#define SSL3_MT_NEWSESSION_TICKET 4

#define SSL3_MT_NEXT_PROTO 67

#define SSL3_MT_SERVER_DONE 14

#define SSL3_MT_SERVER_HELLO 2

#define SSL3_MT_SERVER_KEY_EXCHANGE 12

#define SSL3_RANDOM_SIZE 32

#define SSL3_RT_ALERT 21

#define SSL3_RT_APPLICATION_DATA 23

#define SSL3_RT_CHANGE_CIPHER_SPEC 20

#define SSL3_RT_HANDSHAKE 22

#define SSL3_RT_HEADER_LENGTH 5

#define SSL3_RT_MAX_COMPRESSED_LENGTH 17408

#define SSL3_RT_MAX_COMPRESSED_OVERHEAD 1024

#define SSL3_RT_MAX_ENCRYPTED_LENGTH 17728

#define SSL3_RT_MAX_ENCRYPTED_OVERHEAD 320

#define SSL3_RT_MAX_EXTRA 16384

#define SSL3_RT_MAX_MD_SIZE 64

#define SSL3_RT_MAX_PACKET_SIZE 17733

#define SSL3_RT_MAX_PLAIN_LENGTH 16384

#define SSL3_RT_SEND_MAX_ENCRYPTED_OVERHEAD 80

#define SSL3_SESSION_ID_SIZE 32

#define SSL3_SSL_SESSION_ID_LENGTH 32

#define SSL3_ST_CR_CERT_A 4400

#define SSL3_ST_CR_CERT_B 4401

#define SSL3_ST_CR_CERT_REQ_A 4432

#define SSL3_ST_CR_CERT_REQ_B 4433

#define SSL3_ST_CR_CERT_STATUS_A 4592

#define SSL3_ST_CR_CERT_STATUS_B 4593

#define SSL3_ST_CR_CHANGE_A 4544

#define SSL3_ST_CR_CHANGE_B 4545

#define SSL3_ST_CR_FINISHED_A 4560

#define SSL3_ST_CR_FINISHED_B 4561

#define SSL3_ST_CR_KEY_EXCH_A 4416

#define SSL3_ST_CR_KEY_EXCH_B 4417

#define SSL3_ST_CR_SESSION_TICKET_A 4576

#define SSL3_ST_CR_SESSION_TICKET_B 4577

#define SSL3_ST_CR_SRVR_DONE_A 4448

#define SSL3_ST_CR_SRVR_DONE_B 4449

#define SSL3_ST_CR_SRVR_HELLO_A 4384

#define SSL3_ST_CR_SRVR_HELLO_B 4385

#define SSL3_ST_CW_CERT_A 4464

#define SSL3_ST_CW_CERT_B 4465

#define SSL3_ST_CW_CERT_C 4466

#define SSL3_ST_CW_CERT_D 4467

#define SSL3_ST_CW_CERT_VRFY_A 4496

#define SSL3_ST_CW_CERT_VRFY_B 4497

#define SSL3_ST_CW_CHANGE_A 4512

#define SSL3_ST_CW_CHANGE_B 4513

#define SSL3_ST_CW_CLNT_HELLO_A 4368

#define SSL3_ST_CW_CLNT_HELLO_B 4369

#define SSL3_ST_CW_FINISHED_A 4528

#define SSL3_ST_CW_FINISHED_B 4529

#define SSL3_ST_CW_FLUSH 4352

#define SSL3_ST_CW_KEY_EXCH_A 4480

#define SSL3_ST_CW_KEY_EXCH_B 4481

#define SSL3_ST_CW_NEXT_PROTO_A 4608

#define SSL3_ST_CW_NEXT_PROTO_B 4609

#define SSL3_ST_SR_CERT_A 8576

#define SSL3_ST_SR_CERT_B 8577

#define SSL3_ST_SR_CERT_VRFY_A 8608

#define SSL3_ST_SR_CERT_VRFY_B 8609

#define SSL3_ST_SR_CHANGE_A 8624

#define SSL3_ST_SR_CHANGE_B 8625

#define SSL3_ST_SR_CLNT_HELLO_A 8464

#define SSL3_ST_SR_CLNT_HELLO_B 8465

#define SSL3_ST_SR_CLNT_HELLO_C 8466

#define SSL3_ST_SR_FINISHED_A 8640

#define SSL3_ST_SR_FINISHED_B 8641

#define SSL3_ST_SR_KEY_EXCH_A 8592

#define SSL3_ST_SR_KEY_EXCH_B 8593

#define SSL3_ST_SR_NEXT_PROTO_A 8720

#define SSL3_ST_SR_NEXT_PROTO_B 8721

#define SSL3_ST_SW_CERT_A 8512

#define SSL3_ST_SW_CERT_B 8513

#define SSL3_ST_SW_CERT_REQ_A 8544

#define SSL3_ST_SW_CERT_REQ_B 8545

#define SSL3_ST_SW_CERT_STATUS_A 8704

#define SSL3_ST_SW_CERT_STATUS_B 8705

#define SSL3_ST_SW_CHANGE_A 8656

#define SSL3_ST_SW_CHANGE_B 8657

#define SSL3_ST_SW_FINISHED_A 8672

#define SSL3_ST_SW_FINISHED_B 8673

#define SSL3_ST_SW_FLUSH 8448

#define SSL3_ST_SW_HELLO_REQ_A 8480

#define SSL3_ST_SW_HELLO_REQ_B 8481

#define SSL3_ST_SW_HELLO_REQ_C 8482

#define SSL3_ST_SW_KEY_EXCH_A 8528

#define SSL3_ST_SW_KEY_EXCH_B 8529

#define SSL3_ST_SW_SESSION_TICKET_A 8688

#define SSL3_ST_SW_SESSION_TICKET_B 8689

#define SSL3_ST_SW_SRVR_DONE_A 8560

#define SSL3_ST_SW_SRVR_DONE_B 8561

#define SSL3_ST_SW_SRVR_HELLO_A 8496

#define SSL3_ST_SW_SRVR_HELLO_B 8497

#define SSL3_VERSION 768

#define SSL3_VERSION_MAJOR 3

#define SSL3_VERSION_MINOR 0

#define SSL_RT_MAX_CIPHER_BLOCK_SIZE 16

#define TLS1_FLAGS_KEEP_HANDSHAKE 32

#define TLS1_FLAGS_SKIP_CERT_VERIFY 16

#define TLS1_FLAGS_TLS_PADDING_BUG 8

#define TLS1_HB_REQUEST 1

#define TLS1_HB_RESPONSE 2

#define TLS1_RT_HEARTBEAT 24

typedef struct ssl3_state_st SSL3_STATE;

#define __S_IEXEC 64

#define __S_IFBLK 24576

#define __S_IFCHR 8192

#define __S_IFDIR 16384

#define __S_IFIFO 4096

#define __S_IFLNK 40960

#define __S_IFMT 61440

#define __S_IFREG 32768

#define __S_IFSOCK 49152

#define __S_IREAD 256

#define __S_ISGID 1024

#define __S_ISUID 2048

#define __S_ISVTX 512

#define __S_IWRITE 128

#define _BITS_STAT_H 1

#define _MKNOD_VER 1

#define _MKNOD_VER_LINUX 1

#define _MKNOD_VER_SVR4 2

#define _STAT_VER 3

#define _STAT_VER_KERNEL 0

#define _STAT_VER_LINUX 3

#define _STAT_VER_SVR4 2

#define _SYS_STAT_H 1

#define ACCESSPERMS 511

#define ALLPERMS 4095

#define DEFFILEMODE 511

#define S_BLKSIZE 512

#define S_IEXEC 64

#define S_IREAD 256

#define S_IWRITE 128

#define UTIME_NOW 1073741823

#define UTIME_OMIT 1073741822

#define _SYS_STATFS_H 1

typedef struct statfs statfs, *Pstatfs;

typedef ulong __fsblkcnt_t;

typedef ulong __fsfilcnt_t;

typedef struct __fsid_t __fsid_t, *P__fsid_t;

struct __fsid_t {
    int __val[2];
};

struct statfs {
    int f_type;
    int f_bsize;
    __fsblkcnt_t f_blocks;
    __fsblkcnt_t f_bfree;
    __fsblkcnt_t f_bavail;
    __fsfilcnt_t f_files;
    __fsfilcnt_t f_ffree;
    struct __fsid_t f_fsid;
    int f_namelen;
    int f_frsize;
    int f_flags;
    int f_spare[4];
};

typedef struct statfs64 statfs64, *Pstatfs64;

typedef __u_quad_t __fsblkcnt64_t;

typedef __u_quad_t __fsfilcnt64_t;

struct statfs64 {
    int f_type;
    int f_bsize;
    __fsblkcnt64_t f_blocks;
    __fsblkcnt64_t f_bfree;
    __fsblkcnt64_t f_bavail;
    __fsfilcnt64_t f_files;
    __fsfilcnt64_t f_ffree;
    struct __fsid_t f_fsid;
    int f_namelen;
    int f_frsize;
    int f_flags;
    int f_spare[4];
};

#define _SYS_STATVFS_H 1

typedef enum enum_1546 {
    ST_APPEND=256,
    ST_IMMUTABLE=512,
    ST_MANDLOCK=64,
    ST_NOATIME=1024,
    ST_NODEV=4,
    ST_NODIRATIME=2048,
    ST_NOEXEC=8,
    ST_NOSUID=2,
    ST_RDONLY=1,
    ST_RELATIME=4096,
    ST_SYNCHRONOUS=16,
    ST_WRITE=128
} enum_1546;

typedef struct statvfs statvfs, *Pstatvfs;

struct statvfs {
    ulong f_bsize;
    ulong f_frsize;
    __fsblkcnt_t f_blocks;
    __fsblkcnt_t f_bfree;
    __fsblkcnt_t f_bavail;
    __fsfilcnt_t f_files;
    __fsfilcnt_t f_ffree;
    __fsfilcnt_t f_favail;
    ulong f_fsid;
    int __f_unused;
    ulong f_flag;
    ulong f_namemax;
    int __f_spare[6];
};

typedef struct statvfs64 statvfs64, *Pstatvfs64;

struct statvfs64 {
    ulong f_bsize;
    ulong f_frsize;
    __fsblkcnt64_t f_blocks;
    __fsblkcnt64_t f_bfree;
    __fsblkcnt64_t f_bavail;
    __fsfilcnt64_t f_files;
    __fsfilcnt64_t f_ffree;
    __fsfilcnt64_t f_favail;
    ulong f_fsid;
    int __f_unused;
    ulong f_flag;
    ulong f_namemax;
    int __f_spare[6];
};

typedef void * __gnuc_va_list;

typedef __gnuc_va_list va_list;

#define __bool_true_false_are_defined 1

#define false 0

#define true 1

#define NULL 0

typedef long ptrdiff_t;

typedef uint wint_t;

#define _STDINT_H 1

#define INT16_MAX 32767

#define INT16_MIN -32768

#define INT32_MAX 2147483647

#define INT32_MIN -2147483648

#define INT8_MAX 127

#define INT8_MIN -128

#define INT_FAST16_MAX 2147483647

#define INT_FAST16_MIN -2147483648

#define INT_FAST32_MAX 2147483647

#define INT_FAST32_MIN -2147483648

#define INT_FAST8_MAX 127

#define INT_FAST8_MIN -128

#define INT_LEAST16_MAX 32767

#define INT_LEAST16_MIN -32768

#define INT_LEAST32_MAX 2147483647

#define INT_LEAST32_MIN -2147483648

#define INT_LEAST8_MAX 127

#define INT_LEAST8_MIN -128

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

#define UINT_FAST16_MAX 4294967295

#define UINT_FAST32_MAX 4294967295

#define UINT_FAST8_MAX 255

#define UINT_LEAST16_MAX 65535

#define UINT_LEAST32_MAX 4294967295

#define UINT_LEAST8_MAX 255

#define UINTPTR_MAX 4294967295

#define WCHAR_MAX 2147483647

#define WCHAR_MIN -2147483648

typedef int int_fast16_t;

typedef int int_fast32_t;

typedef longlong int_fast64_t;

typedef char int_fast8_t;

typedef short int_least16_t;

typedef int int_least32_t;

typedef longlong int_least64_t;

typedef char int_least8_t;

typedef longlong intmax_t;

typedef int intptr_t;

typedef uint uint_fast16_t;

typedef uint uint_fast32_t;

typedef ulonglong uint_fast64_t;

typedef uchar uint_fast8_t;

typedef ushort uint_least16_t;

typedef uint uint_least32_t;

typedef ulonglong uint_least64_t;

typedef uchar uint_least8_t;

typedef ulonglong uintmax_t;

typedef uint uintptr_t;

#define ____FILE_defined 1

#define __FILE_defined 1

#define _IOFBF 0

#define _IOLBF 1

#define _IONBF 2

#define _STDIO_H 1

#define BUFSIZ 8192

#define SEEK_CUR 1

#define SEEK_END 2

#define SEEK_SET 0

typedef struct _IO_FILE __FILE;

typedef struct _IO_FILE FILE;

typedef struct _G_fpos64_t fpos64_t;

typedef struct _G_fpos_t fpos_t;

typedef struct obstack obstack, *Pobstack;

struct obstack {
};

#define FILENAME_MAX 4096

#define FOPEN_MAX 16

#define IOV_MAX 1024

#define L_ctermid 9

#define L_cuserid 9

#define L_tmpnam 20

#define TMP_MAX 238328

#define __ldiv_t_defined 1

#define __lldiv_t_defined 1

#define _STDLIB_H 1

#define EXIT_FAILURE 1

#define EXIT_SUCCESS 0

#define RAND_MAX 2147483647

typedef int (* __compar_d_fn_t)(void *, void *, void *);

typedef int (* __compar_fn_t)(void *, void *);

typedef __compar_fn_t comparison_fn_t;

typedef struct div_t div_t, *Pdiv_t;

struct div_t {
    int quot;
    int rem;
};

typedef struct drand48_data drand48_data, *Pdrand48_data;

struct drand48_data {
    ushort __x[3];
    ushort __old_x[3];
    ushort __c;
    ushort __init;
    ulonglong __a;
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

typedef struct random_data random_data, *Prandom_data;

struct random_data {
    int32_t * fptr;
    int32_t * rptr;
    int32_t * state;
    int rand_type;
    int rand_deg;
    int rand_sep;
    int32_t * end_ptr;
};

#define _STRING_H 1

#define _STRINGS_H 1

#define _BITS_STROPTS_H 1

#define _STROPTS_H 1

#define ANYMARK 1

#define FLUSHBAND 4

#define FLUSHR 1

#define FLUSHRW 3

#define FLUSHW 2

#define FMNAMESZ 8

#define LASTMARK 2

#define MORECTL 1

#define MOREDATA 2

#define MSG_ANY 2

#define MSG_BAND 4

#define MSG_HIPRI 1

#define MUXID_ALL -1

#define RMSGD 1

#define RMSGN 2

#define RNORM 0

#define RPROTDAT 4

#define RPROTDIS 8

#define RPROTMASK 28

#define RPROTNORM 16

#define RS_HIPRI 1

#define S_BANDURG 512

#define S_ERROR 16

#define S_HANGUP 32

#define S_HIPRI 2

#define S_INPUT 1

#define S_MSG 8

#define S_OUTPUT 4

#define S_RDBAND 128

#define S_RDNORM 64

#define S_WRBAND 256

#define S_WRNORM 4

#define SNDPIPE 2

#define SNDZERO 1

typedef struct bandinfo bandinfo, *Pbandinfo;

struct bandinfo {
    uchar bi_pri;
    int bi_flag;
};

typedef struct str_list str_list, *Pstr_list;

typedef struct str_mlist str_mlist, *Pstr_mlist;

struct str_list {
    int sl_nmods;
    struct str_mlist * sl_modlist;
};

struct str_mlist {
    char l_name[9];
};

typedef struct strbuf strbuf, *Pstrbuf;

struct strbuf {
    int maxlen;
    int len;
    char * buf;
};

typedef struct strfdinsert strfdinsert, *Pstrfdinsert;

typedef ulong __t_uscalar_t;

typedef __t_uscalar_t t_uscalar_t;

struct strfdinsert {
    struct strbuf ctlbuf;
    struct strbuf databuf;
    t_uscalar_t flags;
    int fildes;
    int offset;
};

typedef struct strioctl strioctl, *Pstrioctl;

struct strioctl {
    int ic_cmd;
    int ic_timout;
    int ic_len;
    char * ic_dp;
};

typedef struct strpeek strpeek, *Pstrpeek;

struct strpeek {
    struct strbuf ctlbuf;
    struct strbuf databuf;
    t_uscalar_t flags;
};

typedef struct strrecvfd strrecvfd, *Pstrrecvfd;

struct strrecvfd {
    int fd;
    uid_t uid;
    gid_t gid;
    char __fill[8];
};

#define _RPC_SVC_H 1

#define RPC_ANYSOCK -1

typedef struct svc_req svc_req, *Psvc_req;

typedef struct SVCXPRT SVCXPRT, *PSVCXPRT;

typedef void (* __dispatch_fn_t)(struct svc_req *, struct SVCXPRT *);

typedef ulong rpcprog_t;

typedef ulong rpcvers_t;

typedef ulong rpcproc_t;

typedef struct xp_ops xp_ops, *Pxp_ops;

typedef enum xprt_stat {
    XPRT_DIED=0,
    XPRT_IDLE=2,
    XPRT_MOREREQS=1
} xprt_stat;

struct SVCXPRT {
    int xp_sock;
    u_short xp_port;
    struct xp_ops * xp_ops;
    int xp_addrlen;
    struct sockaddr_in xp_raddr;
    struct opaque_auth xp_verf;
    caddr_t xp_p1;
    caddr_t xp_p2;
    char xp_pad[256];
};

struct svc_req {
    rpcprog_t rq_prog;
    rpcvers_t rq_vers;
    rpcproc_t rq_proc;
    struct opaque_auth rq_cred;
    caddr_t rq_clntcred;
    struct SVCXPRT * rq_xprt;
};

struct xp_ops {
    bool_t (* xp_recv)(struct SVCXPRT *, struct rpc_msg *);
    xprt_stat (* xp_stat)(struct SVCXPRT *);
    bool_t (* xp_getargs)(struct SVCXPRT *, xdrproc_t, caddr_t);
    bool_t (* xp_reply)(struct SVCXPRT *, struct rpc_msg *);
    bool_t (* xp_freeargs)(struct SVCXPRT *, xdrproc_t, caddr_t);
    void (* xp_destroy)(struct SVCXPRT *);
};

#define _RPC_SVC_AUTH_H 1

#define _SYS_SWAP_H 1

#define SWAP_FLAG_PREFER 32768

#define SWAP_FLAG_PRIO_MASK 32767

#define SWAP_FLAG_PRIO_SHIFT 0

#define _SYS_SYSCTL_H 1

#define CTL_MAXNAME 10

typedef struct __sysctl_args __sysctl_args, *P__sysctl_args;

struct __sysctl_args {
    int * name;
    int nlen;
    void * oldval;
    size_t * oldlenp;
    void * newval;
    size_t newlen;
    ulong __unused[4];
};

typedef struct completion completion, *Pcompletion;

struct completion {
};

typedef enum enum_1700 {
    CTL_ABI=9,
    CTL_ARLAN=254,
    CTL_BUS=8,
    CTL_CPU=10,
    CTL_DEBUG=6,
    CTL_DEV=7,
    CTL_FRV=9898,
    CTL_FS=5,
    CTL_KERN=1,
    CTL_NET=3,
    CTL_PM=9899,
    CTL_PROC=4,
    CTL_S390DBF=5677,
    CTL_SUNRPC=7249,
    CTL_VM=2
} enum_1700;

typedef enum enum_1701 {
    CTL_BUS_ISA=1
} enum_1701;

typedef enum enum_1702 {
    INOTIFY_MAX_QUEUED_EVENTS=3,
    INOTIFY_MAX_USER_INSTANCES=1,
    INOTIFY_MAX_USER_WATCHES=2
} enum_1702;

typedef enum enum_1703 {
    KERN_ACCT=30,
    KERN_ACPI_VIDEO_FLAGS=71,
    KERN_BOOTLOADER_TYPE=67,
    KERN_CADPID=54,
    KERN_COMPAT_LOG=73,
    KERN_CORE_PATTERN=56,
    KERN_CORE_USES_PID=52,
    KERN_CTLALTDEL=22,
    KERN_DOMAINNAME=8,
    KERN_HOTPLUG=49,
    KERN_HPPA_PWRSW=58,
    KERN_HPPA_UNALIGNED=59,
    KERN_HZ_TIMER=65,
    KERN_IA64_UNALIGNED=72,
    KERN_IEEE_EMULATION_WARNINGS=50,
    KERN_MAX_LOCK_DEPTH=74,
    KERN_MAX_THREADS=39,
    KERN_MODPROBE=28,
    KERN_MSGMAX=35,
    KERN_MSGMNB=36,
    KERN_MSGMNI=42,
    KERN_MSGPOOL=37,
    KERN_NAMETRANS=24,
    KERN_NGROUPS_MAX=63,
    KERN_NMI_WATCHDOG=75,
    KERN_NODENAME=7,
    KERN_OSRELEASE=2,
    KERN_OSREV=3,
    KERN_OSTYPE=1,
    KERN_OVERFLOWGID=47,
    KERN_OVERFLOWUID=46,
    KERN_PANIC=15,
    KERN_PANIC_ON_NMI=76,
    KERN_PANIC_ON_OOPS=57,
    KERN_PANIC_ON_WARN=77,
    KERN_PIDMAX=55,
    KERN_PPC_HTABRECLAIM=25,
    KERN_PPC_L2CR=31,
    KERN_PPC_POWERSAVE_NAP=27,
    KERN_PPC_ZEROPAGED=26,
    KERN_PRINTK=23,
    KERN_PRINTK_RATELIMIT=60,
    KERN_PRINTK_RATELIMIT_BURST=61,
    KERN_PROF=6,
    KERN_PTY=62,
    KERN_RANDOM=40,
    KERN_RANDOMIZE=68,
    KERN_REALROOTDEV=16,
    KERN_RTSIGMAX=33,
    KERN_RTSIGNR=32,
    KERN_S390_USER_DEBUG_LOGGING=51,
    KERN_SECUREMASK=5,
    KERN_SEM=43,
    KERN_SETUID_DUMPABLE=69,
    KERN_SG_BIG_BUFF=29,
    KERN_SHMALL=41,
    KERN_SHMMAX=34,
    KERN_SHMMNI=45,
    KERN_SHMPATH=48,
    KERN_SPARC_REBOOT=21,
    KERN_SPARC_SCONS_PWROFF=64,
    KERN_SPARC_STOP_A=44,
    KERN_SPIN_RETRY=70,
    KERN_SYSRQ=38,
    KERN_TAINTED=53,
    KERN_UNKNOWN_NMI_PANIC=66,
    KERN_VERSION=4
} enum_1703;

typedef enum enum_1704 {
    VM_BLOCK_DUMP=24,
    VM_DIRTY_BACKGROUND=11,
    VM_DIRTY_EXPIRE_CS=14,
    VM_DIRTY_RATIO=12,
    VM_DIRTY_WB_CS=13,
    VM_DROP_PAGECACHE=29,
    VM_HUGETLB_GROUP=25,
    VM_HUGETLB_PAGES=18,
    VM_LAPTOP_MODE=23,
    VM_LEGACY_VA_LAYOUT=27,
    VM_LOWMEM_RESERVE_RATIO=20,
    VM_MAX_MAP_COUNT=22,
    VM_MIN_FREE_KBYTES=21,
    VM_MIN_SLAB=35,
    VM_MIN_UNMAPPED=32,
    VM_NR_PDFLUSH_THREADS=15,
    VM_OVERCOMMIT_MEMORY=5,
    VM_OVERCOMMIT_RATIO=16,
    VM_PAGEBUF=17,
    VM_PAGE_CLUSTER=10,
    VM_PANIC_ON_OOM=33,
    VM_PERCPU_PAGELIST_FRACTION=30,
    VM_SWAPPINESS=19,
    VM_SWAP_TOKEN_TIMEOUT=28,
    VM_UNUSED1=1,
    VM_UNUSED2=2,
    VM_UNUSED3=3,
    VM_UNUSED4=4,
    VM_UNUSED5=6,
    VM_UNUSED7=7,
    VM_UNUSED8=8,
    VM_UNUSED9=9,
    VM_VDSO_ENABLED=34,
    VM_VFS_CACHE_PRESSURE=26,
    VM_ZONE_RECLAIM_MODE=31
} enum_1704;

typedef enum enum_1705 {
    NET_802=3,
    NET_ATALK=7,
    NET_AX25=9,
    NET_BRIDGE=10,
    NET_CORE=1,
    NET_DCCP=20,
    NET_DECNET=15,
    NET_ECONET=16,
    NET_ETHER=2,
    NET_IPV4=5,
    NET_IPV6=12,
    NET_IPX=6,
    NET_IRDA=412,
    NET_LLC=18,
    NET_NETFILTER=19,
    NET_NETROM=8,
    NET_ROSE=11,
    NET_SCTP=17,
    NET_TR=14,
    NET_UNIX=4,
    NET_X25=13
} enum_1705;

typedef enum enum_1706 {
    RANDOM_BOOT_ID=5,
    RANDOM_ENTROPY_COUNT=2,
    RANDOM_POOLSIZE=1,
    RANDOM_READ_THRESH=3,
    RANDOM_UUID=6,
    RANDOM_WRITE_THRESH=4
} enum_1706;

typedef enum enum_1707 {
    PTY_MAX=1,
    PTY_NR=2
} enum_1707;

typedef enum enum_1708 {
    BUS_ISA_MEM_BASE=1,
    BUS_ISA_PORT_BASE=2,
    BUS_ISA_PORT_SHIFT=3
} enum_1708;

typedef enum enum_1709 {
    NET_CORE_AEVENT_ETIME=20,
    NET_CORE_AEVENT_RSEQTH=21,
    NET_CORE_BUDGET=19,
    NET_CORE_DEV_WEIGHT=17,
    NET_CORE_DIVERT_VERSION=12,
    NET_CORE_FASTROUTE=7,
    NET_CORE_HOT_LIST_LENGTH=11,
    NET_CORE_LO_CONG=15,
    NET_CORE_MAX_BACKLOG=6,
    NET_CORE_MOD_CONG=16,
    NET_CORE_MSG_BURST=9,
    NET_CORE_MSG_COST=8,
    NET_CORE_NO_CONG=14,
    NET_CORE_NO_CONG_THRESH=13,
    NET_CORE_OPTMEM_MAX=10,
    NET_CORE_RMEM_DEFAULT=4,
    NET_CORE_RMEM_MAX=2,
    NET_CORE_SOMAXCONN=18,
    NET_CORE_WARNINGS=22,
    NET_CORE_WMEM_DEFAULT=3,
    NET_CORE_WMEM_MAX=1
} enum_1709;

typedef enum enum_1710 {
    NET_UNIX_DELETE_DELAY=2,
    NET_UNIX_DESTROY_DELAY=1,
    NET_UNIX_MAX_DGRAM_QLEN=3
} enum_1710;

typedef enum enum_1711 {
    NET_NF_CONNTRACK_BUCKETS=14,
    NET_NF_CONNTRACK_CHECKSUM=32,
    NET_NF_CONNTRACK_COUNT=27,
    NET_NF_CONNTRACK_FRAG6_HIGH_THRESH=31,
    NET_NF_CONNTRACK_FRAG6_LOW_THRESH=30,
    NET_NF_CONNTRACK_FRAG6_TIMEOUT=29,
    NET_NF_CONNTRACK_GENERIC_TIMEOUT=13,
    NET_NF_CONNTRACK_ICMPV6_TIMEOUT=28,
    NET_NF_CONNTRACK_ICMP_TIMEOUT=12,
    NET_NF_CONNTRACK_LOG_INVALID=15,
    NET_NF_CONNTRACK_MAX=1,
    NET_NF_CONNTRACK_SCTP_TIMEOUT_CLOSED=20,
    NET_NF_CONNTRACK_SCTP_TIMEOUT_COOKIE_ECHOED=22,
    NET_NF_CONNTRACK_SCTP_TIMEOUT_COOKIE_WAIT=21,
    NET_NF_CONNTRACK_SCTP_TIMEOUT_ESTABLISHED=23,
    NET_NF_CONNTRACK_SCTP_TIMEOUT_SHUTDOWN_ACK_SENT=26,
    NET_NF_CONNTRACK_SCTP_TIMEOUT_SHUTDOWN_RECD=25,
    NET_NF_CONNTRACK_SCTP_TIMEOUT_SHUTDOWN_SENT=24,
    NET_NF_CONNTRACK_TCP_BE_LIBERAL=18,
    NET_NF_CONNTRACK_TCP_LOOSE=17,
    NET_NF_CONNTRACK_TCP_MAX_RETRANS=19,
    NET_NF_CONNTRACK_TCP_TIMEOUT_CLOSE=9,
    NET_NF_CONNTRACK_TCP_TIMEOUT_CLOSE_WAIT=6,
    NET_NF_CONNTRACK_TCP_TIMEOUT_ESTABLISHED=4,
    NET_NF_CONNTRACK_TCP_TIMEOUT_FIN_WAIT=5,
    NET_NF_CONNTRACK_TCP_TIMEOUT_LAST_ACK=7,
    NET_NF_CONNTRACK_TCP_TIMEOUT_MAX_RETRANS=16,
    NET_NF_CONNTRACK_TCP_TIMEOUT_SYN_RECV=3,
    NET_NF_CONNTRACK_TCP_TIMEOUT_SYN_SENT=2,
    NET_NF_CONNTRACK_TCP_TIMEOUT_TIME_WAIT=8,
    NET_NF_CONNTRACK_UDP_TIMEOUT=10,
    NET_NF_CONNTRACK_UDP_TIMEOUT_STREAM=11
} enum_1711;

typedef enum enum_1712 {
    NET_CIPSOV4_CACHE_BUCKET_SIZE=119,
    NET_CIPSOV4_CACHE_ENABLE=118,
    NET_CIPSOV4_RBM_OPTFMT=120,
    NET_CIPSOV4_RBM_STRICTVALID=121,
    NET_IPV4_ALWAYS_DEFRAG=67,
    NET_IPV4_AUTOCONFIG=38,
    NET_IPV4_CONF=16,
    NET_IPV4_DEFAULT_TTL=37,
    NET_IPV4_DYNADDR=9,
    NET_IPV4_FIB_HASH=19,
    NET_IPV4_FORWARD=8,
    NET_IPV4_ICMP_DESTUNREACH_RATE=60,
    NET_IPV4_ICMP_ECHOREPLY_RATE=63,
    NET_IPV4_ICMP_ECHO_IGNORE_ALL=57,
    NET_IPV4_ICMP_ECHO_IGNORE_BROADCASTS=58,
    NET_IPV4_ICMP_ERRORS_USE_INBOUND_IFADDR=109,
    NET_IPV4_ICMP_IGNORE_BOGUS_ERROR_RESPONSES=64,
    NET_IPV4_ICMP_PARAMPROB_RATE=62,
    NET_IPV4_ICMP_RATELIMIT=89,
    NET_IPV4_ICMP_RATEMASK=90,
    NET_IPV4_ICMP_SOURCEQUENCH_RATE=59,
    NET_IPV4_ICMP_TIMEEXCEED_RATE=61,
    NET_IPV4_IGMP_MAX_MEMBERSHIPS=65,
    NET_IPV4_IGMP_MAX_MSF=96,
    NET_IPV4_INET_PEER_GC_MAXTIME=73,
    NET_IPV4_INET_PEER_GC_MINTIME=72,
    NET_IPV4_INET_PEER_MAXTTL=71,
    NET_IPV4_INET_PEER_MINTTL=70,
    NET_IPV4_INET_PEER_THRESHOLD=69,
    NET_IPV4_IPFRAG_HIGH_THRESH=41,
    NET_IPV4_IPFRAG_LOW_THRESH=42,
    NET_IPV4_IPFRAG_MAX_DIST=112,
    NET_IPV4_IPFRAG_SECRET_INTERVAL=94,
    NET_IPV4_IPFRAG_TIME=43,
    NET_IPV4_IP_MASQ_DEBUG=50,
    NET_IPV4_LOCAL_PORT_RANGE=56,
    NET_IPV4_NEIGH=17,
    NET_IPV4_NETFILTER=20,
    NET_IPV4_NONLOCAL_BIND=88,
    NET_IPV4_NO_PMTU_DISC=39,
    NET_IPV4_ROUTE=18,
    NET_IPV4_TCP_FIN_TIMEOUT=49,
    NET_IPV4_TCP_KEEPALIVE_INTVL=68,
    NET_IPV4_TCP_KEEPALIVE_PROBES=46,
    NET_IPV4_TCP_KEEPALIVE_TIME=45,
    NET_IPV4_TCP_MAX_KA_PROBES=44,
    NET_IPV4_TCP_RETRANS_COLLAPSE=36,
    NET_IPV4_TCP_RETRIES1=47,
    NET_IPV4_TCP_RETRIES2=48,
    NET_IPV4_TCP_SACK=35,
    NET_IPV4_TCP_SYN_RETRIES=40,
    NET_IPV4_TCP_TIMESTAMPS=33,
    NET_IPV4_TCP_WINDOW_SCALING=34,
    NET_IPV4_TCP_WORKAROUND_SIGNED_WINDOWS=115,
    NET_TCP_ABC=111,
    NET_TCP_ABORT_ON_OVERFLOW=75,
    NET_TCP_ADV_WIN_SCALE=87,
    NET_TCP_ALLOWED_CONG_CONTROL=123,
    NET_TCP_APP_WIN=86,
    NET_TCP_AVAIL_CONG_CONTROL=122,
    NET_TCP_BASE_MSS=114,
    NET_TCP_BIC_BETA=108,
    NET_TCP_CONG_CONTROL=110,
    NET_TCP_DEFAULT_WIN_SCALE=105,
    NET_TCP_DMA_COPYBREAK=116,
    NET_TCP_DSACK=82,
    NET_TCP_ECN=81,
    NET_TCP_FACK=79,
    NET_TCP_FRTO=92,
    NET_TCP_FRTO_RESPONSE=125,
    NET_TCP_LOW_LATENCY=93,
    NET_TCP_MAX_ORPHANS=77,
    NET_TCP_MAX_SSTHRESH=124,
    NET_TCP_MAX_SYN_BACKLOG=55,
    NET_TCP_MAX_TW_BUCKETS=78,
    NET_TCP_MEM=83,
    NET_TCP_MODERATE_RCVBUF=106,
    NET_TCP_MTU_PROBING=113,
    NET_TCP_NO_METRICS_SAVE=97,
    NET_TCP_ORPHAN_RETRIES=74,
    NET_TCP_REORDERING=80,
    NET_TCP_RFC1337=53,
    NET_TCP_RMEM=85,
    NET_TCP_SLOW_START_AFTER_IDLE=117,
    NET_TCP_STDURG=52,
    NET_TCP_SYNACK_RETRIES=76,
    NET_TCP_SYNCOOKIES=51,
    NET_TCP_SYN_TAILDROP=54,
    NET_TCP_TSO_WIN_DIVISOR=107,
    NET_TCP_TW_RECYCLE=66,
    NET_TCP_TW_REUSE=91,
    NET_TCP_WMEM=84
} enum_1712;

typedef enum enum_1713 {
    NET_IPV4_ROUTE_ERROR_BURST=13,
    NET_IPV4_ROUTE_ERROR_COST=12,
    NET_IPV4_ROUTE_FLUSH=1,
    NET_IPV4_ROUTE_GC_ELASTICITY=14,
    NET_IPV4_ROUTE_GC_INTERVAL=8,
    NET_IPV4_ROUTE_GC_MIN_INTERVAL=6,
    NET_IPV4_ROUTE_GC_MIN_INTERVAL_MS=19,
    NET_IPV4_ROUTE_GC_THRESH=4,
    NET_IPV4_ROUTE_GC_TIMEOUT=7,
    NET_IPV4_ROUTE_MAX_DELAY=3,
    NET_IPV4_ROUTE_MAX_SIZE=5,
    NET_IPV4_ROUTE_MIN_ADVMSS=17,
    NET_IPV4_ROUTE_MIN_DELAY=2,
    NET_IPV4_ROUTE_MIN_PMTU=16,
    NET_IPV4_ROUTE_MTU_EXPIRES=15,
    NET_IPV4_ROUTE_REDIRECT_LOAD=9,
    NET_IPV4_ROUTE_REDIRECT_NUMBER=10,
    NET_IPV4_ROUTE_REDIRECT_SILENCE=11,
    NET_IPV4_ROUTE_SECRET_INTERVAL=18
} enum_1713;

typedef enum enum_1714 {
    NET_PROTO_CONF_ALL=0,
    NET_PROTO_CONF_DEFAULT=1
} enum_1714;

typedef enum enum_1715 {
    NET_IPV4_CONF_ACCEPT_LOCAL=23,
    NET_IPV4_CONF_ACCEPT_REDIRECTS=4,
    NET_IPV4_CONF_ACCEPT_SOURCE_ROUTE=9,
    NET_IPV4_CONF_ARPFILTER=13,
    NET_IPV4_CONF_ARP_ACCEPT=21,
    NET_IPV4_CONF_ARP_ANNOUNCE=18,
    NET_IPV4_CONF_ARP_IGNORE=19,
    NET_IPV4_CONF_ARP_NOTIFY=22,
    NET_IPV4_CONF_BOOTP_RELAY=10,
    NET_IPV4_CONF_FORCE_IGMP_VERSION=17,
    NET_IPV4_CONF_FORWARDING=1,
    NET_IPV4_CONF_LOG_MARTIANS=11,
    NET_IPV4_CONF_MC_FORWARDING=2,
    NET_IPV4_CONF_MEDIUM_ID=14,
    NET_IPV4_CONF_NOPOLICY=16,
    NET_IPV4_CONF_NOXFRM=15,
    NET_IPV4_CONF_PROMOTE_SECONDARIES=20,
    NET_IPV4_CONF_PROXY_ARP=3,
    NET_IPV4_CONF_PROXY_ARP_PVLAN=25,
    NET_IPV4_CONF_ROUTE_LOCALNET=26,
    NET_IPV4_CONF_RP_FILTER=8,
    NET_IPV4_CONF_SECURE_REDIRECTS=5,
    NET_IPV4_CONF_SEND_REDIRECTS=6,
    NET_IPV4_CONF_SHARED_MEDIA=7,
    NET_IPV4_CONF_SRC_VMARK=24,
    NET_IPV4_CONF_TAG=12,
    __NET_IPV4_CONF_MAX=27
} enum_1715;

typedef enum enum_1716 {
    NET_IPV4_NF_CONNTRACK_BUCKETS=14,
    NET_IPV4_NF_CONNTRACK_CHECKSUM=28,
    NET_IPV4_NF_CONNTRACK_COUNT=27,
    NET_IPV4_NF_CONNTRACK_GENERIC_TIMEOUT=13,
    NET_IPV4_NF_CONNTRACK_ICMP_TIMEOUT=12,
    NET_IPV4_NF_CONNTRACK_LOG_INVALID=15,
    NET_IPV4_NF_CONNTRACK_MAX=1,
    NET_IPV4_NF_CONNTRACK_SCTP_TIMEOUT_CLOSED=20,
    NET_IPV4_NF_CONNTRACK_SCTP_TIMEOUT_COOKIE_ECHOED=22,
    NET_IPV4_NF_CONNTRACK_SCTP_TIMEOUT_COOKIE_WAIT=21,
    NET_IPV4_NF_CONNTRACK_SCTP_TIMEOUT_ESTABLISHED=23,
    NET_IPV4_NF_CONNTRACK_SCTP_TIMEOUT_SHUTDOWN_ACK_SENT=26,
    NET_IPV4_NF_CONNTRACK_SCTP_TIMEOUT_SHUTDOWN_RECD=25,
    NET_IPV4_NF_CONNTRACK_SCTP_TIMEOUT_SHUTDOWN_SENT=24,
    NET_IPV4_NF_CONNTRACK_TCP_BE_LIBERAL=18,
    NET_IPV4_NF_CONNTRACK_TCP_LOOSE=17,
    NET_IPV4_NF_CONNTRACK_TCP_MAX_RETRANS=19,
    NET_IPV4_NF_CONNTRACK_TCP_TIMEOUT_CLOSE=9,
    NET_IPV4_NF_CONNTRACK_TCP_TIMEOUT_CLOSE_WAIT=6,
    NET_IPV4_NF_CONNTRACK_TCP_TIMEOUT_ESTABLISHED=4,
    NET_IPV4_NF_CONNTRACK_TCP_TIMEOUT_FIN_WAIT=5,
    NET_IPV4_NF_CONNTRACK_TCP_TIMEOUT_LAST_ACK=7,
    NET_IPV4_NF_CONNTRACK_TCP_TIMEOUT_MAX_RETRANS=16,
    NET_IPV4_NF_CONNTRACK_TCP_TIMEOUT_SYN_RECV=3,
    NET_IPV4_NF_CONNTRACK_TCP_TIMEOUT_SYN_SENT=2,
    NET_IPV4_NF_CONNTRACK_TCP_TIMEOUT_TIME_WAIT=8,
    NET_IPV4_NF_CONNTRACK_UDP_TIMEOUT=10,
    NET_IPV4_NF_CONNTRACK_UDP_TIMEOUT_STREAM=11
} enum_1716;

typedef enum enum_1717 {
    NET_IPV6_BINDV6ONLY=20,
    NET_IPV6_CONF=16,
    NET_IPV6_ICMP=19,
    NET_IPV6_IP6FRAG_HIGH_THRESH=21,
    NET_IPV6_IP6FRAG_LOW_THRESH=22,
    NET_IPV6_IP6FRAG_SECRET_INTERVAL=24,
    NET_IPV6_IP6FRAG_TIME=23,
    NET_IPV6_MLD_MAX_MSF=25,
    NET_IPV6_NEIGH=17,
    NET_IPV6_ROUTE=18
} enum_1717;

typedef enum enum_1718 {
    NET_IPV6_ROUTE_FLUSH=1,
    NET_IPV6_ROUTE_GC_ELASTICITY=7,
    NET_IPV6_ROUTE_GC_INTERVAL=6,
    NET_IPV6_ROUTE_GC_MIN_INTERVAL=4,
    NET_IPV6_ROUTE_GC_MIN_INTERVAL_MS=10,
    NET_IPV6_ROUTE_GC_THRESH=2,
    NET_IPV6_ROUTE_GC_TIMEOUT=5,
    NET_IPV6_ROUTE_MAX_SIZE=3,
    NET_IPV6_ROUTE_MIN_ADVMSS=9,
    NET_IPV6_ROUTE_MTU_EXPIRES=8
} enum_1718;

typedef enum enum_1719 {
    NET_IPV6_ACCEPT_RA=4,
    NET_IPV6_ACCEPT_RA_DEFRTR=18,
    NET_IPV6_ACCEPT_RA_PINFO=19,
    NET_IPV6_ACCEPT_RA_RTR_PREF=20,
    NET_IPV6_ACCEPT_RA_RT_INFO_MAX_PLEN=22,
    NET_IPV6_ACCEPT_REDIRECTS=5,
    NET_IPV6_ACCEPT_SOURCE_ROUTE=25,
    NET_IPV6_AUTOCONF=6,
    NET_IPV6_DAD_TRANSMITS=7,
    NET_IPV6_FORCE_MLD_VERSION=17,
    NET_IPV6_FORWARDING=1,
    NET_IPV6_HOP_LIMIT=2,
    NET_IPV6_MAX_ADDRESSES=16,
    NET_IPV6_MAX_DESYNC_FACTOR=15,
    NET_IPV6_MTU=3,
    NET_IPV6_PROXY_NDP=23,
    NET_IPV6_REGEN_MAX_RETRY=14,
    NET_IPV6_RTR_PROBE_INTERVAL=21,
    NET_IPV6_RTR_SOLICITS=8,
    NET_IPV6_RTR_SOLICIT_DELAY=10,
    NET_IPV6_RTR_SOLICIT_INTERVAL=9,
    NET_IPV6_TEMP_PREFERED_LFT=13,
    NET_IPV6_TEMP_VALID_LFT=12,
    NET_IPV6_USE_TEMPADDR=11,
    __NET_IPV6_MAX=26
} enum_1719;

typedef enum enum_1720 {
    NET_IPV6_ICMP_RATELIMIT=1
} enum_1720;

typedef enum enum_1721 {
    NET_NEIGH_ANYCAST_DELAY=10,
    NET_NEIGH_APP_SOLICIT=3,
    NET_NEIGH_DELAY_PROBE_TIME=6,
    NET_NEIGH_GC_INTERVAL=13,
    NET_NEIGH_GC_STALE_TIME=7,
    NET_NEIGH_GC_THRESH1=14,
    NET_NEIGH_GC_THRESH2=15,
    NET_NEIGH_GC_THRESH3=16,
    NET_NEIGH_LOCKTIME=12,
    NET_NEIGH_MCAST_SOLICIT=1,
    NET_NEIGH_PROXY_DELAY=11,
    NET_NEIGH_PROXY_QLEN=9,
    NET_NEIGH_REACHABLE_TIME=5,
    NET_NEIGH_REACHABLE_TIME_MS=18,
    NET_NEIGH_RETRANS_TIME=4,
    NET_NEIGH_RETRANS_TIME_MS=17,
    NET_NEIGH_UCAST_SOLICIT=2,
    NET_NEIGH_UNRES_QLEN=8,
    __NET_NEIGH_MAX=19
} enum_1721;

typedef enum enum_1722 {
    NET_DCCP_DEFAULT=1
} enum_1722;

typedef enum enum_1723 {
    NET_IPX_FORWARDING=2,
    NET_IPX_PPROP_BROADCASTING=1
} enum_1723;

typedef enum enum_1724 {
    NET_LLC2=1,
    NET_LLC_STATION=2
} enum_1724;

typedef enum enum_1725 {
    NET_LLC2_TIMEOUT=1
} enum_1725;

typedef enum enum_1726 {
    NET_LLC_STATION_ACK_TIMEOUT=1
} enum_1726;

typedef enum enum_1727 {
    NET_LLC2_ACK_TIMEOUT=1,
    NET_LLC2_BUSY_TIMEOUT=4,
    NET_LLC2_P_TIMEOUT=2,
    NET_LLC2_REJ_TIMEOUT=3
} enum_1727;

typedef enum enum_1728 {
    NET_ATALK_AARP_EXPIRY_TIME=1,
    NET_ATALK_AARP_RESOLVE_TIME=4,
    NET_ATALK_AARP_RETRANSMIT_LIMIT=3,
    NET_ATALK_AARP_TICK_TIME=2
} enum_1728;

typedef enum enum_1729 {
    NET_NETROM_DEFAULT_PATH_QUALITY=1,
    NET_NETROM_LINK_FAILS_COUNT=11,
    NET_NETROM_NETWORK_TTL_INITIALISER=3,
    NET_NETROM_OBSOLESCENCE_COUNT_INITIALISER=2,
    NET_NETROM_RESET=12,
    NET_NETROM_ROUTING_CONTROL=10,
    NET_NETROM_TRANSPORT_ACKNOWLEDGE_DELAY=6,
    NET_NETROM_TRANSPORT_BUSY_DELAY=7,
    NET_NETROM_TRANSPORT_MAXIMUM_TRIES=5,
    NET_NETROM_TRANSPORT_NO_ACTIVITY_TIMEOUT=9,
    NET_NETROM_TRANSPORT_REQUESTED_WINDOW_SIZE=8,
    NET_NETROM_TRANSPORT_TIMEOUT=4
} enum_1729;

typedef enum enum_1730 {
    NET_AX25_BACKOFF_TYPE=3,
    NET_AX25_CONNECT_MODE=4,
    NET_AX25_DAMA_SLAVE_TIMEOUT=14,
    NET_AX25_DEFAULT_MODE=2,
    NET_AX25_EXTENDED_WINDOW=6,
    NET_AX25_IDLE_TIMEOUT=10,
    NET_AX25_IP_DEFAULT_MODE=1,
    NET_AX25_N2=11,
    NET_AX25_PACLEN=12,
    NET_AX25_PROTOCOL=13,
    NET_AX25_STANDARD_WINDOW=5,
    NET_AX25_T1_TIMEOUT=7,
    NET_AX25_T2_TIMEOUT=8,
    NET_AX25_T3_TIMEOUT=9
} enum_1730;

typedef enum enum_1731 {
    NET_ROSE_ACK_HOLD_BACK_TIMEOUT=5,
    NET_ROSE_CALL_REQUEST_TIMEOUT=2,
    NET_ROSE_CLEAR_REQUEST_TIMEOUT=4,
    NET_ROSE_LINK_FAIL_TIMEOUT=7,
    NET_ROSE_MAX_VCS=8,
    NET_ROSE_NO_ACTIVITY_TIMEOUT=10,
    NET_ROSE_RESET_REQUEST_TIMEOUT=3,
    NET_ROSE_RESTART_REQUEST_TIMEOUT=1,
    NET_ROSE_ROUTING_CONTROL=6,
    NET_ROSE_WINDOW_SIZE=9
} enum_1731;

typedef enum enum_1732 {
    NET_X25_ACK_HOLD_BACK_TIMEOUT=5,
    NET_X25_CALL_REQUEST_TIMEOUT=2,
    NET_X25_CLEAR_REQUEST_TIMEOUT=4,
    NET_X25_FORWARD=6,
    NET_X25_RESET_REQUEST_TIMEOUT=3,
    NET_X25_RESTART_REQUEST_TIMEOUT=1
} enum_1732;

typedef enum enum_1733 {
    NET_TR_RIF_TIMEOUT=1
} enum_1733;

typedef enum enum_1734 {
    NET_DECNET_CONF=10,
    NET_DECNET_DEBUG_LEVEL=255,
    NET_DECNET_DEFAULT_DEVICE=4,
    NET_DECNET_DI_COUNT=7,
    NET_DECNET_DN_COUNT=6,
    NET_DECNET_DR_COUNT=8,
    NET_DECNET_DST_GC_INTERVAL=9,
    NET_DECNET_MEM=12,
    NET_DECNET_NODE_ADDRESS=2,
    NET_DECNET_NODE_NAME=3,
    NET_DECNET_NODE_TYPE=1,
    NET_DECNET_NO_FC_MAX_CWND=11,
    NET_DECNET_RMEM=13,
    NET_DECNET_TIME_WAIT=5,
    NET_DECNET_WMEM=14
} enum_1734;

typedef enum enum_1735 {
    NET_DECNET_CONF_DDCMP=1,
    NET_DECNET_CONF_ETHER=5,
    NET_DECNET_CONF_GRE=4,
    NET_DECNET_CONF_LOOPBACK=0,
    NET_DECNET_CONF_PPP=2,
    NET_DECNET_CONF_X25=3
} enum_1735;

typedef enum enum_1736 {
    NET_DECNET_CONF_DEV_BLKSIZE=6,
    NET_DECNET_CONF_DEV_FORWARDING=5,
    NET_DECNET_CONF_DEV_PRIORITY=1,
    NET_DECNET_CONF_DEV_STATE=7,
    NET_DECNET_CONF_DEV_T1=2,
    NET_DECNET_CONF_DEV_T2=3,
    NET_DECNET_CONF_DEV_T3=4
} enum_1736;

typedef enum enum_1737 {
    NET_SCTP_ADDIP_ENABLE=13,
    NET_SCTP_ASSOCIATION_MAX_RETRANS=7,
    NET_SCTP_HB_INTERVAL=10,
    NET_SCTP_MAX_BURST=12,
    NET_SCTP_MAX_INIT_RETRANSMITS=9,
    NET_SCTP_PATH_MAX_RETRANS=8,
    NET_SCTP_PRESERVE_ENABLE=11,
    NET_SCTP_PRSCTP_ENABLE=14,
    NET_SCTP_RCVBUF_POLICY=17,
    NET_SCTP_RTO_ALPHA=4,
    NET_SCTP_RTO_BETA=5,
    NET_SCTP_RTO_INITIAL=1,
    NET_SCTP_RTO_MAX=3,
    NET_SCTP_RTO_MIN=2,
    NET_SCTP_SACK_TIMEOUT=16,
    NET_SCTP_SNDBUF_POLICY=15,
    NET_SCTP_VALID_COOKIE_LIFE=6
} enum_1737;

typedef enum enum_1738 {
    NET_BRIDGE_NF_CALL_ARPTABLES=1,
    NET_BRIDGE_NF_CALL_IP6TABLES=3,
    NET_BRIDGE_NF_CALL_IPTABLES=2,
    NET_BRIDGE_NF_FILTER_PPPOE_TAGGED=5,
    NET_BRIDGE_NF_FILTER_VLAN_TAGGED=4
} enum_1738;

typedef enum enum_1739 {
    NET_IRDA_DEBUG=3,
    NET_IRDA_DEVNAME=2,
    NET_IRDA_DISCOVERY=1,
    NET_IRDA_DISCOVERY_SLOTS=5,
    NET_IRDA_DISCOVERY_TIMEOUT=6,
    NET_IRDA_FAST_POLL=4,
    NET_IRDA_LAP_KEEPALIVE_TIME=14,
    NET_IRDA_MAX_BAUD_RATE=8,
    NET_IRDA_MAX_NOREPLY_TIME=12,
    NET_IRDA_MAX_TX_DATA_SIZE=10,
    NET_IRDA_MAX_TX_WINDOW=11,
    NET_IRDA_MIN_TX_TURN_TIME=9,
    NET_IRDA_SLOT_TIMEOUT=7,
    NET_IRDA_WARN_NOREPLY_TIME=13
} enum_1739;

typedef enum enum_1740 {
    FS_AIO_MAX_NR=19,
    FS_AIO_NR=18,
    FS_DENTRY=8,
    FS_DIR_NOTIFY=14,
    FS_DQSTATS=16,
    FS_INOTIFY=20,
    FS_LEASES=13,
    FS_LEASE_TIME=15,
    FS_MAXDQUOT=5,
    FS_MAXFILE=7,
    FS_MAXINODE=3,
    FS_MAXSUPER=10,
    FS_NRDQUOT=4,
    FS_NRFILE=6,
    FS_NRINODE=1,
    FS_NRSUPER=9,
    FS_OCFS2=988,
    FS_OVERFLOWGID=12,
    FS_OVERFLOWUID=11,
    FS_STATINODE=2,
    FS_XFS=17
} enum_1740;

typedef enum enum_1741 {
    FS_DQ_ALLOCATED=6,
    FS_DQ_CACHE_HITS=5,
    FS_DQ_DROPS=2,
    FS_DQ_FREE=7,
    FS_DQ_LOOKUPS=1,
    FS_DQ_READS=3,
    FS_DQ_SYNCS=8,
    FS_DQ_WARNINGS=9,
    FS_DQ_WRITES=4
} enum_1741;

typedef enum enum_1742 {
    DEV_CDROM=1,
    DEV_HWMON=2,
    DEV_IPMI=7,
    DEV_MAC_HID=5,
    DEV_PARPORT=3,
    DEV_RAID=4,
    DEV_SCSI=6
} enum_1742;

typedef enum enum_1743 {
    DEV_CDROM_AUTOCLOSE=2,
    DEV_CDROM_AUTOEJECT=3,
    DEV_CDROM_CHECK_MEDIA=6,
    DEV_CDROM_DEBUG=4,
    DEV_CDROM_INFO=1,
    DEV_CDROM_LOCK=5
} enum_1743;

typedef enum enum_1744 {
    DEV_PARPORT_DEFAULT=0
} enum_1744;

typedef enum enum_1745 {
    DEV_RAID_SPEED_LIMIT_MAX=2,
    DEV_RAID_SPEED_LIMIT_MIN=1
} enum_1745;

typedef enum enum_1746 {
    DEV_PARPORT_DEFAULT_SPINTIME=2,
    DEV_PARPORT_DEFAULT_TIMESLICE=1
} enum_1746;

typedef enum enum_1747 {
    DEV_PARPORT_AUTOPROBE=16,
    DEV_PARPORT_BASE_ADDR=2,
    DEV_PARPORT_DEVICES=6,
    DEV_PARPORT_DMA=4,
    DEV_PARPORT_IRQ=3,
    DEV_PARPORT_MODES=5,
    DEV_PARPORT_SPINTIME=1
} enum_1747;

typedef enum enum_1748 {
    DEV_PARPORT_DEVICES_ACTIVE=0
} enum_1748;

typedef enum enum_1749 {
    DEV_PARPORT_DEVICE_TIMESLICE=1
} enum_1749;

typedef enum enum_1750 {
    DEV_MAC_HID_ADB_MOUSE_SENDS_KEYCODES=6,
    DEV_MAC_HID_KEYBOARD_LOCK_KEYCODES=2,
    DEV_MAC_HID_KEYBOARD_SENDS_LINUX_KEYCODES=1,
    DEV_MAC_HID_MOUSE_BUTTON2_KEYCODE=4,
    DEV_MAC_HID_MOUSE_BUTTON3_KEYCODE=5,
    DEV_MAC_HID_MOUSE_BUTTON_EMULATION=3
} enum_1750;

typedef enum enum_1751 {
    DEV_SCSI_LOGGING_LEVEL=1
} enum_1751;

typedef enum enum_1752 {
    DEV_IPMI_POWEROFF_POWERCYCLE=1
} enum_1752;

typedef enum enum_1753 {
    ABI_DEFHANDLER_COFF=1,
    ABI_DEFHANDLER_ELF=2,
    ABI_DEFHANDLER_LCALL7=3,
    ABI_DEFHANDLER_LIBCSO=4,
    ABI_FAKE_UTSNAME=6,
    ABI_TRACE=5
} enum_1753;

#define _SYS_SYSINFO_H 1

#define _BITS_SYSLOG_PATH_H 1

#define _SYS_SYSLOG_H 1

#define LOG_ALERT 1

#define LOG_AUTH 32

#define LOG_AUTHPRIV 80

#define LOG_CONS 2

#define LOG_CRIT 2

#define LOG_CRON 72

#define LOG_DAEMON 24

#define LOG_DEBUG 7

#define LOG_EMERG 0

#define LOG_ERR 3

#define LOG_FACMASK 1016

#define LOG_FTP 88

#define LOG_INFO 6

#define LOG_KERN 0

#define LOG_LOCAL0 128

#define LOG_LOCAL1 136

#define LOG_LOCAL2 144

#define LOG_LOCAL3 152

#define LOG_LOCAL4 160

#define LOG_LOCAL5 168

#define LOG_LOCAL6 176

#define LOG_LOCAL7 184

#define LOG_LPR 48

#define LOG_MAIL 16

#define LOG_NDELAY 8

#define LOG_NEWS 56

#define LOG_NFACILITIES 24

#define LOG_NOTICE 5

#define LOG_NOWAIT 16

#define LOG_ODELAY 4

#define LOG_PERROR 32

#define LOG_PID 1

#define LOG_PRIMASK 7

#define LOG_SYSLOG 40

#define LOG_USER 8

#define LOG_UUCP 64

#define LOG_WARNING 4

#define _SYS_SYSMACROS_H 1

#define _PROTOCOLS_TALKD_H 1

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

struct CTL_MSG {
    u_char vers;
    u_char type;
    u_char answer;
    u_char pad;
    u_int32_t id_num;
    struct osockaddr addr;
    struct osockaddr ctl_addr;
    int32_t pid;
    char l_name[12];
    char r_name[12];
    char r_tty[16];
};

typedef struct CTL_RESPONSE CTL_RESPONSE, *PCTL_RESPONSE;

struct CTL_RESPONSE {
    u_char vers;
    u_char type;
    u_char answer;
    u_char pad;
    u_int32_t id_num;
    struct osockaddr addr;
};

#define _TAR_H 1

#define TGEXEC 8

#define TGREAD 32

#define TGWRITE 16

#define TMAGLEN 6

#define TOEXEC 1

#define TOREAD 4

#define TOWRITE 2

#define TSGID 1024

#define TSUID 2048

#define TSVTX 512

#define TUEXEC 64

#define TUREAD 256

#define TUWRITE 128

#define TVERSLEN 2

#define _NETINET_TCP_H 1

#define SOL_TCP 6

#define TCP_CONGESTION 13

#define TCP_CORK 3

#define TCP_DEFER_ACCEPT 9

#define TCP_INFO 11

#define TCP_KEEPCNT 6

#define TCP_KEEPIDLE 4

#define TCP_KEEPINTVL 5

#define TCP_LINGER2 8

#define TCP_MAX_WINSHIFT 14

#define TCP_MAXSEG 2

#define TCP_MAXWIN 65535

#define TCP_MD5SIG 14

#define TCP_MD5SIG_MAXKEYLEN 80

#define TCP_MSS 512

#define TCP_NODELAY 1

#define TCP_QUICKACK 12

#define TCP_SYNCNT 7

#define TCP_WINDOW_CLAMP 10

#define TCPI_OPT_ECN 8

#define TCPI_OPT_SACK 2

#define TCPI_OPT_TIMESTAMPS 1

#define TCPI_OPT_WSCALE 4

#define TCPOLEN_MAXSEG 4

#define TCPOLEN_SACK_PERMITTED 2

#define TCPOLEN_TIMESTAMP 10

#define TCPOLEN_TSTAMP_APPA 12

#define TCPOLEN_WINDOW 3

#define TCPOPT_EOL 0

#define TCPOPT_MAXSEG 2

#define TCPOPT_NOP 1

#define TCPOPT_SACK 5

#define TCPOPT_SACK_PERMITTED 4

#define TCPOPT_TIMESTAMP 8

#define TCPOPT_TSTAMP_HDR 16844810

#define TCPOPT_WINDOW 3

typedef union anon__struct_1402_bitfield_1 anon__struct_1402_bitfield_1, *Panon__struct_1402_bitfield_1;

union anon__struct_1402_bitfield_1 {
    u_int16_t res1:4; /* : bits 0-3 */
    u_int16_t doff:4; /* : bits 4-7 */
    u_int16_t fin:1; /* : bits 8 */
    u_int16_t syn:1; /* : bits 9 */
    u_int16_t rst:1; /* : bits 10 */
    u_int16_t psh:1; /* : bits 11 */
    u_int16_t ack:1; /* : bits 12 */
    u_int16_t urg:1; /* : bits 13 */
    u_int16_t res2:2; /* : bits 14-15 */
};

typedef union anon__struct_1404_bitfield_1 anon__struct_1404_bitfield_1, *Panon__struct_1404_bitfield_1;

union anon__struct_1404_bitfield_1 {
    u_int8_t tcpi_snd_wscale:4; /* : bits 0-3 */
    u_int8_t tcpi_rcv_wscale:4; /* : bits 4-7 */
};

typedef enum enum_1403 {
    TCP_CLOSE=7,
    TCP_CLOSE_WAIT=8,
    TCP_CLOSING=11,
    TCP_ESTABLISHED=1,
    TCP_FIN_WAIT1=4,
    TCP_FIN_WAIT2=5,
    TCP_LAST_ACK=9,
    TCP_LISTEN=10,
    TCP_SYN_RECV=3,
    TCP_SYN_SENT=2,
    TCP_TIME_WAIT=6
} enum_1403;

typedef enum tcp_ca_state {
    TCP_CA_CWR=2,
    TCP_CA_Disorder=1,
    TCP_CA_Loss=4,
    TCP_CA_Open=0,
    TCP_CA_Recovery=3
} tcp_ca_state;

typedef struct tcp_info tcp_info, *Ptcp_info;

struct tcp_info {
    u_int8_t tcpi_state;
    u_int8_t tcpi_ca_state;
    u_int8_t tcpi_retransmits;
    u_int8_t tcpi_probes;
    u_int8_t tcpi_backoff;
    u_int8_t tcpi_options;
    union anon__struct_1404_bitfield_1 field_0x6;
    u_int32_t tcpi_rto;
    u_int32_t tcpi_ato;
    u_int32_t tcpi_snd_mss;
    u_int32_t tcpi_rcv_mss;
    u_int32_t tcpi_unacked;
    u_int32_t tcpi_sacked;
    u_int32_t tcpi_lost;
    u_int32_t tcpi_retrans;
    u_int32_t tcpi_fackets;
    u_int32_t tcpi_last_data_sent;
    u_int32_t tcpi_last_ack_sent;
    u_int32_t tcpi_last_data_recv;
    u_int32_t tcpi_last_ack_recv;
    u_int32_t tcpi_pmtu;
    u_int32_t tcpi_rcv_ssthresh;
    u_int32_t tcpi_rtt;
    u_int32_t tcpi_rttvar;
    u_int32_t tcpi_snd_ssthresh;
    u_int32_t tcpi_snd_cwnd;
    u_int32_t tcpi_advmss;
    u_int32_t tcpi_reordering;
    u_int32_t tcpi_rcv_rtt;
    u_int32_t tcpi_rcv_space;
    u_int32_t tcpi_total_retrans;
};

typedef struct tcp_md5sig tcp_md5sig, *Ptcp_md5sig;

struct tcp_md5sig {
    struct sockaddr_storage tcpm_addr;
    u_int16_t __tcpm_pad1;
    u_int16_t tcpm_keylen;
    u_int32_t __tcpm_pad2;
    u_int8_t tcpm_key[80];
};

typedef struct tcphdr tcphdr, *Ptcphdr;

struct tcphdr {
    u_int16_t source;
    u_int16_t dest;
    u_int32_t seq;
    u_int32_t ack_seq;
    union anon__struct_1402_bitfield_1 field_0xc;
    u_int16_t window;
    u_int16_t check;
    u_int16_t urg_ptr;
};

#define _ARPA_TELNET_H 1

#define ABORT 238

#define AO 245

#define AUTH_HOW_MASK 2

#define AUTH_HOW_MUTUAL 2

#define AUTH_HOW_ONE_WAY 0

#define AUTH_WHO_CLIENT 0

#define AUTH_WHO_MASK 1

#define AUTH_WHO_SERVER 1

#define AUTHTYPE_CNT 5

#define AUTHTYPE_KERBEROS_V4 1

#define AUTHTYPE_KERBEROS_V5 2

#define AUTHTYPE_MINK 4

#define AUTHTYPE_NULL 0

#define AUTHTYPE_SPX 3

#define AUTHTYPE_TEST 99

#define AYT 246

#define BREAK 243

#define DM 242

#define DO 253

#define DONT 254

#define EC 247

#define EL 248

#define ENCRYPT_CNT 9

#define ENCRYPT_DEC_KEYID 8

#define ENCRYPT_ENC_KEYID 7

#define ENCRYPT_END 4

#define ENCRYPT_IS 0

#define ENCRYPT_REPLY 2

#define ENCRYPT_REQEND 6

#define ENCRYPT_REQSTART 5

#define ENCRYPT_START 3

#define ENCRYPT_SUPPORT 1

#define ENCTYPE_ANY 0

#define ENCTYPE_CNT 3

#define ENCTYPE_DES_CFB64 1

#define ENCTYPE_DES_OFB64 2

#define ENV_ESC 2

#define ENV_USERVAR 3

#define EOR 239

#define GA 249

#define IAC 255

#define IP 244

#define LFLOW_OFF 0

#define LFLOW_ON 1

#define LFLOW_RESTART_ANY 2

#define LFLOW_RESTART_XON 3

#define LM_FORWARDMASK 2

#define LM_MODE 1

#define LM_SLC 3

#define MODE_ACK 4

#define MODE_ECHO 512

#define MODE_EDIT 1

#define MODE_FLOW 256

#define MODE_FORCE 4096

#define MODE_INBIN 1024

#define MODE_LIT_ECHO 16

#define MODE_MASK 31

#define MODE_OUTBIN 2048

#define MODE_SOFT_TAB 8

#define MODE_TRAPSIG 2

#define NEW_ENV_VALUE 1

#define NEW_ENV_VAR 0

#define NOP 241

#define NSLC 18

#define NTELOPTS 40

#define OLD_ENV_VALUE 0

#define OLD_ENV_VAR 1

#define SB 250

#define SE 240

#define SLC_ABORT 7

#define SLC_ACK 128

#define SLC_AO 4

#define SLC_AYT 5

#define SLC_BRK 2

#define SLC_CANTCHANGE 1

#define SLC_DEFAULT 3

#define SLC_EC 10

#define SLC_EL 11

#define SLC_EOF 8

#define SLC_EOR 6

#define SLC_EW 12

#define SLC_FLAGS 1

#define SLC_FLUSHIN 64

#define SLC_FLUSHOUT 32

#define SLC_FORW1 17

#define SLC_FORW2 18

#define SLC_FUNC 0

#define SLC_IP 3

#define SLC_LEVELBITS 3

#define SLC_LNEXT 14

#define SLC_NOSUPPORT 0

#define SLC_RP 13

#define SLC_SUSP 9

#define SLC_SYNCH 1

#define SLC_VALUE 2

#define SLC_VARIABLE 2

#define SLC_XOFF 16

#define SLC_XON 15

#define SUSP 237

#define SYNCH 242

#define TELCMD_FIRST 236

#define TELCMD_LAST 255

#define TELOPT_3270REGIME 29

#define TELOPT_AUTHENTICATION 37

#define TELOPT_BINARY 0

#define TELOPT_BM 19

#define TELOPT_DET 20

#define TELOPT_ECHO 1

#define TELOPT_ENCRYPT 38

#define TELOPT_EOR 25

#define TELOPT_EXOPL 255

#define TELOPT_LFLOW 33

#define TELOPT_LINEMODE 34

#define TELOPT_LOGOUT 18

#define TELOPT_NAMS 4

#define TELOPT_NAOCRD 10

#define TELOPT_NAOFFD 13

#define TELOPT_NAOHTD 12

#define TELOPT_NAOHTS 11

#define TELOPT_NAOL 8

#define TELOPT_NAOLFD 16

#define TELOPT_NAOP 9

#define TELOPT_NAOVTD 15

#define TELOPT_NAOVTS 14

#define TELOPT_NAWS 31

#define TELOPT_NEW_ENVIRON 39

#define TELOPT_OLD_ENVIRON 36

#define TELOPT_OUTMRK 27

#define TELOPT_RCP 2

#define TELOPT_RCTE 7

#define TELOPT_SGA 3

#define TELOPT_SNDLOC 23

#define TELOPT_STATUS 5

#define TELOPT_SUPDUP 21

#define TELOPT_SUPDUPOUTPUT 22

#define TELOPT_TM 6

#define TELOPT_TSPEED 32

#define TELOPT_TTYLOC 28

#define TELOPT_TTYPE 24

#define TELOPT_TUID 26

#define TELOPT_X3PAD 30

#define TELOPT_XASCII 17

#define TELOPT_XDISPLOC 35

#define TELQUAL_INFO 2

#define TELQUAL_IS 0

#define TELQUAL_NAME 3

#define TELQUAL_REPLY 2

#define TELQUAL_SEND 1

#define WILL 251

#define WONT 252

#define xEOF 236

#define __MAX_BAUD 4111

#define _HAVE_STRUCT_TERMIOS_C_ISPEED 1

#define _HAVE_STRUCT_TERMIOS_C_OSPEED 1

#define _TERMIOS_H 1

#define B0 0

#define B1000000 4104

#define B110 3

#define B115200 4098

#define B1152000 4105

#define B1200 9

#define B134 4

#define B150 5

#define B1500000 4106

#define B1800 10

#define B19200 14

#define B200 6

#define B2000000 4107

#define B230400 4099

#define B2400 11

#define B2500000 4108

#define B300 7

#define B3000000 4109

#define B3500000 4110

#define B38400 15

#define B4000000 4111

#define B460800 4100

#define B4800 12

#define B50 1

#define B500000 4101

#define B57600 4097

#define B576000 4102

#define B600 8

#define B75 2

#define B921600 4103

#define B9600 13

#define BRKINT 2

#define BS0 0

#define BS1 8192

#define BSDLY 8192

#define CBAUD 4111

#define CBAUDEX 4096

#define CIBAUD 269418496

#define CLOCAL 2048

#define CMSPAR 1073741824

#define CR0 0

#define CR1 512

#define CR2 1024

#define CR3 1536

#define CRDLY 1536

#define CREAD 128

#define CRTSCTS 2147483648

#define CS5 0

#define CS6 16

#define CS7 32

#define CS8 48

#define CSIZE 48

#define CSTOPB 64

#define ECHO 8

#define ECHOCTL 512

#define ECHOE 16

#define ECHOK 32

#define ECHOKE 2048

#define ECHONL 64

#define ECHOPRT 1024

#define EXTA 14

#define EXTB 15

#define FF0 0

#define FF1 32768

#define FFDLY 32768

#define FLUSHO 4096

#define HUPCL 1024

#define ICANON 2

#define ICRNL 256

#define IEXTEN 32768

#define IGNBRK 1

#define IGNCR 128

#define IGNPAR 4

#define IMAXBEL 8192

#define INLCR 64

#define INPCK 16

#define ISIG 1

#define ISTRIP 32

#define IUCLC 512

#define IUTF8 16384

#define IXANY 2048

#define IXOFF 4096

#define IXON 1024

#define NCCS 32

#define NL0 0

#define NL1 256

#define NLDLY 256

#define NOFLSH 128

#define OCRNL 8

#define OFDEL 128

#define OFILL 64

#define OLCUC 2

#define ONLCR 4

#define ONLRET 32

#define ONOCR 16

#define OPOST 1

#define PARENB 256

#define PARMRK 8

#define PARODD 512

#define PENDIN 16384

#define TAB0 0

#define TAB1 2048

#define TAB2 4096

#define TAB3 6144

#define TABDLY 6144

#define TCIFLUSH 0

#define TCIOFF 2

#define TCIOFLUSH 2

#define TCION 3

#define TCOFLUSH 1

#define TCOOFF 0

#define TCOON 1

#define TCSADRAIN 1

#define TCSAFLUSH 2

#define TCSANOW 0

#define TOSTOP 256

#define VDISCARD 13

#define VEOF 4

#define VEOL 11

#define VEOL2 16

#define VERASE 2

#define VINTR 0

#define VKILL 3

#define VLNEXT 15

#define VMIN 6

#define VQUIT 1

#define VREPRINT 12

#define VSTART 8

#define VSTOP 9

#define VSUSP 10

#define VSWTC 7

#define VT0 0

#define VT1 16384

#define VTDLY 16384

#define VTIME 5

#define VWERASE 14

#define XCASE 4

#define XTABS 6144

typedef uchar cc_t;

typedef uint speed_t;

typedef uint tcflag_t;

typedef struct termios termios, *Ptermios;

struct termios {
    tcflag_t c_iflag;
    tcflag_t c_oflag;
    tcflag_t c_cflag;
    tcflag_t c_lflag;
    cc_t c_line;
    cc_t c_cc[32];
    speed_t c_ispeed;
    speed_t c_ospeed;
};

#define _ARPA_TFTP_H 1

#define ACK 4

#define DATA 3

#define EACCESS 2

#define EBADID 5

#define EBADOP 4

#define EEXISTS 6

#define ENOSPACE 3

#define ENOTFOUND 1

#define ENOUSER 7

#define EUNDEF 0

#define RRQ 1

#define SEGSIZE 512

#define WRQ 2

typedef union _union_2324 _union_2324, *P_union_2324;

union _union_2324 {
    ushort tu_block;
    short tu_code;
    char tu_stuff[1];
};

typedef struct tftphdr tftphdr, *Ptftphdr;

struct tftphdr {
    short th_opcode;
    union _union_2324 th_u;
    char th_data[1];
};

#define _TGMATH_H 1

#define __clock_t_defined 1

#define __clockid_t_defined 1

#define __time_t_defined 1

#define __timer_t_defined 1

#define __timespec_defined 1

#define _BITS_TIME_H 1

#define _STRUCT_TIMEVAL 1

#define _SYS_TIME_H 1

#define _TIME_H 1

#define CLOCK_MONOTONIC 1

#define CLOCK_MONOTONIC_COARSE 6

#define CLOCK_MONOTONIC_RAW 4

#define CLOCK_PROCESS_CPUTIME_ID 2

#define CLOCK_REALTIME 0

#define CLOCK_REALTIME_COARSE 5

#define CLOCK_THREAD_CPUTIME_ID 3

#define CLOCKS_PER_SEC 1000000

#define TIMER_ABSTIME 1

typedef enum __itimer_which {
    ITIMER_PROF=2,
    ITIMER_REAL=0,
    ITIMER_VIRTUAL=1
} __itimer_which;

typedef enum __itimer_which __itimer_which_t;

typedef struct timezone timezone, *Ptimezone;

typedef struct timezone * __timezone_ptr_t;

struct timezone {
    int tz_minuteswest;
    int tz_dsttime;
};

typedef __clock_t clock_t;

typedef int __clockid_t;

typedef __clockid_t clockid_t;

typedef struct itimerspec itimerspec, *Pitimerspec;

struct itimerspec {
    struct timespec it_interval;
    struct timespec it_value;
};

typedef struct itimerval itimerval, *Pitimerval;

struct itimerval {
    struct timeval it_interval;
    struct timeval it_value;
};

typedef void * __timer_t;

typedef __timer_t timer_t;

typedef struct tm tm, *Ptm;

struct tm {
    int tm_sec;
    int tm_min;
    int tm_hour;
    int tm_mday;
    int tm_mon;
    int tm_year;
    int tm_wday;
    int tm_yday;
    int tm_isdst;
    long tm_gmtoff;
    char * tm_zone;
};

#define _PROTOCOLS_TIMED_H 1

#define ANYADDR 0

#define TSP_ACCEPT 9

#define TSP_ACK 2

#define TSP_ADJTIME 1

#define TSP_ANY 0

#define TSP_CONFLICT 11

#define TSP_DATE 14

#define TSP_DATEACK 16

#define TSP_DATEREQ 15

#define TSP_ELECTION 8

#define TSP_LOOP 24

#define TSP_MASTERACK 4

#define TSP_MASTERREQ 3

#define TSP_MASTERUP 6

#define TSP_MSITE 19

#define TSP_MSITEREQ 20

#define TSP_QUIT 13

#define TSP_REFUSE 10

#define TSP_RESOLVE 12

#define TSP_SETDATE 22

#define TSP_SETDATEREQ 23

#define TSP_SETTIME 5

#define TSP_SLAVEUP 7

#define TSP_TEST 21

#define TSP_TRACEOFF 18

#define TSP_TRACEON 17

#define TSPTYPENUMBER 25

#define TSPVERSION 1

typedef union _union_2311 _union_2311, *P_union_2311;

union _union_2311 {
    struct timeval tspu_time;
    char tspu_hopcnt;
};

typedef struct tsp tsp, *Ptsp;

struct tsp {
    u_char tsp_type;
    u_char tsp_vers;
    u_short tsp_seq;
    union _union_2311 tsp_u;
    char tsp_name[64];
};

#define _SYS_TIMERFD_H 1

typedef enum enum_1758 {
    TFD_CLOEXEC=2000000,
    TFD_NONBLOCK=4000
} enum_1758;

typedef enum enum_1759 {
    TFD_TIMER_ABSTIME=1
} enum_1759;

#define _SYS_TIMES_H 1

typedef struct tms tms, *Ptms;

struct tms {
    clock_t tms_utime;
    clock_t tms_stime;
    clock_t tms_cutime;
    clock_t tms_cstime;
};

#define DTLS_CTRL_GET_TIMEOUT 73

#define DTLS_CTRL_HANDLE_TIMEOUT 74

#define DTLS_CTRL_LISTEN 75

#define SSL_AD_ACCESS_DENIED 49

#define SSL_AD_BAD_CERTIFICATE 42

#define SSL_AD_BAD_CERTIFICATE_HASH_VALUE 114

#define SSL_AD_BAD_CERTIFICATE_STATUS_RESPONSE 113

#define SSL_AD_BAD_RECORD_MAC 20

#define SSL_AD_CERTIFICATE_EXPIRED 45

#define SSL_AD_CERTIFICATE_REVOKED 44

#define SSL_AD_CERTIFICATE_UNKNOWN 46

#define SSL_AD_CERTIFICATE_UNOBTAINABLE 111

#define SSL_AD_CLOSE_NOTIFY 0

#define SSL_AD_DECODE_ERROR 50

#define SSL_AD_DECOMPRESSION_FAILURE 30

#define SSL_AD_DECRYPT_ERROR 51

#define SSL_AD_DECRYPTION_FAILED 21

#define SSL_AD_EXPORT_RESTRICTION 60

#define SSL_AD_HANDSHAKE_FAILURE 40

#define SSL_AD_ILLEGAL_PARAMETER 47

#define SSL_AD_INAPPROPRIATE_FALLBACK 86

#define SSL_AD_INSUFFICIENT_SECURITY 71

#define SSL_AD_INTERNAL_ERROR 80

#define SSL_AD_NO_CERTIFICATE 41

#define SSL_AD_NO_RENEGOTIATION 100

#define SSL_AD_PROTOCOL_VERSION 70

#define SSL_AD_REASON_OFFSET 1000

#define SSL_AD_RECORD_OVERFLOW 22

#define SSL_AD_UNEXPECTED_MESSAGE 10

#define SSL_AD_UNKNOWN_CA 48

#define SSL_AD_UNKNOWN_PSK_IDENTITY 115

#define SSL_AD_UNRECOGNIZED_NAME 112

#define SSL_AD_UNSUPPORTED_CERTIFICATE 43

#define SSL_AD_UNSUPPORTED_EXTENSION 110

#define SSL_AD_USER_CANCELLED 90

#define SSL_CB_ACCEPT_EXIT 8194

#define SSL_CB_ACCEPT_LOOP 8193

#define SSL_CB_ALERT 16384

#define SSL_CB_CONNECT_EXIT 4098

#define SSL_CB_CONNECT_LOOP 4097

#define SSL_CB_EXIT 2

#define SSL_CB_HANDSHAKE_DONE 32

#define SSL_CB_HANDSHAKE_START 16

#define SSL_CB_LOOP 1

#define SSL_CB_READ 4

#define SSL_CB_READ_ALERT 16388

#define SSL_CB_WRITE 8

#define SSL_CB_WRITE_ALERT 16392

#define SSL_CTRL_CHECK_PROTO_VERSION 119

#define SSL_CTRL_CLEAR_EXTRA_CHAIN_CERTS 83

#define SSL_CTRL_CLEAR_MODE 78

#define SSL_CTRL_CLEAR_NUM_RENEGOTIATIONS 11

#define SSL_CTRL_CLEAR_OPTIONS 77

#define SSL_CTRL_EXTRA_CHAIN_CERT 14

#define SSL_CTRL_GET_CLIENT_CERT_REQUEST 9

#define SSL_CTRL_GET_EXTRA_CHAIN_CERTS 82

#define SSL_CTRL_GET_FLAGS 13

#define SSL_CTRL_GET_MAX_CERT_LIST 50

#define SSL_CTRL_GET_NUM_RENEGOTIATIONS 10

#define SSL_CTRL_GET_READ_AHEAD 40

#define SSL_CTRL_GET_RI_SUPPORT 76

#define SSL_CTRL_GET_SERVER_TMP_KEY 109

#define SSL_CTRL_GET_SESS_CACHE_MODE 45

#define SSL_CTRL_GET_SESS_CACHE_SIZE 43

#define SSL_CTRL_GET_SESSION_REUSED 8

#define SSL_CTRL_GET_TLS_EXT_HEARTBEAT_PENDING 86

#define SSL_CTRL_GET_TLSEXT_STATUS_REQ_EXTS 66

#define SSL_CTRL_GET_TLSEXT_STATUS_REQ_IDS 68

#define SSL_CTRL_GET_TLSEXT_STATUS_REQ_OCSP_RESP 70

#define SSL_CTRL_GET_TLSEXT_TICKET_KEYS 58

#define SSL_CTRL_GET_TOTAL_RENEGOTIATIONS 12

#define SSL_CTRL_MODE 33

#define SSL_CTRL_NEED_TMP_RSA 1

#define SSL_CTRL_OPTIONS 32

#define SSL_CTRL_SESS_ACCEPT 24

#define SSL_CTRL_SESS_ACCEPT_GOOD 25

#define SSL_CTRL_SESS_ACCEPT_RENEGOTIATE 26

#define SSL_CTRL_SESS_CACHE_FULL 31

#define SSL_CTRL_SESS_CB_HIT 28

#define SSL_CTRL_SESS_CONNECT 21

#define SSL_CTRL_SESS_CONNECT_GOOD 22

#define SSL_CTRL_SESS_CONNECT_RENEGOTIATE 23

#define SSL_CTRL_SESS_HIT 27

#define SSL_CTRL_SESS_MISSES 29

#define SSL_CTRL_SESS_NUMBER 20

#define SSL_CTRL_SESS_TIMEOUTS 30

#define SSL_CTRL_SET_MAX_CERT_LIST 51

#define SSL_CTRL_SET_MAX_SEND_FRAGMENT 52

#define SSL_CTRL_SET_MSG_CALLBACK 15

#define SSL_CTRL_SET_MSG_CALLBACK_ARG 16

#define SSL_CTRL_SET_MTU 17

#define SSL_CTRL_SET_READ_AHEAD 41

#define SSL_CTRL_SET_SESS_CACHE_MODE 44

#define SSL_CTRL_SET_SESS_CACHE_SIZE 42

#define SSL_CTRL_SET_SRP_ARG 78

#define SSL_CTRL_SET_SRP_GIVE_CLIENT_PWD_CB 77

#define SSL_CTRL_SET_SRP_VERIFY_PARAM_CB 76

#define SSL_CTRL_SET_TLS_EXT_HEARTBEAT_NO_REQUESTS 87

#define SSL_CTRL_SET_TLS_EXT_SRP_PASSWORD 81

#define SSL_CTRL_SET_TLS_EXT_SRP_STRENGTH 80

#define SSL_CTRL_SET_TLS_EXT_SRP_USERNAME 79

#define SSL_CTRL_SET_TLS_EXT_SRP_USERNAME_CB 75

#define SSL_CTRL_SET_TLSEXT_DEBUG_ARG 57

#define SSL_CTRL_SET_TLSEXT_DEBUG_CB 56

#define SSL_CTRL_SET_TLSEXT_HOSTNAME 55

#define SSL_CTRL_SET_TLSEXT_OPAQUE_PRF_INPUT 60

#define SSL_CTRL_SET_TLSEXT_OPAQUE_PRF_INPUT_CB 61

#define SSL_CTRL_SET_TLSEXT_OPAQUE_PRF_INPUT_CB_ARG 62

#define SSL_CTRL_SET_TLSEXT_SERVERNAME_ARG 54

#define SSL_CTRL_SET_TLSEXT_SERVERNAME_CB 53

#define SSL_CTRL_SET_TLSEXT_STATUS_REQ_CB 63

#define SSL_CTRL_SET_TLSEXT_STATUS_REQ_CB_ARG 64

#define SSL_CTRL_SET_TLSEXT_STATUS_REQ_EXTS 67

#define SSL_CTRL_SET_TLSEXT_STATUS_REQ_IDS 69

#define SSL_CTRL_SET_TLSEXT_STATUS_REQ_OCSP_RESP 71

#define SSL_CTRL_SET_TLSEXT_STATUS_REQ_TYPE 65

#define SSL_CTRL_SET_TLSEXT_TICKET_KEY_CB 72

#define SSL_CTRL_SET_TLSEXT_TICKET_KEYS 59

#define SSL_CTRL_SET_TMP_DH 3

#define SSL_CTRL_SET_TMP_DH_CB 6

#define SSL_CTRL_SET_TMP_ECDH 4

#define SSL_CTRL_SET_TMP_ECDH_CB 7

#define SSL_CTRL_SET_TMP_RSA 2

#define SSL_CTRL_SET_TMP_RSA_CB 5

#define SSL_CTRL_TLS_EXT_SEND_HEARTBEAT 85

#define SSL_ERROR_NONE 0

#define SSL_ERROR_SSL 1

#define SSL_ERROR_SYSCALL 5

#define SSL_ERROR_WANT_ACCEPT 8

#define SSL_ERROR_WANT_CONNECT 7

#define SSL_ERROR_WANT_READ 2

#define SSL_ERROR_WANT_WRITE 3

#define SSL_ERROR_WANT_X509_LOOKUP 4

#define SSL_ERROR_ZERO_RETURN 6

#define SSL_F_CLIENT_CERTIFICATE 100

#define SSL_F_CLIENT_FINISHED 167

#define SSL_F_CLIENT_HELLO 101

#define SSL_F_CLIENT_MASTER_KEY 102

#define SSL_F_D2I_SSL_SESSION 103

#define SSL_F_DO_DTLS1_WRITE 245

#define SSL_F_DO_SSL3_WRITE 104

#define SSL_F_DTLS1_ACCEPT 246

#define SSL_F_DTLS1_ADD_CERT_TO_BUF 295

#define SSL_F_DTLS1_BUFFER_RECORD 247

#define SSL_F_DTLS1_CHECK_TIMEOUT_NUM 316

#define SSL_F_DTLS1_CLIENT_HELLO 248

#define SSL_F_DTLS1_CONNECT 249

#define SSL_F_DTLS1_ENC 250

#define SSL_F_DTLS1_GET_HELLO_VERIFY 251

#define SSL_F_DTLS1_GET_MESSAGE 252

#define SSL_F_DTLS1_GET_MESSAGE_FRAGMENT 253

#define SSL_F_DTLS1_GET_RECORD 254

#define SSL_F_DTLS1_HANDLE_TIMEOUT 297

#define SSL_F_DTLS1_HEARTBEAT 305

#define SSL_F_DTLS1_OUTPUT_CERT_CHAIN 255

#define SSL_F_DTLS1_PREPROCESS_FRAGMENT 288

#define SSL_F_DTLS1_PROCESS_BUFFERED_RECORDS 424

#define SSL_F_DTLS1_PROCESS_OUT_OF_SEQ_MESSAGE 256

#define SSL_F_DTLS1_PROCESS_RECORD 257

#define SSL_F_DTLS1_READ_BYTES 258

#define SSL_F_DTLS1_READ_FAILED 259

#define SSL_F_DTLS1_SEND_CERTIFICATE_REQUEST 260

#define SSL_F_DTLS1_SEND_CLIENT_CERTIFICATE 261

#define SSL_F_DTLS1_SEND_CLIENT_KEY_EXCHANGE 262

#define SSL_F_DTLS1_SEND_CLIENT_VERIFY 263

#define SSL_F_DTLS1_SEND_HELLO_VERIFY_REQUEST 264

#define SSL_F_DTLS1_SEND_SERVER_CERTIFICATE 265

#define SSL_F_DTLS1_SEND_SERVER_HELLO 266

#define SSL_F_DTLS1_SEND_SERVER_KEY_EXCHANGE 267

#define SSL_F_DTLS1_WRITE_APP_DATA_BYTES 268

#define SSL_F_GET_CLIENT_FINISHED 105

#define SSL_F_GET_CLIENT_HELLO 106

#define SSL_F_GET_CLIENT_MASTER_KEY 107

#define SSL_F_GET_SERVER_FINISHED 108

#define SSL_F_GET_SERVER_HELLO 109

#define SSL_F_GET_SERVER_VERIFY 110

#define SSL_F_I2D_SSL_SESSION 111

#define SSL_F_READ_N 112

#define SSL_F_REQUEST_CERTIFICATE 113

#define SSL_F_SERVER_FINISH 239

#define SSL_F_SERVER_HELLO 114

#define SSL_F_SERVER_VERIFY 240

#define SSL_F_SSL23_ACCEPT 115

#define SSL_F_SSL23_CLIENT_HELLO 116

#define SSL_F_SSL23_CONNECT 117

#define SSL_F_SSL23_GET_CLIENT_HELLO 118

#define SSL_F_SSL23_GET_SERVER_HELLO 119

#define SSL_F_SSL23_PEEK 237

#define SSL_F_SSL23_READ 120

#define SSL_F_SSL23_WRITE 121

#define SSL_F_SSL2_ACCEPT 122

#define SSL_F_SSL2_CONNECT 123

#define SSL_F_SSL2_ENC_INIT 124

#define SSL_F_SSL2_GENERATE_KEY_MATERIAL 241

#define SSL_F_SSL2_PEEK 234

#define SSL_F_SSL2_READ 125

#define SSL_F_SSL2_READ_INTERNAL 236

#define SSL_F_SSL2_SET_CERTIFICATE 126

#define SSL_F_SSL2_WRITE 127

#define SSL_F_SSL3_ACCEPT 128

#define SSL_F_SSL3_ADD_CERT_TO_BUF 296

#define SSL_F_SSL3_CALLBACK_CTRL 233

#define SSL_F_SSL3_CHANGE_CIPHER_STATE 129

#define SSL_F_SSL3_CHECK_CERT_AND_ALGORITHM 130

#define SSL_F_SSL3_CHECK_CLIENT_HELLO 304

#define SSL_F_SSL3_CLIENT_HELLO 131

#define SSL_F_SSL3_CONNECT 132

#define SSL_F_SSL3_CTRL 213

#define SSL_F_SSL3_CTX_CTRL 133

#define SSL_F_SSL3_DIGEST_CACHED_RECORDS 293

#define SSL_F_SSL3_DO_CHANGE_CIPHER_SPEC 292

#define SSL_F_SSL3_ENC 134

#define SSL_F_SSL3_GENERATE_KEY_BLOCK 238

#define SSL_F_SSL3_GET_CERT_STATUS 289

#define SSL_F_SSL3_GET_CERT_VERIFY 136

#define SSL_F_SSL3_GET_CERTIFICATE_REQUEST 135

#define SSL_F_SSL3_GET_CLIENT_CERTIFICATE 137

#define SSL_F_SSL3_GET_CLIENT_HELLO 138

#define SSL_F_SSL3_GET_CLIENT_KEY_EXCHANGE 139

#define SSL_F_SSL3_GET_FINISHED 140

#define SSL_F_SSL3_GET_KEY_EXCHANGE 141

#define SSL_F_SSL3_GET_MESSAGE 142

#define SSL_F_SSL3_GET_NEW_SESSION_TICKET 283

#define SSL_F_SSL3_GET_NEXT_PROTO 306

#define SSL_F_SSL3_GET_RECORD 143

#define SSL_F_SSL3_GET_SERVER_CERTIFICATE 144

#define SSL_F_SSL3_GET_SERVER_DONE 145

#define SSL_F_SSL3_GET_SERVER_HELLO 146

#define SSL_F_SSL3_HANDSHAKE_MAC 285

#define SSL_F_SSL3_NEW_SESSION_TICKET 287

#define SSL_F_SSL3_OUTPUT_CERT_CHAIN 147

#define SSL_F_SSL3_PEEK 235

#define SSL_F_SSL3_READ_BYTES 148

#define SSL_F_SSL3_READ_N 149

#define SSL_F_SSL3_SEND_CERTIFICATE_REQUEST 150

#define SSL_F_SSL3_SEND_CLIENT_CERTIFICATE 151

#define SSL_F_SSL3_SEND_CLIENT_KEY_EXCHANGE 152

#define SSL_F_SSL3_SEND_CLIENT_VERIFY 153

#define SSL_F_SSL3_SEND_SERVER_CERTIFICATE 154

#define SSL_F_SSL3_SEND_SERVER_HELLO 242

#define SSL_F_SSL3_SEND_SERVER_KEY_EXCHANGE 155

#define SSL_F_SSL3_SETUP_KEY_BLOCK 157

#define SSL_F_SSL3_SETUP_READ_BUFFER 156

#define SSL_F_SSL3_SETUP_WRITE_BUFFER 291

#define SSL_F_SSL3_WRITE_BYTES 158

#define SSL_F_SSL3_WRITE_PENDING 159

#define SSL_F_SSL_ADD_CLIENTHELLO_RENEGOTIATE_EXT 298

#define SSL_F_SSL_ADD_CLIENTHELLO_TLSEXT 277

#define SSL_F_SSL_ADD_CLIENTHELLO_USE_SRTP_EXT 307

#define SSL_F_SSL_ADD_DIR_CERT_SUBJECTS_TO_STACK 215

#define SSL_F_SSL_ADD_FILE_CERT_SUBJECTS_TO_STACK 216

#define SSL_F_SSL_ADD_SERVERHELLO_RENEGOTIATE_EXT 299

#define SSL_F_SSL_ADD_SERVERHELLO_TLSEXT 278

#define SSL_F_SSL_ADD_SERVERHELLO_USE_SRTP_EXT 308

#define SSL_F_SSL_BAD_METHOD 160

#define SSL_F_SSL_BYTES_TO_CIPHER_LIST 161

#define SSL_F_SSL_CERT_DUP 221

#define SSL_F_SSL_CERT_INST 222

#define SSL_F_SSL_CERT_INSTANTIATE 214

#define SSL_F_SSL_CERT_NEW 162

#define SSL_F_SSL_CHECK_PRIVATE_KEY 163

#define SSL_F_SSL_CHECK_SERVERHELLO_TLSEXT 280

#define SSL_F_SSL_CHECK_SRVR_ECC_CERT_AND_ALG 279

#define SSL_F_SSL_CIPHER_PROCESS_RULESTR 230

#define SSL_F_SSL_CIPHER_STRENGTH_SORT 231

#define SSL_F_SSL_CLEAR 164

#define SSL_F_SSL_COMP_ADD_COMPRESSION_METHOD 165

#define SSL_F_SSL_CREATE_CIPHER_LIST 166

#define SSL_F_SSL_CTRL 232

#define SSL_F_SSL_CTX_CHECK_PRIVATE_KEY 168

#define SSL_F_SSL_CTX_MAKE_PROFILES 309

#define SSL_F_SSL_CTX_NEW 169

#define SSL_F_SSL_CTX_SET_CIPHER_LIST 269

#define SSL_F_SSL_CTX_SET_CLIENT_CERT_ENGINE 290

#define SSL_F_SSL_CTX_SET_PURPOSE 226

#define SSL_F_SSL_CTX_SET_SESSION_ID_CONTEXT 219

#define SSL_F_SSL_CTX_SET_SSL_VERSION 170

#define SSL_F_SSL_CTX_SET_TRUST 229

#define SSL_F_SSL_CTX_USE_CERTIFICATE 171

#define SSL_F_SSL_CTX_USE_CERTIFICATE_ASN1 172

#define SSL_F_SSL_CTX_USE_CERTIFICATE_CHAIN_FILE 220

#define SSL_F_SSL_CTX_USE_CERTIFICATE_FILE 173

#define SSL_F_SSL_CTX_USE_PRIVATEKEY 174

#define SSL_F_SSL_CTX_USE_PRIVATEKEY_ASN1 175

#define SSL_F_SSL_CTX_USE_PRIVATEKEY_FILE 176

#define SSL_F_SSL_CTX_USE_PSK_IDENTITY_HINT 272

#define SSL_F_SSL_CTX_USE_RSAPRIVATEKEY 177

#define SSL_F_SSL_CTX_USE_RSAPRIVATEKEY_ASN1 178

#define SSL_F_SSL_CTX_USE_RSAPRIVATEKEY_FILE 179

#define SSL_F_SSL_DO_HANDSHAKE 180

#define SSL_F_SSL_GET_NEW_SESSION 181

#define SSL_F_SSL_GET_PREV_SESSION 217

#define SSL_F_SSL_GET_SERVER_SEND_CERT 182

#define SSL_F_SSL_GET_SERVER_SEND_PKEY 317

#define SSL_F_SSL_GET_SIGN_PKEY 183

#define SSL_F_SSL_INIT_WBIO_BUFFER 184

#define SSL_F_SSL_LOAD_CLIENT_CA_FILE 185

#define SSL_F_SSL_NEW 186

#define SSL_F_SSL_PARSE_CLIENTHELLO_RENEGOTIATE_EXT 300

#define SSL_F_SSL_PARSE_CLIENTHELLO_TLSEXT 302

#define SSL_F_SSL_PARSE_CLIENTHELLO_USE_SRTP_EXT 310

#define SSL_F_SSL_PARSE_SERVERHELLO_RENEGOTIATE_EXT 301

#define SSL_F_SSL_PARSE_SERVERHELLO_TLSEXT 303

#define SSL_F_SSL_PARSE_SERVERHELLO_USE_SRTP_EXT 311

#define SSL_F_SSL_PEEK 270

#define SSL_F_SSL_PREPARE_CLIENTHELLO_TLSEXT 281

#define SSL_F_SSL_PREPARE_SERVERHELLO_TLSEXT 282

#define SSL_F_SSL_READ 223

#define SSL_F_SSL_RSA_PRIVATE_DECRYPT 187

#define SSL_F_SSL_RSA_PUBLIC_ENCRYPT 188

#define SSL_F_SSL_SESS_CERT_NEW 225

#define SSL_F_SSL_SESSION_DUP 348

#define SSL_F_SSL_SESSION_NEW 189

#define SSL_F_SSL_SESSION_PRINT_FP 190

#define SSL_F_SSL_SESSION_SET1_ID_CONTEXT 312

#define SSL_F_SSL_SET_CERT 191

#define SSL_F_SSL_SET_CIPHER_LIST 271

#define SSL_F_SSL_SET_FD 192

#define SSL_F_SSL_SET_PKEY 193

#define SSL_F_SSL_SET_PURPOSE 227

#define SSL_F_SSL_SET_RFD 194

#define SSL_F_SSL_SET_SESSION 195

#define SSL_F_SSL_SET_SESSION_ID_CONTEXT 218

#define SSL_F_SSL_SET_SESSION_TICKET_EXT 294

#define SSL_F_SSL_SET_TRUST 228

#define SSL_F_SSL_SET_WFD 196

#define SSL_F_SSL_SHUTDOWN 224

#define SSL_F_SSL_SRP_CTX_INIT 313

#define SSL_F_SSL_UNDEFINED_CONST_FUNCTION 243

#define SSL_F_SSL_UNDEFINED_FUNCTION 197

#define SSL_F_SSL_UNDEFINED_VOID_FUNCTION 244

#define SSL_F_SSL_USE_CERTIFICATE 198

#define SSL_F_SSL_USE_CERTIFICATE_ASN1 199

#define SSL_F_SSL_USE_CERTIFICATE_FILE 200

#define SSL_F_SSL_USE_PRIVATEKEY 201

#define SSL_F_SSL_USE_PRIVATEKEY_ASN1 202

#define SSL_F_SSL_USE_PRIVATEKEY_FILE 203

#define SSL_F_SSL_USE_PSK_IDENTITY_HINT 273

#define SSL_F_SSL_USE_RSAPRIVATEKEY 204

#define SSL_F_SSL_USE_RSAPRIVATEKEY_ASN1 205

#define SSL_F_SSL_USE_RSAPRIVATEKEY_FILE 206

#define SSL_F_SSL_VERIFY_CERT_CHAIN 207

#define SSL_F_SSL_WRITE 208

#define SSL_F_TLS1_CERT_VERIFY_MAC 286

#define SSL_F_TLS1_CHANGE_CIPHER_STATE 209

#define SSL_F_TLS1_CHECK_SERVERHELLO_TLSEXT 274

#define SSL_F_TLS1_ENC 210

#define SSL_F_TLS1_EXPORT_KEYING_MATERIAL 314

#define SSL_F_TLS1_HEARTBEAT 315

#define SSL_F_TLS1_PREPARE_CLIENTHELLO_TLSEXT 275

#define SSL_F_TLS1_PREPARE_SERVERHELLO_TLSEXT 276

#define SSL_F_TLS1_PRF 284

#define SSL_F_TLS1_SETUP_KEY_BLOCK 211

#define SSL_F_WRITE_PENDING 212

#define SSL_R_APP_DATA_IN_HANDSHAKE 100

#define SSL_R_ATTEMPT_TO_REUSE_SESSION_IN_DIFFERENT_CONTEXT 272

#define SSL_R_BAD_ALERT_RECORD 101

#define SSL_R_BAD_AUTHENTICATION_TYPE 102

#define SSL_R_BAD_CHANGE_CIPHER_SPEC 103

#define SSL_R_BAD_CHECKSUM 104

#define SSL_R_BAD_DATA_RETURNED_BY_CALLBACK 106

#define SSL_R_BAD_DECOMPRESSION 107

#define SSL_R_BAD_DH_G_LENGTH 108

#define SSL_R_BAD_DH_P_LENGTH 110

#define SSL_R_BAD_DH_PUB_KEY_LENGTH 109

#define SSL_R_BAD_DIGEST_LENGTH 111

#define SSL_R_BAD_DSA_SIGNATURE 112

#define SSL_R_BAD_ECC_CERT 304

#define SSL_R_BAD_ECDSA_SIGNATURE 305

#define SSL_R_BAD_ECPOINT 306

#define SSL_R_BAD_HANDSHAKE_LENGTH 332

#define SSL_R_BAD_HELLO_REQUEST 105

#define SSL_R_BAD_LENGTH 271

#define SSL_R_BAD_MAC_DECODE 113

#define SSL_R_BAD_MAC_LENGTH 333

#define SSL_R_BAD_MESSAGE_TYPE 114

#define SSL_R_BAD_PACKET_LENGTH 115

#define SSL_R_BAD_PROTOCOL_VERSION_NUMBER 116

#define SSL_R_BAD_PSK_IDENTITY_HINT_LENGTH 316

#define SSL_R_BAD_RESPONSE_ARGUMENT 117

#define SSL_R_BAD_RSA_DECRYPT 118

#define SSL_R_BAD_RSA_E_LENGTH 120

#define SSL_R_BAD_RSA_ENCRYPT 119

#define SSL_R_BAD_RSA_MODULUS_LENGTH 121

#define SSL_R_BAD_RSA_SIGNATURE 122

#define SSL_R_BAD_SIGNATURE 123

#define SSL_R_BAD_SRP_A_LENGTH 347

#define SSL_R_BAD_SRP_B_LENGTH 348

#define SSL_R_BAD_SRP_G_LENGTH 349

#define SSL_R_BAD_SRP_N_LENGTH 350

#define SSL_R_BAD_SRP_S_LENGTH 351

#define SSL_R_BAD_SRTP_MKI_VALUE 352

#define SSL_R_BAD_SRTP_PROTECTION_PROFILE_LIST 353

#define SSL_R_BAD_SSL_FILETYPE 124

#define SSL_R_BAD_SSL_SESSION_ID_LENGTH 125

#define SSL_R_BAD_STATE 126

#define SSL_R_BAD_WRITE_RETRY 127

#define SSL_R_BIO_NOT_SET 128

#define SSL_R_BLOCK_CIPHER_PAD_IS_WRONG 129

#define SSL_R_BN_LIB 130

#define SSL_R_CA_DN_LENGTH_MISMATCH 131

#define SSL_R_CA_DN_TOO_LONG 132

#define SSL_R_CCS_RECEIVED_EARLY 133

#define SSL_R_CERT_LENGTH_MISMATCH 135

#define SSL_R_CERTIFICATE_VERIFY_FAILED 134

#define SSL_R_CHALLENGE_IS_DIFFERENT 136

#define SSL_R_CIPHER_CODE_WRONG_LENGTH 137

#define SSL_R_CIPHER_OR_HASH_UNAVAILABLE 138

#define SSL_R_CIPHER_TABLE_SRC_ERROR 139

#define SSL_R_CLIENTHELLO_TLSEXT 226

#define SSL_R_COMPRESSED_LENGTH_TOO_LONG 140

#define SSL_R_COMPRESSION_DISABLED 343

#define SSL_R_COMPRESSION_FAILURE 141

#define SSL_R_COMPRESSION_ID_NOT_WITHIN_PRIVATE_RANGE 307

#define SSL_R_COMPRESSION_LIBRARY_ERROR 142

#define SSL_R_CONNECTION_ID_IS_DIFFERENT 143

#define SSL_R_CONNECTION_TYPE_NOT_SET 144

#define SSL_R_COOKIE_MISMATCH 308

#define SSL_R_DATA_BETWEEN_CCS_AND_FINISHED 145

#define SSL_R_DATA_LENGTH_TOO_LONG 146

#define SSL_R_DECRYPTION_FAILED 147

#define SSL_R_DECRYPTION_FAILED_OR_BAD_RECORD_MAC 281

#define SSL_R_DH_KEY_TOO_SMALL 372

#define SSL_R_DH_PUBLIC_VALUE_LENGTH_IS_WRONG 148

#define SSL_R_DIGEST_CHECK_FAILED 149

#define SSL_R_DTLS_MESSAGE_TOO_BIG 334

#define SSL_R_DUPLICATE_COMPRESSION_ID 309

#define SSL_R_ECC_CERT_NOT_FOR_KEY_AGREEMENT 317

#define SSL_R_ECC_CERT_NOT_FOR_SIGNING 318

#define SSL_R_ECC_CERT_SHOULD_HAVE_RSA_SIGNATURE 322

#define SSL_R_ECC_CERT_SHOULD_HAVE_SHA1_SIGNATURE 323

#define SSL_R_ECGROUP_TOO_LARGE_FOR_CIPHER 310

#define SSL_R_EMPTY_SRTP_PROTECTION_PROFILE_LIST 354

#define SSL_R_ENCRYPTED_LENGTH_TOO_LONG 150

#define SSL_R_ERROR_GENERATING_TMP_RSA_KEY 282

#define SSL_R_ERROR_IN_RECEIVED_CIPHER_LIST 151

#define SSL_R_EXCESSIVE_MESSAGE_SIZE 152

#define SSL_R_EXTRA_DATA_IN_MESSAGE 153

#define SSL_R_GOT_A_FIN_BEFORE_A_CCS 154

#define SSL_R_GOT_NEXT_PROTO_BEFORE_A_CCS 355

#define SSL_R_GOT_NEXT_PROTO_WITHOUT_EXTENSION 356

#define SSL_R_HTTP_REQUEST 156

#define SSL_R_HTTPS_PROXY_REQUEST 155

#define SSL_R_ILLEGAL_PADDING 283

#define SSL_R_INAPPROPRIATE_FALLBACK 373

#define SSL_R_INCONSISTENT_COMPRESSION 340

#define SSL_R_INVALID_CHALLENGE_LENGTH 158

#define SSL_R_INVALID_COMMAND 280

#define SSL_R_INVALID_COMPRESSION_ALGORITHM 341

#define SSL_R_INVALID_PURPOSE 278

#define SSL_R_INVALID_SRP_USERNAME 357

#define SSL_R_INVALID_STATUS_RESPONSE 328

#define SSL_R_INVALID_TICKET_KEYS_LENGTH 325

#define SSL_R_INVALID_TRUST 279

#define SSL_R_KEY_ARG_TOO_LONG 284

#define SSL_R_KRB5 285

#define SSL_R_KRB5_C_CC_PRINC 286

#define SSL_R_KRB5_C_GET_CRED 287

#define SSL_R_KRB5_C_INIT 288

#define SSL_R_KRB5_C_MK_REQ 289

#define SSL_R_KRB5_S_BAD_TICKET 290

#define SSL_R_KRB5_S_INIT 291

#define SSL_R_KRB5_S_RD_REQ 292

#define SSL_R_KRB5_S_TKT_EXPIRED 293

#define SSL_R_KRB5_S_TKT_NYV 294

#define SSL_R_KRB5_S_TKT_SKEW 295

#define SSL_R_LENGTH_MISMATCH 159

#define SSL_R_LENGTH_TOO_SHORT 160

#define SSL_R_LIBRARY_BUG 274

#define SSL_R_LIBRARY_HAS_NO_CIPHERS 161

#define SSL_R_MESSAGE_TOO_LONG 296

#define SSL_R_MISSING_DH_DSA_CERT 162

#define SSL_R_MISSING_DH_KEY 163

#define SSL_R_MISSING_DH_RSA_CERT 164

#define SSL_R_MISSING_DSA_SIGNING_CERT 165

#define SSL_R_MISSING_EXPORT_TMP_DH_KEY 166

#define SSL_R_MISSING_EXPORT_TMP_RSA_KEY 167

#define SSL_R_MISSING_RSA_CERTIFICATE 168

#define SSL_R_MISSING_RSA_ENCRYPTING_CERT 169

#define SSL_R_MISSING_RSA_SIGNING_CERT 170

#define SSL_R_MISSING_SRP_PARAM 358

#define SSL_R_MISSING_TMP_DH_KEY 171

#define SSL_R_MISSING_TMP_ECDH_KEY 311

#define SSL_R_MISSING_TMP_RSA_KEY 172

#define SSL_R_MISSING_TMP_RSA_PKEY 173

#define SSL_R_MISSING_VERIFY_MESSAGE 174

#define SSL_R_MULTIPLE_SGC_RESTARTS 346

#define SSL_R_NO_CERTIFICATE_ASSIGNED 177

#define SSL_R_NO_CERTIFICATE_RETURNED 178

#define SSL_R_NO_CERTIFICATE_SET 179

#define SSL_R_NO_CERTIFICATE_SPECIFIED 180

#define SSL_R_NO_CERTIFICATES_RETURNED 176

#define SSL_R_NO_CIPHER_LIST 184

#define SSL_R_NO_CIPHER_MATCH 185

#define SSL_R_NO_CIPHERS_AVAILABLE 181

#define SSL_R_NO_CIPHERS_PASSED 182

#define SSL_R_NO_CIPHERS_SPECIFIED 183

#define SSL_R_NO_CLIENT_CERT_METHOD 331

#define SSL_R_NO_CLIENT_CERT_RECEIVED 186

#define SSL_R_NO_COMPRESSION_SPECIFIED 187

#define SSL_R_NO_GOST_CERTIFICATE_SENT_BY_PEER 330

#define SSL_R_NO_METHOD_SPECIFIED 188

#define SSL_R_NO_PRIVATE_KEY_ASSIGNED 190

#define SSL_R_NO_PRIVATEKEY 189

#define SSL_R_NO_PROTOCOLS_AVAILABLE 191

#define SSL_R_NO_PUBLICKEY 192

#define SSL_R_NO_RENEGOTIATION 339

#define SSL_R_NO_REQUIRED_DIGEST 324

#define SSL_R_NO_SHARED_CIPHER 193

#define SSL_R_NO_SRTP_PROFILES 359

#define SSL_R_NO_VERIFY_CALLBACK 194

#define SSL_R_NON_SSLV2_INITIAL_PACKET 175

#define SSL_R_NULL_SSL_CTX 195

#define SSL_R_NULL_SSL_METHOD_PASSED 196

#define SSL_R_OLD_SESSION_CIPHER_NOT_RETURNED 197

#define SSL_R_OLD_SESSION_COMPRESSION_ALGORITHM_NOT_RETURNED 344

#define SSL_R_ONLY_TLS_ALLOWED_IN_FIPS_MODE 297

#define SSL_R_OPAQUE_PRF_INPUT_TOO_LONG 327

#define SSL_R_PACKET_LENGTH_TOO_LONG 198

#define SSL_R_PARSE_TLSEXT 227

#define SSL_R_PATH_TOO_LONG 270

#define SSL_R_PEER_DID_NOT_RETURN_A_CERTIFICATE 199

#define SSL_R_PEER_ERROR 200

#define SSL_R_PEER_ERROR_CERTIFICATE 201

#define SSL_R_PEER_ERROR_NO_CERTIFICATE 202

#define SSL_R_PEER_ERROR_NO_CIPHER 203

#define SSL_R_PEER_ERROR_UNSUPPORTED_CERTIFICATE_TYPE 204

#define SSL_R_PRE_MAC_LENGTH_TOO_LONG 205

#define SSL_R_PROBLEMS_MAPPING_CIPHER_FUNCTIONS 206

#define SSL_R_PROTOCOL_IS_SHUTDOWN 207

#define SSL_R_PSK_IDENTITY_NOT_FOUND 223

#define SSL_R_PSK_NO_CLIENT_CB 224

#define SSL_R_PSK_NO_SERVER_CB 225

#define SSL_R_PUBLIC_KEY_ENCRYPT_ERROR 208

#define SSL_R_PUBLIC_KEY_IS_NOT_RSA 209

#define SSL_R_PUBLIC_KEY_NOT_RSA 210

#define SSL_R_READ_BIO_NOT_SET 211

#define SSL_R_READ_TIMEOUT_EXPIRED 312

#define SSL_R_READ_WRONG_PACKET_TYPE 212

#define SSL_R_RECORD_LENGTH_MISMATCH 213

#define SSL_R_RECORD_TOO_LARGE 214

#define SSL_R_RECORD_TOO_SMALL 298

#define SSL_R_RENEGOTIATE_EXT_TOO_LONG 335

#define SSL_R_RENEGOTIATION_ENCODING_ERR 336

#define SSL_R_RENEGOTIATION_MISMATCH 337

#define SSL_R_REQUIRED_CIPHER_MISSING 215

#define SSL_R_REQUIRED_COMPRESSSION_ALGORITHM_MISSING 342

#define SSL_R_REUSE_CERT_LENGTH_NOT_ZERO 216

#define SSL_R_REUSE_CERT_TYPE_NOT_ZERO 217

#define SSL_R_REUSE_CIPHER_LIST_NOT_ZERO 218

#define SSL_R_SCSV_RECEIVED_WHEN_RENEGOTIATING 345

#define SSL_R_SERVERHELLO_TLSEXT 275

#define SSL_R_SESSION_ID_CONTEXT_UNINITIALIZED 277

#define SSL_R_SHORT_READ 219

#define SSL_R_SIGNATURE_ALGORITHMS_ERROR 360

#define SSL_R_SIGNATURE_FOR_NON_SIGNING_CERTIFICATE 220

#define SSL_R_SRP_A_CALC 361

#define SSL_R_SRTP_COULD_NOT_ALLOCATE_PROFILES 362

#define SSL_R_SRTP_PROTECTION_PROFILE_LIST_TOO_LONG 363

#define SSL_R_SRTP_UNKNOWN_PROTECTION_PROFILE 364

#define SSL_R_SSL23_DOING_SESSION_ID_REUSE 221

#define SSL_R_SSL2_CONNECTION_ID_TOO_LONG 299

#define SSL_R_SSL3_EXT_INVALID_ECPOINTFORMAT 321

#define SSL_R_SSL3_EXT_INVALID_SERVERNAME 319

#define SSL_R_SSL3_EXT_INVALID_SERVERNAME_TYPE 320

#define SSL_R_SSL3_SESSION_ID_TOO_LONG 300

#define SSL_R_SSL3_SESSION_ID_TOO_SHORT 222

#define SSL_R_SSL_CTX_HAS_NO_DEFAULT_SSL_VERSION 228

#define SSL_R_SSL_HANDSHAKE_FAILURE 229

#define SSL_R_SSL_LIBRARY_HAS_NO_CIPHERS 230

#define SSL_R_SSL_SESSION_ID_CALLBACK_FAILED 301

#define SSL_R_SSL_SESSION_ID_CONFLICT 302

#define SSL_R_SSL_SESSION_ID_CONTEXT_TOO_LONG 273

#define SSL_R_SSL_SESSION_ID_HAS_BAD_LENGTH 303

#define SSL_R_SSL_SESSION_ID_IS_DIFFERENT 231

#define SSL_R_SSLV3_ALERT_BAD_CERTIFICATE 1042

#define SSL_R_SSLV3_ALERT_BAD_RECORD_MAC 1020

#define SSL_R_SSLV3_ALERT_CERTIFICATE_EXPIRED 1045

#define SSL_R_SSLV3_ALERT_CERTIFICATE_REVOKED 1044

#define SSL_R_SSLV3_ALERT_CERTIFICATE_UNKNOWN 1046

#define SSL_R_SSLV3_ALERT_DECOMPRESSION_FAILURE 1030

#define SSL_R_SSLV3_ALERT_HANDSHAKE_FAILURE 1040

#define SSL_R_SSLV3_ALERT_ILLEGAL_PARAMETER 1047

#define SSL_R_SSLV3_ALERT_NO_CERTIFICATE 1041

#define SSL_R_SSLV3_ALERT_UNEXPECTED_MESSAGE 1010

#define SSL_R_SSLV3_ALERT_UNSUPPORTED_CERTIFICATE 1043

#define SSL_R_TLS_CLIENT_CERT_REQ_WITH_ANON_CIPHER 232

#define SSL_R_TLS_HEARTBEAT_PEER_DOESNT_ACCEPT 365

#define SSL_R_TLS_HEARTBEAT_PENDING 366

#define SSL_R_TLS_ILLEGAL_EXPORTER_LABEL 367

#define SSL_R_TLS_INVALID_ECPOINTFORMAT_LIST 157

#define SSL_R_TLS_PEER_DID_NOT_RESPOND_WITH_CERTIFICATE_LIST 233

#define SSL_R_TLS_RSA_ENCRYPTED_VALUE_LENGTH_IS_WRONG 234

#define SSL_R_TLSV1_ALERT_ACCESS_DENIED 1049

#define SSL_R_TLSV1_ALERT_DECODE_ERROR 1050

#define SSL_R_TLSV1_ALERT_DECRYPT_ERROR 1051

#define SSL_R_TLSV1_ALERT_DECRYPTION_FAILED 1021

#define SSL_R_TLSV1_ALERT_EXPORT_RESTRICTION 1060

#define SSL_R_TLSV1_ALERT_INAPPROPRIATE_FALLBACK 1086

#define SSL_R_TLSV1_ALERT_INSUFFICIENT_SECURITY 1071

#define SSL_R_TLSV1_ALERT_INTERNAL_ERROR 1080

#define SSL_R_TLSV1_ALERT_NO_RENEGOTIATION 1100

#define SSL_R_TLSV1_ALERT_PROTOCOL_VERSION 1070

#define SSL_R_TLSV1_ALERT_RECORD_OVERFLOW 1022

#define SSL_R_TLSV1_ALERT_UNKNOWN_CA 1048

#define SSL_R_TLSV1_ALERT_USER_CANCELLED 1090

#define SSL_R_TLSV1_BAD_CERTIFICATE_HASH_VALUE 1114

#define SSL_R_TLSV1_BAD_CERTIFICATE_STATUS_RESPONSE 1113

#define SSL_R_TLSV1_CERTIFICATE_UNOBTAINABLE 1111

#define SSL_R_TLSV1_UNRECOGNIZED_NAME 1112

#define SSL_R_TLSV1_UNSUPPORTED_EXTENSION 1110

#define SSL_R_TOO_MANY_WARN_ALERTS 409

#define SSL_R_TRIED_TO_USE_UNSUPPORTED_CIPHER 235

#define SSL_R_UNABLE_TO_DECODE_DH_CERTS 236

#define SSL_R_UNABLE_TO_DECODE_ECDH_CERTS 313

#define SSL_R_UNABLE_TO_EXTRACT_PUBLIC_KEY 237

#define SSL_R_UNABLE_TO_FIND_DH_PARAMETERS 238

#define SSL_R_UNABLE_TO_FIND_ECDH_PARAMETERS 314

#define SSL_R_UNABLE_TO_FIND_PUBLIC_KEY_PARAMETERS 239

#define SSL_R_UNABLE_TO_FIND_SSL_METHOD 240

#define SSL_R_UNABLE_TO_LOAD_SSL2_MD5_ROUTINES 241

#define SSL_R_UNABLE_TO_LOAD_SSL3_MD5_ROUTINES 242

#define SSL_R_UNABLE_TO_LOAD_SSL3_SHA1_ROUTINES 243

#define SSL_R_UNEXPECTED_MESSAGE 244

#define SSL_R_UNEXPECTED_RECORD 245

#define SSL_R_UNINITIALIZED 276

#define SSL_R_UNKNOWN_ALERT_TYPE 246

#define SSL_R_UNKNOWN_CERTIFICATE_TYPE 247

#define SSL_R_UNKNOWN_CIPHER_RETURNED 248

#define SSL_R_UNKNOWN_CIPHER_TYPE 249

#define SSL_R_UNKNOWN_DIGEST 368

#define SSL_R_UNKNOWN_KEY_EXCHANGE_TYPE 250

#define SSL_R_UNKNOWN_PKEY_TYPE 251

#define SSL_R_UNKNOWN_PROTOCOL 252

#define SSL_R_UNKNOWN_REMOTE_ERROR_TYPE 253

#define SSL_R_UNKNOWN_SSL_VERSION 254

#define SSL_R_UNKNOWN_STATE 255

#define SSL_R_UNSAFE_LEGACY_RENEGOTIATION_DISABLED 338

#define SSL_R_UNSUPPORTED_CIPHER 256

#define SSL_R_UNSUPPORTED_COMPRESSION_ALGORITHM 257

#define SSL_R_UNSUPPORTED_DIGEST_TYPE 326

#define SSL_R_UNSUPPORTED_ELLIPTIC_CURVE 315

#define SSL_R_UNSUPPORTED_PROTOCOL 258

#define SSL_R_UNSUPPORTED_SSL_VERSION 259

#define SSL_R_UNSUPPORTED_STATUS_TYPE 329

#define SSL_R_USE_SRTP_NOT_NEGOTIATED 369

#define SSL_R_WRITE_BIO_NOT_SET 260

#define SSL_R_WRONG_CIPHER_RETURNED 261

#define SSL_R_WRONG_MESSAGE_TYPE 262

#define SSL_R_WRONG_NUMBER_OF_KEY_BITS 263

#define SSL_R_WRONG_SIGNATURE_LENGTH 264

#define SSL_R_WRONG_SIGNATURE_SIZE 265

#define SSL_R_WRONG_SIGNATURE_TYPE 370

#define SSL_R_WRONG_SSL_VERSION 266

#define SSL_R_WRONG_VERSION_NUMBER 267

#define SSL_R_X509_LIB 268

#define SSL_R_X509_VERIFICATION_SETUP_PROBLEMS 269

#define SSL_ST_ACCEPT 8192

#define SSL_ST_BEFORE 16384

#define SSL_ST_CONNECT 4096

#define SSL_ST_INIT 12288

#define SSL_ST_MASK 4095

#define SSL_ST_OK 3

#define SSL_ST_READ_BODY 241

#define SSL_ST_READ_DONE 242

#define SSL_ST_READ_HEADER 240

#define SSL_ST_RENEGOTIATE 12292

#define SSL_VERIFY_CLIENT_ONCE 4

#define SSL_VERIFY_FAIL_IF_NO_PEER_CERT 2

#define SSL_VERIFY_NONE 0

#define SSL_VERIFY_PEER 1

#define TLS1_1_VERSION 770

#define TLS1_1_VERSION_MAJOR 3

#define TLS1_1_VERSION_MINOR 2

#define TLS1_2_VERSION 771

#define TLS1_2_VERSION_MAJOR 3

#define TLS1_2_VERSION_MINOR 3

#define TLS1_AD_ACCESS_DENIED 49

#define TLS1_AD_BAD_CERTIFICATE_HASH_VALUE 114

#define TLS1_AD_BAD_CERTIFICATE_STATUS_RESPONSE 113

#define TLS1_AD_CERTIFICATE_UNOBTAINABLE 111

#define TLS1_AD_DECODE_ERROR 50

#define TLS1_AD_DECRYPT_ERROR 51

#define TLS1_AD_DECRYPTION_FAILED 21

#define TLS1_AD_EXPORT_RESTRICTION 60

#define TLS1_AD_INAPPROPRIATE_FALLBACK 86

#define TLS1_AD_INSUFFICIENT_SECURITY 71

#define TLS1_AD_INTERNAL_ERROR 80

#define TLS1_AD_NO_RENEGOTIATION 100

#define TLS1_AD_PROTOCOL_VERSION 70

#define TLS1_AD_RECORD_OVERFLOW 22

#define TLS1_AD_UNKNOWN_CA 48

#define TLS1_AD_UNKNOWN_PSK_IDENTITY 115

#define TLS1_AD_UNRECOGNIZED_NAME 112

#define TLS1_AD_UNSUPPORTED_EXTENSION 110

#define TLS1_AD_USER_CANCELLED 90

#define TLS1_ALLOW_EXPERIMENTAL_CIPHERSUITES 0

#define TLS1_VERSION 769

#define TLS1_VERSION_MAJOR 3

#define TLS1_VERSION_MINOR 1

#define TLS_MAX_VERSION 771

#define TLSEXT_TYPE_cert_type 9

#define TLSEXT_TYPE_client_authz 7

#define TLSEXT_TYPE_client_certificate_url 2

#define TLSEXT_TYPE_ec_point_formats 11

#define TLSEXT_TYPE_elliptic_curves 10

#define TLSEXT_TYPE_heartbeat 15

#define TLSEXT_TYPE_max_fragment_length 1

#define TLSEXT_TYPE_server_authz 8

#define TLSEXT_TYPE_server_name 0

#define TLSEXT_TYPE_session_ticket 35

#define TLSEXT_TYPE_signature_algorithms 13

#define TLSEXT_TYPE_srp 12

#define TLSEXT_TYPE_status_request 5

#define TLSEXT_TYPE_truncated_hmac 4

#define TLSEXT_TYPE_trusted_ca_keys 3

#define TLSEXT_TYPE_use_srtp 14

#define TLSEXT_TYPE_user_mapping 6

#define _SYS_TTYCHARS_H 1

typedef struct ttychars ttychars, *Pttychars;

struct ttychars {
    char tc_erase;
    char tc_kill;
    char tc_intrc;
    char tc_quitc;
    char tc_startc;
    char tc_stopc;
    char tc_eofc;
    char tc_brkc;
    char tc_suspc;
    char tc_dsuspc;
    char tc_rprntc;
    char tc_flushc;
    char tc_werasc;
    char tc_lnextc;
};

#define CERASE 127

#define CMIN 1

#define CQUIT 28

#define CTIME 0

#define TTYDEF_CFLAG 2040

#define TTYDEF_IFLAG 20474

#define TTYDEF_LFLAG 102399

#define TTYDEF_OFLAG 14005

#define TTYDEF_SPEED 15

#define DB_ERROR_INDEX_CLASH 2

#define DB_ERROR_INDEX_OUT_OF_RANGE 3

#define DB_ERROR_INSERT_INDEX_CLASH 5

#define DB_ERROR_MALLOC 1

#define DB_ERROR_NO_INDEX 4

#define DB_ERROR_OK 0

typedef OPENSSL_STRING * OPENSSL_PSTRING;

typedef struct stack_st_OPENSSL_PSTRING stack_st_OPENSSL_PSTRING, *Pstack_st_OPENSSL_PSTRING;

struct stack_st_OPENSSL_PSTRING {
    _STACK stack;
};

typedef struct txt_db_st txt_db_st, *Ptxt_db_st;

typedef struct txt_db_st TXT_DB;

struct txt_db_st {
    int num_fields;
    struct stack_st_OPENSSL_PSTRING * data;
    struct lhash_st_OPENSSL_STRING * * index;
    int (* qual)(OPENSSL_STRING *);
    long error;
    long arg1;
    long arg2;
    OPENSSL_STRING * arg_row;
};

#define __BIT_TYPES_DEFINED__ 1

#define __dontcare__ -1

#define _BITS_TYPES_H 1

#define _RPC_TYPES_H 1

#define _SYS_TYPES_H 1

typedef __u32 __be32;

typedef __u64 __be64;

typedef uint __id_t;

typedef short __int16_t;

typedef int __int32_t;

typedef longlong __int64_t;

typedef char __int8_t;

typedef int __intptr_t;

typedef __u16 __le16;

typedef __u32 __le32;

typedef __u64 __le64;

typedef __off64_t __loff_t;

typedef __quad_t * __qaddr_t;

typedef __u16 __sum16;

typedef long __swblk_t;

typedef ushort __uint16_t;

typedef ulonglong __uint64_t;

typedef uchar __uint8_t;

typedef uint __useconds_t;

typedef __u32 __wsum;

typedef __blkcnt64_t blkcnt64_t;

typedef __blkcnt_t blkcnt_t;

typedef __blksize_t blksize_t;

typedef __daddr_t daddr_t;

typedef __dev_t dev_t;

typedef __fsblkcnt64_t fsblkcnt64_t;

typedef __fsblkcnt_t fsblkcnt_t;

typedef __fsfilcnt64_t fsfilcnt64_t;

typedef __fsfilcnt_t fsfilcnt_t;

typedef struct __fsid_t fsid_t;

typedef __id_t id_t;

typedef __ino64_t ino64_t;

typedef __ino_t ino_t;

typedef short int16_t;

typedef longlong int64_t;

typedef char int8_t;

typedef __key_t key_t;

typedef __loff_t loff_t;

typedef __mode_t mode_t;

typedef __nlink_t nlink_t;

typedef __off64_t off64_t;

typedef __off_t off_t;

typedef __quad_t quad_t;

typedef int register_t;

typedef ulong rpcport_t;

typedef ulong rpcprot_t;

typedef __ssize_t ssize_t;

typedef __suseconds_t suseconds_t;

typedef __u_quad_t u_quad_t;


/* WARNING! conflicting data type names: /types.h/uint - /uint */


/* WARNING! conflicting data type names: /types.h/ulong - /ulong */

typedef ushort umode_t;

typedef __useconds_t useconds_t;


/* WARNING! conflicting data type names: /types.h/ushort - /ushort */

#define _BITS_TYPESIZES_H 1

#define _SYS_UCONTEXT_H 1

#define NGREG 19

typedef struct _libc_fpreg _libc_fpreg, *P_libc_fpreg;

struct _libc_fpreg {
    ushort significand[4];
    ushort exponent;
};

typedef struct _libc_fpstate _libc_fpstate, *P_libc_fpstate;

struct _libc_fpstate {
    ulong cw;
    ulong sw;
    ulong tag;
    ulong ipoff;
    ulong cssel;
    ulong dataoff;
    ulong datasel;
    struct _libc_fpreg _st[8];
    ulong status;
};

typedef enum enum_1069 {
    REG_CS=15,
    REG_DS=3,
    REG_EAX=11,
    REG_EBP=6,
    REG_EBX=8,
    REG_ECX=10,
    REG_EDI=4,
    REG_EDX=9,
    REG_EFL=16,
    REG_EIP=14,
    REG_ERR=13,
    REG_ES=2,
    REG_ESI=5,
    REG_ESP=7,
    REG_FS=1,
    REG_GS=0,
    REG_SS=18,
    REG_TRAPNO=12,
    REG_UESP=17
} enum_1069;

typedef struct _libc_fpstate * fpregset_t;

typedef int greg_t;

typedef greg_t gregset_t[19];

typedef struct mcontext_t mcontext_t, *Pmcontext_t;

struct mcontext_t {
    gregset_t gregs;
    fpregset_t fpregs;
    ulong oldmask;
    ulong cr2;
};

typedef struct ucontext ucontext, *Pucontext;

struct ucontext {
    ulong uc_flags;
    struct ucontext * uc_link;
    stack_t uc_stack;
    struct mcontext_t uc_mcontext;
    struct __sigset_t uc_sigmask;
    struct _libc_fpstate __fpregs_mem;
};

typedef struct ucontext ucontext_t;

#define __NETINET_UDP_H 1

#define SOL_UDP 17

#define UDP_CORK 1

#define UDP_ENCAP 100

#define UDP_ENCAP_ESPINUDP 2

#define UDP_ENCAP_ESPINUDP_NON_IKE 1

#define UDP_ENCAP_L2TPINUDP 3

typedef struct udphdr udphdr, *Pudphdr;

struct udphdr {
    u_int16_t source;
    u_int16_t dest;
    u_int16_t len;
    u_int16_t check;
};

#define UI_CTRL_IS_REDOABLE 2

#define UI_CTRL_PRINT_ERRORS 1

#define UI_F_GENERAL_ALLOCATE_BOOLEAN 108

#define UI_F_GENERAL_ALLOCATE_PROMPT 109

#define UI_F_GENERAL_ALLOCATE_STRING 100

#define UI_F_UI_CTRL 111

#define UI_F_UI_DUP_ERROR_STRING 101

#define UI_F_UI_DUP_INFO_STRING 102

#define UI_F_UI_DUP_INPUT_BOOLEAN 110

#define UI_F_UI_DUP_INPUT_STRING 103

#define UI_F_UI_DUP_VERIFY_STRING 106

#define UI_F_UI_GET0_RESULT 107

#define UI_F_UI_NEW_METHOD 104

#define UI_F_UI_SET_RESULT 105

#define UI_INPUT_FLAG_DEFAULT_PWD 2

#define UI_INPUT_FLAG_ECHO 1

#define UI_INPUT_FLAG_USER_BASE 16

#define UI_R_COMMON_OK_AND_CANCEL_CHARACTERS 104

#define UI_R_INDEX_TOO_LARGE 102

#define UI_R_INDEX_TOO_SMALL 103

#define UI_R_NO_RESULT_BUFFER 105

#define UI_R_RESULT_TOO_LARGE 100

#define UI_R_RESULT_TOO_SMALL 101

#define UI_R_UNKNOWN_CONTROL_COMMAND 106

typedef struct stack_st_UI_STRING stack_st_UI_STRING, *Pstack_st_UI_STRING;

struct stack_st_UI_STRING {
    _STACK stack;
};

typedef struct ui_string_st ui_string_st, *Pui_string_st;

typedef struct ui_string_st UI_STRING;

struct ui_string_st {
};

typedef enum UI_string_types {
    UIT_BOOLEAN=3,
    UIT_ERROR=5,
    UIT_INFO=4,
    UIT_NONE=0,
    UIT_PROMPT=1,
    UIT_VERIFY=2
} UI_string_types;

#define _BITS_UIO_H 1

#define _SYS_UIO_H 1

#define UIO_MAXIOV 1024

#define _ULIMIT_H 1

typedef enum enum_1569 {
    UL_GETFSIZE=1,
    UL_SETFSIZE=2,
    __UL_GETMAXBRK=3,
    __UL_GETOPENMAX=4
} enum_1569;

#define _GUS_NUMVOICES 0

#define _GUS_RAMPMODE 10

#define _GUS_RAMPOFF 12

#define _GUS_RAMPON 11

#define _GUS_RAMPRANGE 8

#define _GUS_RAMPRATE 9

#define _GUS_VOICE_POS 16

#define _GUS_VOICEBALA 5

#define _GUS_VOICEFADE 13

#define _GUS_VOICEFREQ 6

#define _GUS_VOICEMODE 4

#define _GUS_VOICEOFF 3

#define _GUS_VOICEON 2

#define _GUS_VOICESAMPLE 1

#define _GUS_VOICEVOL 7

#define _GUS_VOICEVOL2 15

#define _GUS_VOLUME_SCALE 14

#define _SYS_UN_H 1

typedef struct sockaddr_un sockaddr_un, *Psockaddr_un;

struct sockaddr_un {
    sa_family_t sun_family;
    char sun_path[108];
};

#define __POSIX2_THIS_VERSION 200809

#define _POSIX2_C_BIND 200809

#define _POSIX2_C_DEV 200809

#define _POSIX2_LOCALEDEF 200809

#define _POSIX2_SW_DEV 200809

#define _POSIX2_VERSION 200809

#define _POSIX_VERSION 200809

#define _UNISTD_H 1

#define _XOPEN_CRYPT 1

#define _XOPEN_ENH_I18N 1

#define _XOPEN_LEGACY 1

#define _XOPEN_UNIX 1

#define _XOPEN_VERSION 700

#define _XOPEN_XCU_VERSION 4

#define _XOPEN_XPG2 1

#define _XOPEN_XPG3 1

#define _XOPEN_XPG4 1

#define L_INCR 1

#define L_SET 0

#define L_XTND 2

#define STDERR_FILENO 2

#define STDIN_FILENO 0

#define STDOUT_FILENO 1

#define _SYS_USTAT_H 1

typedef struct ustat ustat, *Pustat;

struct ustat {
    __daddr_t f_tfree;
    __ino_t f_tinode;
    char f_fname[6];
    char f_fpack[6];
};

#define _UTIME_H 1

typedef struct utimbuf utimbuf, *Putimbuf;

struct utimbuf {
    __time_t actime;
    __time_t modtime;
};

#define __UT_HOSTSIZE 256

#define __UT_LINESIZE 32

#define __UT_NAMESIZE 32

#define _UTMPX_H 1

#define ACCOUNTING 9

#define BOOT_TIME 2

#define DEAD_PROCESS 8

#define EMPTY 0

#define INIT_PROCESS 5

#define LOGIN_PROCESS 6

#define NEW_TIME 3

#define OLD_TIME 4

#define RUN_LVL 1

#define USER_PROCESS 7

typedef struct __exit_status __exit_status, *P__exit_status;

struct __exit_status {
    short e_termination;
    short e_exit;
};

typedef struct utmp utmp, *Putmp;

struct utmp {
};

typedef struct utmpx utmpx, *Putmpx;

struct utmpx {
    short ut_type;
    __pid_t ut_pid;
    char ut_line[32];
    char ut_id[4];
    char ut_user[32];
    char ut_host[256];
    struct __exit_status ut_exit;
    long ut_session;
    struct timeval ut_tv;
    __int32_t ut_addr_v6[4];
    char __unused[20];
};

#define _SYS_UTSNAME_H 1

#define _UTSNAME_DOMAIN_LENGTH 65

#define _UTSNAME_LENGTH 65

#define _UTSNAME_MACHINE_LENGTH 65

#define _UTSNAME_NODENAME_LENGTH 65

#define _UTSNAME_RELEASE_LENGTH 65

#define _UTSNAME_SYSNAME_LENGTH 65

#define _UTSNAME_VERSION_LENGTH 65

#define SYS_NMLN 65

typedef struct utsname utsname, *Putsname;

struct utsname {
    char sysname[65];
    char nodename[65];
    char release[65];
    char version[65];
    char machine[65];
    char domainname[65];
};

#define _SYS_VLIMIT_H 1

typedef enum __vlimit_resource {
    LIM_CORE=5,
    LIM_CPU=1,
    LIM_DATA=3,
    LIM_FSIZE=2,
    LIM_MAXRSS=6,
    LIM_NORAISE=0,
    LIM_STACK=4
} __vlimit_resource;

#define MAX_NR_CONSOLES 63

#define MAX_NR_USER_CONSOLES 63

#define MIN_NR_CONSOLES 1

#define VT_ACKACQ 2

#define VT_ACTIVATE 22022

#define VT_AUTO 0

#define VT_DISALLOCATE 22024

#define VT_EVENT_BLANK 2

#define VT_EVENT_RESIZE 8

#define VT_EVENT_SWITCH 1

#define VT_EVENT_UNBLANK 4

#define VT_GETHIFONTMASK 22029

#define VT_GETMODE 22017

#define VT_GETSTATE 22019

#define VT_LOCKSWITCH 22027

#define VT_MAX_EVENT 15

#define VT_OPENQRY 22016

#define VT_PROCESS 1

#define VT_RELDISP 22021

#define VT_RESIZE 22025

#define VT_RESIZEX 22026

#define VT_SENDSIG 22020

#define VT_SETACTIVATE 22031

#define VT_SETMODE 22018

#define VT_UNLOCKSWITCH 22028

#define VT_WAITACTIVE 22023

#define VT_WAITEVENT 22030

typedef struct vt_consize vt_consize, *Pvt_consize;

struct vt_consize {
    ushort v_rows;
    ushort v_cols;
    ushort v_vlin;
    ushort v_clin;
    ushort v_vcol;
    ushort v_ccol;
};

typedef struct vt_event vt_event, *Pvt_event;

struct vt_event {
    uint event;
    uint oldev;
    uint newev;
    uint pad[4];
};

typedef struct vt_mode vt_mode, *Pvt_mode;

struct vt_mode {
    char mode;
    char waitv;
    short relsig;
    short acqsig;
    short frsig;
};

typedef struct vt_setactivate vt_setactivate, *Pvt_setactivate;

struct vt_setactivate {
    uint console;
    struct vt_mode mode;
};

typedef struct vt_sizes vt_sizes, *Pvt_sizes;

struct vt_sizes {
    ushort v_rows;
    ushort v_cols;
    ushort v_scrollsize;
};

typedef struct vt_stat vt_stat, *Pvt_stat;

struct vt_stat {
    ushort v_active;
    ushort v_signal;
    ushort v_state;
};

#define _SYS_VTIMES_H 1

#define VTIMES_UNITS_PER_SECOND 60

typedef struct vtimes vtimes, *Pvtimes;

struct vtimes {
    int vm_utime;
    int vm_stime;
    uint vm_idsrss;
    uint vm_ixrss;
    int vm_maxrss;
    int vm_majflt;
    int vm_minflt;
    int vm_nswap;
    int vm_inblk;
    int vm_oublk;
};

#define _SYS_WAIT_H 1

#define WAIT_ANY -1

#define WAIT_MYPGRP 0

#define WCOREFLAG 128

typedef enum enum_1556 {
    P_ALL=0,
    P_PGID=2,
    P_PID=1
} enum_1556;

typedef enum enum_1556 idtype_t;

#define __WALL 1073741824

#define __WCLONE 2147483648

#define __WNOTHREAD 536870912

#define WCONTINUED 8

#define WEXITED 4

#define WNOHANG 1

#define WNOWAIT 16777216

#define WSTOPPED 2

#define WUNTRACED 2

#define __W_CONTINUED 65535

#define __WCOREFLAG 128

typedef struct _struct_127 _struct_127, *P_struct_127;

typedef union anon__struct_127_bitfield_1 anon__struct_127_bitfield_1, *Panon__struct_127_bitfield_1;

union anon__struct_127_bitfield_1 {
    uint __w_termsig:7; /* : bits 0-6 */
    uint __w_coredump:1; /* : bits 7 */
    uint __w_retcode:8; /* : bits 8-15 */
};

struct _struct_127 {
    union anon__struct_127_bitfield_1 field_0x0;
};

typedef struct _struct_128 _struct_128, *P_struct_128;

typedef union anon__struct_128_bitfield_1 anon__struct_128_bitfield_1, *Panon__struct_128_bitfield_1;

union anon__struct_128_bitfield_1 {
    uint __w_stopval:8; /* : bits 0-7 */
    uint __w_stopsig:8; /* : bits 8-15 */
};

struct _struct_128 {
    union anon__struct_128_bitfield_1 field_0x0;
};

typedef union wait wait, *Pwait;

union wait {
    int w_status;
    struct _struct_127 __wait_terminated;
    struct _struct_128 __wait_stopped;
};

#define __mbstate_t_defined 1

#define __WCHAR_MAX 2147483647

#define __WCHAR_MIN -2147483648

#define _BITS_WCHAR_H 1

#define _WCHAR_H 1

typedef struct __mbstate_t mbstate_t;

#define __iswxxx_defined 1

#define _WCTYPE_H 1

typedef enum enum_1618 {
    _ISwalnum=23,
    _ISwalpha=14,
    _ISwblank=20,
    _ISwcntrl=21,
    _ISwdigit=15,
    _ISwgraph=19,
    _ISwlower=13,
    _ISwprint=18,
    _ISwpunct=22,
    _ISwspace=17,
    _ISwupper=12,
    _ISwxdigit=16,
    __ISwalnum=11,
    __ISwalpha=2,
    __ISwblank=8,
    __ISwcntrl=9,
    __ISwdigit=3,
    __ISwgraph=7,
    __ISwlower=1,
    __ISwprint=6,
    __ISwpunct=10,
    __ISwspace=5,
    __ISwupper=0,
    __ISwxdigit=4
} enum_1618;

typedef __int32_t * wctrans_t;

typedef ulong wctype_t;

#define WHIRLPOOL_BBLOCK 512

#define WHIRLPOOL_COUNTER 32

#define WHIRLPOOL_DIGEST_LENGTH 64

typedef union _union_1012 _union_1012, *P_union_1012;

union _union_1012 {
    uchar c[64];
    double q[64];
};

typedef struct WHIRLPOOL_CTX WHIRLPOOL_CTX, *PWHIRLPOOL_CTX;

struct WHIRLPOOL_CTX {
    union _union_1012 H;
    uchar data[64];
    uint bitoff;
    size_t bitlen[32];
};

#define _WORDEXP_H 1

typedef enum enum_1592 {
    WRDE_APPEND=2,
    WRDE_DOOFFS=1,
    WRDE_NOCMD=4,
    WRDE_REUSE=8,
    WRDE_SHOWERR=16,
    WRDE_UNDEF=32,
    __WRDE_FLAGS=33
} enum_1592;

typedef enum enum_1594 {
    WRDE_BADCHAR=2,
    WRDE_BADVAL=3,
    WRDE_CMDSUB=4,
    WRDE_NOSPACE=1,
    WRDE_NOSYS=0,
    WRDE_SYNTAX=5
} enum_1594;

typedef struct wordexp_t wordexp_t, *Pwordexp_t;

struct wordexp_t {
    size_t we_wordc;
    char * * we_wordv;
    size_t we_offs;
};

#define PKCS8_EMBEDDED_PARAM 2

#define PKCS8_NEG_PRIVKEY 4

#define PKCS8_NO_OCTET 1

#define PKCS8_NS_DB 3

#define PKCS8_OK 0

#define X509_EX_V_INIT 1

#define X509_EX_V_NETSCAPE_HACK 32768

#define X509_EXT_PACK_STRING 2

#define X509_EXT_PACK_UNKNOWN 1

#define X509_F_ADD_CERT_DIR 100

#define X509_F_BY_FILE_CTRL 101

#define X509_F_CHECK_POLICY 145

#define X509_F_DIR_CTRL 102

#define X509_F_GET_CERT_BY_SUBJECT 103

#define X509_F_NETSCAPE_SPKI_B64_DECODE 129

#define X509_F_NETSCAPE_SPKI_B64_ENCODE 130

#define X509_F_X509_ATTRIBUTE_CREATE_BY_NID 136

#define X509_F_X509_ATTRIBUTE_CREATE_BY_OBJ 137

#define X509_F_X509_ATTRIBUTE_CREATE_BY_TXT 140

#define X509_F_X509_ATTRIBUTE_GET0_DATA 139

#define X509_F_X509_ATTRIBUTE_SET1_DATA 138

#define X509_F_X509_CHECK_PRIVATE_KEY 128

#define X509_F_X509_CRL_PRINT_FP 147

#define X509_F_X509_EXTENSION_CREATE_BY_NID 108

#define X509_F_X509_EXTENSION_CREATE_BY_OBJ 109

#define X509_F_X509_GET_PUBKEY_PARAMETERS 110

#define X509_F_X509_LOAD_CERT_CRL_FILE 132

#define X509_F_X509_LOAD_CERT_FILE 111

#define X509_F_X509_LOAD_CRL_FILE 112

#define X509_F_X509_NAME_ADD_ENTRY 113

#define X509_F_X509_NAME_ENTRY_CREATE_BY_NID 114

#define X509_F_X509_NAME_ENTRY_CREATE_BY_TXT 131

#define X509_F_X509_NAME_ENTRY_SET_OBJECT 115

#define X509_F_X509_NAME_ONELINE 116

#define X509_F_X509_NAME_PRINT 117

#define X509_F_X509_PRINT_EX_FP 118

#define X509_F_X509_PUBKEY_GET 119

#define X509_F_X509_PUBKEY_SET 120

#define X509_F_X509_REQ_CHECK_PRIVATE_KEY 144

#define X509_F_X509_REQ_PRINT_EX 121

#define X509_F_X509_REQ_PRINT_FP 122

#define X509_F_X509_REQ_TO_X509 123

#define X509_F_X509_STORE_ADD_CERT 124

#define X509_F_X509_STORE_ADD_CRL 125

#define X509_F_X509_STORE_CTX_GET1_ISSUER 146

#define X509_F_X509_STORE_CTX_INIT 143

#define X509_F_X509_STORE_CTX_NEW 142

#define X509_F_X509_STORE_CTX_PURPOSE_INHERIT 134

#define X509_F_X509_TO_X509_REQ 126

#define X509_F_X509_TRUST_ADD 133

#define X509_F_X509_TRUST_SET 141

#define X509_F_X509_VERIFY_CERT 127

#define X509_F_X509AT_ADD1_ATTR 135

#define X509_F_X509V3_ADD_EXT 104

#define X509_FILETYPE_ASN1 2

#define X509_FILETYPE_DEFAULT 3

#define X509_FILETYPE_PEM 1

#define X509_FLAG_COMPAT 0

#define X509_FLAG_NO_ATTRIBUTES 2048

#define X509_FLAG_NO_AUX 1024

#define X509_FLAG_NO_EXTENSIONS 256

#define X509_FLAG_NO_HEADER 1

#define X509_FLAG_NO_ISSUER 16

#define X509_FLAG_NO_PUBKEY 128

#define X509_FLAG_NO_SERIAL 4

#define X509_FLAG_NO_SIGDUMP 512

#define X509_FLAG_NO_SIGNAME 8

#define X509_FLAG_NO_SUBJECT 64

#define X509_FLAG_NO_VALIDITY 32

#define X509_FLAG_NO_VERSION 2

#define X509_R_BAD_X509_FILETYPE 100

#define X509_R_BASE64_DECODE_ERROR 118

#define X509_R_CANT_CHECK_DH_KEY 114

#define X509_R_CERT_ALREADY_IN_HASH_TABLE 101

#define X509_R_ERR_ASN1_LIB 102

#define X509_R_INVALID_DIRECTORY 113

#define X509_R_INVALID_FIELD_NAME 119

#define X509_R_INVALID_TRUST 123

#define X509_R_KEY_TYPE_MISMATCH 115

#define X509_R_KEY_VALUES_MISMATCH 116

#define X509_R_LOADING_CERT_DIR 103

#define X509_R_LOADING_DEFAULTS 104

#define X509_R_METHOD_NOT_SUPPORTED 124

#define X509_R_NO_CERT_SET_FOR_US_TO_VERIFY 105

#define X509_R_PUBLIC_KEY_DECODE_ERROR 125

#define X509_R_PUBLIC_KEY_ENCODE_ERROR 126

#define X509_R_SHOULD_RETRY 106

#define X509_R_UNABLE_TO_FIND_PARAMETERS_IN_CHAIN 107

#define X509_R_UNABLE_TO_GET_CERTS_PUBLIC_KEY 108

#define X509_R_UNKNOWN_KEY_TYPE 117

#define X509_R_UNKNOWN_NID 109

#define X509_R_UNKNOWN_PURPOSE_ID 121

#define X509_R_UNKNOWN_TRUST_ID 120

#define X509_R_UNSUPPORTED_ALGORITHM 111

#define X509_R_WRONG_LOOKUP_TYPE 112

#define X509_R_WRONG_TYPE 122

#define X509_TRUST_COMPAT 1

#define X509_TRUST_DEFAULT -1

#define X509_TRUST_DYNAMIC 1

#define X509_TRUST_DYNAMIC_NAME 2

#define X509_TRUST_EMAIL 4

#define X509_TRUST_MAX 8

#define X509_TRUST_MIN 1

#define X509_TRUST_OBJECT_SIGN 5

#define X509_TRUST_OCSP_REQUEST 7

#define X509_TRUST_OCSP_SIGN 6

#define X509_TRUST_REJECTED 2

#define X509_TRUST_SSL_CLIENT 2

#define X509_TRUST_SSL_SERVER 3

#define X509_TRUST_TRUSTED 1

#define X509_TRUST_TSA 8

#define X509_TRUST_UNTRUSTED 3

#define X509v3_KU_CRL_SIGN 2

#define X509v3_KU_DATA_ENCIPHERMENT 16

#define X509v3_KU_DECIPHER_ONLY 32768

#define X509v3_KU_DIGITAL_SIGNATURE 128

#define X509v3_KU_ENCIPHER_ONLY 1

#define X509v3_KU_KEY_AGREEMENT 8

#define X509v3_KU_KEY_CERT_SIGN 4

#define X509v3_KU_KEY_ENCIPHERMENT 32

#define X509v3_KU_NON_REPUDIATION 64

#define X509v3_KU_UNDEF 65535

#define XN_FLAG_COMPAT 0

#define XN_FLAG_DN_REV 1048576

#define XN_FLAG_DUMP_UNKNOWN_FIELDS 16777216

#define XN_FLAG_FN_ALIGN 33554432

#define XN_FLAG_FN_LN 2097152

#define XN_FLAG_FN_MASK 6291456

#define XN_FLAG_FN_NONE 6291456

#define XN_FLAG_FN_OID 4194304

#define XN_FLAG_FN_SN 0

#define XN_FLAG_SEP_COMMA_PLUS 65536

#define XN_FLAG_SEP_CPLUS_SPC 131072

#define XN_FLAG_SEP_MASK 983040

#define XN_FLAG_SEP_MULTILINE 262144

#define XN_FLAG_SEP_SPLUS_SPC 196608

#define XN_FLAG_SPC_EQ 8388608

typedef union _union_330 _union_330, *P_union_330;

union _union_330 {
    char * ptr;
    struct stack_st_ASN1_TYPE * set;
    ASN1_TYPE * single;
};

typedef struct Netscape_certificate_sequence Netscape_certificate_sequence, *PNetscape_certificate_sequence;

typedef struct Netscape_certificate_sequence NETSCAPE_CERT_SEQUENCE;

struct Netscape_certificate_sequence {
    ASN1_OBJECT * type;
    struct stack_st_X509 * certs;
};

typedef struct Netscape_spkac_st Netscape_spkac_st, *PNetscape_spkac_st;

typedef struct Netscape_spkac_st NETSCAPE_SPKAC;

struct Netscape_spkac_st {
    X509_PUBKEY * pubkey;
    ASN1_IA5STRING * challenge;
};

typedef struct Netscape_spki_st Netscape_spki_st, *PNetscape_spki_st;

typedef struct Netscape_spki_st NETSCAPE_SPKI;

struct Netscape_spki_st {
    NETSCAPE_SPKAC * spkac;
    X509_ALGOR * sig_algor;
    ASN1_BIT_STRING * signature;
};

typedef struct PBE2PARAM_st PBE2PARAM_st, *PPBE2PARAM_st;

typedef struct PBE2PARAM_st PBE2PARAM;

struct PBE2PARAM_st {
    X509_ALGOR * keyfunc;
    X509_ALGOR * encryption;
};

typedef struct PBEPARAM_st PBEPARAM_st, *PPBEPARAM_st;

typedef struct PBEPARAM_st PBEPARAM;

struct PBEPARAM_st {
    ASN1_OCTET_STRING * salt;
    ASN1_INTEGER * iter;
};

typedef struct PBKDF2PARAM_st PBKDF2PARAM_st, *PPBKDF2PARAM_st;

typedef struct PBKDF2PARAM_st PBKDF2PARAM;

struct PBKDF2PARAM_st {
    ASN1_TYPE * salt;
    ASN1_INTEGER * iter;
    ASN1_INTEGER * keylength;
    X509_ALGOR * prf;
};

typedef struct private_key_st private_key_st, *Pprivate_key_st;

struct private_key_st {
    int version;
    X509_ALGOR * enc_algor;
    ASN1_OCTET_STRING * enc_pkey;
    EVP_PKEY * dec_pkey;
    int key_length;
    char * key_data;
    int key_free;
    EVP_CIPHER_INFO cipher;
    int references;
};

typedef struct stack_st_X509_INFO stack_st_X509_INFO, *Pstack_st_X509_INFO;

struct stack_st_X509_INFO {
    _STACK stack;
};

typedef struct stack_st_X509_TRUST stack_st_X509_TRUST, *Pstack_st_X509_TRUST;

struct stack_st_X509_TRUST {
    _STACK stack;
};

typedef struct stack_st_X509_ALGOR X509_ALGORS;

typedef struct x509_attributes_st x509_attributes_st, *Px509_attributes_st;

typedef struct x509_attributes_st X509_ATTRIBUTE;

struct x509_attributes_st {
    ASN1_OBJECT * object;
    int single;
    union _union_330 value;
};

typedef struct x509_cert_pair_st x509_cert_pair_st, *Px509_cert_pair_st;

typedef struct x509_cert_pair_st X509_CERT_PAIR;

struct x509_cert_pair_st {
    X509 * forward;
    X509 * reverse;
};

typedef struct X509_extension_st X509_extension_st, *PX509_extension_st;

typedef struct X509_extension_st X509_EXTENSION;

struct X509_extension_st {
    ASN1_OBJECT * object;
    ASN1_BOOLEAN critical;
    ASN1_OCTET_STRING * value;
};

typedef struct X509_info_st X509_info_st, *PX509_info_st;

typedef struct X509_info_st X509_INFO;

typedef struct private_key_st X509_PKEY;

struct X509_info_st {
    X509 * x509;
    X509_CRL * crl;
    X509_PKEY * x_pkey;
    EVP_CIPHER_INFO enc_cipher;
    int enc_len;
    char * enc_data;
    int references;
};

typedef struct X509_name_entry_st X509_name_entry_st, *PX509_name_entry_st;

typedef struct X509_name_entry_st X509_NAME_ENTRY;

struct X509_name_entry_st {
    ASN1_OBJECT * object;
    ASN1_STRING * value;
    int set;
    int size;
};

typedef struct X509_objects_st X509_objects_st, *PX509_objects_st;

typedef struct X509_objects_st X509_OBJECTS;

struct X509_objects_st {
    int nid;
    int (* a2i)(void);
    int (* i2a)(void);
};

typedef struct x509_trust_st x509_trust_st, *Px509_trust_st;

typedef struct x509_trust_st X509_TRUST;

struct x509_trust_st {
    int trust;
    int flags;
    int (* check_trust)(struct x509_trust_st *, X509 *, int);
    char * name;
    int arg1;
    void * arg2;
};

#define X509_L_ADD_DIR 2

#define X509_L_FILE_LOAD 1

#define X509_LU_CRL 2

#define X509_LU_FAIL 0

#define X509_LU_PKEY 3

#define X509_LU_RETRY -1

#define X509_LU_X509 1

#define X509_V_ERR_AKID_ISSUER_SERIAL_MISMATCH 31

#define X509_V_ERR_AKID_SKID_MISMATCH 30

#define X509_V_ERR_APPLICATION_VERIFICATION 50

#define X509_V_ERR_CERT_CHAIN_TOO_LONG 22

#define X509_V_ERR_CERT_HAS_EXPIRED 10

#define X509_V_ERR_CERT_NOT_YET_VALID 9

#define X509_V_ERR_CERT_REJECTED 28

#define X509_V_ERR_CERT_REVOKED 23

#define X509_V_ERR_CERT_SIGNATURE_FAILURE 7

#define X509_V_ERR_CERT_UNTRUSTED 27

#define X509_V_ERR_CRL_HAS_EXPIRED 12

#define X509_V_ERR_CRL_NOT_YET_VALID 11

#define X509_V_ERR_CRL_PATH_VALIDATION_ERROR 54

#define X509_V_ERR_CRL_SIGNATURE_FAILURE 8

#define X509_V_ERR_DEPTH_ZERO_SELF_SIGNED_CERT 18

#define X509_V_ERR_DIFFERENT_CRL_SCOPE 44

#define X509_V_ERR_ERROR_IN_CERT_NOT_AFTER_FIELD 14

#define X509_V_ERR_ERROR_IN_CERT_NOT_BEFORE_FIELD 13

#define X509_V_ERR_ERROR_IN_CRL_LAST_UPDATE_FIELD 15

#define X509_V_ERR_ERROR_IN_CRL_NEXT_UPDATE_FIELD 16

#define X509_V_ERR_EXCLUDED_VIOLATION 48

#define X509_V_ERR_INVALID_CA 24

#define X509_V_ERR_INVALID_EXTENSION 41

#define X509_V_ERR_INVALID_NON_CA 37

#define X509_V_ERR_INVALID_POLICY_EXTENSION 42

#define X509_V_ERR_INVALID_PURPOSE 26

#define X509_V_ERR_KEYUSAGE_NO_CERTSIGN 32

#define X509_V_ERR_KEYUSAGE_NO_CRL_SIGN 35

#define X509_V_ERR_KEYUSAGE_NO_DIGITAL_SIGNATURE 39

#define X509_V_ERR_NO_EXPLICIT_POLICY 43

#define X509_V_ERR_OUT_OF_MEM 17

#define X509_V_ERR_PATH_LENGTH_EXCEEDED 25

#define X509_V_ERR_PERMITTED_VIOLATION 47

#define X509_V_ERR_PROXY_CERTIFICATES_NOT_ALLOWED 40

#define X509_V_ERR_PROXY_PATH_LENGTH_EXCEEDED 38

#define X509_V_ERR_SELF_SIGNED_CERT_IN_CHAIN 19

#define X509_V_ERR_SUBJECT_ISSUER_MISMATCH 29

#define X509_V_ERR_SUBTREE_MINMAX 49

#define X509_V_ERR_UNABLE_TO_DECODE_ISSUER_PUBLIC_KEY 6

#define X509_V_ERR_UNABLE_TO_DECRYPT_CERT_SIGNATURE 4

#define X509_V_ERR_UNABLE_TO_DECRYPT_CRL_SIGNATURE 5

#define X509_V_ERR_UNABLE_TO_GET_CRL 3

#define X509_V_ERR_UNABLE_TO_GET_CRL_ISSUER 33

#define X509_V_ERR_UNABLE_TO_GET_ISSUER_CERT 2

#define X509_V_ERR_UNABLE_TO_GET_ISSUER_CERT_LOCALLY 20

#define X509_V_ERR_UNABLE_TO_VERIFY_LEAF_SIGNATURE 21

#define X509_V_ERR_UNHANDLED_CRITICAL_CRL_EXTENSION 36

#define X509_V_ERR_UNHANDLED_CRITICAL_EXTENSION 34

#define X509_V_ERR_UNNESTED_RESOURCE 46

#define X509_V_ERR_UNSUPPORTED_CONSTRAINT_SYNTAX 52

#define X509_V_ERR_UNSUPPORTED_CONSTRAINT_TYPE 51

#define X509_V_ERR_UNSUPPORTED_EXTENSION_FEATURE 45

#define X509_V_ERR_UNSUPPORTED_NAME_SYNTAX 53

#define X509_V_FLAG_ALLOW_PROXY_CERTS 64

#define X509_V_FLAG_CB_ISSUER_CHECK 1

#define X509_V_FLAG_CHECK_SS_SIGNATURE 16384

#define X509_V_FLAG_CRL_CHECK 4

#define X509_V_FLAG_CRL_CHECK_ALL 8

#define X509_V_FLAG_EXPLICIT_POLICY 256

#define X509_V_FLAG_EXTENDED_CRL_SUPPORT 4096

#define X509_V_FLAG_IGNORE_CRITICAL 16

#define X509_V_FLAG_INHIBIT_ANY 512

#define X509_V_FLAG_INHIBIT_MAP 1024

#define X509_V_FLAG_NOTIFY_POLICY 2048

#define X509_V_FLAG_POLICY_CHECK 128

#define X509_V_FLAG_TRUSTED_FIRST 32768

#define X509_V_FLAG_USE_CHECK_TIME 2

#define X509_V_FLAG_USE_DELTAS 8192

#define X509_V_FLAG_X509_STRICT 32

#define X509_V_OK 0

#define X509_VP_FLAG_DEFAULT 1

#define X509_VP_FLAG_LOCKED 8

#define X509_VP_FLAG_ONCE 16

#define X509_VP_FLAG_OVERWRITE 2

#define X509_VP_FLAG_RESET_FLAGS 4

typedef union _union_381 _union_381, *P_union_381;

union _union_381 {
    char * ptr;
    X509 * x509;
    X509_CRL * crl;
    EVP_PKEY * pkey;
};

typedef struct stack_st_POLICYQUALINFO stack_st_POLICYQUALINFO, *Pstack_st_POLICYQUALINFO;

struct stack_st_POLICYQUALINFO {
    _STACK stack;
};

typedef struct stack_st_X509_POLICY_NODE stack_st_X509_POLICY_NODE, *Pstack_st_X509_POLICY_NODE;

struct stack_st_X509_POLICY_NODE {
    _STACK stack;
};

typedef struct stack_st_X509_VERIFY_PARAM stack_st_X509_VERIFY_PARAM, *Pstack_st_X509_VERIFY_PARAM;

struct stack_st_X509_VERIFY_PARAM {
    _STACK stack;
};

typedef struct x509_file_st x509_file_st, *Px509_file_st;

typedef struct x509_file_st X509_CERT_FILE_CTX;

struct x509_file_st {
    int num_paths;
    int num_alloced;
    char * * paths;
    int * path_type;
};

typedef struct x509_lookup_st x509_lookup_st, *Px509_lookup_st;

typedef struct x509_lookup_st X509_LOOKUP;

typedef struct x509_lookup_method_st x509_lookup_method_st, *Px509_lookup_method_st;

typedef struct x509_object_st x509_object_st, *Px509_object_st;

typedef struct x509_object_st X509_OBJECT;

typedef struct x509_lookup_method_st X509_LOOKUP_METHOD;

struct x509_lookup_method_st {
    char * name;
    int (* new_item)(X509_LOOKUP *);
    void (* free)(X509_LOOKUP *);
    int (* init)(X509_LOOKUP *);
    int (* shutdown)(X509_LOOKUP *);
    int (* ctrl)(X509_LOOKUP *, int, char *, long, char * *);
    int (* get_by_subject)(X509_LOOKUP *, int, X509_NAME *, X509_OBJECT *);
    int (* get_by_issuer_serial)(X509_LOOKUP *, int, X509_NAME *, ASN1_INTEGER *, X509_OBJECT *);
    int (* get_by_fingerprint)(X509_LOOKUP *, int, uchar *, int, X509_OBJECT *);
    int (* get_by_alias)(X509_LOOKUP *, int, char *, int, X509_OBJECT *);
};

struct x509_object_st {
    int type;
    union _union_381 data;
};

struct x509_lookup_st {
    int init;
    int skip;
    X509_LOOKUP_METHOD * method;
    char * method_data;
    X509_STORE * store_ctx;
};

#define ASIdentifierChoice_asIdsOrRanges 1

#define ASIdentifierChoice_inherit 0

#define ASIdOrRange_id 0

#define ASIdOrRange_range 1

#define CRL_REASON_AA_COMPROMISE 10

#define CRL_REASON_AFFILIATION_CHANGED 3

#define CRL_REASON_CA_COMPROMISE 2

#define CRL_REASON_CERTIFICATE_HOLD 6

#define CRL_REASON_CESSATION_OF_OPERATION 5

#define CRL_REASON_KEY_COMPROMISE 1

#define CRL_REASON_NONE -1

#define CRL_REASON_PRIVILEGE_WITHDRAWN 9

#define CRL_REASON_REMOVE_FROM_CRL 8

#define CRL_REASON_SUPERSEDED 4

#define CRL_REASON_UNSPECIFIED 0

#define CRLDP_ALL_REASONS 32895

#define CTX_TEST 1

#define EXFLAG_BCONS 1

#define EXFLAG_CA 16

#define EXFLAG_CRITICAL 512

#define EXFLAG_FRESHEST 4096

#define EXFLAG_INVALID 128

#define EXFLAG_INVALID_POLICY 2048

#define EXFLAG_KUSAGE 2

#define EXFLAG_NSCERT 8

#define EXFLAG_PROXY 1024

#define EXFLAG_SET 256

#define EXFLAG_SI 32

#define EXFLAG_SS 32

#define EXFLAG_V1 64

#define EXFLAG_XKUSAGE 4

#define GEN_DIRNAME 4

#define GEN_DNS 2

#define GEN_EDIPARTY 5

#define GEN_EMAIL 1

#define GEN_IPADD 7

#define GEN_OTHERNAME 0

#define GEN_RID 8

#define GEN_URI 6

#define GEN_X400 3

#define IANA_AFI_IPV4 1

#define IANA_AFI_IPV6 2

#define IDP_INDIRECT 32

#define IDP_INVALID 2

#define IDP_ONLYATTR 16

#define IDP_ONLYCA 8

#define IDP_ONLYUSER 4

#define IDP_PRESENT 1

#define IDP_REASONS 64

#define IPAddressChoice_addressesOrRanges 1

#define IPAddressChoice_inherit 0

#define IPAddressOrRange_addressPrefix 0

#define IPAddressOrRange_addressRange 1

#define KU_CRL_SIGN 2

#define KU_DATA_ENCIPHERMENT 16

#define KU_DECIPHER_ONLY 32768

#define KU_DIGITAL_SIGNATURE 128

#define KU_ENCIPHER_ONLY 1

#define KU_KEY_AGREEMENT 8

#define KU_KEY_CERT_SIGN 4

#define KU_KEY_ENCIPHERMENT 32

#define KU_NON_REPUDIATION 64

#define NS_ANY_CA 7

#define NS_OBJSIGN 16

#define NS_OBJSIGN_CA 1

#define NS_SMIME 32

#define NS_SMIME_CA 2

#define NS_SSL_CA 4

#define NS_SSL_CLIENT 128

#define NS_SSL_SERVER 64

#define V3_ASID_ASNUM 0

#define V3_ASID_RDI 1

#define X509_PURPOSE_ANY 7

#define X509_PURPOSE_CRL_SIGN 6

#define X509_PURPOSE_DYNAMIC 1

#define X509_PURPOSE_DYNAMIC_NAME 2

#define X509_PURPOSE_MAX 9

#define X509_PURPOSE_MIN 1

#define X509_PURPOSE_NS_SSL_SERVER 3

#define X509_PURPOSE_OCSP_HELPER 8

#define X509_PURPOSE_SMIME_ENCRYPT 5

#define X509_PURPOSE_SMIME_SIGN 4

#define X509_PURPOSE_SSL_CLIENT 1

#define X509_PURPOSE_SSL_SERVER 2

#define X509_PURPOSE_TIMESTAMP_SIGN 9

#define X509V3_ADD_APPEND 1

#define X509V3_ADD_DEFAULT 0

#define X509V3_ADD_DELETE 5

#define X509V3_ADD_KEEP_EXISTING 4

#define X509V3_ADD_OP_MASK 15

#define X509V3_ADD_REPLACE 2

#define X509V3_ADD_REPLACE_EXISTING 3

#define X509V3_ADD_SILENT 16

#define X509V3_EXT_CTX_DEP 2

#define X509V3_EXT_DEFAULT 0

#define X509V3_EXT_DUMP_UNKNOWN 196608

#define X509V3_EXT_DYNAMIC 1

#define X509V3_EXT_ERROR_UNKNOWN 65536

#define X509V3_EXT_MULTILINE 4

#define X509V3_EXT_PARSE_UNKNOWN 131072

#define X509V3_EXT_UNKNOWN_MASK 983040

#define X509V3_F_A2I_GENERAL_NAME 164

#define X509V3_F_ASIDENTIFIERCHOICE_CANONIZE 161

#define X509V3_F_ASIDENTIFIERCHOICE_IS_CANONICAL 162

#define X509V3_F_COPY_EMAIL 122

#define X509V3_F_COPY_ISSUER 123

#define X509V3_F_DO_DIRNAME 144

#define X509V3_F_DO_EXT_CONF 124

#define X509V3_F_DO_EXT_I2D 135

#define X509V3_F_DO_EXT_NCONF 151

#define X509V3_F_DO_I2V_NAME_CONSTRAINTS 148

#define X509V3_F_GNAMES_FROM_SECTNAME 156

#define X509V3_F_HEX_TO_STRING 111

#define X509V3_F_I2S_ASN1_ENUMERATED 121

#define X509V3_F_I2S_ASN1_IA5STRING 149

#define X509V3_F_I2S_ASN1_INTEGER 120

#define X509V3_F_I2V_AUTHORITY_INFO_ACCESS 138

#define X509V3_F_NOTICE_SECTION 132

#define X509V3_F_NREF_NOS 133

#define X509V3_F_POLICY_SECTION 131

#define X509V3_F_PROCESS_PCI_VALUE 150

#define X509V3_F_R2I_CERTPOL 130

#define X509V3_F_R2I_PCI 155

#define X509V3_F_S2I_ASN1_IA5STRING 100

#define X509V3_F_S2I_ASN1_INTEGER 108

#define X509V3_F_S2I_ASN1_OCTET_STRING 112

#define X509V3_F_S2I_ASN1_SKEY_ID 114

#define X509V3_F_S2I_SKEY_ID 115

#define X509V3_F_SET_DIST_POINT_NAME 158

#define X509V3_F_STRING_TO_HEX 113

#define X509V3_F_SXNET_ADD_ID_ASC 125

#define X509V3_F_SXNET_ADD_ID_INTEGER 126

#define X509V3_F_SXNET_ADD_ID_ULONG 127

#define X509V3_F_SXNET_GET_ID_ASC 128

#define X509V3_F_SXNET_GET_ID_ULONG 129

#define X509V3_F_V2I_ASIDENTIFIERS 163

#define X509V3_F_V2I_ASN1_BIT_STRING 101

#define X509V3_F_V2I_AUTHORITY_INFO_ACCESS 139

#define X509V3_F_V2I_AUTHORITY_KEYID 119

#define X509V3_F_V2I_BASIC_CONSTRAINTS 102

#define X509V3_F_V2I_CRLD 134

#define X509V3_F_V2I_EXTENDED_KEY_USAGE 103

#define X509V3_F_V2I_GENERAL_NAME_EX 117

#define X509V3_F_V2I_GENERAL_NAMES 118

#define X509V3_F_V2I_IDP 157

#define X509V3_F_V2I_IPADDRBLOCKS 159

#define X509V3_F_V2I_ISSUER_ALT 153

#define X509V3_F_V2I_NAME_CONSTRAINTS 147

#define X509V3_F_V2I_POLICY_CONSTRAINTS 146

#define X509V3_F_V2I_POLICY_MAPPINGS 145

#define X509V3_F_V2I_SUBJECT_ALT 154

#define X509V3_F_V3_ADDR_VALIDATE_PATH_INTERNAL 160

#define X509V3_F_V3_GENERIC_EXTENSION 116

#define X509V3_F_X509_PURPOSE_ADD 137

#define X509V3_F_X509_PURPOSE_SET 141

#define X509V3_F_X509V3_ADD1_I2D 140

#define X509V3_F_X509V3_ADD_VALUE 105

#define X509V3_F_X509V3_EXT_ADD 104

#define X509V3_F_X509V3_EXT_ADD_ALIAS 106

#define X509V3_F_X509V3_EXT_CONF 107

#define X509V3_F_X509V3_EXT_I2D 136

#define X509V3_F_X509V3_EXT_NCONF 152

#define X509V3_F_X509V3_GET_SECTION 142

#define X509V3_F_X509V3_GET_STRING 143

#define X509V3_F_X509V3_GET_VALUE_BOOL 110

#define X509V3_F_X509V3_PARSE_LIST 109

#define X509V3_R_BAD_IP_ADDRESS 118

#define X509V3_R_BAD_OBJECT 119

#define X509V3_R_BN_DEC2BN_ERROR 100

#define X509V3_R_BN_TO_ASN1_INTEGER_ERROR 101

#define X509V3_R_DIRNAME_ERROR 149

#define X509V3_R_DISTPOINT_ALREADY_SET 160

#define X509V3_R_DUPLICATE_ZONE_ID 133

#define X509V3_R_ERROR_CONVERTING_ZONE 131

#define X509V3_R_ERROR_CREATING_EXTENSION 144

#define X509V3_R_ERROR_IN_EXTENSION 128

#define X509V3_R_EXPECTED_A_SECTION_NAME 137

#define X509V3_R_EXTENSION_EXISTS 145

#define X509V3_R_EXTENSION_NAME_ERROR 115

#define X509V3_R_EXTENSION_NOT_FOUND 102

#define X509V3_R_EXTENSION_SETTING_NOT_SUPPORTED 103

#define X509V3_R_EXTENSION_VALUE_ERROR 116

#define X509V3_R_ILLEGAL_EMPTY_EXTENSION 151

#define X509V3_R_ILLEGAL_HEX_DIGIT 113

#define X509V3_R_INCORRECT_POLICY_SYNTAX_TAG 152

#define X509V3_R_INVALID_ASNUMBER 162

#define X509V3_R_INVALID_ASRANGE 163

#define X509V3_R_INVALID_BOOLEAN_STRING 104

#define X509V3_R_INVALID_EXTENSION_STRING 105

#define X509V3_R_INVALID_INHERITANCE 165

#define X509V3_R_INVALID_IPADDRESS 166

#define X509V3_R_INVALID_MULTIPLE_RDNS 161

#define X509V3_R_INVALID_NAME 106

#define X509V3_R_INVALID_NULL_ARGUMENT 107

#define X509V3_R_INVALID_NULL_NAME 108

#define X509V3_R_INVALID_NULL_VALUE 109

#define X509V3_R_INVALID_NUMBER 140

#define X509V3_R_INVALID_NUMBERS 141

#define X509V3_R_INVALID_OBJECT_IDENTIFIER 110

#define X509V3_R_INVALID_OPTION 138

#define X509V3_R_INVALID_POLICY_IDENTIFIER 134

#define X509V3_R_INVALID_PROXY_POLICY_SETTING 153

#define X509V3_R_INVALID_PURPOSE 146

#define X509V3_R_INVALID_SAFI 164

#define X509V3_R_INVALID_SECTION 135

#define X509V3_R_INVALID_SYNTAX 143

#define X509V3_R_ISSUER_DECODE_ERROR 126

#define X509V3_R_MISSING_VALUE 124

#define X509V3_R_NEED_ORGANIZATION_AND_NUMBERS 142

#define X509V3_R_NO_CONFIG_DATABASE 136

#define X509V3_R_NO_ISSUER_CERTIFICATE 121

#define X509V3_R_NO_ISSUER_DETAILS 127

#define X509V3_R_NO_POLICY_IDENTIFIER 139

#define X509V3_R_NO_PROXY_CERT_POLICY_LANGUAGE_DEFINED 154

#define X509V3_R_NO_PUBLIC_KEY 114

#define X509V3_R_NO_SUBJECT_DETAILS 125

#define X509V3_R_ODD_NUMBER_OF_DIGITS 112

#define X509V3_R_OPERATION_NOT_DEFINED 148

#define X509V3_R_OTHERNAME_ERROR 147

#define X509V3_R_POLICY_LANGUAGE_ALREADY_DEFINED 155

#define X509V3_R_POLICY_PATH_LENGTH 156

#define X509V3_R_POLICY_PATH_LENGTH_ALREADY_DEFINED 157

#define X509V3_R_POLICY_SYNTAX_NOT_CURRENTLY_SUPPORTED 158

#define X509V3_R_POLICY_WHEN_PROXY_LANGUAGE_REQUIRES_NO_POLICY 159

#define X509V3_R_SECTION_NOT_FOUND 150

#define X509V3_R_UNABLE_TO_GET_ISSUER_DETAILS 122

#define X509V3_R_UNABLE_TO_GET_ISSUER_KEYID 123

#define X509V3_R_UNKNOWN_BIT_STRING_ARGUMENT 111

#define X509V3_R_UNKNOWN_EXTENSION 129

#define X509V3_R_UNKNOWN_EXTENSION_NAME 130

#define X509V3_R_UNKNOWN_OPTION 120

#define X509V3_R_UNSUPPORTED_OPTION 117

#define X509V3_R_UNSUPPORTED_TYPE 167

#define X509V3_R_USER_TOO_LONG 132

#define XKU_CODE_SIGN 8

#define XKU_DVCS 128

#define XKU_OCSP_SIGN 32

#define XKU_SGC 16

#define XKU_SMIME 4

#define XKU_SSL_CLIENT 2

#define XKU_SSL_SERVER 1

#define XKU_TIMESTAMP 64

typedef union _union_870 _union_870, *P_union_870;

typedef struct USERNOTICE_st USERNOTICE_st, *PUSERNOTICE_st;

typedef struct USERNOTICE_st USERNOTICE;

typedef struct NOTICEREF_st NOTICEREF_st, *PNOTICEREF_st;

typedef struct NOTICEREF_st NOTICEREF;

struct NOTICEREF_st {
    ASN1_STRING * organization;
    struct stack_st_ASN1_INTEGER * noticenos;
};

struct USERNOTICE_st {
    NOTICEREF * noticeref;
    ASN1_STRING * exptext;
};

union _union_870 {
    ASN1_IA5STRING * cpsuri;
    USERNOTICE * usernotice;
    ASN1_TYPE * other;
};

typedef union _union_926 _union_926, *P_union_926;

typedef struct ASRange_st ASRange_st, *PASRange_st;

typedef struct ASRange_st ASRange;

union _union_926 {
    ASN1_INTEGER * id;
    ASRange * range;
};

struct ASRange_st {
    ASN1_INTEGER * min;
    ASN1_INTEGER * * max;
};

typedef union _union_934 _union_934, *P_union_934;

typedef struct IPAddressRange_st IPAddressRange_st, *PIPAddressRange_st;

typedef struct IPAddressRange_st IPAddressRange;

struct IPAddressRange_st {
    ASN1_BIT_STRING * min;
    ASN1_BIT_STRING * * max;
};

union _union_934 {
    ASN1_BIT_STRING * addressPrefix;
    IPAddressRange * addressRange;
};

typedef union _union_938 _union_938, *P_union_938;

typedef struct stack_st_IPAddressOrRange stack_st_IPAddressOrRange, *Pstack_st_IPAddressOrRange;

typedef struct stack_st_IPAddressOrRange IPAddressOrRanges;

struct stack_st_IPAddressOrRange {
    _STACK stack;
};

union _union_938 {
    ASN1_NULL * inherit;
    IPAddressOrRanges * addressesOrRanges;
};

typedef struct ACCESS_DESCRIPTION_st ACCESS_DESCRIPTION_st, *PACCESS_DESCRIPTION_st;

typedef struct ACCESS_DESCRIPTION_st ACCESS_DESCRIPTION;

struct ACCESS_DESCRIPTION_st {
    ASN1_OBJECT * method;
    GENERAL_NAME * location;
};

typedef struct ASIdentifiers_st ASIdentifiers;

typedef struct ASIdOrRange_st ASIdOrRange_st, *PASIdOrRange_st;

typedef struct ASIdOrRange_st ASIdOrRange;

struct ASIdOrRange_st {
    int type;
    union _union_926 u;
};

typedef struct stack_st_ACCESS_DESCRIPTION AUTHORITY_INFO_ACCESS;

typedef struct BASIC_CONSTRAINTS_st BASIC_CONSTRAINTS_st, *PBASIC_CONSTRAINTS_st;

typedef struct BASIC_CONSTRAINTS_st BASIC_CONSTRAINTS;

struct BASIC_CONSTRAINTS_st {
    int ca;
    ASN1_INTEGER * pathlen;
};

typedef struct stack_st_POLICYINFO stack_st_POLICYINFO, *Pstack_st_POLICYINFO;

typedef struct stack_st_POLICYINFO CERTIFICATEPOLICIES;

struct stack_st_POLICYINFO {
    _STACK stack;
};

typedef struct stack_st_DIST_POINT CRL_DIST_POINTS;

typedef BIT_STRING_BITNAME ENUMERATED_NAMES;

typedef struct stack_st_ASN1_OBJECT EXTENDED_KEY_USAGE;

typedef struct GENERAL_SUBTREE_st GENERAL_SUBTREE_st, *PGENERAL_SUBTREE_st;

typedef struct GENERAL_SUBTREE_st GENERAL_SUBTREE;

struct GENERAL_SUBTREE_st {
    GENERAL_NAME * base;
    ASN1_INTEGER * minimum;
    ASN1_INTEGER * maximum;
};

typedef struct stack_st_IPAddressFamily IPAddrBlocks;

typedef struct IPAddressChoice_st IPAddressChoice_st, *PIPAddressChoice_st;

typedef struct IPAddressChoice_st IPAddressChoice;

struct IPAddressChoice_st {
    int type;
    union _union_938 u;
};

typedef struct IPAddressFamily_st IPAddressFamily_st, *PIPAddressFamily_st;

typedef struct IPAddressFamily_st IPAddressFamily;

struct IPAddressFamily_st {
    ASN1_OCTET_STRING * addressFamily;
    IPAddressChoice * ipAddressChoice;
};

typedef struct IPAddressOrRange_st IPAddressOrRange_st, *PIPAddressOrRange_st;

typedef struct IPAddressOrRange_st IPAddressOrRange;

struct IPAddressOrRange_st {
    int type;
    union _union_934 u;
};

typedef struct PKEY_USAGE_PERIOD_st PKEY_USAGE_PERIOD_st, *PPKEY_USAGE_PERIOD_st;

typedef struct PKEY_USAGE_PERIOD_st PKEY_USAGE_PERIOD;

struct PKEY_USAGE_PERIOD_st {
    ASN1_GENERALIZEDTIME * notBefore;
    ASN1_GENERALIZEDTIME * notAfter;
};

typedef struct POLICY_CONSTRAINTS_st POLICY_CONSTRAINTS_st, *PPOLICY_CONSTRAINTS_st;

typedef struct POLICY_CONSTRAINTS_st POLICY_CONSTRAINTS;

struct POLICY_CONSTRAINTS_st {
    ASN1_INTEGER * requireExplicitPolicy;
    ASN1_INTEGER * inhibitPolicyMapping;
};

typedef struct POLICY_MAPPING_st POLICY_MAPPING_st, *PPOLICY_MAPPING_st;

typedef struct POLICY_MAPPING_st POLICY_MAPPING;

struct POLICY_MAPPING_st {
    ASN1_OBJECT * issuerDomainPolicy;
    ASN1_OBJECT * subjectDomainPolicy;
};

typedef struct stack_st_POLICY_MAPPING stack_st_POLICY_MAPPING, *Pstack_st_POLICY_MAPPING;

typedef struct stack_st_POLICY_MAPPING POLICY_MAPPINGS;

struct stack_st_POLICY_MAPPING {
    _STACK stack;
};

typedef struct POLICYINFO_st POLICYINFO_st, *PPOLICYINFO_st;

typedef struct POLICYINFO_st POLICYINFO;

struct POLICYINFO_st {
    ASN1_OBJECT * policyid;
    struct stack_st_POLICYQUALINFO * qualifiers;
};

typedef struct POLICYQUALINFO_st POLICYQUALINFO_st, *PPOLICYQUALINFO_st;

typedef struct POLICYQUALINFO_st POLICYQUALINFO;

struct POLICYQUALINFO_st {
    ASN1_OBJECT * pqualid;
    union _union_870 d;
};

typedef struct PROXY_CERT_INFO_EXTENSION_st PROXY_CERT_INFO_EXTENSION_st, *PPROXY_CERT_INFO_EXTENSION_st;

typedef struct PROXY_CERT_INFO_EXTENSION_st PROXY_CERT_INFO_EXTENSION;

typedef struct PROXY_POLICY_st PROXY_POLICY_st, *PPROXY_POLICY_st;

typedef struct PROXY_POLICY_st PROXY_POLICY;

struct PROXY_POLICY_st {
    ASN1_OBJECT * policyLanguage;
    ASN1_OCTET_STRING * policy;
};

struct PROXY_CERT_INFO_EXTENSION_st {
    ASN1_INTEGER * pcPathLengthConstraint;
    PROXY_POLICY * proxyPolicy;
};

typedef struct stack_st_SXNETID stack_st_SXNETID, *Pstack_st_SXNETID;

struct stack_st_SXNETID {
    _STACK stack;
};

typedef struct stack_st_X509_PURPOSE stack_st_X509_PURPOSE, *Pstack_st_X509_PURPOSE;

struct stack_st_X509_PURPOSE {
    _STACK stack;
};

typedef struct stack_st_X509V3_EXT_METHOD stack_st_X509V3_EXT_METHOD, *Pstack_st_X509V3_EXT_METHOD;

struct stack_st_X509V3_EXT_METHOD {
    _STACK stack;
};

typedef struct SXNET_st SXNET_st, *PSXNET_st;

typedef struct SXNET_st SXNET;

struct SXNET_st {
    ASN1_INTEGER * version;
    struct stack_st_SXNETID * ids;
};

typedef struct SXNET_ID_st SXNET_ID_st, *PSXNET_ID_st;

struct SXNET_ID_st {
    ASN1_INTEGER * zone;
    ASN1_OCTET_STRING * user;
};

typedef struct SXNET_ID_st SXNETID;

typedef struct v3_ext_method v3_ext_method, *Pv3_ext_method;

typedef void * (* X509V3_EXT_NEW)(void);

typedef void (* X509V3_EXT_FREE)(void *);

typedef void * (* X509V3_EXT_D2I)(void *, uchar * *, long);

typedef int (* X509V3_EXT_I2D)(void *, uchar * *);

typedef char * (* X509V3_EXT_I2S)(struct v3_ext_method *, void *);

typedef void * (* X509V3_EXT_S2I)(struct v3_ext_method *, struct v3_ext_ctx *, char *);

typedef stack_st_CONF_VALUE * (* X509V3_EXT_I2V)(struct v3_ext_method *, void *, struct stack_st_CONF_VALUE *);

typedef void * (* X509V3_EXT_V2I)(struct v3_ext_method *, struct v3_ext_ctx *, struct stack_st_CONF_VALUE *);

typedef int (* X509V3_EXT_I2R)(struct v3_ext_method *, void *, BIO *, int);

typedef void * (* X509V3_EXT_R2I)(struct v3_ext_method *, struct v3_ext_ctx *, char *);

struct v3_ext_method {
    int ext_nid;
    int ext_flags;
    ASN1_ITEM_EXP * it;
    X509V3_EXT_NEW ext_new;
    X509V3_EXT_FREE ext_free;
    X509V3_EXT_D2I d2i;
    X509V3_EXT_I2D i2d;
    X509V3_EXT_I2S i2s;
    X509V3_EXT_S2I s2i;
    X509V3_EXT_I2V i2v;
    X509V3_EXT_V2I v2i;
    X509V3_EXT_I2R i2r;
    X509V3_EXT_R2I r2i;
    void * usr_data;
};

typedef struct x509_purpose_st x509_purpose_st, *Px509_purpose_st;

typedef struct x509_purpose_st X509_PURPOSE;

struct x509_purpose_st {
    int purpose;
    int trust;
    int flags;
    int (* check_purpose)(struct x509_purpose_st *, X509 *, int);
    char * name;
    char * sname;
    void * usr_data;
};

typedef struct v3_ext_method X509V3_EXT_METHOD;

#define _SYS_XATTR_H 1

typedef enum enum_1782 {
    XATTR_CREATE=1,
    XATTR_REPLACE=2
} enum_1782;

#define _RPC_XDR_H 1

#define BYTES_PER_XDR_UNIT 4

#define MAX_NETOBJ_SZ 1024

#define NULL_xdrproc_t 0

typedef struct xdr_discrim xdr_discrim, *Pxdr_discrim;

struct xdr_discrim {
    int value;
    xdrproc_t proc;
};

#define _XLOCALE_H 1

typedef struct __locale_data __locale_data, *P__locale_data;

struct __locale_data {
};

typedef struct __locale_struct __locale_struct, *P__locale_struct;

struct __locale_struct {
    struct __locale_data * __locales[13];
    ushort * __ctype_b;
    int * __ctype_tolower;
    int * __ctype_toupper;
    char * __names[13];
};

typedef struct __locale_struct * __locale_t;

typedef __locale_t locale_t;

#define _XOPEN_IOV_MAX 16

#define _XOPEN_LIM_H 1

#define LONG_BIT 32

#define NL_ARGMAX 4096

#define NL_LANGMAX 2048

#define NL_MSGMAX 2147483647

#define NL_NMAX 2147483647

#define NL_SETMAX 2147483647

#define NL_TEXTMAX 2147483647

#define NZERO 20

#define WORD_BIT 32

#define _BITS_XTITYPES_H 1

typedef long __t_scalar_t;

#define YPBIND_ERR_ERR 1

#define YPBIND_ERR_NOSERV 2

#define YPBIND_ERR_RESC 3

#define YPBINDPROC_DOMAIN 1

#define YPBINDPROC_NULL 0

#define YPBINDPROC_SETDOM 2

#define YPBINDPROG 100007

#define YPBINDVERS 2

#define YPBINDVERS_ORIG 1

#define YPMAXDOMAIN 64

#define YPMAXMAP 64

#define YPMAXPEER 64

#define YPMAXRECORD 1024

#define YPMSGSZ 1600

#define YPPROC_ALL 8

#define YPPROC_CLEAR 7

#define YPPROC_DOMAIN 1

#define YPPROC_DOMAIN_NONACK 2

#define YPPROC_FIRST 4

#define YPPROC_MAPLIST 11

#define YPPROC_MASTER 9

#define YPPROC_MATCH 3

#define YPPROC_NEWXFR 12

#define YPPROC_NEXT 5

#define YPPROC_NULL 0

#define YPPROC_ORDER 10

#define YPPROC_XFR 6

#define YPPROG 100004

#define YPPUSHPROC_NULL 0

#define YPPUSHPROC_XFRRESP 1

#define YPPUSHVERS 1

#define YPPUSHVERS_ORIG 1

#define YPVERS 2

#define YPVERS_ORIG 1

typedef union _union_2206 _union_2206, *P_union_2206;

typedef struct ypbind_binding ypbind_binding, *Pypbind_binding;

struct ypbind_binding {
    struct in_addr ypbind_binding_addr;
    ushort ypbind_binding_port;
};

union _union_2206 {
    u_int ypbind_error;
    struct ypbind_binding ypbind_bindinfo;
};

typedef union _union_2212 _union_2212, *P_union_2212;

typedef struct ypresp_key_val ypresp_key_val, *Pypresp_key_val;

typedef enum ypstat {
    YP_BADARGS=7,
    YP_BADDB=5,
    YP_BADOP=4,
    YP_FALSE=0,
    YP_NODOM=2,
    YP_NOKEY=3,
    YP_NOMAP=1,
    YP_NOMORE=2,
    YP_TRUE=1,
    YP_VERS=8,
    YP_YPERR=6
} ypstat;

typedef struct valdat_t valdat_t, *Pvaldat_t;

typedef struct keydat_t keydat_t, *Pkeydat_t;

struct valdat_t {
    u_int valdat_len;
    char * valdat_val;
};

struct keydat_t {
    u_int keydat_len;
    char * keydat_val;
};

struct ypresp_key_val {
    enum ypstat status;
    struct valdat_t valdat;
    struct keydat_t keydat;
};

union _union_2212 {
    struct ypresp_key_val val;
};

typedef struct ypbind_resp ypbind_resp, *Pypbind_resp;

typedef enum ypbind_resptype {
    YPBIND_FAIL_VAL=2,
    YPBIND_SUCC_VAL=1
} ypbind_resptype;

struct ypbind_resp {
    enum ypbind_resptype ypbind_status;
    union _union_2206 ypbind_respbody;
};

typedef struct ypbind_setdom ypbind_setdom, *Pypbind_setdom;

struct ypbind_setdom {
    char * ypsetdom_domain;
    struct ypbind_binding ypsetdom_binding;
    u_int ypsetdom_vers;
};

typedef struct ypmap_parms ypmap_parms, *Pypmap_parms;

struct ypmap_parms {
    char * domain;
    char * map;
    uint ordernum;
    char * owner;
};

typedef struct ypmaplist ypmaplist, *Pypmaplist;

struct ypmaplist {
    char * map;
    struct ypmaplist * next;
};

typedef enum yppush_status {
    YPPUSH_AGE=2,
    YPPUSH_BADARGS=9,
    YPPUSH_CLEAR=13,
    YPPUSH_DBM=10,
    YPPUSH_FILE=11,
    YPPUSH_FORCE=14,
    YPPUSH_MADDR=7,
    YPPUSH_NOALIAS=17,
    YPPUSH_NODOM=4,
    YPPUSH_NOMAP=3,
    YPPUSH_REFUSED=16,
    YPPUSH_RPC=6,
    YPPUSH_RSRC=5,
    YPPUSH_SKEW=12,
    YPPUSH_SUCC=1,
    YPPUSH_XFRERR=15,
    YPPUSH_YPERR=8
} yppush_status;

typedef struct yppushresp_xfr yppushresp_xfr, *Pyppushresp_xfr;

struct yppushresp_xfr {
    u_int transid;
    enum yppush_status status;
};

typedef struct ypreq_key ypreq_key, *Pypreq_key;

struct ypreq_key {
    char * domain;
    char * map;
    struct keydat_t keydat;
};

typedef struct ypreq_nokey ypreq_nokey, *Pypreq_nokey;

struct ypreq_nokey {
    char * domain;
    char * map;
};

typedef struct ypreq_xfr ypreq_xfr, *Pypreq_xfr;

struct ypreq_xfr {
    struct ypmap_parms map_parms;
    u_int transid;
    u_int proto;
    u_int port;
};

typedef struct ypresp_all ypresp_all, *Pypresp_all;

struct ypresp_all {
    bool_t more;
    union _union_2212 ypresp_all_u;
};

typedef struct ypresp_maplist ypresp_maplist, *Pypresp_maplist;

struct ypresp_maplist {
    enum ypstat status;
    struct ypmaplist * list;
};

typedef struct ypresp_master ypresp_master, *Pypresp_master;

struct ypresp_master {
    enum ypstat status;
    char * master;
};

typedef struct ypresp_order ypresp_order, *Pypresp_order;

struct ypresp_order {
    enum ypstat status;
    u_int ordernum;
};

typedef struct ypresp_val ypresp_val, *Pypresp_val;

struct ypresp_val {
    enum ypstat status;
    struct valdat_t valdat;
};

#define YPERR_ACCESS 15

#define YPERR_BADARGS 1

#define YPERR_BADDB 13

#define YPERR_BUSY 16

#define YPERR_DOMAIN 3

#define YPERR_KEY 5

#define YPERR_MAP 4

#define YPERR_NODOM 12

#define YPERR_NOMORE 8

#define YPERR_PMAP 9

#define YPERR_RESRC 7

#define YPERR_RPC 2

#define YPERR_SUCCESS 0

#define YPERR_VERS 14

#define YPERR_YPBIND 10

#define YPERR_YPERR 6

#define YPERR_YPSERV 11

#define YPOP_CHANGE 1

#define YPOP_DELETE 3

#define YPOP_INSERT 2

#define YPOP_STORE 4

typedef struct ypall_callback ypall_callback, *Pypall_callback;

struct ypall_callback {
    int (* foreach)(int, char *, int, char *, int, char *);
    char * data;
};

#define MAXERRMSGLEN 255

#define MAXMAPNAMELEN 255

#define MAXYPDATALEN 1023

#define YPU_CHANGE 1

#define YPU_DELETE 3

#define YPU_INSERT 2

#define YPU_PROG 100028

#define YPU_STORE 4

#define YPU_VERS 1

typedef struct yp_buf yp_buf, *Pyp_buf;

struct yp_buf {
    u_int yp_buf_len;
    char * yp_buf_val;
};

typedef struct ypdelete_args ypdelete_args, *Pypdelete_args;

struct ypdelete_args {
    char * mapname;
    struct yp_buf key;
};

typedef struct ypupdate_args ypupdate_args, *Pypupdate_args;

struct ypupdate_args {
    char * mapname;
    struct yp_buf key;
    struct yp_buf datum;
};

