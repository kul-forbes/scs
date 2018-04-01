function out = qp_wrapper_solver(P,q,r,A,l,u,o,tol)
n = size(P,1);
cvx_begin
    cvx_solver scs
    cvx_solver_settings(...
            'alpha', o.alpha, ...
            'beta', o.beta,...
            'c1', o.c1, ...
            'c_bl', o.c_bl, ...
            'k0', o.k0, ...
            'k1', o.k1, ...
            'k2', o.k2, ...
            'ls',  o.ls, ...
            'do_super_scs',o.do_super_scs,...
            'direction',o.direction,...
            'memory', o.memory,...
            'rho_x', o.rho_x, ...
            'scale', o.scale, ...
            'sigma', o.sigma,...
            'sse', o.sse,...
            'thetabar', o.thetabar,...
            'warm_start', o.warm_start,...
            'max_iters', o.max_iters, ...
            'eps',tol, ...
            'do_record_progress', o.do_record_progress, ...
            'dumpfile','temp_smm.mat', ...
            'verbose', o.verbose)
    variable x(n)
    minimize( 0.5*x'*P*x + q'*x );
    subject to
        l <= A*x <= u
cvx_end

out.x = x;