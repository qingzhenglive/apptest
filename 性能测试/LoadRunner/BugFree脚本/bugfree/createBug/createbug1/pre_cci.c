# 1 "c:\\loadrunnerspace\\bugfree\\createbug\\createbug1\\\\combined_createbug1.c"
# 1 "C:\\Program Files\\HP\\LoadRunner\\include/lrun.h" 1
 
 












 











# 103 "C:\\Program Files\\HP\\LoadRunner\\include/lrun.h"








































































	

 


















 
 
 
 
 


 
 
 
 
 
 














int     lr_start_transaction   (char * transaction_name);
int lr_start_sub_transaction          (char * transaction_name, char * trans_parent);
long lr_start_transaction_instance    (char * transaction_name, long parent_handle);



int     lr_end_transaction     (char * transaction_name, int status);
int lr_end_sub_transaction            (char * transaction_name, int status);
int lr_end_transaction_instance       (long transaction, int status);


 
typedef char* lr_uuid_t;
 



lr_uuid_t lr_generate_uuid();

 


int lr_generate_uuid_free(lr_uuid_t uuid);

 



int lr_generate_uuid_on_buf(lr_uuid_t buf);

   
# 263 "C:\\Program Files\\HP\\LoadRunner\\include/lrun.h"
int lr_start_distributed_transaction  (char * transaction_name, lr_uuid_t correlator, long timeout  );

   







int lr_end_distributed_transaction  (lr_uuid_t correlator, int status);


double lr_stop_transaction            (char * transaction_name);
double lr_stop_transaction_instance   (long parent_handle);


void lr_resume_transaction           (char * trans_name);
void lr_resume_transaction_instance  (long trans_handle);


int lr_update_transaction            (const char *trans_name);


 
void lr_wasted_time(long time);


 
int lr_set_transaction(const char *name, double duration, int status);
 
long lr_set_transaction_instance(const char *name, double duration, int status, long parent_handle);


int   lr_user_data_point                      (char *, double);
long lr_user_data_point_instance                   (char *, double, long);
 



int lr_user_data_point_ex(const char *dp_name, double value, int log_flag);
long lr_user_data_point_instance_ex(const char *dp_name, double value, long parent_handle, int log_flag);


int lr_transaction_add_info      (const char *trans_name, char *info);
int lr_transaction_instance_add_info   (long trans_handle, char *info);
int lr_dpoint_add_info           (const char *dpoint_name, char *info);
int lr_dpoint_instance_add_info        (long dpoint_handle, char *info);


double lr_get_transaction_duration       (char * trans_name);
double lr_get_trans_instance_duration    (long trans_handle);
double lr_get_transaction_think_time     (char * trans_name);
double lr_get_trans_instance_think_time  (long trans_handle);
double lr_get_transaction_wasted_time    (char * trans_name);
double lr_get_trans_instance_wasted_time (long trans_handle);
int    lr_get_transaction_status		 (char * trans_name);
int	   lr_get_trans_instance_status		 (long trans_handle);

 



int lr_set_transaction_status(int status);

 



int lr_set_transaction_status_by_name(int status, const char *trans_name);
int lr_set_transaction_instance_status(int status, long trans_handle);


typedef void* merc_timer_handle_t;
 

merc_timer_handle_t lr_start_timer();
double lr_end_timer(merc_timer_handle_t timer_handle);


 
 
 
 
 
 











 



int   lr_rendezvous  (char * rendezvous_name);
 




int   lr_rendezvous_ex (char * rendezvous_name);



 
 
 
 
 
char *lr_get_vuser_ip (void);
void   lr_whoami (int *vuser_id, char ** sgroup, int *scid);
char *	  lr_get_host_name (void);
char *	  lr_get_master_host_name (void);

 
long     lr_get_attrib_long	(char * attr_name);
char *   lr_get_attrib_string	(char * attr_name);
double   lr_get_attrib_double      (char * attr_name);

char * lr_paramarr_idx(const char * paramArrayName, unsigned int index);
char * lr_paramarr_random(const char * paramArrayName);
int    lr_paramarr_len(const char * paramArrayName);

int	lr_param_unique(const char * paramName);
int lr_param_sprintf(const char * paramName, const char * format, ...);


 
 
static void *ci_this_context = 0;






 








void lr_continue_on_error (int lr_continue);
char *   lr_decrypt (const char *EncodedString);


 
 
 
 
 
 



 







 















void   lr_abort (void);
void lr_exit(int exit_option, int exit_status);
void lr_abort_ex (unsigned long flags);

void   lr_peek_events (void);


 
 
 
 
 


void   lr_think_time (double secs);

 


void lr_force_think_time (double secs);


 
 
 
 
 



















int   lr_msg (char * fmt, ...);
int   lr_debug_message (unsigned int msg_class,
									    char * format,
										...);
# 502 "C:\\Program Files\\HP\\LoadRunner\\include/lrun.h"
void   lr_new_prefix (int type,
                                 char * filename,
                                 int line);
# 505 "C:\\Program Files\\HP\\LoadRunner\\include/lrun.h"
int   lr_log_message (char * fmt, ...);
int   lr_message (char * fmt, ...);
int   lr_error_message (char * fmt, ...);
int   lr_output_message (char * fmt, ...);
int   lr_vuser_status_message (char * fmt, ...);
int   lr_error_message_without_fileline (char * fmt, ...);
int   lr_fail_trans_with_error (char * fmt, ...);

 
 
 
 
 
# 528 "C:\\Program Files\\HP\\LoadRunner\\include/lrun.h"

 
 
 
 
 





int   lr_next_row ( char * table);
int lr_advance_param ( char * param);



														  
														  

														  
														  

													      
 


char *   lr_eval_string (char * str);
int   lr_eval_string_ext (const char *in_str,
                                     unsigned long const in_len,
                                     char ** const out_str,
                                     unsigned long * const out_len,
                                     unsigned long const options,
                                     const char *file,
								     long const line);
# 562 "C:\\Program Files\\HP\\LoadRunner\\include/lrun.h"
void   lr_eval_string_ext_free (char * * pstr);

 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
int lr_param_increment (char * dst_name,
                              char * src_name);
# 585 "C:\\Program Files\\HP\\LoadRunner\\include/lrun.h"













											  
											  

											  
											  
											  

int	  lr_save_var (char *              param_val,
							  unsigned long const param_val_len,
							  unsigned long const options,
							  char *			  param_name);
# 609 "C:\\Program Files\\HP\\LoadRunner\\include/lrun.h"
int   lr_save_string (const char * param_val, const char * param_name);
int   lr_free_parameter (const char * param_name);
int   lr_save_int (const int param_val, const char * param_name);


 
 
 
 
 
 
# 676 "C:\\Program Files\\HP\\LoadRunner\\include/lrun.h"
void   lr_save_datetime (const char *format, int offset, const char *name);









 











 
 
 
 
 






 



char * lr_error_context_get_entry (char * key);

 



long   lr_error_context_get_error_id (void);


 
 
 

int lr_table_get_rows_num (char * param_name);

int lr_table_get_cols_num (char * param_name);

char * lr_table_get_cell_by_col_index (char * param_name, int row, int col);

char * lr_table_get_cell_by_col_name (char * param_name, int row, const char* col_name);

int lr_table_get_column_name_by_index (char * param_name, int col, 
											char * * const col_name,
											int * col_name_len);
# 737 "C:\\Program Files\\HP\\LoadRunner\\include/lrun.h"

int lr_table_get_column_name_by_index_free (char * col_name);


 
 
 
 
 
 
 
 

 
 
 
 
 
 
int   lr_param_substit (char * file,
                                   int const line,
                                   char * in_str,
                                   int const in_len,
                                   char * * const out_str,
                                   int * const out_len);
# 762 "C:\\Program Files\\HP\\LoadRunner\\include/lrun.h"
void   lr_param_substit_free (char * * pstr);


 
# 774 "C:\\Program Files\\HP\\LoadRunner\\include/lrun.h"





char *   lrfnc_eval_string (char * str,
                                      char * file_name,
                                      long const line_num);
# 782 "C:\\Program Files\\HP\\LoadRunner\\include/lrun.h"


int   lrfnc_save_string ( const char * param_val,
                                     const char * param_name,
                                     const char * file_name,
                                     long const line_num);
# 788 "C:\\Program Files\\HP\\LoadRunner\\include/lrun.h"

int   lrfnc_free_parameter (const char * param_name );

int lr_save_searched_string(char *buffer, long buf_size, unsigned int occurrence,
			    char *search_string, int offset, unsigned int param_val_len, 
			    char *param_name);

 
char *   lr_string (char * str);

 
# 859 "C:\\Program Files\\HP\\LoadRunner\\include/lrun.h"

int   lr_save_value (char * param_val,
                                unsigned long const param_val_len,
                                unsigned long const options,
                                char * param_name,
                                char * file_name,
                                long const line_num);
# 866 "C:\\Program Files\\HP\\LoadRunner\\include/lrun.h"


 
 
 
 
 











int   lr_printf (char * fmt, ...);
 
int   lr_set_debug_message (unsigned int msg_class,
                                       unsigned int swtch);
# 888 "C:\\Program Files\\HP\\LoadRunner\\include/lrun.h"
unsigned int   lr_get_debug_message (void);


 
 
 
 
 

void   lr_double_think_time ( double secs);
void   lr_usleep (long);


 
 
 
 
 
 




int *   lr_localtime (long offset);


int   lr_send_port (long port);


# 964 "C:\\Program Files\\HP\\LoadRunner\\include/lrun.h"



struct _lr_declare_identifier{
	char signature[24];
	char value[128];
};

int   lr_pt_abort (void);

void vuser_declaration (void);






# 993 "C:\\Program Files\\HP\\LoadRunner\\include/lrun.h"


# 1005 "C:\\Program Files\\HP\\LoadRunner\\include/lrun.h"
















 
 
 
 
 







int    _lr_declare_transaction   (char * transaction_name);


 
 
 
 
 







int   _lr_declare_rendezvous  (char * rendezvous_name);

 
 
 
 
 

 
int lr_enable_ip_spoofing();
int lr_disable_ip_spoofing();


 




int lr_convert_string_encoding(char *sourceString, char *fromEncoding, char *toEncoding, char *paramName);





 
 

















# 1 "c:\\loadrunnerspace\\bugfree\\createbug\\createbug1\\\\combined_createbug1.c" 2

# 1 "globals.h" 1



 
 

# 1 "C:\\Program Files\\HP\\LoadRunner\\include/web_api.h" 1
 







# 1 "C:\\Program Files\\HP\\LoadRunner\\include/as_web.h" 1
 






















































 




 








 
 
 

  int
	web_add_filter(
		const char *		mpszArg,
		...
	);									 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_add_auto_filter(
		const char *		mpszArg,
		...
	);									 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
	
  int
	web_add_auto_header(
		const char *		mpszHeader,
		const char *		mpszValue);

  int
	web_add_header(
		const char *		mpszHeader,
		const char *		mpszValue);
  int
	web_add_cookie(
		const char *		mpszCookie);
  int
	web_cleanup_auto_headers(void);
  int
	web_cleanup_cookies(void);
  int
	web_concurrent_end(
		const char * const	mpszReserved,
										 
		...								 
	);
  int
	web_concurrent_start(
		const char * const	mpszConcurrentGroupName,
										 
										 
		...								 
										 
	);
  int
	web_create_html_param(
		const char *		mpszParamName,
		const char *		mpszLeftDelim,
		const char *		mpszRightDelim);
  int
	web_create_html_param_ex(
		const char *		mpszParamName,
		const char *		mpszLeftDelim,
		const char *		mpszRightDelim,
		const char *		mpszNum);
  int
	web_custom_request(
		const char *		mpszReqestName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	web_disable_keep_alive(void);
  int
	web_enable_keep_alive(void);
  int
	web_find(
		const char *		mpszStepName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	web_get_int_property(
		const int			miHttpInfoType);
  int
	web_image(
		const char *		mpszStepName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	web_image_check(
		const char *		mpszName,
		...);
  int
	web_java_check(
		const char *		mpszName,
		...);
  int
	web_link(
		const char *		mpszStepName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

	
  int
	web_global_verification(
		const char *		mpszArg1,
		...);							 
										 
										 
										 
										 
										 

  int
	web_reg_find(
		const char *		mpszArg1,
		...);							 
										 
										 
										 
										 
										 
										 
										 
				
  int
	web_reg_save_param(
		const char *		mpszParamName,
		...);							 
										 
										 
										 
										 
										 
										 

  int
	web_convert_param(
		const char * 		mpszParamName, 
										 
		...);							 
										 
										 


										 

										 
  int
	web_remove_auto_filter(
		const char *		mpszArg,
		...
	);									 
										 
				
  int
	web_remove_auto_header(
		const char *		mpszHeaderName,
		...);							 
										 



  int
	web_remove_cookie(
		const char *		mpszCookie);

  int
	web_save_header(
		const char *		mpszType,	 
		const char *		mpszName);	 
  int
	web_set_certificate(
		const char *		mpszIndex);
  int
	web_set_certificate_ex(
		const char *		mpszArg1,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	web_set_connections_limit(
		const char *		mpszLimit);
  int
	web_set_max_html_param_len(
		const char *		mpszLen);
  int
	web_set_max_retries(
		const char *		mpszMaxRetries);
  int
	web_set_proxy(
		const char *		mpszProxyHost);
  int
	web_set_proxy_bypass(
		const char *		mpszBypass);
  int
	web_set_secure_proxy(
		const char *		mpszProxyHost);
  int
	web_set_sockets_option(
		const char *		mpszOptionID,
		const char *		mpszOptionValue
	);
  int
	web_set_option(
		const char *		mpszOptionID,
		const char *		mpszOptionValue,
		...								 
	);
  int
	web_set_timeout(
		const char *		mpszWhat,
		const char *		mpszTimeout);
  int
	web_set_user(
		const char *		mpszUserName,
		const char *		mpszPwd,
		const char *		mpszHost);

  int
	web_sjis_to_euc_param(
		const char *		mpszParamName,
										 
		const char *		mpszParamValSjis);
										 

  int
	web_submit_data(
		const char *		mpszStepName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	web_submit_form(
		const char *		mpszStepName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										  
										 
										 
										 
										 
										 
										  
										 
										 
										 
										 
										 
										 
										 
										  
										 
										 
										 
										 
										 
										  
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	web_url(
		const char *		mpszUrlName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int 
	web_set_proxy_bypass_local(
		const char * mpszNoLocal
		);

  int 
	web_cache_cleanup(void);

  int
	web_create_html_query(
		const char* mpszStartQuery,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int 
	web_create_radio_button_param(
		const char *NameFiled,
		const char *NameAndVal,
		const char *ParamName
		);

  int
	web_convert_from_formatted(
		const char * mpszArg1,
		...);							 
										 
										 
										 
										 
										 
										
  int
	web_convert_to_formatted(
		const char * mpszArg1,
		...);							 
										 
										 
										 
										 
										 

  int
	web_reg_save_param_ex(
		const char * mpszParamName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_reg_save_param_xpath(
		const char * mpszParamName,
		...);							
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 










# 596 "C:\\Program Files\\HP\\LoadRunner\\include/as_web.h"


# 609 "C:\\Program Files\\HP\\LoadRunner\\include/as_web.h"



























# 647 "C:\\Program Files\\HP\\LoadRunner\\include/as_web.h"

 
 
 


  int
	FormSubmit(
		const char *		mpszFormName,
		...);
  int
	InitWebVuser(void);
  int
	SetUser(
		const char *		mpszUserName,
		const char *		mpszPwd,
		const char *		mpszHost);
  int
	TerminateWebVuser(void);
  int
	URL(
		const char *		mpszUrlName);
























# 715 "C:\\Program Files\\HP\\LoadRunner\\include/as_web.h"



 
 
 






# 10 "C:\\Program Files\\HP\\LoadRunner\\include/web_api.h" 2












 






 











  int
	web_reg_add_cookie(
		const char *		mpszCookie,
		...);							 
										 

  int
	web_report_data_point(
		const char *		mpszEventType,
		const char *		mpszEventName,
		const char *		mpszDataPointName,
		const char *		mpszLAST);	 
										 
										 
										 

  int
	web_text_link(
		const char *		mpszStepName,
		...);

  int
	web_element(
		const char *		mpszStepName,
		...);

  int
	web_image_link(
		const char *		mpszStepName,
		...);

  int
	web_static_image(
		const char *		mpszStepName,
		...);

  int
	web_image_submit(
		const char *		mpszStepName,
		...);

  int
	web_button(
		const char *		mpszStepName,
		...);

  int
	web_edit_field(
		const char *		mpszStepName,
		...);

  int
	web_radio_group(
		const char *		mpszStepName,
		...);

  int
	web_check_box(
		const char *		mpszStepName,
		...);

  int
	web_list(
		const char *		mpszStepName,
		...);

  int
	web_text_area(
		const char *		mpszStepName,
		...);

  int
	web_map_area(
		const char *		mpszStepName,
		...);

  int
	web_eval_java_script(
		const char *		mpszStepName,
		...);

  int
	web_reg_dialog(
		const char *		mpszArg1,
		...);

  int
	web_reg_cross_step_download(
		const char *		mpszArg1,
		...);

  int
	web_browser(
		const char *		mpszStepName,
		...);

  int
	web_control(
		const char *		mpszStepName,
		...);

  int
	web_set_rts_key(
		const char *		mpszArg1,
		...);

  int
	web_save_param_length(
		const char * 		mpszParamName,
		...);

  int
	web_save_timestamp_param(
		const char * 		mpszParamName,
		...);

  int
	web_load_cache(
		const char *		mpszStepName,
		...);							 
										 

  int
	web_dump_cache(
		const char *		mpszStepName,
		...);							 
										 
										 

  int
	web_reg_find_in_log(
		const char *		mpszArg1,
		...);							 
										 
										 

  int
	web_get_sockets_info(
		const char *		mpszArg1,
		...);							 
										 
										 
										 
										 

  int
	web_add_cookie_ex(
		const char *		mpszArg1,
		...);							 
										 
										 
										 

  int
	web_hook_java_script(
		const char *		mpszArg1,
		...);							 
										 
										 
										 





 
 
 


# 7 "globals.h" 2

# 1 "C:\\Program Files\\HP\\LoadRunner\\include/lrw_custom_body.h" 1
 





# 8 "globals.h" 2




 
 



# 2 "c:\\loadrunnerspace\\bugfree\\createbug\\createbug1\\\\combined_createbug1.c" 2

# 1 "vuser_init.c" 1
vuser_init()
{
	return 0;
}
# 3 "c:\\loadrunnerspace\\bugfree\\createbug\\createbug1\\\\combined_createbug1.c" 2

# 1 "Action.c" 1
Action()
{

	web_add_cookie("1_product=ed19a46d580cd427bc4d1a363cd580197d78ac65s%3A1%3A%221%22%3B; DOMAIN=10.7.90.119");

	web_add_cookie("pageSize=e37cc0d01a5e29f8fb3ae7ceccc56d9228d79284s%3A2%3A%2220%22%3B; DOMAIN=10.7.90.119");

	web_add_cookie("2_product=ed19a46d580cd427bc4d1a363cd580197d78ac65s%3A1%3A%221%22%3B; DOMAIN=10.7.90.119");

	web_add_cookie("ac-cookie=%5B%7B%22data%22%3A%5B%22user1%22%2C%22user1%5Buser1%5D%22%5D%2C%22value%22%3A%22user1%22%2C%22result%22%3A%22user1%22%7D%2C%7B%22data%22%3A%5B%22user2%22%2C%22user2%5Buser2%5D%22%5D%2C%22value%22%3A%22user2%22%2C%22result%22%3A%22user2%22%7D%5D; DOMAIN=10.7.90.119");

	web_add_cookie("3_product=ed19a46d580cd427bc4d1a363cd580197d78ac65s%3A1%3A%221%22%3B; DOMAIN=10.7.90.119");

	web_add_cookie("language=dfacf804dd6212d70b530775c1186ab4ab2e8670s%3A5%3A%22zh_cn%22%3B; DOMAIN=10.7.90.119");

	web_url("login", 
		"URL=http://10.7.90.119:8032/bugfree3.0.3/index.php/site/login/", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t10.inf", 
		"Mode=HTML", 
		"EXTRARES", 
		"Url=/bugfree3.0.3/themes/classic/assets/images/blue/seperate_line.png", "ENDITEM", 
		"Url=/bugfree3.0.3/themes/classic/assets/images/blue/logo_login.png", "ENDITEM", 
		"LAST");

	web_submit_data("login_2", 
		"Action=http://10.7.90.119:8032/bugfree3.0.3/index.php/site/login/", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=http://10.7.90.119:8032/bugfree3.0.3/index.php/site/login/", 
		"Snapshot=t11.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"Name=LoginForm[username]", "Value={username}", "ENDITEM", 
		"Name=LoginForm[password]", "Value=111111", "ENDITEM", 
		"Name=LoginForm[language]", "Value=zh_cn", "ENDITEM", 
		"Name=LoginForm[rememberMe]", "Value=0", "ENDITEM", 
		"EXTRARES", 
		"Url=/bugfree3.0.3/themes/classic/assets/images/down.gif", "Referer=http://10.7.90.119:8032/bugfree3.0.3/index.php/bug/list/1", "ENDITEM", 
		"Url=/bugfree3.0.3/themes/classic/assets/images/active.png", "Referer=http://10.7.90.119:8032/bugfree3.0.3/index.php/bug/list/1", "ENDITEM", 
		"Url=/bugfree3.0.3/themes/classic/assets/images//close_div.gif", "Referer=http://10.7.90.119:8032/bugfree3.0.3/index.php/bug/list/1", "ENDITEM", 
		"Url=/bugfree3.0.3/assets/50038a0d/jui/css/base/images/ui-icons_222222_256x240.png", "Referer=http://10.7.90.119:8032/bugfree3.0.3/index.php/bug/list/1", "ENDITEM", 
		"Url=/bugfree3.0.3/assets/50038a0d/jui/css/base/images/ui-bg_flat_75_ffffff_40x100.png", "Referer=http://10.7.90.119:8032/bugfree3.0.3/index.php/bug/list/1", "ENDITEM", 
		"Url=/bugfree3.0.3/assets/50038a0d/jui/css/base/images/ui-bg_highlight-soft_75_cccccc_1x100.png", "Referer=http://10.7.90.119:8032/bugfree3.0.3/index.php/bug/list/1", "ENDITEM", 
		"Url=/bugfree3.0.3/assets/bc55afbf/img/page.gif", "Referer=http://10.7.90.119:8032/bugfree3.0.3/index.php/bug/list/1", "ENDITEM", 
		"LAST");

	web_submit_data("getProductModule", 
		"Action=http://10.7.90.119:8032/bugfree3.0.3/index.php/search/getProductModule", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=http://10.7.90.119:8032/bugfree3.0.3/index.php/bug/list/1", 
		"Snapshot=t12.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"Name=product_id", "Value=1", "ENDITEM", 
		"Name=productmodule_id", "Value=0", "ENDITEM", 
		"LAST");

	web_url("edit", 
		"URL=http://10.7.90.119:8032/bugfree3.0.3/index.php/info/edit?type=bug&action=opened&product_id=1", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://10.7.90.119:8032/bugfree3.0.3/index.php/bug/list/1", 
		"Snapshot=t13.inf", 
		"Mode=HTML", 
		"EXTRARES", 
		"Url=/bugfree3.0.3/themes/classic/assets/images/active.png", "Referer=http://10.7.90.119:8032/bugfree3.0.3/index.php/info/edit?type=bug&action=opened&product_id=1", "ENDITEM", 
		"Url=/bugfree3.0.3/assets/50038a0d/jui/css/base/images/ui-bg_flat_75_ffffff_40x100.png", "Referer=http://10.7.90.119:8032/bugfree3.0.3/index.php/info/edit?type=bug&action=opened&product_id=1", "ENDITEM", 
		"Url=/bugfree3.0.3/assets/50038a0d/jui/css/base/images/ui-bg_highlight-soft_75_cccccc_1x100.png", "Referer=http://10.7.90.119:8032/bugfree3.0.3/index.php/info/edit?type=bug&action=opened&product_id=1", "ENDITEM", 
		"Url=/bugfree3.0.3/assets/50038a0d/jui/css/base/images/ui-icons_222222_256x240.png", "Referer=http://10.7.90.119:8032/bugfree3.0.3/index.php/info/edit?type=bug&action=opened&product_id=1", "ENDITEM", 
		"Url=/bugfree3.0.3/assets/8e4d999e/themes/default/default.css", "Referer=http://10.7.90.119:8032/bugfree3.0.3/index.php/info/edit?type=bug&action=opened&product_id=1", "ENDITEM", 
		"Url=/bugfree3.0.3/assets/8e4d999e/themes/default/default.png", "Referer=http://10.7.90.119:8032/bugfree3.0.3/index.php/info/edit?type=bug&action=opened&product_id=1", "ENDITEM", 
		"Url=/bugfree3.0.3/assets/93d21f33/indicator.gif", "Referer=http://10.7.90.119:8032/bugfree3.0.3/index.php/info/edit?type=bug&action=opened&product_id=1", "ENDITEM", 
		"LAST");

	lr_think_time(15);

	web_submit_data("edit_2", 
		"Action=http://10.7.90.119:8032/bugfree3.0.3/index.php/info/edit?type=bug&action=opened&product_id=1", 
		"Method=POST", 
		"EncType=multipart/form-data", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=http://10.7.90.119:8032/bugfree3.0.3/index.php/info/edit?type=bug&action=opened&product_id=1", 
		"Snapshot=t14.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"Name=BugInfoView[deleted_file_id]", "Value=", "ENDITEM", 
		"Name=BugInfoView[lock_version]", "Value=", "ENDITEM", 
		"Name=BugInfoView[product_id]", "Value=1", "ENDITEM", 
		"Name=isPageDirty", "Value=1", "ENDITEM", 
		"Name=templateTitle", "Value=", "ENDITEM", 
		"Name=BugInfoView[title]", "Value={title}", "ENDITEM", 
		"Name=layer1_module", "Value=0", "ENDITEM", 
		"Name=BugInfoView[productmodule_id]", "Value=0", "ENDITEM", 
		"Name=BugInfoView[assign_to_name]", "Value={assignname}", "ENDITEM", 
		"Name=BugInfoView[mail_to]", "Value=", "ENDITEM", 
		"Name=BugInfoView[severity]", "Value=1", "ENDITEM", 
		"Name=BugInfoView[priority]", "Value=", "ENDITEM", 
		"Name=Custom[BugType]", "Value=代码错误", "ENDITEM", 
		"Name=Custom[HowFound]", "Value=功能测试", "ENDITEM", 
		"Name=Custom[BugOS]", "Value=", "ENDITEM", 
		"Name=Custom[BugBrowser]", "Value=", "ENDITEM", 
		"Name=Custom[OpenedBuild]", "Value=111", "ENDITEM", 
		"Name=Custom[ResolvedBuild]", "Value=", "ENDITEM", 
		"Name=Custom[BugSubStatus]", "Value=", "ENDITEM", 
		"Name=Custom[BugMachine]", "Value=", "ENDITEM", 
		"Name=Custom[BugKeyword]", "Value=", "ENDITEM", 
		"Name=BugInfoView[related_bug]", "Value=", "ENDITEM", 
		"Name=BugInfoView[related_case]", "Value=", "ENDITEM", 
		"Name=BugInfoView[related_result]", "Value=", "ENDITEM", 
		"Name=attachment_file[]", "Value=", "File=Yes", "ENDITEM", 
		"Name=BugInfoView[action_note]", "Value=", "ENDITEM", 
		"Name=BugInfoView[repeat_step]", "Value=[步骤]<br />\r\n1.<br />\r\n2.<br />\r\n<br />\r\n[结果]<br />\r\n<br />\r\n[期望]<br />\r\n<br />\r\n[备注]<br />\r\n<br />", "ENDITEM", 
		"LAST");

	web_url("BugFree", 
		"URL=http://10.7.90.119:8032/bugfree3.0.3/index.php/bug/list/1", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t15.inf", 
		"Mode=HTML", 
		"EXTRARES", 
		"Url=/bugfree3.0.3/themes/classic/assets/images/down.gif", "ENDITEM", 
		"Url=/bugfree3.0.3/themes/classic/assets/images//close_div.gif", "ENDITEM", 
		"Url=/bugfree3.0.3/assets/bc55afbf/img/page.gif", "ENDITEM", 
		"LAST");

	web_url("111", 
		"URL=http://10.7.90.119:8032/bugfree3.0.3/index.php/bug/1180", 
		"TargetFrame=_blank", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t16.inf", 
		"Mode=HTML", 
		"LAST");

	web_url("getPreNextId", 
		"URL=http://10.7.90.119:8032/bugfree3.0.3/index.php/search/getPreNextId?id=1180&type=bug&product_id=1", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://10.7.90.119:8032/bugfree3.0.3/index.php/bug/1180", 
		"Snapshot=t17.inf", 
		"Mode=HTML", 
		"LAST");

	web_submit_data("getProductModule_2", 
		"Action=http://10.7.90.119:8032/bugfree3.0.3/index.php/search/getProductModule", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=http://10.7.90.119:8032/bugfree3.0.3/index.php/bug/list/1", 
		"Snapshot=t18.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"Name=product_id", "Value=1", "ENDITEM", 
		"Name=productmodule_id", "Value=0", "ENDITEM", 
		"LAST");

	return 0;
}
# 4 "c:\\loadrunnerspace\\bugfree\\createbug\\createbug1\\\\combined_createbug1.c" 2

# 1 "vuser_end.c" 1
vuser_end()
{
	return 0;
}
# 5 "c:\\loadrunnerspace\\bugfree\\createbug\\createbug1\\\\combined_createbug1.c" 2

