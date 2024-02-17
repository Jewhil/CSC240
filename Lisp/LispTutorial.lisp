(setq *print-case* :capitalize)
(defvar *age* 18)
(defvar *num-3* 5)
(defun get-school (age)
    (case age
    (5 (print "Kindergarten"))
    (6 (print "First grade"))
    (otherwise (print "middle school"))))

(get-school *age*)

(terpri)

(unless(not (= *age* 18))
(setf *num-3* 20)
(format t "Something Random~%" *num-3*))