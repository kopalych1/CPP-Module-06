/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   colors.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akostian <akostian@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/03 22:10:42 by akostian          #+#    #+#             */
/*   Updated: 2025/08/20 21:43:40 by akostian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef COLORS_HPP
#define COLORS_HPP

#include <iostream>

// clang-format off

namespace colors {
	static bool			enabled		= true;

	/* ================================================== */
	/* ===================== Black ====================== */
	/* ================================================== */

	static const char*      black_str               = "\033[0;30m";
	static const char*      black_ul_str            = "\033[4;30m";
	static const char*      black_bold_str          = "\033[1;30m";
	static const char*      black_bbold_ul_str      = "\033[1;4;30m";

	static const char*      black_bright_str        = "\033[0;90m";
	static const char*      black_bul_str           = "\033[4;90m";
	static const char*      black_bbold_str         = "\033[1;90m";
	static const char*      black_bbold_bul_str     = "\033[1;4;90m";

	static const char*      black_bg_str            = "\033[40m";
	static const char*      black_bbg_str           = "\033[0;100m";

	/**
	 * @brief Sets black color for output stream.
	 */
	inline std::ostream& black(std::ostream& os)              { if (colors::enabled) os << colors::black_str           ; return os; }

	/**
	 * @brief Sets black underline color for output stream.
	 * @return Reference to output stream.
	 */
	inline std::ostream& black_ul(std::ostream& os)           { if (colors::enabled) os << colors::black_ul_str        ; return os; }

	/**
	 * @brief Sets black bold color for output stream.
	 */
	inline std::ostream& black_bold(std::ostream& os)         { if (colors::enabled) os << colors::black_bold_str      ; return os; }

	/**
	 * @brief Sets black bold underline color for output stream.
	 */
	inline std::ostream& black_bbold_ul(std::ostream& os)     { if (colors::enabled) os << colors::black_bbold_ul_str  ; return os; }

	/**
	 * @brief Sets bright black color for output stream.
	 */
	inline std::ostream& black_bright(std::ostream& os)       { if (colors::enabled) os << colors::black_bright_str    ; return os; }

	/**
	 * @brief Sets bright black underline color for output stream.
	 */
	inline std::ostream& black_bul(std::ostream& os)          { if (colors::enabled) os << colors::black_bul_str       ; return os; }

	/**
	 * @brief Sets bright black bold color for output stream.
	 */
	inline std::ostream& black_bbold(std::ostream& os)        { if (colors::enabled) os << colors::black_bbold_str     ; return os; }

	/**
	 * @brief Sets bright black bold underline color for output stream.
	 */
	inline std::ostream& black_bbold_bul(std::ostream& os)    { if (colors::enabled) os << colors::black_bbold_bul_str ; return os; }

	/**
	 * @brief Sets black background color for output stream.
	 */
	inline std::ostream& black_bg(std::ostream& os)           { if (colors::enabled) os << colors::black_bg_str        ; return os; }

	/**
	 * @brief Sets bright black background color for output stream.
	 */
	inline std::ostream& black_bbg(std::ostream& os)          { if (colors::enabled) os << colors::black_bbg_str       ; return os; }

	/* ================================================== */
	/* ====================== Red ======================= */
	/* ================================================== */

	static const char*      red_str                 = "\033[0;31m";
	static const char*      red_ul_str              = "\033[4;31m";
	static const char*      red_bold_str            = "\033[1;31m";
	static const char*      red_bbold_ul_str        = "\033[1;4;31m";

	static const char*      red_bright_str          = "\033[0;91m";
	static const char*      red_bul_str             = "\033[4;91m";
	static const char*      red_bbold_str           = "\033[1;91m";
	static const char*      red_bbold_bul_str       = "\033[1;4;91m";

	static const char*      red_bg_str              = "\033[41m";
	static const char*      red_bbg_str             = "\033[0;101m";

	/**
	 * @brief Sets red color for output stream.
	 */
	inline std::ostream& red(std::ostream& os)                { if (colors::enabled) os << colors::red_str             ; return os; }

	/**
	 * @brief Sets red underline color for output stream.
	 */
	inline std::ostream& red_ul(std::ostream& os)             { if (colors::enabled) os << colors::red_ul_str          ; return os; }

	/**
	 * @brief Sets red bold color for output stream.
	 */
	inline std::ostream& red_bold(std::ostream& os)           { if (colors::enabled) os << colors::red_bold_str        ; return os; }

	/**
	 * @brief Sets red bold underline color for output stream.
	 */
	inline std::ostream& red_bbold_ul(std::ostream& os)       { if (colors::enabled) os << colors::red_bbold_ul_str    ; return os; }

	/**
	 * @brief Sets bright red color for output stream.
	 */
	inline std::ostream& red_bright(std::ostream& os)         { if (colors::enabled) os << colors::red_bright_str      ; return os; }

	/**
	 * @brief Sets bright red underline color for output stream.
	 */
	inline std::ostream& red_bul(std::ostream& os)            { if (colors::enabled) os << colors::red_bul_str         ; return os; }

	/**
	 * @brief Sets bright red bold color for output stream.
	 */
	inline std::ostream& red_bbold(std::ostream& os)          { if (colors::enabled) os << colors::red_bbold_str       ; return os; }

	/**
	 * @brief Sets bright red bold underline color for output stream.
	 */
	inline std::ostream& red_bbold_bul(std::ostream& os)      { if (colors::enabled) os << colors::red_bbold_bul_str   ; return os; }

	/**
	 * @brief Sets red background color for output stream.
	 */
	inline std::ostream& red_bg(std::ostream& os)             { if (colors::enabled) os << colors::red_bg_str          ; return os; }

	/**
	 * @brief Sets bright red background color for output stream.
	 */
	inline std::ostream& red_bbg(std::ostream& os)            { if (colors::enabled) os << colors::red_bbg_str         ; return os; }

	/* ================================================== */
	/* ===================== Green ====================== */
	/* ================================================== */

	static const char*      green_str               = "\033[0;32m";
	static const char*      green_ul_str            = "\033[4;32m";
	static const char*      green_bold_str          = "\033[1;32m";
	static const char*      green_bbold_ul_str      = "\033[1;4;32m";

	static const char*      green_bright_str        = "\033[0;92m";
	static const char*      green_bul_str           = "\033[4;92m";
	static const char*      green_bbold_str         = "\033[1;92m";
	static const char*      green_bbold_bul_str     = "\033[1;4;92m";

	static const char*      green_bg_str            = "\033[42m";
	static const char*      green_bbg_str           = "\033[0;102m";

	/**
	 * @brief Sets green color for output stream.
	 */
	inline std::ostream& green(std::ostream& os)              { if (colors::enabled) os << colors::green_str           ; return os; }

	/**
	 * @brief Sets green underline color for output stream.
	 */
	inline std::ostream& green_ul(std::ostream& os)           { if (colors::enabled) os << colors::green_ul_str        ; return os; }

	/**
	 * @brief Sets green bold color for output stream.
	 */
	inline std::ostream& green_bold(std::ostream& os)         { if (colors::enabled) os << colors::green_bold_str      ; return os; }

	/**
	 * @brief Sets green bold underline color for output stream.
	 */
	inline std::ostream& green_bbold_ul(std::ostream& os)     { if (colors::enabled) os << colors::green_bbold_ul_str  ; return os; }

	/**
	 * @brief Sets bright green color for output stream.
	 */
	inline std::ostream& green_bright(std::ostream& os)       { if (colors::enabled) os << colors::green_bright_str    ; return os; }

	/**
	 * @brief Sets bright green underline color for output stream.
	 */
	inline std::ostream& green_bul(std::ostream& os)          { if (colors::enabled) os << colors::green_bul_str       ; return os; }

	/**
	 * @brief Sets bright green bold color for output stream.
	 */
	inline std::ostream& green_bbold(std::ostream& os)        { if (colors::enabled) os << colors::green_bbold_str     ; return os; }

	/**
	 * @brief Sets bright green bold underline color for output stream.
	 */
	inline std::ostream& green_bbold_bul(std::ostream& os)    { if (colors::enabled) os << colors::green_bbold_bul_str ; return os; }

	/**
	 * @brief Sets green background color for output stream.
	 */
	inline std::ostream& green_bg(std::ostream& os)           { if (colors::enabled) os << colors::green_bg_str        ; return os; }

	/**
	 * @brief Sets bright green background color for output stream.
	 */
	inline std::ostream& green_bbg(std::ostream& os)          { if (colors::enabled) os << colors::green_bbg_str       ; return os; }

	/* ================================================== */
	/* ===================== Yellow ===================== */
	/* ================================================== */

	static const char*      yellow_str              = "\033[0;33m";
	static const char*      yellow_ul_str           = "\033[4;33m";
	static const char*      yellow_bold_str         = "\033[1;33m";
	static const char*      yellow_bbold_ul_str     = "\033[1;4;33m";

	static const char*      yellow_bright_str       = "\033[0;93m";
	static const char*      yellow_bul_str          = "\033[4;93m";
	static const char*      yellow_bbold_str        = "\033[1;93m";
	static const char*      yellow_bbold_bul_str    = "\033[1;4;93m";

	static const char*      yellow_bg_str           = "\033[43m";
	static const char*      yellow_bbg_str          = "\033[0;103m";

	/**
	 * @brief Sets yellow color for output stream.
	 */
	inline std::ostream& yellow(std::ostream& os)             { if (colors::enabled) os << colors::yellow_str          ; return os; }

	/**
	 * @brief Sets yellow underline color for output stream.
	 */
	inline std::ostream& yellow_ul(std::ostream& os)          { if (colors::enabled) os << colors::yellow_ul_str       ; return os; }

	/**
	 * @brief Sets yellow bold color for output stream.
	 */
	inline std::ostream& yellow_bold(std::ostream& os)        { if (colors::enabled) os << colors::yellow_bold_str     ; return os; }

	/**
	 * @brief Sets yellow bold underline color for output stream.
	 */
	inline std::ostream& yellow_bbold_ul(std::ostream& os)    { if (colors::enabled) os << colors::yellow_bbold_ul_str ; return os; }

	/**
	 * @brief Sets bright yellow color for output stream.
	 */
	inline std::ostream& yellow_bright(std::ostream& os)      { if (colors::enabled) os << colors::yellow_bright_str   ; return os; }

	/**
	 * @brief Sets bright yellow underline color for output stream.
	 */
	inline std::ostream& yellow_bul(std::ostream& os)         { if (colors::enabled) os << colors::yellow_bul_str      ; return os; }

	/**
	 * @brief Sets bright yellow bold color for output stream.
	 */
	inline std::ostream& yellow_bbold(std::ostream& os)       { if (colors::enabled) os << colors::yellow_bbold_str    ; return os; }

	/**
	 * @brief Sets bright yellow bold underline color for output stream.
	 */
	inline std::ostream& yellow_bbold_bul(std::ostream& os)   { if (colors::enabled) os << colors::yellow_bbold_bul_str; return os; }

	/**
	 * @brief Sets yellow background color for output stream.
	 */
	inline std::ostream& yellow_bg(std::ostream& os)          { if (colors::enabled) os << colors::yellow_bg_str       ; return os; }

	/**
	 * @brief Sets bright yellow background color for output stream.
	 */
	inline std::ostream& yellow_bbg(std::ostream& os)         { if (colors::enabled) os << colors::yellow_bbg_str      ; return os; }

	/* ================================================== */
	/* ====================== Blue ====================== */
	/* ================================================== */

	static const char*      blue_str                = "\033[0;34m";
	static const char*      blue_ul_str             = "\033[4;34m";
	static const char*      blue_bold_str           = "\033[1;34m";
	static const char*      blue_bbold_ul_str       = "\033[1;4;34m";

	static const char*      blue_bright_str         = "\033[0;94m";
	static const char*      blue_bul_str            = "\033[4;94m";
	static const char*      blue_bbold_str          = "\033[1;94m";
	static const char*      blue_bbold_bul_str      = "\033[1;4;94m";

	static const char*      blue_bg_str             = "\033[44m";
	static const char*      blue_bbg_str            = "\033[0;104m";

	/**
	 * @brief Sets blue color for output stream.
	 */
	inline std::ostream& blue(std::ostream& os)               { if (colors::enabled) os << colors::blue_str            ; return os; }

	/**
	 * @brief Sets blue underline color for output stream.
	 */
	inline std::ostream& blue_ul(std::ostream& os)            { if (colors::enabled) os << colors::blue_ul_str         ; return os; }

	/**
	 * @brief Sets blue bold color for output stream.
	 */
	inline std::ostream& blue_bold(std::ostream& os)          { if (colors::enabled) os << colors::blue_bold_str       ; return os; }

	/**
	 * @brief Sets blue bold underline color for output stream.
	 */
	inline std::ostream& blue_bbold_ul(std::ostream& os)      { if (colors::enabled) os << colors::blue_bbold_ul_str   ; return os; }

	/**
	 * @brief Sets bright blue color for output stream.
	 */
	inline std::ostream& blue_bright(std::ostream& os)        { if (colors::enabled) os << colors::blue_bright_str     ; return os; }

	/**
	 * @brief Sets bright blue underline color for output stream.
	 */
	inline std::ostream& blue_bul(std::ostream& os)           { if (colors::enabled) os << colors::blue_bul_str        ; return os; }

	/**
	 * @brief Sets bright blue bold color for output stream.
	 */
	inline std::ostream& blue_bbold(std::ostream& os)         { if (colors::enabled) os << colors::blue_bbold_str      ; return os; }

	/**
	 * @brief Sets bright blue bold underline color for output stream.
	 */
	inline std::ostream& blue_bbold_bul(std::ostream& os)     { if (colors::enabled) os << colors::blue_bbold_bul_str  ; return os; }

	/**
	 * @brief Sets blue background color for output stream.
	 */
	inline std::ostream& blue_bg(std::ostream& os)            { if (colors::enabled) os << colors::blue_bg_str         ; return os; }

	/**
	 * @brief Sets bright blue background color for output stream.
	 */
	inline std::ostream& blue_bbg(std::ostream& os)           { if (colors::enabled) os << colors::blue_bbg_str        ; return os; }

	/* ================================================== */
	/* ==================== Magenta ===================== */
	/* ================================================== */

	static const char*      magenta_str             = "\033[0;35m";
	static const char*      magenta_ul_str          = "\033[4;35m";
	static const char*      magenta_bold_str        = "\033[1;35m";
	static const char*      magenta_bbold_ul_str    = "\033[1;4;35m";

	static const char*      magenta_bright_str      = "\033[0;95m";
	static const char*      magenta_bul_str         = "\033[4;95m";
	static const char*      magenta_bbold_str       = "\033[1;95m";
	static const char*      magenta_bbold_bul_str   = "\033[1;4;95m";

	static const char*      magenta_bg_str          = "\033[45m";
	static const char*      magenta_bbg_str         = "\033[0;105m";

	/**
	 * @brief Sets magenta color for output stream.
	 */
	inline std::ostream& magenta(std::ostream& os)            { if (colors::enabled) os << colors::magenta_str         ; return os; }

	/**
	 * @brief Sets magenta underline color for output stream.
	 */
	inline std::ostream& magenta_ul(std::ostream& os)         { if (colors::enabled) os << colors::magenta_ul_str      ; return os; }

	/**
	 * @brief Sets magenta bold color for output stream.
	 */
	inline std::ostream& magenta_bold(std::ostream& os)       { if (colors::enabled) os << colors::magenta_bold_str    ; return os; }

	/**
	 * @brief Sets magenta bold underline color for output stream.
	 */
	inline std::ostream& magenta_bbold_ul(std::ostream& os)   { if (colors::enabled) os << colors::magenta_bbold_ul_str; return os; }

	/**
	 * @brief Sets bright magenta color for output stream.
	 */
	inline std::ostream& magenta_bright(std::ostream& os)     { if (colors::enabled) os << colors::magenta_bright_str  ; return os; }

	/**
	 * @brief Sets bright magenta underline color for output stream.
	 */
	inline std::ostream& magenta_bul(std::ostream& os)        { if (colors::enabled) os << colors::magenta_bul_str     ; return os; }

	/**
	 * @brief Sets bright magenta bold color for output stream.
	 */
	inline std::ostream& magenta_bbold(std::ostream& os)      { if (colors::enabled) os << colors::magenta_bbold_str   ; return os; }

	/**
	 * @brief Sets bright magenta bold underline color for output stream.
	 */
	inline std::ostream& magenta_bbold_bul(std::ostream& os)  { if (colors::enabled) os << colors::magenta_bbold_bul_str; return os; }

	/**
	 * @brief Sets magenta background color for output stream.
	 */
	inline std::ostream& magenta_bg(std::ostream& os)         { if (colors::enabled) os << colors::magenta_bg_str      ; return os; }

	/**
	 * @brief Sets bright magenta background color for output stream.
	 */
	inline std::ostream& magenta_bbg(std::ostream& os)        { if (colors::enabled) os << colors::magenta_bbg_str     ; return os; }

	/* ================================================== */
	/* ====================== Cyan ====================== */
	/* ================================================== */

	static const char*      cyan_str                = "\033[0;36m";
	static const char*      cyan_ul_str             = "\033[4;36m";
	static const char*      cyan_bold_str           = "\033[1;36m";
	static const char*      cyan_bbold_ul_str       = "\033[1;4;36m";

	static const char*      cyan_bright_str         = "\033[0;96m";
	static const char*      cyan_bul_str            = "\033[4;96m";
	static const char*      cyan_bbold_str          = "\033[1;96m";
	static const char*      cyan_bbold_bul_str      = "\033[1;4;96m";

	static const char*      cyan_bg_str             = "\033[46m";
	static const char*      cyan_bbg_str            = "\033[0;106m";

	/**
	 * @brief Sets cyan color for output stream.
	 */
	inline std::ostream& cyan(std::ostream& os)               { if (colors::enabled) os << colors::cyan_str            ; return os; }

	/**
	 * @brief Sets cyan underline color for output stream.
	 */
	inline std::ostream& cyan_ul(std::ostream& os)            { if (colors::enabled) os << colors::cyan_ul_str         ; return os; }

	/**
	 * @brief Sets cyan bold color for output stream.
	 */
	inline std::ostream& cyan_bold(std::ostream& os)          { if (colors::enabled) os << colors::cyan_bold_str       ; return os; }

	/**
	 * @brief Sets cyan bold underline color for output stream.
	 */
	inline std::ostream& cyan_bbold_ul(std::ostream& os)      { if (colors::enabled) os << colors::cyan_bbold_ul_str   ; return os; }

	/**
	 * @brief Sets bright cyan color for output stream.
	 */
	inline std::ostream& cyan_bright(std::ostream& os)        { if (colors::enabled) os << colors::cyan_bright_str     ; return os; }

	/**
	 * @brief Sets bright cyan underline color for output stream.
	 */
	inline std::ostream& cyan_bul(std::ostream& os)           { if (colors::enabled) os << colors::cyan_bul_str        ; return os; }

	/**
	 * @brief Sets bright cyan bold color for output stream.
	 */
	inline std::ostream& cyan_bbold(std::ostream& os)         { if (colors::enabled) os << colors::cyan_bbold_str      ; return os; }

	/**
	 * @brief Sets bright cyan bold underline color for output stream.
	 */
	inline std::ostream& cyan_bbold_bul(std::ostream& os)     { if (colors::enabled) os << colors::cyan_bbold_bul_str  ; return os; }

	/**
	 * @brief Sets cyan background color for output stream.
	 */
	inline std::ostream& cyan_bg(std::ostream& os)            { if (colors::enabled) os << colors::cyan_bg_str         ; return os; }

	/**
	 * @brief Sets bright cyan background color for output stream.
	 */
	inline std::ostream& cyan_bbg(std::ostream& os)           { if (colors::enabled) os << colors::cyan_bbg_str        ; return os; }

	/* ================================================== */
	/* ===================== White ====================== */
	/* ================================================== */

	static const char*      white_str               = "\033[0;37m";
	static const char*      white_ul_str            = "\033[4;37m";
	static const char*      white_bold_str          = "\033[1;37m";
	static const char*      white_bbold_ul_str      = "\033[1;4;37m";

	static const char*      white_bright_str        = "\033[0;97m";
	static const char*      white_bul_str           = "\033[4;97m";
	static const char*      white_bbold_str         = "\033[1;97m";
	static const char*      white_bbold_bul_str     = "\033[1;4;97m";

	static const char*      white_bg_str            = "\033[47m";
	static const char*      white_bbg_str           = "\033[0;107m";

	/**
	 * @brief Sets white color for output stream.
	 */
	inline std::ostream& white(std::ostream& os)              { if (colors::enabled) os << colors::white_str           ; return os; }

	/**
	 * @brief Sets white underline color for output stream.
	 */
	inline std::ostream& white_ul(std::ostream& os)           { if (colors::enabled) os << colors::white_ul_str        ; return os; }

	/**
	 * @brief Sets white bold color for output stream.
	 */
	inline std::ostream& white_bold(std::ostream& os)         { if (colors::enabled) os << colors::white_bold_str      ; return os; }

	/**
	 * @brief Sets white bold underline color for output stream.
	 */
	inline std::ostream& white_bbold_ul(std::ostream& os)     { if (colors::enabled) os << colors::white_bbold_ul_str  ; return os; }

	/**
	 * @brief Sets bright white color for output stream.
	 */
	inline std::ostream& white_bright(std::ostream& os)       { if (colors::enabled) os << colors::white_bright_str    ; return os; }

	/**
	 * @brief Sets bright white underline color for output stream.
	 */
	inline std::ostream& white_bul(std::ostream& os)          { if (colors::enabled) os << colors::white_bul_str       ; return os; }

	/**
	 * @brief Sets bright white bold color for output stream.
	 */
	inline std::ostream& white_bbold(std::ostream& os)        { if (colors::enabled) os << colors::white_bbold_str     ; return os; }

	/**
	 * @brief Sets bright white bold underline color for output stream.
	 */
	inline std::ostream& white_bbold_bul(std::ostream& os)    { if (colors::enabled) os << colors::white_bbold_bul_str ; return os; }

	/**
	 * @brief Sets white background color for output stream.
	 */
	inline std::ostream& white_bg(std::ostream& os)           { if (colors::enabled) os << colors::white_bg_str        ; return os; }

	/**
	 * @brief Sets bright white background color for output stream.
	 */
	inline std::ostream& white_bbg(std::ostream& os)          { if (colors::enabled) os << colors::white_bbg_str       ; return os; }

	/* ================================================== */
	/* ===================== Reset ====================== */
	/* ================================================== */

	static const char*      reset_str               = "\033[0m";

	/**
	 * @brief Resets color for output stream.
	 */
	inline std::ostream&    reset(std::ostream& os)              { if (colors::enabled) os << colors::reset_str           ; return os; }
}
// clang-format off

#endif // COLORS_HPP
