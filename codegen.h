/*-----------------------------------------------------------------------
    Declarations for the code generator for Wiz programs.
    For use in the COMP90045 project 2014.

    Team:       Bandicoot 
    Members:    Wee Lee Tan     377990
                Rui Cheng       664000
                Ryan Leong      395463
-----------------------------------------------------------------------*/

static Procs sort_procs(Procs);
static void print_indent(int);
static void print_constant(Constant, int);
int print_expr(Expr, int, char*);
static void print_write_expr(Expr, int, char*);
static void print_write_constant(Constant);
static void print_exprs(Exprs, int, char*);
static void print_stmt(Stmt, int, char*);
static void print_stmts(Stmts, int, char*);
static void print_procs(Procs);
static void print_proc(Proc);
static void print_header(Header);
static void print_decls(Decls, int, char*);
static void print_decl(Decl, int, char*);
static void print_assign(Assign, int, char*);
static void print_assign_array(Assign, Exprs, char*);
//static void print_cond(Cond, int);
//static void print_while(While, int);
static void print_params(Params, char*);
static void print_pram(Param,char*);
int print_arg(Expr, int, char*,int,char*);
static void print_args(Exprs,int, char*, int,char* );
static void print_write(Stmt, int, char*);
static void print_read(Stmt, int, char*);
static void print_read_array(Stmt, int);
static void print_fncall(Stmt, int, char*);
static void print_intervals(Intervals);
static void print_interval(Interval);
void pretty_prog(FILE *, Program);

void print_relop_string(int, int, int, int, int);
void print_binop_string(int, int, int, int, int);
void print_unop_string(int, int, int);