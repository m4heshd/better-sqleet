// gram_TokenNumber.h
//

#ifndef LZZ_gram_TokenNumber_h
#define LZZ_gram_TokenNumber_h
#define LZZ_INLINE inline
namespace gram
{
  enum
  {
    EOT = 0,
    SEMI_TOKEN = 22,
    COMMA_TOKEN = 29,
    ASSIGN_TOKEN = 39,
    BLOCK_TOKEN = 40,
    DINIT_TOKEN = 41,
    LPAREN_TOKEN = 42,
    RPAREN_TOKEN = 43,
    DCOLON_TOKEN = 47,
    LT_TOKEN = 51,
    GT_TOKEN = 53,
    TEMPLATE_TOKEN = 54,
    IDENT_TOKEN = 56,
    MACRO_TOKEN = 58,
    COLON_TOKEN = 60,
    BITNOT_TOKEN = 63,
    OPERATOR_TOKEN = 64,
    LBRACK_TOKEN = 67,
    RBRACK_TOKEN = 68,
    NEW_TOKEN = 69,
    DELETE_TOKEN = 70,
    AND_TOKEN = 72,
    BITAND_TOKEN = 73,
    BITAND_ASSIGN_TOKEN = 74,
    BITOR_TOKEN = 75,
    BITOR_ASSIGN_TOKEN = 76,
    DEC_TOKEN = 77,
    DIVIDE_TOKEN = 78,
    DIVIDE_ASSIGN_TOKEN = 79,
    EQ_TOKEN = 80,
    GTEQ_TOKEN = 81,
    INC_TOKEN = 82,
    LSHIFT_TOKEN = 83,
    LSHIFT_ASSIGN_TOKEN = 84,
    LTEQ_TOKEN = 85,
    MINUS_TOKEN = 86,
    MINUS_ASSIGN_TOKEN = 87,
    MOD_TOKEN = 88,
    MOD_ASSIGN_TOKEN = 89,
    NOT_TOKEN = 90,
    NOTEQ_TOKEN = 91,
    OR_TOKEN = 92,
    PLUS_TOKEN = 93,
    PLUS_ASSIGN_TOKEN = 94,
    PTR_TOKEN = 95,
    PTR_TIMES_TOKEN = 96,
    RSHIFT_TOKEN = 97,
    RSHIFT_ASSIGN_TOKEN = 98,
    TIMES_TOKEN = 99,
    TIMES_ASSIGN_TOKEN = 100,
    XOR_TOKEN = 101,
    XOR_ASSIGN_TOKEN = 102,
    TYPEDEF_TOKEN = 104,
    FRIEND_TOKEN = 106,
    CONST_TOKEN = 109,
    VOLATILE_TOKEN = 110,
    INLINE_TOKEN = 115,
    VIRTUAL_TOKEN = 116,
    EXPLICIT_TOKEN = 117,
    STATIC_TOKEN = 118,
    EXTERN_TOKEN = 119,
    MUTABLE_TOKEN = 120,
    AUTO_TOKEN = 121,
    REGISTER_TOKEN = 122,
    DLL_API_TOKEN = 123,
    ENUM_TOKEN = 128,
    TYPENAME_TOKEN = 129,
    CLASS_TOKEN = 130,
    STRUCT_TOKEN = 131,
    UNION_TOKEN = 132,
    BOOL_TOKEN = 135,
    CHAR_TOKEN = 136,
    DOUBLE_TOKEN = 137,
    FLOAT_TOKEN = 138,
    INT_TOKEN = 139,
    LONG_TOKEN = 140,
    SHORT_TOKEN = 141,
    SIGNED_TOKEN = 142,
    UNSIGNED_TOKEN = 143,
    VOID_TOKEN = 144,
    WCHAR_TOKEN = 145,
    ZERO_TOKEN = 204,
    ELLIPSE_TOKEN = 222,
    THROW_TOKEN = 231,
    LBRACE_TOKEN = 236,
    RBRACE_TOKEN = 237,
    NAMESPACE_TOKEN = 238,
    PUBLIC_TOKEN = 249,
    PROTECTED_TOKEN = 250,
    PRIVATE_TOKEN = 251,
    TRY_TOKEN = 259,
    CATCH_TOKEN = 266,
    USING_TOKEN = 295,
    LITERAL_STRING_TOKEN = 299,
    NAVIGATOR_TOKEN = 304,
    RETURN_TOKEN = 313,
    VDF_TOKEN = 316,
    DOLLAR_TOKEN = 344,
    HASH_TOKEN = 345,
    DBLHASH_TOKEN = 346,
    DOT_TOKEN = 347,
    DOT_TIMES_TOKEN = 348,
    QMARK_TOKEN = 349,
    LITERAL_INT_TOKEN = 350,
    LITERAL_FLOAT_TOKEN = 351,
    LITERAL_CHAR_TOKEN = 352,
    PP_NUMBER_TOKEN = 353,
    UNKNOWN_TOKEN = 354,
    IDENT_PARAM_START_TOKEN = 356
  };
}
#undef LZZ_INLINE
#endif