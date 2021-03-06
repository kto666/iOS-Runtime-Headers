/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSDictionary, NSObject<OS_dispatch_data>, __NSCFLocalDownloadFile;

@interface __NSCFLocalDownloadTask : __NSCFLocalSessionTask {
    __NSCFLocalDownloadFile *_downloadFile;
    id _fileCompletion;
    long long _initialResumeSize;
    unsigned int _ioSuspend;
    NSDictionary *_originalResumeInfo;
    id _resumeCallback;
    int _seqNo;
    unsigned long _totalWrote;
    NSObject<OS_dispatch_data> *_writeBuffer;
    bool_canWrite;
    bool_didIssueNeedFinish;
    bool_needFinish;
}

@property bool canWrite;
@property bool didIssueNeedFinish;
@property(retain) __NSCFLocalDownloadFile * downloadFile;
@property(copy) id fileCompletion;
@property long long initialResumeSize;
@property unsigned int ioSuspend;
@property bool needFinish;
@property(retain) NSDictionary * originalResumeInfo;
@property(copy) id resumeCallback;
@property int seqNo;
@property unsigned long totalWrote;
@property(retain) NSObject<OS_dispatch_data> * writeBuffer;

- (void)_onqueue_didReceiveResponse:(id)arg1;
- (void)_onqueue_willCacheResponse:(id)arg1 withCompletion:(id)arg2;
- (void)_private_errorCompletion;
- (void)_private_fileCompletion;
- (void)_private_posixError:(int)arg1;
- (void)_task_onqueue_didFinish;
- (void)_task_onqueue_didReceiveDispatchData:(id)arg1;
- (bool)canWrite;
- (void)cancelByProducingResumeData:(id)arg1;
- (void)checkWrite;
- (id)createResumeInformation:(id)arg1;
- (void)dealloc;
- (bool)didIssueNeedFinish;
- (id)downloadFile;
- (id)fileCompletion;
- (id)initWithSession:(id)arg1 request:(id)arg2 ident:(unsigned int)arg3 bridge:(id)arg4;
- (id)initWithSession:(id)arg1 resumeData:(id)arg2 ident:(unsigned int)arg3 bridge:(id)arg4;
- (id)initWithTask:(id)arg1 suspendedConnection:(struct _CFURLConnection { }*)arg2;
- (long long)initialResumeSize;
- (unsigned int)ioSuspend;
- (BOOL)isKindOfClass:(Class)arg1;
- (bool)needFinish;
- (id)originalResumeInfo;
- (void)reportProgress:(unsigned long)arg1;
- (id)resumeCallback;
- (int)seqNo;
- (void)setCanWrite:(bool)arg1;
- (void)setDidIssueNeedFinish:(bool)arg1;
- (void)setDownloadFile:(id)arg1;
- (void)setFileCompletion:(id)arg1;
- (void)setInitialResumeSize:(long long)arg1;
- (void)setIoSuspend:(unsigned int)arg1;
- (void)setNeedFinish:(bool)arg1;
- (void)setOriginalResumeInfo:(id)arg1;
- (void)setResumeCallback:(id)arg1;
- (void)setSeqNo:(int)arg1;
- (void)setTotalWrote:(unsigned long)arg1;
- (void)setWriteBuffer:(id)arg1;
- (bool)setupForNewDownload;
- (unsigned long)totalWrote;
- (void)writeAndResume;
- (id)writeBuffer;

@end
