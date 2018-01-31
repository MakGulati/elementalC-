endl appends '\n' to the stream and calls flush() on the stream. So

cout << x << endl;
is equivalent to

cout << x << '\n';
cout.flush();
A stream may use an internal buffer which gets actually streamed when the stream is flushed. In case of cout you may not notice the difference since it's somehow synchronized (tied) with cin, but for an arbitrary stream, such as file stream, you'll notice a difference in a multithreaded program, for example.
