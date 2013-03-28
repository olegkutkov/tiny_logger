tiny_logger
===========

Very simple logger for Unix written in C, supports writing to stdout, to custom file and syslog. 
Supports log levels.
Not thread safe!

***
Usage:
  logger_reset_state(void) - reset logger state to default mode. All messages is writing in syslog and loglevel is LOG_MAX_LEVEL_ERROR_WARNING_STATUS

  logger_critical_log(const char* message) - write error message directly in syslog, no matter what mode is set.

  logger_set_log_level(const int level) - set current logging level (LOG_MAX_LEVEL_ERROR, LOG_MAX_LEVEL_ERROR_WARNING_STATUS or LOG_MAX_LEVEL_ERROR_WARNING_STATUS_DEBUG)
  logging level can be reSet any time again, in runtime. Default logging level is LOG_MAX_LEVEL_ERROR_WARNING_STATUS
  
  logger_set_log_file(const char* filename) - Switch mode. Set file name to write logs to. Can be set many times in runtime. Previous opened
  file will be closed and will be started new log session in a new file.
  
  logger_set_out_stdout() - Swith mode. All messages is writing in to STDOUT. All opened files will be closed.
  
  void log_error(char* format, ...) - write formatted error message
  void log_warning(char* format, ...) - write formatted warning message
  void log_status(char* format, ...) - write formatted status message
  void log_debug(char* format, ...) - write formatted debug message
