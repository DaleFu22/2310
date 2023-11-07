#ifndef __PR_DEBUG_H__
#define __PR_DEBUG_H__
/*Comment/uncomment the following line to disable/enable debugging,
   OR define(or NOT) it in Makefile.
   */
//#define NDEBUG
/* undef it, just in case */
#undef pr_debug					
#undef syslog_debug

#ifndef NDEBUG

#ifdef __KERNEL__
		/* This one if debugging is on, and kernel space */
#define pr_debug(fmt, args...) printk( KERN_ERR fmt, ## args)
#define syslog_debug(priority, format...) printk( KERN_ERR fmt, ## args)
#else
		 /* This one for user space */
#define pr_debug(fmt, args...) fprintf(stderr, fmt, ## args)
#define syslog_debug(priority, format, args...)  syslog(priority, format,##args)
#endif

#else
/* not debugging: nothing */
#define pr_debug(fmt, args...)
#define syslog_debug(priority, format, ...)
#endif

#endif

