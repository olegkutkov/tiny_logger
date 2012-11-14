/*
 * tiny logger
 *
 * Author Oleg Kutkov (oleg)
 * Creation date 13.11.2012
 */

#ifndef LOGGER_H
#define LOGGER_H

#define LOG_MAX_LEVEL_ERROR 0
#define LOG_MAX_LEVEL_ERROR_WARNING_STATUS 1
#define LOG_MAX_LEVEL_ERROR_WARNING_STATUS_DEBUG 2

void logger_reset_state(void);

void logger_critical_log(const char* message);

void logger_set_log_level(const int level);
int logger_set_log_file(const char* filename);

void logger_set_out_stdout();

/*
 * Logging methods by levels
 */
void log_error(char* format, ...);
void log_warning(char* format, ...);
void log_status(char* format, ...);
void log_debug(char* format, ...);

#endif

