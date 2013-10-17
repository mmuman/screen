#ifndef SCREEN_RESIZE_H
#define SCREEN_RESIZE_H

int   ChangeWindowSize (Window *, int, int, int);
void  ChangeScreenSize (int, int, int);
void  CheckScreenSize (int);
void *xrealloc (void *, size_t);
void  ResizeLayersToCanvases (void);
void  ResizeLayer (Layer *, int, int, struct display *);
int   MayResizeLayer (Layer *);
void  FreeAltScreen (Window *);
void  EnterAltScreen (Window *);
void  LeaveAltScreen (Window *);

#endif /* SCREEN_RESIZE_H */
