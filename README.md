# `C` Workspace

## Sizes and Ranges of Data Types in `C`
| Type | Size | Range |
| --- | --- | --- |
| **Integral Types** |
| `short int`, or `signed short int` | 16 bits | `-32768` to `32767` |
| `unsigned short int` | 16 bits | `0` to `65535` |
| `int` or `signed int` | 32 bits | `-2147483648` to `2147483647` |
| `unsigned int` | 32 bits | `0` to `4294967295` |
| `long int`, or `signed long int` (OpenVMS) | 32 bits | `-2147483648` to `2147483647` |
| `long int`, or `signed long int` (Digital UNIX) | 64 bits | `-9223372036854775808` to `9223372036854775807` |
| `unsigned long int` (OpenVMS) | 32 bits | `0` to `4294967295` |
| `unsigned long int` (Digital UNIX) | 64 bits | `0` to `18446744073709551615` |
| `signed __int64` (Alpha) | 64 bits | `-9223372036854775808` to `9223372036854775807` |
| `unsigned __int64` (Alpha) | 64 bits | `0` to `18446744073709551615` |
| **Integral Character Types** |
| `char` and `signed char` | 8 bits | `-128` to `127` |
| `unsigned char` | 8 bits | `0` to `255` |
| `wchar_t` | 32 bits  | `0` to `4294967295` |
| **Floating-Point Types (range is for absolute value)** |
| `float` | 32 bits  | `1.1 x 10`<sup>`-38`</sup> to `3.4 x 10`<sup>`38`</sup> |
| `double` | 64 bits  | `2.2 x 10`<sup>`-308`</sup> to `1.7 x 10`<sup>`308`</sup> |
| `long double` (OpenVMS Alpha) | 128 bits | `3.4 x 10`<sup>`-49321`</sup> to `1.2 x 10`<sup>`49321`</sup> |
| `long double` (OpenVMS VAX, Digital UNIX) | Same as double | Same as `double` |
