/** Types of files, to know about:
 * Text files
 * Binary files
 * **********
 *
 * Operations, we can perform:
 * Creating a new file
 * Opening an existing file
 * Closing a file
 * Reading from and writing information to a file
 */

// for opening files
// fopen(const char *path, const char *mode)
// Mode	        Meaning of Mode	                                          During Inexistence of file
// r	          Open for reading.	                                        If the file does not exist, fopen() returns NULL.
// rb	          Open for reading in binary mode.	                        If the file does not exist, fopen() returns NULL.
// w	          Open for writing.	                                        If the file exists, its contents are overwritten.
// 				                                                                If the file does not exist, it will be created.
// wb	          Open for writing in binary mode.	                        If the file exists, its contents are overwritten.
// 				                                                                If the file does not exist, it will be created.
// a	          Open for append.                  
//      				Data is added to the end of the file.	                    If the file does not exist, it will be created.
// ab	          Open for append in binary mode.                  
// 				      Data is added to the end of the file.	                    If the file does not exist, it will be created.
// r+	          Open for both reading and writing.	                      If the file does not exist, fopen() returns NULL.
// rb+	        Open for both reading and writing in binary mode.	        If the file does not exist, fopen() returns NULL.
// w+	          Open for both reading and writing.                        If the file exists, its contents are overwritten.
// 				                                                                If the file does not exist, it will be created.
// wb+	        Open for both reading and writing in binary mode.	        If the file exists, its contents are overwritten.
// 				                                                                If the file does not exist, it will be created.
// a+	          Open for both reading and appending.	                    If the file does not exist, it will be created.
// ab+	        Open for both reading and appending in binary mode.	      If the file does not exist, it will be created.