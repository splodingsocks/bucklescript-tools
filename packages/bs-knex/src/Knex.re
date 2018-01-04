type queryBuilder;

type t = string => queryBuilder;

external toPromise : queryBuilder => Js.Promise.t('a) = "%identity";

[@bs.module] external make : KnexConfig.t => t = "knex";

[@bs.send] external raw : (t, string) => Js.Promise.t('b) = "";

/* QueryBuilder Interface */
[@bs.send.pipe : queryBuilder] external select : 'a => queryBuilder = "";

[@bs.send.pipe : queryBuilder] external as_ : 'a => queryBuilder = "as";

[@bs.send.pipe : queryBuilder] external columns : 'a => queryBuilder = "";

[@bs.send.pipe : queryBuilder] external column : 'a => queryBuilder = "";

[@bs.send.pipe : queryBuilder] external from : 'a => queryBuilder = "";

[@bs.send.pipe : queryBuilder] external into : 'a => queryBuilder = "";

[@bs.send.pipe : queryBuilder] external table : 'a => queryBuilder = "";

[@bs.send.pipe : queryBuilder] external distinct : 'a => queryBuilder = "";

/* Joins */
[@bs.send.pipe : queryBuilder] external join : 'a => queryBuilder = "";

[@bs.send.pipe : queryBuilder] external joinRaw : 'a => queryBuilder = "";

[@bs.send.pipe : queryBuilder] external innerJoin : 'a => queryBuilder = "";

[@bs.send.pipe : queryBuilder] external leftJoin : 'a => queryBuilder = "";

[@bs.send.pipe : queryBuilder] external leftOuterJoin : 'a => queryBuilder = "";

[@bs.send.pipe : queryBuilder] external rightJoin : 'a => queryBuilder = "";

[@bs.send.pipe : queryBuilder] external rightOuterJoin : 'a => queryBuilder = "";

[@bs.send.pipe : queryBuilder] external outerJoin : 'a => queryBuilder = "";

[@bs.send.pipe : queryBuilder] external fullOuterJoin : 'a => queryBuilder = "";

[@bs.send.pipe : queryBuilder] external crossJoin : 'a => queryBuilder = "";

/* Withs */
[@bs.send.pipe : queryBuilder] external with_ : 'a => queryBuilder = "with";

[@bs.send.pipe : queryBuilder] external withRaw : 'a => queryBuilder = "";

[@bs.send.pipe : queryBuilder] external withSchema : 'a => queryBuilder = "";

[@bs.send.pipe : queryBuilder] external withWrapped : 'a => queryBuilder = "";

/* Wheres */
[@bs.send.pipe : queryBuilder] external where : 'a => queryBuilder = "";

[@bs.send.pipe : queryBuilder] external andWhere : 'a => queryBuilder = "";

[@bs.send.pipe : queryBuilder] external orWhere : 'a => queryBuilder = "";

[@bs.send.pipe : queryBuilder] external whereNot : 'a => queryBuilder = "";

[@bs.send.pipe : queryBuilder] external andWhereNot : 'a => queryBuilder = "";

[@bs.send.pipe : queryBuilder] external orWhereNot : 'a => queryBuilder = "";

[@bs.send.pipe : queryBuilder] external whereRaw : 'a => queryBuilder = "";

[@bs.send.pipe : queryBuilder] external orWhereRaw : 'a => queryBuilder = "";

[@bs.send.pipe : queryBuilder] external andWhereRaw : 'a => queryBuilder = "";

[@bs.send.pipe : queryBuilder] external whereWrapped : 'a => queryBuilder = "";

[@bs.send.pipe : queryBuilder] external havingWrapped : 'a => queryBuilder = "";

[@bs.send.pipe : queryBuilder] external whereExists : 'a => queryBuilder = "";

[@bs.send.pipe : queryBuilder] external orWhereExists : 'a => queryBuilder = "";

[@bs.send.pipe : queryBuilder] external whereNotExists : 'a => queryBuilder = "";

[@bs.send.pipe : queryBuilder] external orWhereNotExists : 'a => queryBuilder = "";

[@bs.send.pipe : queryBuilder] external whereIn : 'a => queryBuilder = "";

[@bs.send.pipe : queryBuilder] external orWhereIn : 'a => queryBuilder = "";

[@bs.send.pipe : queryBuilder] external whereNotIn : 'a => queryBuilder = "";

[@bs.send.pipe : queryBuilder] external orWhereNotIn : 'a => queryBuilder = "";

[@bs.send.pipe : queryBuilder] external whereNull : 'a => queryBuilder = "";

[@bs.send.pipe : queryBuilder] external orWhereNull : 'a => queryBuilder = "";

[@bs.send.pipe : queryBuilder] external whereNotNull : 'a => queryBuilder = "";

[@bs.send.pipe : queryBuilder] external orWhereNotNull : 'a => queryBuilder = "";

[@bs.send.pipe : queryBuilder] external whereBetween : 'a => queryBuilder = "";

[@bs.send.pipe : queryBuilder] external orWhereBetween : 'a => queryBuilder = "";

[@bs.send.pipe : queryBuilder] external andWhereBetween : 'a => queryBuilder = "";

[@bs.send.pipe : queryBuilder] external whereNotBetween : 'a => queryBuilder = "";

[@bs.send.pipe : queryBuilder] external orWhereNotBetween : 'a => queryBuilder = "";

[@bs.send.pipe : queryBuilder] external andWhereNotBetween : 'a => queryBuilder = "";

/* Group By */
[@bs.send.pipe : queryBuilder] external groupBy : 'a => queryBuilder = "";

[@bs.send.pipe : queryBuilder] external groupByRaw : 'a => queryBuilder = "";

/* Order By */
[@bs.send.pipe : queryBuilder] external orderBy : 'a => queryBuilder = "";

[@bs.send.pipe : queryBuilder] external orderByRaw : 'a => queryBuilder = "";

/* Union */
[@bs.send.pipe : queryBuilder] external union : 'a => queryBuilder = "";

[@bs.send.pipe : queryBuilder] external unionAll : 'a => queryBuilder = "";

/* Having */
[@bs.send.pipe : queryBuilder] external having : 'a => queryBuilder = "";

[@bs.send.pipe : queryBuilder] external andHaving : 'a => queryBuilder = "";

[@bs.send.pipe : queryBuilder] external havingRaw : 'a => queryBuilder = "";

[@bs.send.pipe : queryBuilder] external orHaving : 'a => queryBuilder = "";

[@bs.send.pipe : queryBuilder] external orHavingRaw : 'a => queryBuilder = "";

/* Clear */
[@bs.send.pipe : queryBuilder] external clearSelect : 'a => queryBuilder = "";

[@bs.send.pipe : queryBuilder] external clearWhere : 'a => queryBuilder = "";

/* Paging */
[@bs.send.pipe : queryBuilder] external offset : int => queryBuilder = "";

[@bs.send.pipe : queryBuilder] external limit : int => queryBuilder = "";

/* Aggregation */
[@bs.send.pipe : queryBuilder] external count : Js.Nullable.t(string) => queryBuilder = "";

[@bs.send.pipe : queryBuilder] external countDistinct : Js.Nullable.t(string) => queryBuilder = "";

[@bs.send.pipe : queryBuilder] external min : string => queryBuilder = "";

[@bs.send.pipe : queryBuilder] external max : string => queryBuilder = "";

[@bs.send.pipe : queryBuilder] external sum : string => queryBuilder = "";

[@bs.send.pipe : queryBuilder] external sumDistinct : string => queryBuilder = "";

[@bs.send.pipe : queryBuilder] external avg : string => queryBuilder = "";

[@bs.send.pipe : queryBuilder] external avgDistinct : string => queryBuilder = "";

[@bs.send.pipe : queryBuilder] external increment : (string, Js.Nullable.t(int)) => queryBuilder =
  "";

[@bs.send.pipe : queryBuilder] external decrement : (string, Js.Nullable.t(int)) => queryBuilder =
  "";

/* Others */
[@bs.send.pipe : queryBuilder] external first : 'a => queryBuilder = "";

[@bs.send.pipe : queryBuilder] external debug : Js.boolean => queryBuilder = "";

[@bs.send.pipe : queryBuilder] external pluck : string => queryBuilder = "";

[@bs.send.pipe : queryBuilder] external insert_ : ('a, Js.Nullable.t(string)) => queryBuilder =
  "insert";

[@bs.send.pipe : queryBuilder] external update_ : ('a, Js.Nullable.t(string)) => queryBuilder =
  "update";

[@bs.send.pipe : queryBuilder]
external updateSet : (string, 'a, Js.Nullable.t(string)) => queryBuilder =
  "update";

[@bs.send.pipe : queryBuilder] external returning : 'a => queryBuilder = "";

[@bs.send.pipe : queryBuilder] external del_ : ('a, Js.Nullable.t(string)) => queryBuilder = "del";

[@bs.send.pipe : queryBuilder] external truncate : unit => queryBuilder = "";

[@bs.send.pipe : queryBuilder] external transacting : 'a => queryBuilder = "";

[@bs.send.pipe : queryBuilder] external connection : 'a => queryBuilder = "";

[@bs.send.pipe : queryBuilder] external clone : unit => queryBuilder = "";

/* Convenience Functions */
let insert = (~returning=Some("*"), data) => insert_(data, Js.Nullable.from_opt(returning));

let update = (~returning=Some("*"), data) => update_(data, Js.Nullable.from_opt(returning));

let del = (~returning=Some("*"), data) => del_(data, Js.Nullable.from_opt(returning));

let delete = del;
