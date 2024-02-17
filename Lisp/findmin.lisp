
(print"Enter two number")

(defun find_min2(a b)
    (if(< a b)
    (format t  "~d ~%" a)
    (format t "~d ~%" b)))

(print(find_min2(read)(read)))